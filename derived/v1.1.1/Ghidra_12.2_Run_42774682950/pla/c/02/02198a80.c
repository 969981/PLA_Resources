/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02198a80; name: FUN_02198a80
 */


void FUN_02198a80(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 local_30;
  byte *pbStack_28;
  
  uVar2 = *param_2;
  pbVar1 = (byte *)FUN_02198ad0();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  FUN_02198cc4(param_1,&local_30,uVar2);
  return;
}


