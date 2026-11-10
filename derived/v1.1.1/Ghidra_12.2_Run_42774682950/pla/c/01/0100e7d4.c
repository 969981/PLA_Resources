/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0100e7d4; name: FUN_0100e7d4
 */


void FUN_0100e7d4(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  byte *pbStack_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_00ebd554();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  puVar2 = (undefined8 *)FUN_00ebd7b0(param_1);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_00ebd9c8(&local_30);
  return;
}


