/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124f360; name: FUN_0124f360
 */


void FUN_0124f360(long param_1,int param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (*(int *)(param_1 + 0x5bc) == 0) {
    *(undefined4 *)(param_1 + 0x5bc) = 1;
    puVar1 = &DAT_041fe6e0;
  }
  else {
    puVar1 = &DAT_041fe6f8;
    *(undefined4 *)(param_1 + 0x5bc) = 0;
  }
  FUN_02a4754c(auStack_40,puVar1);
  FUN_028354b0(auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x5b8) =
       *(undefined4 *)(&UNK_03a7a354 + (long)*(int *)(param_1 + 0x5bc) * 4 + (long)param_2 * 8);
  return;
}


