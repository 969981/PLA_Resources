/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fea0f0; name: FUN_01fea0f0
 */


void FUN_01fea0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  byte *pbStack_28;
  
  local_30 = 0;
  FUN_01fea180(&local_70,param_1,&local_30,param_2,param_3);
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_01755be4();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  puVar2 = (undefined8 *)FUN_01755e20(param_1);
  puVar2[2] = local_60;
  puVar2[3] = uStack_58;
  *puVar2 = local_70;
  puVar2[1] = uStack_68;
  puVar2[6] = local_40;
  puVar2[7] = uStack_38;
  puVar2[4] = local_50;
  puVar2[5] = uStack_48;
  FUN_01756034(&local_30);
  return;
}


