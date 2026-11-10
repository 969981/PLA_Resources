/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee1b20; name: FUN_02ee1b20
 */


long FUN_02ee1b20(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (((((*param_2 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
      (((char)param_2[3] != -1 || ((char)param_2[4] != -1)))) || (param_2[5] != 0)) {
    param_1 = FUN_02ee59c4(param_1 + 0x10,*param_2,auStack_14);
    if (param_1 == 0) {
      return 0;
    }
    if ((((int)param_2[1] != 0) || ((int)param_2[2] != 0)) ||
       (((char)param_2[3] != -1 || (((char)param_2[4] != -1 || (param_2[5] != 0)))))) {
      lVar1 = FUN_02ee61a0(param_1 + 0x10,(int)param_2[1],auStack_18);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = FUN_02ee6128(lVar1,param_2 + 2);
      return lVar1;
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return param_1 + 8;
}


