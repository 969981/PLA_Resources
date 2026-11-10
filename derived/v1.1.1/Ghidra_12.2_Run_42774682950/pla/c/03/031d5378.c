/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d5378; name: FUN_031d5378
 */


void FUN_031d5378(undefined8 param_1,long param_2,int *param_3,int *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined2 local_108 [2];
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 local_b8 [4];
  int local_b0 [2];
  undefined2 local_a8 [4];
  int local_a0 [2];
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  int local_58 [2];
  
  local_58[0] = *param_3;
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0xf0);
  local_68[0] = *param_4;
  lVar6 = *(long *)(*(long *)(lVar12 + 0x20) + 0x18);
  lVar7 = lVar6 + (long)local_68[0] * 0x10;
  lVar6 = lVar6 + (long)local_58[0] * 0x10;
  FUN_031da010(param_2 + 0x28,local_58,
               (*(short *)(param_5 + 3) - *(short *)(lVar6 + 8)) - *(short *)(lVar6 + 10),local_68,
               (*(short *)(param_6 + 3) - *(short *)(lVar7 + 8)) - *(short *)(lVar7 + 10));
  local_70[0] = *param_3;
  FUN_031d494c(param_1,param_2,local_70,param_5,param_7);
  local_78[0] = *param_4;
  FUN_031d494c(param_1,param_2,local_78,param_6,param_7);
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  local_a0[0] = *param_3;
  local_a8[0] = *(undefined2 *)(param_5 + 3);
  FUN_031d31fc(lVar12,local_a0,local_a8,&local_88,0);
  local_b0[0] = *param_4;
  local_b8[0] = *(undefined2 *)(param_6 + 3);
  FUN_031d31fc(lVar12,local_b0,local_b8,&local_98,0);
  lVar7 = *(long *)(lVar12 + 0x20);
  iVar9 = *(int *)*param_5;
  iVar5 = *(int *)(lVar7 + 0x40);
  plVar8 = (long *)(lVar7 + 0x38);
  if (iVar9 < iVar5) {
    iVar10 = 0;
    plVar11 = plVar8;
  }
  else {
    plVar11 = (long *)(lVar7 + 0xf0);
    iVar10 = iVar5;
  }
  iVar1 = ((int *)*param_5)[1];
  puVar2 = (undefined8 *)(*plVar11 + (long)(iVar9 - iVar10) * 0x10);
  uStack_d8 = puVar2[1];
  local_e0 = *puVar2;
  if (iVar1 < iVar5) {
    iVar9 = 0;
  }
  else {
    plVar8 = (long *)(lVar7 + 0xf0);
    iVar9 = iVar5;
  }
  puVar2 = (undefined8 *)(*plVar8 + (long)(iVar1 - iVar9) * 0x10);
  uStack_c8 = puVar2[1];
  uStack_d0 = *puVar2;
  iVar9 = *(int *)*param_6;
  plVar8 = (long *)(lVar7 + 0x38);
  if (iVar9 < iVar5) {
    iVar10 = 0;
    plVar11 = plVar8;
  }
  else {
    plVar11 = (long *)(lVar7 + 0xf0);
    iVar10 = iVar5;
  }
  iVar1 = ((int *)*param_6)[1];
  puVar2 = (undefined8 *)(*plVar11 + (long)(iVar9 - iVar10) * 0x10);
  uStack_f8 = puVar2[1];
  local_100 = *puVar2;
  if (iVar1 < iVar5) {
    iVar5 = 0;
  }
  else {
    plVar8 = (long *)(lVar7 + 0xf0);
  }
  puVar2 = (undefined8 *)(*plVar8 + (long)(iVar1 - iVar5) * 0x10);
  uStack_e8 = puVar2[1];
  uStack_f0 = *puVar2;
  local_104 = (undefined4)param_1;
  local_108[0] = 0;
  FUN_031df430(*(undefined8 *)(param_2 + 0x18),lVar12,lVar12,&local_e0,&local_100,local_88,
               local_88 + (long)(int)local_80 * 8,param_9,local_98,
               local_98 + (long)(int)local_90 * 8,local_108);
  lVar7 = local_90;
  puVar3 = PTR_PTR_0434a090;
  uVar4 = local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_98 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_98,8,uVar4 & 0x3fffffff);
  }
  lVar7 = local_80;
  uVar4 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_88 != 0)) {
    FUN_032cf244(puVar3,local_88,8,uVar4 & 0x3fffffff);
  }
  return;
}


