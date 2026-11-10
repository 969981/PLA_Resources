/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee7424; name: FUN_02ee7424
 */


long FUN_02ee7424(long param_1,long *param_2)

{
  undefined1 auStack_14 [4];
  
  if (*param_2 == 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    param_1 = param_1 + 8;
  }
  else {
    param_1 = FUN_02ee7a6c(param_1 + 0x10,*param_2,auStack_14);
  }
  return param_1;
}


