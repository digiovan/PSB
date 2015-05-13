
import ROOT as root
root.gStyle.SetOptStat(0)
from ROOT import SetOwnership

import math

################################################################################
# ordered dictionary

class ordered_dict(dict):
    def __init__(self, *args, **kwargs):
        dict.__init__(self, *args, **kwargs)
        self._order = self.keys()

    def __setitem__(self, key, value):
        dict.__setitem__(self, key, value)
        if key in self._order:
            self._order.remove(key)
        self._order.append(key)

    def __delitem__(self, key):
        dict.__delitem__(self, key)
        self._order.remove(key)

    def order(self):
        return self._order[:]

    def ordered_items(self):
        return [(key,self[key]) for key in self._order]


# get Abs Max from a graph
def getAbsMax(graph):

   max = 0
   n_points = graph.GetN()

   for i in range(n_points):
       x, y = root.Double(0), root.Double(0)
       graph.GetPoint(int(i), x, y)
       
       if max < math.fabs(y):
           max = math.fabs(y)
   
   return max


################################################################################
# return a Graph which points are the average coming from a list of
# graphs
################################################################################
def getGraphAverage(listOfGraphs): 
    #print listOfGraphs

    n_points = 0
    y_mean = []
    y_rms  = []
    
    # first sanity checks... and some initialization
    for id in listOfGraphs.keys():
        
        graph = listOfGraphs[id]
        if n_points == 0:
            n_points = graph.GetN()

        if n_points != graph.GetN():
            print 'ERROR (getGraphAverage): different number of points in the graphs'
            exit(1)

        #print listOfGraphs[id]

    # calculate the y_mean for each point
    for i in range(0,n_points):
        
        mean_value = 0
        for id in listOfGraphs.keys():
        
            graph = listOfGraphs[id]
        
            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            mean_value += y/len(listOfGraphs.keys())
            
        #print mean_value   
        y_mean . append ( mean_value )

#    print y_mean 

    # calculate the RMS w.r.t. the mean/sqrt(n) (standard deviation)
    for i in range(0,n_points):
        
        rms_value = 0
        for id in listOfGraphs.keys():
        
            graph = listOfGraphs[id]
        
            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            rms_value += root.TMath.Power(y - y_mean[i], 2) 
            rms_value /= len(listOfGraphs.keys()) 
            
            
        #print mean_value   
        y_rms . append ( root.TMath.Sqrt(rms_value) )
    
#    print y_rms

    # construct the average graph +/- rms
    graphAverage = root.TGraphErrors( n_points )

    for i in range(0,n_points):
        
        # just to get the x-axis
        graph = listOfGraphs[0]
        x, y = root.Double(0), root.Double(0)
        graph.GetPoint(int(i), x, y)
        
        graphAverage.SetPoint     ( int(i), x, y_mean[i] )
        graphAverage.SetPointError( int(i), 0, y_rms [i] )
        
#        print y_mean[i], y_rms[i]
    
    return graphAverage



if __name__ == "__main__":
    print 'running helpers.py'
    
