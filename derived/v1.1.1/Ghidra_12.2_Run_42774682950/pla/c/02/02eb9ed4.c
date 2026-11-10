/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9ed4; name: FUN_02eb9ed4
 */


long FUN_02eb9ed4(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    param_1 = param_1 + 8;
  }
  else {
    lVar1 = FUN_02ebde74(param_1 + 0x18,*param_2,auStack_14);
    param_1 = 0;
    if (lVar1 != 0) {
      lVar1 = FUN_02ebddf0(lVar1,param_2 + 1);
      return lVar1;
    }
  }
  return param_1;
}


