/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb171c; name: FUN_02eb171c
 */


long FUN_02eb171c(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  char local_28 [4];
  char local_24 [4];
  
  if ((((*param_2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) goto LAB_02eb17b4;
  lVar1 = FUN_02eb18a8(param_1 + 0x10,*param_2,local_28);
  lVar2 = 0;
  if (local_28[0] != '\0') {
    lVar2 = lVar1;
  }
  if (lVar2 == 0) {
    if (*param_2 == 0) goto LAB_02eb17b4;
    *param_2 = 0;
    lVar2 = FUN_02eb18a8(param_1 + 0x10,0,local_24);
    if ((lVar2 == 0) || (local_24[0] == '\0')) goto LAB_02eb17b4;
  }
  lVar2 = FUN_02eb17e4(lVar2,param_2 + 2);
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_02eb17b4:
  *(undefined1 *)(param_2 + 2) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[6] = 0;
  param_2[7] = 0;
  lVar2 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar2 = param_1 + 8;
  }
  return lVar2;
}


