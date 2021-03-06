 #include <genlib.h>

int main(){
    GENLIB_DEF_LOFIG("somador_1bit_genlib");
    GENLIB_LOCON("a",IN,"a");
    GENLIB_LOCON("b",IN,"b");
    GENLIB_LOCON("c",IN,"c");
    GENLIB_LOCON("s",OUT,"s");
    GENLIB_LOCON("r",OUT,"r");
    GENLIB_LOCON("vdd",IN,"vdd");
    GENLIB_LOCON("vss",IN,"vss");
    
    GENLIB_LOINS("inv_x1","inv1","a","sinv1","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv2","b","sinv2","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv3","c","sinv3","vdd","vss",NULL);

    GENLIB_LOINS("na2_x1","nand1","c","sinv2","snand1","vdd","vss",NULL); 
    GENLIB_LOINS("na2_x1","nand2","b","sinv3","snand2","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand3","sinv3","a","snand3","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand4","b","a","snand4","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand5","sinv1","snand1","snand5","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand6","sinv1","snand2","snand6","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand7","snand3","sinv2","snand7","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand8","snand4","c","snand8","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand9","snand5","snand6","snand9","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand10","snand7","snand8","snand10","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand11","snand9","snand10","s","vdd","vss",NULL);
    
    GENLIB_LOINS("na2_x1","nand12","b","c","snand12","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand13","a","c","snand13","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand14","a","b","snand14","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand12","b","c","snand12","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand15","inv1","snand12","snand15","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand16","inv2","snand13","snand16","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand17","sinv3","snan14","snand17","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand18","snand15","snand16","snand18","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand19","snand8","snand17","snand19","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand20","snand18","snand19","r","vdd","vss",NULL);


GENLIB_SAVE_LOFIG();
return 0;
}

