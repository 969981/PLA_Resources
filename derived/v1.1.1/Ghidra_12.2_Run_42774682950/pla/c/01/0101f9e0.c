/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0101f9e0; name: FUN_0101f9e0
 */


void FUN_0101f9e0(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  byte *pbStack_28;
  
  pbStack_28 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  local_30 = param_1;
  puVar2 = (undefined8 *)FUN_0101fa30();
  uVar1 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar1;
  FUN_0101fc38(&local_30);
  return;
}


