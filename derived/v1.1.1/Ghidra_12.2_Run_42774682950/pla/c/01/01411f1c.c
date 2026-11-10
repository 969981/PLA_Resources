/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01411f1c; name: FUN_01411f1c
 */


void FUN_01411f1c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_02a4754c(auStack_40,&DAT_0420d4d8 + (long)param_2 * 0x18);
  uVar1 = thunk_FUN_00d2e944(param_1 + 0x180,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_02808d3c(uVar1);
  return;
}


