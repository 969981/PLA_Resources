/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016dc640; name: FUN_016dc640
 */


void FUN_016dc640(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  puStack_28 = DAT_043ccc10;
  if ((DAT_043ccc00 & 1) == 0) {
    puStack_28 = &DAT_043ccc01;
  }
  local_30 = param_1;
  puVar1 = (undefined8 *)FUN_016d4770();
  *puVar1 = *param_2;
  FUN_016d4904(&local_30);
  return;
}


