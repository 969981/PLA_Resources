/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b8e70; name: FUN_011b8e70
 */


void FUN_011b8e70(long param_1)

{
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_02a4754c(auStack_40,&DAT_041f60e8);
  FUN_00d2df7c(param_1 + 0x180,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


