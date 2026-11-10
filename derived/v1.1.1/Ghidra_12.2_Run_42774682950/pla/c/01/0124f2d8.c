/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124f2d8; name: FUN_0124f2d8
 */


void FUN_0124f2d8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (param_2 == 0) {
    puVar1 = &DAT_041fe698;
  }
  else if (param_2 == 1) {
    puVar1 = &DAT_041fe6b0;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    puVar1 = &DAT_041fe6c8;
  }
  FUN_02a4754c(auStack_40,puVar1);
  FUN_00d2df7c(param_1 + 0x180,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


