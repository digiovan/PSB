
######################################################################
# PROGRAM TO SEE HOW SENSITIVE THE BETA-FUNCTIONS ARE TO THE STRENGTH OF BI.QNO40
# Run this program with the command: >perl < sen_QNO40.perl
######################################################################




sub ReplaceStrengthQuadrupole {

    ######################################################################
    # INITIALIZATIONS
    ######################################################################
    my $QUADNAME=shift(@_);
    my $strength=shift(@_);
    my $command;
    my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime(time); $mon +=1; $year += 1900 ;
    my $error;

    printf("\n QUADNAME = %s", $QUADNAME );
    printf("\n strength = %14.11f", $strength );


    ######################################################################
    # REPLACE strength. Modify file: ../../strength/bi.str
    ######################################################################

    $command = sprintf(' %9s  = %13.10f ; ! %02d/%02d/%04d  %02d:%02d', $QUADNAME, $strength, $mday, $mon, $year, $hour, $min );
    printf("\n command = %s", $command );

    system("ed -s ../../strength/bi.str <<%
            g/ *$QUADNAME.*/s/.*/\Q$command\E /
            w
            q
%");
    $error = $?;

    ######################################################################
    # RETURN
    ######################################################################
    return $error;
}






sub ReadBETXBETY {

    ######################################################################
    # INITIALIZATIONS
    ######################################################################
    my $QUADNAME=shift(@_);
    my $n1;
    my $n2;
    my $n3;
    my $n4;
    my $n6;
    my $n7;
    my $n8;
    my $betx;
    my $bety;

    printf("\n QUADNAME = %s", $QUADNAME );


    ######################################################################
    # Read file: ../../out/ltltbbi1.out
    ######################################################################
    system("rm helpfile 2> /dev/null");
    system("grep $QUADNAME ../../out/ltltbbi1.out > helpfile");

    open (FH, "helpfile");
    while (<FH>)   {
        $data = $_;
        $, = ' ';               # set output field separator
        $\ = "\n";              # set output record separator
        ($n1,$n2,$n3,$n4,$betx,$n6,$n7,$n8,$bety) = split(' ', $data, 9999);
    }
    close (FH);
    system("rm helpfile 2> /dev/null");

    printf("\n n1 =%s, n2=%s ,n3=%s ,n4=%s ,betx=%s ,n6=%s ,n7=%s, n8=%s, bety=%s \n", $n1,$n2,$n3,$n4,$betx,$n6,$n7,$n8,$bety);


    ######################################################################
    # RETURN BETX and BETY value
    ######################################################################
    return $betx;
}










###############################################################################
# MAIN
###############################################################################


printf("\n ###########################################################");
printf("\n Replace strength of quadrupoles in the file: ../../strength/bi.str ");
printf("\n ###########################################################");



printf("\n");

$QUADNAME="KBI.QNO40";
$strength = 0.0003; $error = ReplaceStrengthQuadrupole($QUADNAME, $strength); system("cd ../../madx;madx_dev ltltbbi1.madx"); $betx =ReadBETXBETY("BI1.QNO60"); system("cd ../cmdx/sensitivity_test_QNO40/");


printf("\n");




exit;


