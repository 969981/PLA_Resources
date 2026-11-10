/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6ea8c; name: FUN_01b6ea8c
 */


void FUN_01b6ea8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  puVar1 = &DAT_04241bf0;
  if (*(int *)(param_1 + 1000) != 0) {
    puVar1 = &DAT_04241c08;
  }
  local_30 = *puVar1;
  uStack_28 = puVar1[1];
  local_20 = puVar1[2];
  local_18 = (long *)0x0;
  FUN_01b77f14(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


