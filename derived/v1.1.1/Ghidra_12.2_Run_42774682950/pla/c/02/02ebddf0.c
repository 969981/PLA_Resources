/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebddf0; name: FUN_02ebddf0
 */


long FUN_02ebddf0(long param_1,int *param_2)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    param_1 = param_1 + 8;
  }
  else {
    lVar1 = FUN_02ebe4b8(param_1 + 0x18,*param_2,auStack_14);
    param_1 = 0;
    if (lVar1 != 0) {
      lVar1 = FUN_02ebe43c(lVar1,param_2 + 2);
      return lVar1;
    }
  }
  return param_1;
}


