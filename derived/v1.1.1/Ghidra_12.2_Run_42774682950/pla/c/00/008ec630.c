/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ec630; name: FUN_008ec630
 */


void FUN_008ec630(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double __x;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  byte *pbStack_38;
  
  iVar2 = FUN_001504d0(param_1,2);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,2,0);
    lVar3 = llround(__x);
  }
  else {
    lVar3 = FUN_00150ba0(param_1,2,0);
  }
  pcVar6 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar1);
  }
  (*pcVar6)(&local_b8,plVar1,lVar3);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_008ec734();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  local_40 = param_1;
  puVar5 = (undefined8 *)FUN_008ec920(param_1);
  *puVar5 = local_b8;
  puVar5[1] = local_b0;
  puVar5[2] = uStack_a8;
  puVar5[5] = local_90;
  puVar5[6] = uStack_88;
  puVar5[3] = local_a0;
  puVar5[4] = uStack_98;
  puVar5[9] = local_70;
  puVar5[10] = uStack_68;
  puVar5[7] = local_80;
  puVar5[8] = uStack_78;
  *(undefined4 *)(puVar5 + 0xe) = local_48;
  puVar5[0xc] = local_58;
  puVar5[0xd] = uStack_50;
  puVar5[0xb] = local_60;
  FUN_008ecad0(&local_40);
  return;
}


