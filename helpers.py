
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




if __name__ == "__main__":
    print 'running helpers.py'
    
