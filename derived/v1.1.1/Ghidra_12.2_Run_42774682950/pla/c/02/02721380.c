/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02721380; name: FUN_02721380
 */


void FUN_02721380(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 local_30;
  byte *pbStack_28;
  
  uVar2 = *param_2;
  pbVar1 = (byte *)FUN_024916e4();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  FUN_027213d0(param_1,&local_30,uVar2);
  return;
}


