#include <genlib.h>

int main(){
    GENLIB_DEF_LOFIG("somador_1bit_genlib");
    GENLIB_LOCON("a",IN,"a");
    GENLIB_LOCON("b",IN,"b");
    GENLIB_LOCON("c",IN,"c");
    GENLIB_LOCON("s",OUT,"s");
    GENLIB_LOCON("cout",OUT,"cout");
    GENLIB_LOCON("vdd",IN,"vdd");
    GENLIB_LOCON("vss",IN,"vss");
    
    GENLIB_LOINS("inv_x1","inv1","a","sinv1","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv2","b","sinv2","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv3","c","sinv3","vdd","vss",NULL);
       
    GENLIB_LOINS("na2_x1","nand1","sinv2","c","snand1","vdd","vss",NULL); 
    GENLIB_LOINS("na2_x1","nand2","b","sinv3","snand2","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand3","b","c","snand3","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand4","sinv2","sinv3","snand4","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand5","snand1","snand2","snand5","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand6","snand3","snand4","snand6","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand7","sinv1","snand5","snand7","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand8","a","snand6","snand8","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand9","snand7","snand8","s","vdd","vss",NULL);

    GENLIB_LOINS("na2_x1","nand10","sinv2","c","snand10","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand11","b","sinv3","snand11","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand12","sinv1","c","snand12","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand13","a","c","snand13","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand14","snand10","snand11","snand14","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand15","snand12","snand13","snand15","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand16","a","snand14","snand16","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand17","b","snand15","snand17","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand18","snand16","snand17","cout","vdd","vss",NULL);
    
GENLIB_SAVE_LOFIG();
return 0;
}

