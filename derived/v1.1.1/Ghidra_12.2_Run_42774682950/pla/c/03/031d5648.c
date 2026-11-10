/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d5648; name: FUN_031d5648
 */


void FUN_031d5648(undefined8 param_1,long param_2,int *param_3,undefined8 *param_4,long param_5,
                 int *param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_138;
  long local_130;
  undefined2 local_118 [2];
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0 [4];
  int local_c8 [2];
  undefined2 local_c0 [4];
  int local_b8 [2];
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  int local_90 [2];
  int local_88 [2];
  int local_80 [4];
  int local_68 [2];
  
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0xf0);
  lVar13 = *(long *)(*(long *)(*(long *)(param_5 + 0x18) + 0x38) +
                    (long)*(int *)(param_5 + 0x20) * 0xf0);
  if (*(char *)(lVar12 + 0x30) == '\x01') {
    local_130 = *(long *)(lVar12 + 0x20);
  }
  else {
    local_130 = FUN_02898b44();
  }
  if (*(char *)(lVar13 + 0x30) == '\x01') {
    lVar6 = *(long *)(lVar13 + 0x20);
    local_138 = lVar6;
  }
  else {
    local_138 = FUN_02898b44();
    lVar6 = *(long *)(lVar13 + 0x20);
  }
  local_68[0] = *param_3;
  lVar14 = *(long *)(lVar6 + 0x18);
  iVar2 = *param_6;
  lVar6 = *(long *)(*(long *)(lVar12 + 0x20) + 0x18) + (long)local_68[0] * 0x10;
  FUN_031dab88(param_2 + 0x28,local_68,
               (*(short *)(param_4 + 3) - *(short *)(lVar6 + 8)) - *(short *)(lVar6 + 10));
  local_80[0] = *param_6;
  lVar14 = lVar14 + (long)iVar2 * 0x10;
  FUN_031dab88(param_5 + 0x28,local_80,
               (*(short *)(param_7 + 3) - *(short *)(lVar14 + 8)) - *(short *)(lVar14 + 10));
  local_88[0] = *param_3;
  FUN_031d494c(param_1,param_2,local_88,param_4,param_8);
  local_90[0] = *param_6;
  FUN_031d494c(param_1,param_5,local_90,param_7,param_8);
  if (*(int *)(*(long *)(lVar12 + 0x20) + 0x108) == 0) {
    bVar8 = 4;
  }
  else {
    bVar8 = *(byte *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x100) + (long)*param_3) | 4;
  }
  *(byte *)(*(long *)(local_130 + 0x100) + (long)*param_3) = bVar8;
  if (*(int *)(*(long *)(lVar13 + 0x20) + 0x108) == 0) {
    bVar8 = 4;
  }
  else {
    bVar8 = *(byte *)(*(long *)(*(long *)(lVar13 + 0x20) + 0x100) + (long)*param_6) | 4;
  }
  *(byte *)(*(long *)(local_138 + 0x100) + (long)*param_6) = bVar8;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_b8[0] = *param_3;
  local_c0[0] = *(undefined2 *)(param_4 + 3);
  FUN_031d31fc(lVar12,local_b8,local_c0,&local_a0,0);
  local_c8[0] = *param_6;
  local_d0[0] = *(undefined2 *)(param_7 + 3);
  FUN_031d31fc(lVar13,local_c8,local_d0,&local_b0,0);
  lVar6 = *(long *)(lVar12 + 0x20);
  iVar2 = *(int *)*param_4;
  iVar9 = *(int *)(lVar6 + 0x40);
  plVar7 = (long *)(lVar6 + 0x38);
  if (iVar2 < iVar9) {
    iVar10 = 0;
    plVar11 = plVar7;
  }
  else {
    plVar11 = (long *)(lVar6 + 0xf0);
    iVar10 = iVar9;
  }
  iVar1 = ((int *)*param_4)[1];
  puVar3 = (undefined8 *)(*plVar11 + (long)(iVar2 - iVar10) * 0x10);
  uStack_e8 = puVar3[1];
  local_f0 = *puVar3;
  if (iVar1 < iVar9) {
    iVar9 = 0;
  }
  else {
    plVar7 = (long *)(lVar6 + 0xf0);
  }
  puVar3 = (undefined8 *)(*plVar7 + (long)(iVar1 - iVar9) * 0x10);
  uStack_d8 = puVar3[1];
  uStack_e0 = *puVar3;
  lVar6 = *(long *)(lVar13 + 0x20);
  iVar2 = *(int *)*param_7;
  iVar9 = *(int *)(lVar6 + 0x40);
  plVar7 = (long *)(lVar6 + 0x38);
  if (iVar2 < iVar9) {
    iVar10 = 0;
    plVar11 = plVar7;
  }
  else {
    plVar11 = (long *)(lVar6 + 0xf0);
    iVar10 = iVar9;
  }
  iVar1 = ((int *)*param_7)[1];
  puVar3 = (undefined8 *)(*plVar11 + (long)(iVar2 - iVar10) * 0x10);
  uStack_108 = puVar3[1];
  local_110 = *puVar3;
  if (iVar1 < iVar9) {
    iVar9 = 0;
  }
  else {
    plVar7 = (long *)(lVar6 + 0xf0);
  }
  puVar3 = (undefined8 *)(*plVar7 + (long)(iVar1 - iVar9) * 0x10);
  uStack_f8 = puVar3[1];
  uStack_100 = *puVar3;
  local_114 = (undefined4)param_1;
  local_118[0] = 0;
  FUN_031df430(*(undefined8 *)(param_2 + 0x18),lVar12,lVar13,&local_f0,&local_110,local_a0,
               local_a0 + (long)(int)local_98 * 8,param_9,local_b0,
               local_b0 + (long)(int)local_a8 * 8,local_118);
  lVar12 = local_a8;
  puVar4 = PTR_PTR_0434a090;
  uVar5 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_b0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_b0,8,uVar5 & 0x3fffffff);
  }
  lVar12 = local_98;
  uVar5 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_a0 != 0)) {
    FUN_032cf244(puVar4,local_a0,8,uVar5 & 0x3fffffff);
  }
  return;
}


