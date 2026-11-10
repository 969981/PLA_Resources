/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f82800; name: FUN_00f82800
 */


void FUN_00f82800(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *local_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  local_38 = &LAB_00f82210;
  uVar1 = FUN_00f822d0(param_1,&local_38);
  FUN_0014ff10(param_1,0);
  FUN_00f76780();
  puStack_28 = DAT_043b5d80;
  if ((DAT_043b5d70 & 1) == 0) {
    puStack_28 = &DAT_043b5d71;
  }
  local_30 = param_1;
  puVar2 = (undefined8 *)FUN_00f823b0(param_1);
  *puVar2 = uVar1;
  FUN_00f825a8(&local_30);
  return;
}


