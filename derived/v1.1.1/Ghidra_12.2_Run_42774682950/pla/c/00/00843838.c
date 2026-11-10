/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00843838; name: FUN_00843838
 */


void FUN_00843838(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_007e3120(auStack_38);
  FUN_007e3130(param_1 + 8,auStack_38);
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


