/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b1f44; name: FUN_001b1f44
 */


void FUN_001b1f44(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04372558 + 0x10);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  lVar1 = param_1[3];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_001c3678(lVar1);
    FUN_032cf640(lVar1,0x200);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  FUN_032cf6e0(param_1,0x30);
  return;
}


