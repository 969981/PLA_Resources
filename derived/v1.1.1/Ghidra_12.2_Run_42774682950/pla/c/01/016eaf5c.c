/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016eaf5c; name: FUN_016eaf5c
 */


void FUN_016eaf5c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  puStack_28 = DAT_043cd008;
  if ((DAT_043ccff8 & 1) == 0) {
    puStack_28 = &DAT_043ccff9;
  }
  local_30 = param_1;
  puVar1 = (undefined8 *)FUN_016eafb0();
  *puVar1 = *param_2;
  FUN_016eb144(&local_30);
  return;
}


