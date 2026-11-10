/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa5e38; name: FUN_00fa5e38
 */


void FUN_00fa5e38(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  byte *pbStack_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  uVar2 = (**(code **)(lVar1 + 0x70))();
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_00e193bc();
  pbStack_28 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbStack_28 = pbVar3 + 1;
  }
  local_30 = param_1;
  puVar4 = (undefined8 *)FUN_00e337a0(param_1);
  *puVar4 = uVar2;
  FUN_00e339b4(&local_30);
  return;
}


