/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee6dec; name: FUN_02ee6dec
 */


long FUN_02ee6dec(long param_1,char *param_2)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  if ((*param_2 == -1) && (*(long *)(param_2 + 8) == 0)) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    param_1 = param_1 + 8;
  }
  else {
    lVar1 = FUN_02ee746c(param_1 + 0x10,*param_2,auStack_14);
    param_1 = 0;
    if (lVar1 != 0) {
      param_1 = FUN_02ee7424(lVar1,param_2 + 8);
    }
  }
  return param_1;
}


