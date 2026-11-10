/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016dbad0; name: FUN_016dbad0
 */


void FUN_016dbad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  local_30 = 0;
  uVar1 = FUN_016dbb44(param_1,&local_30,param_2,param_3);
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00e193bc();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  puVar3 = (undefined8 *)FUN_00e337a0(param_1);
  *puVar3 = uVar1;
  FUN_00e339b4(&local_30);
  return;
}


