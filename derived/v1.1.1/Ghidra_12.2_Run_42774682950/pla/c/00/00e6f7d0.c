/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e6f7d0; name: FUN_00e6f7d0
 */


void FUN_00e6f7d0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 local_30;
  byte *pbStack_28;
  
  uVar2 = *param_2;
  pbVar1 = (byte *)FUN_00e31320();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  FUN_00e6f820(param_1,&local_30,uVar2);
  return;
}


