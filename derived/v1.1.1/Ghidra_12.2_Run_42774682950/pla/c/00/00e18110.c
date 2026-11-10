/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e18110; name: FUN_00e18110
 */


void FUN_00e18110(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  uVar1 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00e18178();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  puVar3 = (undefined8 *)FUN_00e18370(param_1);
  *puVar3 = uVar1;
  FUN_00e184bc(&local_30);
  return;
}


