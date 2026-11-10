/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd782c; name: FUN_00fd782c
 */


void FUN_00fd782c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined *puStack_28;
  
  puStack_28 = DAT_043b7ac0;
  if ((DAT_043b7ab0 & 1) == 0) {
    puStack_28 = &DAT_043b7ab1;
  }
  local_30 = param_1;
  puVar1 = (undefined8 *)FUN_00fd7a80();
  uVar2 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar2;
  FUN_00fd7bb4(&local_30);
  return;
}


