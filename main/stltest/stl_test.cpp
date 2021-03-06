//  An adapted ObjectSpace example for use with SGI STL
#define  __DECLARE_GLOBALS_HERE
#define  __PUT_STATIC_DATA_MEMBERS_HERE
// #include "stl.h"
#include <iostream>
#include "stl_test.h"
int main(int argc, char** argv) {
    int iter_count = ( argc>1 ? 10000 : 1);
    for (; iter_count; iter_count--) {
        accum1_test(argc, argv);
        std::cout.flush();
        accum2_test(argc, argv);
        std::cout.flush();
        adjdiff0_test(argc, argv);
        std::cout.flush();
        adjdiff1_test(argc, argv);
        std::cout.flush();
        adjdiff2_test(argc, argv);
        std::cout.flush();
        adjfind0_test(argc, argv);
        std::cout.flush();
        adjfind1_test(argc, argv);
        std::cout.flush();
        adjfind2_test(argc, argv);
        std::cout.flush();
        advance_test(argc, argv);
        std::cout.flush();
        alg1_test(argc, argv);
        std::cout.flush();
        alg2_test(argc, argv);
        std::cout.flush();
        alg3_test(argc, argv);
        std::cout.flush();
        alg4_test(argc, argv);
        std::cout.flush();
        alg5_test(argc, argv);
        std::cout.flush();
        bind1st1_test(argc, argv);
        std::cout.flush();
        bind1st2_test(argc, argv);
        std::cout.flush();
        bind2nd1_test(argc, argv);
        std::cout.flush();
        bind2nd2_test(argc, argv);
        std::cout.flush();
        binsert1_test(argc, argv);
        std::cout.flush();
        binsert2_test(argc, argv);
        std::cout.flush();
        binsrch1_test(argc, argv);
        std::cout.flush();
        binsrch2_test(argc, argv);
        std::cout.flush();
        bnegate1_test(argc, argv);
        std::cout.flush();
        bnegate2_test(argc, argv);
        std::cout.flush();
	bvec1_test(argc, argv);
        std::cout.flush();
        copy1_test(argc, argv);
        std::cout.flush();
        copy2_test(argc, argv);
        std::cout.flush();
        copy3_test(argc, argv);
        std::cout.flush();
        copy4_test(argc, argv);
        std::cout.flush();
        copyb_test(argc, argv);
        std::cout.flush();
        copyb0_test(argc, argv);
        std::cout.flush();
        count0_test(argc, argv);
        std::cout.flush();
        count1_test(argc, argv);
        std::cout.flush();
        countif1_test(argc, argv);
        std::cout.flush();
        deque1_test(argc, argv);
        std::cout.flush();
        divides_test(argc, argv);
        std::cout.flush();
        eqlrnge0_test(argc, argv);
        std::cout.flush();
        eqlrnge1_test(argc, argv);
        std::cout.flush();
        eqlrnge2_test(argc, argv);
        std::cout.flush();
        equal0_test(argc, argv);
        std::cout.flush();
        equal1_test(argc, argv);
        std::cout.flush();
        equal2_test(argc, argv);
        std::cout.flush();
        equalto_test(argc, argv);
        std::cout.flush();
        fill1_test(argc, argv);
        std::cout.flush();
        filln1_test(argc, argv);
        std::cout.flush();
        find0_test(argc, argv);
        std::cout.flush();
        find1_test(argc, argv);
        std::cout.flush();
        findif0_test(argc, argv);
        std::cout.flush();
        findif1_test(argc, argv);
        std::cout.flush();
        finsert1_test(argc, argv);
        std::cout.flush();
        finsert2_test(argc, argv);
        std::cout.flush();
        foreach0_test(argc, argv);
        std::cout.flush();
        foreach1_test(argc, argv);
        std::cout.flush();
        func1_test(argc, argv);
        std::cout.flush();
        func2_test(argc, argv);
        std::cout.flush();
        func3_test(argc, argv);
        std::cout.flush();
        gener1_test(argc, argv);
        std::cout.flush();
        gener2_test(argc, argv);
        std::cout.flush();
        genern1_test(argc, argv);
        std::cout.flush();
        genern2_test(argc, argv);
        std::cout.flush();
        greateq_test(argc, argv);
        std::cout.flush();
        greater_test(argc, argv);
        std::cout.flush();
        incl0_test(argc, argv);
        std::cout.flush();
        incl1_test(argc, argv);
        std::cout.flush();
        incl2_test(argc, argv);
        std::cout.flush();
        inplmrg1_test(argc, argv);
        std::cout.flush();
        inplmrg2_test(argc, argv);
        std::cout.flush();
        inrprod0_test(argc, argv);
        std::cout.flush();
        inrprod1_test(argc, argv);
        std::cout.flush();
        inrprod2_test(argc, argv);
        std::cout.flush();
        insert1_test(argc, argv);
        std::cout.flush();
        insert2_test(argc, argv);
        std::cout.flush();
        iota1_test(argc, argv);
        std::cout.flush();
        istmit1_test(argc, argv);
        std::cout.flush();
        iter1_test(argc, argv);
        std::cout.flush();
        iter2_test(argc, argv);
        std::cout.flush();
        iter3_test(argc, argv);
        std::cout.flush();
        iter4_test(argc, argv);
        std::cout.flush();
        iterswp0_test(argc, argv);
        std::cout.flush();
        iterswp1_test(argc, argv);
        std::cout.flush();
        less_test(argc, argv);
        std::cout.flush();
        lesseq_test(argc, argv);
        std::cout.flush();
        lexcmp1_test(argc, argv);
        std::cout.flush();
        lexcmp2_test(argc, argv);
        std::cout.flush();
        list1_test(argc, argv);
        std::cout.flush();
        list2_test(argc, argv);
        std::cout.flush();
        list3_test(argc, argv);
        std::cout.flush();
        list4_test(argc, argv);
        std::cout.flush();
        logicand_test(argc, argv);
        std::cout.flush();
        logicnot_test(argc, argv);
        std::cout.flush();
        logicor_test(argc, argv);
        std::cout.flush();
        lwrbnd1_test(argc, argv);
        std::cout.flush();
        lwrbnd2_test(argc, argv);
        std::cout.flush();
        map1_test(argc, argv);
        std::cout.flush();
        max1_test(argc, argv);
        std::cout.flush();
        max2_test(argc, argv);
        std::cout.flush();
        maxelem1_test(argc, argv);
        std::cout.flush();
        maxelem2_test(argc, argv);
        std::cout.flush();
        merge0_test(argc, argv);
        std::cout.flush();
        merge1_test(argc, argv);
        std::cout.flush();
        merge2_test(argc, argv);
        std::cout.flush();
        min1_test(argc, argv);
        std::cout.flush();
        min2_test(argc, argv);
        std::cout.flush();
        minelem1_test(argc, argv);
        std::cout.flush();
        minelem2_test(argc, argv);
        std::cout.flush();
        minus_test(argc, argv);
        std::cout.flush();
        mismtch0_test(argc, argv);
        std::cout.flush();
        mismtch1_test(argc, argv);
        std::cout.flush();
        mismtch2_test(argc, argv);
        std::cout.flush();
        mkheap0_test(argc, argv);
        std::cout.flush();
        mkheap1_test(argc, argv);
        std::cout.flush();
        mmap1_test(argc, argv);
        std::cout.flush();
        mmap2_test(argc, argv);
        std::cout.flush();
        modulus_test(argc, argv);
        std::cout.flush();
        mset1_test(argc, argv);
        std::cout.flush();
        mset3_test(argc, argv);
        std::cout.flush();
        mset4_test(argc, argv);
        std::cout.flush();
        mset5_test(argc, argv);
        std::cout.flush();
        negate_test(argc, argv);
        std::cout.flush();
        nequal_test(argc, argv);
        std::cout.flush();
        nextprm0_test(argc, argv);
        std::cout.flush();
        nextprm1_test(argc, argv);
        std::cout.flush();
        nextprm2_test(argc, argv);
        nthelem0_test(argc, argv);
        std::cout.flush();
        nthelem1_test(argc, argv);
        std::cout.flush();
        nthelem2_test(argc, argv);
        std::cout.flush();
        ostmit_test(argc, argv);
        std::cout.flush();
        pair0_test(argc, argv);
        std::cout.flush();
        pair1_test(argc, argv);
        std::cout.flush();
        pair2_test(argc, argv);
        std::cout.flush();
        parsrt0_test(argc, argv);
        std::cout.flush();
        parsrt1_test(argc, argv);
        std::cout.flush();
        parsrt2_test(argc, argv);
        std::cout.flush();
        parsrtc0_test(argc, argv);
        std::cout.flush();
        parsrtc1_test(argc, argv);
        std::cout.flush();
        parsrtc2_test(argc, argv);
        std::cout.flush();
        partsrt0_test(argc, argv);
        std::cout.flush();
        partsum0_test(argc, argv);
        std::cout.flush();
        partsum1_test(argc, argv);
        std::cout.flush();
        partsum2_test(argc, argv);
        std::cout.flush();
        pheap1_test(argc, argv);
        std::cout.flush();
        pheap2_test(argc, argv);
        std::cout.flush();
        plus_test(argc, argv);
        std::cout.flush();
        pqueue1_test(argc, argv);
        std::cout.flush();
        prevprm0_test(argc, argv);
        std::cout.flush();
        prevprm1_test(argc, argv);
        std::cout.flush();
        prevprm2_test(argc, argv);
        std::cout.flush();
        ptition0_test(argc, argv);
        std::cout.flush();
        ptition1_test(argc, argv);
        std::cout.flush();
        ptrbinf1_test(argc, argv);
        std::cout.flush();
        ptrbinf2_test(argc, argv);
        std::cout.flush();
        ptrunf1_test(argc, argv);
        std::cout.flush();
        ptrunf2_test(argc, argv);
        std::cout.flush();
        queue1_test(argc, argv);
        std::cout.flush();
        rawiter_test(argc, argv);
        std::cout.flush();
        remcopy1_test(argc, argv);
        std::cout.flush();
        remcpif1_test(argc, argv);
        std::cout.flush();
        remif1_test(argc, argv);
        std::cout.flush();
        remove1_test(argc, argv);
        std::cout.flush();
        repcpif1_test(argc, argv);
        std::cout.flush();
        replace0_test(argc, argv);
        std::cout.flush();
        replace1_test(argc, argv);
        std::cout.flush();
        replcpy1_test(argc, argv);
        std::cout.flush();
        replif1_test(argc, argv);
        std::cout.flush();
        revbit1_test(argc, argv);
        std::cout.flush();
        revbit2_test(argc, argv);
        std::cout.flush();
        revcopy1_test(argc, argv);
        std::cout.flush();
        reverse1_test(argc, argv);
        std::cout.flush();
        reviter1_test(argc, argv);
        std::cout.flush();
        reviter2_test(argc, argv);
        std::cout.flush();
        rndshuf0_test(argc, argv);
        std::cout.flush();
        rndshuf1_test(argc, argv);
        std::cout.flush();
        rndshuf2_test(argc, argv);
        std::cout.flush();
        rotate0_test(argc, argv);
        std::cout.flush();
        rotate1_test(argc, argv);
        std::cout.flush();
        rotcopy0_test(argc, argv);
        std::cout.flush();
        rotcopy1_test(argc, argv);
        std::cout.flush();
        search0_test(argc, argv);
        std::cout.flush();
        search1_test(argc, argv);
        std::cout.flush();
        search2_test(argc, argv);
        std::cout.flush();
        set1_test(argc, argv);
        std::cout.flush();
        set2_test(argc, argv);
        std::cout.flush();
        setdiff0_test(argc, argv);
        std::cout.flush();
        setdiff1_test(argc, argv);
        std::cout.flush();
        setdiff2_test(argc, argv);
        std::cout.flush();
        setintr0_test(argc, argv);
        std::cout.flush();
        setintr1_test(argc, argv);
        std::cout.flush();
        setintr2_test(argc, argv);
        std::cout.flush();
        setsymd0_test(argc, argv);
        std::cout.flush();
        setsymd1_test(argc, argv);
        std::cout.flush();
        setsymd2_test(argc, argv);
        std::cout.flush();
        setunon0_test(argc, argv);
        std::cout.flush();
        setunon1_test(argc, argv);
        std::cout.flush();
        setunon2_test(argc, argv);
        std::cout.flush();
        sort1_test(argc, argv);
        std::cout.flush();
        sort2_test(argc, argv);
        std::cout.flush();
        stack1_test(argc, argv);
        std::cout.flush();
        stack2_test(argc, argv);
        std::cout.flush();
        stblptn0_test(argc, argv);
        std::cout.flush();
        stblptn1_test(argc, argv);
        std::cout.flush();
        stblsrt1_test(argc, argv);
        std::cout.flush();
        stblsrt2_test(argc, argv);
        std::cout.flush();
        swap1_test(argc, argv);
        std::cout.flush();
        swprnge1_test(argc, argv);
        std::cout.flush();
        times_test(argc, argv);
        std::cout.flush();
        trnsfrm1_test(argc, argv);
        std::cout.flush();
        trnsfrm2_test(argc, argv);
        std::cout.flush();
        unegate1_test(argc, argv);
        std::cout.flush();
        unegate2_test(argc, argv);
        std::cout.flush();
        uniqcpy1_test(argc, argv);
        std::cout.flush();
        uniqcpy2_test(argc, argv);
        std::cout.flush();
        unique1_test(argc, argv);
        std::cout.flush();
        unique2_test(argc, argv);
        std::cout.flush();
        uprbnd1_test(argc, argv);
        std::cout.flush();
        uprbnd2_test(argc, argv);
        std::cout.flush();
        vec1_test(argc, argv);
        std::cout.flush();
        vec2_test(argc, argv);
        std::cout.flush();
        vec3_test(argc, argv);
        std::cout.flush();
        vec4_test(argc, argv);
        std::cout.flush();
        vec5_test(argc, argv);
        std::cout.flush();
        vec6_test(argc, argv);
        std::cout.flush();
        vec7_test(argc, argv);
        std::cout.flush();
        vec8_test(argc, argv);
        std::cout.flush();
        string1_test (argc, argv);
        std::cout.flush();
        bitset1_test (argc, argv);
        std::cout.flush();
    }
    return 0;
}
