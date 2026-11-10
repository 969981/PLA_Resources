/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02148db0; name: FUN_02148db0
 */


void FUN_02148db0(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  local_28 = 0;
  puVar4 = (undefined8 *)FUN_02141c04(param_1,3,&local_28);
  puVar1 = (undefined8 *)(param_3 + *param_2);
  uVar3 = *(undefined4 *)(puVar4 + 7);
  puVar1[5] = puVar4[5];
  uVar5 = puVar4[6];
  uVar6 = puVar4[4];
  *(undefined4 *)(puVar1 + 7) = uVar3;
  puVar1[4] = uVar6;
  puVar1[6] = uVar5;
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar2 = puVar4[3];
  puVar1[2] = puVar4[2];
  puVar1[3] = uVar2;
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  FUN_0014ff10(param_1,0);
  return;
}


