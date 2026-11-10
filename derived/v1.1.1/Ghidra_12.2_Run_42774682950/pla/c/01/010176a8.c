/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010176a8; name: FUN_010176a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010176a8(undefined8 param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00e9ffa0();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  puVar3 = (undefined8 *)FUN_00ea01f0(param_1);
  uVar1 = _DAT_03888d10;
  puVar3[1] = _UNK_03888d18;
  *puVar3 = uVar1;
  FUN_00ea0408(&local_30);
  return;
}


