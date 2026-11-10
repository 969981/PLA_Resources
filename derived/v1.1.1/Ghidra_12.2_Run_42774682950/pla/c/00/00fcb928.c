/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fcb928; name: FUN_00fcb928
 */


void FUN_00fcb928(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined *puStack_28;
  
  puStack_28 = DAT_043b7628;
  if ((DAT_043b7618 & 1) == 0) {
    puStack_28 = &DAT_043b7619;
  }
  local_30 = param_1;
  puVar1 = (undefined8 *)FUN_00fcbb80();
  uVar2 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar2;
  FUN_00fcbcb4(&local_30);
  return;
}


