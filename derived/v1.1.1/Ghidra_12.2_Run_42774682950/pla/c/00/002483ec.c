/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002483ec; name: FUN_002483ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002483ec(undefined8 *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  FUN_002486d8();
  lVar8 = param_1[0xb];
  if (param_3 == 2) {
    local_a8 = *(undefined8 *)(lVar8 + 0x4c);
    uStack_a0 = *(undefined8 *)(lVar8 + 0x54);
    local_94 = *(undefined4 *)(lVar8 + 0x68);
    local_98 = *(undefined4 *)(lVar8 + 100);
    local_b0 = *(undefined8 *)(lVar8 + 0x5c);
  }
  else {
    if (param_3 == 1) {
      local_a8 = *(undefined8 *)(lVar8 + 0x34);
      uStack_a0 = *(undefined8 *)(lVar8 + 0x3c);
      local_98 = *(undefined4 *)(lVar8 + 0x44);
      local_94 = *(undefined4 *)(lVar8 + 0x48);
    }
    else {
      if (param_3 != 0) goto LAB_0024848c;
      local_a8 = *(undefined8 *)(lVar8 + 0x24);
      uStack_a0 = *(undefined8 *)(lVar8 + 0x2c);
      local_94 = *(undefined4 *)(lVar8 + 0x20);
      local_98 = 0x42c80000;
    }
    local_b0 = 0;
  }
LAB_0024848c:
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_b8);
  lVar8 = param_1[0xb];
  fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + 0xc));
  local_c0 = local_b8 + fVar9 + fVar9;
  fStack_bc = fStack_b4 + fVar9 + fVar9;
  if ((((lVar8 == 0) || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
      ((*(byte *)(lVar8 + 8) >> 5 & 1) == 0)) || (*(char *)(param_1 + 0x13) == '\0')) {
    local_d0 = local_c0 / local_b8;
    lVar8 = (ulong)param_3 * 4;
    local_c8 = local_c0 * -0.5;
    fStack_c4 = fStack_bc * 0.5;
    fStack_cc = fStack_bc / fStack_b4;
    local_d8 = (local_d0 + -1.0) * 0.5;
    fStack_d4 = (fStack_cc + -1.0) * 0.5;
    local_60 = 0.0 - local_d8;
    fStack_5c = 0.0 - fStack_d4;
    local_58 = local_d8 + 1.0;
    fStack_4c = fStack_d4 + 1.0;
    puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) +
                      (long)*(int *)((long)param_1 + lVar8 + 0x9c));
    fStack_54 = fStack_5c;
    local_50 = local_60;
    local_48 = local_58;
    fStack_44 = fStack_4c;
    FUN_0022d1f0(param_2,puVar1,&local_c8,&local_c0,1,&local_60);
    fVar10 = local_c8 + local_c8 + local_c0;
    fVar12 = 1.0 / ((local_c8 + local_c0) - local_c8);
    fVar9 = fStack_c4 + (fStack_c4 - fStack_bc);
    fVar11 = 1.0 / ((fStack_c4 - fStack_bc) - fStack_c4);
    FUN_00251180(&local_90,param_2);
    puVar1[1] = (ulong)(uint)-(fVar10 * fVar12) << 0x20;
    *puVar1 = (ulong)(uint)(fVar12 + fVar12);
    puVar1[3] = (ulong)(uint)-(fVar9 * fVar11) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar11 + fVar11) << 0x20;
    uVar5 = _UNK_0388a138;
    uVar4 = _DAT_0388a130;
    uVar3 = _DAT_038899f0;
    puVar1[5] = _UNK_038899f8;
    puVar1[4] = uVar3;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
    puVar1[0xd] = uStack_68;
    puVar1[0xc] = local_70;
    puVar1[9] = uStack_88;
    puVar1[8] = local_90;
    puVar1[0xb] = uStack_78;
    puVar1[10] = uStack_80;
    FUN_00247f40(param_1,param_2,*(undefined4 *)((long)param_1 + lVar8 + 0xa8),&local_b0,&local_c8,
                 &local_c0,&local_d0,&local_d8);
    iVar6 = FUN_00247b64(param_1,param_2,*(undefined4 *)((long)param_1 + lVar8 + 0xc0),&local_b0);
    lVar8 = param_1[0xb];
    if (lVar8 == 0) goto joined_r0x002486a0;
    bVar2 = *(byte *)(param_1 + 0x45);
  }
  else {
    iVar6 = 0;
    bVar2 = *(byte *)(param_1 + 0x45);
  }
  if (((bVar2 >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
    FUN_00248248(param_1,param_2,*(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xb4),
                 &local_b0,&local_c0);
  }
joined_r0x002486a0:
  if (iVar6 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar6 + 2;
    if (-1 < iVar6 + -1) {
      iVar7 = iVar6 + -1;
    }
    iVar7 = iVar7 >> 2;
  }
  return iVar7;
}


