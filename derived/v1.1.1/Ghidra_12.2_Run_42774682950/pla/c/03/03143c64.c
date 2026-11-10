/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03143c64; name: FUN_03143c64
 */


void FUN_03143c64(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043888b0 + 0x10);
  if (param_1[0xb] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xc] != 0) {
    FUN_032d647c();
  }
  plVar1 = (long *)param_1[0x12];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1[10]);
    FUN_032d647c(param_1[0x12]);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


