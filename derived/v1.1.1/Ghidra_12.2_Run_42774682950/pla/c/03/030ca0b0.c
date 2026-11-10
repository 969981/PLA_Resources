/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ca0b0; name: FUN_030ca0b0
 */


void FUN_030ca0b0(long param_1,long param_2,long param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  uint *puVar12;
  int *piVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long lStack_188;
  undefined1 local_180;
  long local_178;
  long lStack_170;
  byte local_168;
  long local_160;
  long local_158;
  uint local_150;
  uint local_14c;
  undefined1 auStack_148 [32];
  long local_128;
  long local_120;
  undefined1 auStack_110 [80];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 local_80;
  long local_78;
  uint local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  if (*(char *)(*(long *)(*(long *)(lVar8 + 0x898) + 0x48) +
                (ulong)*(ushort *)(param_3 + 0x8a) * 0x50 + 0x18) != '\0') {
    return;
  }
  plVar5 = *(long **)(lVar8 + 0x4b8);
  if (plVar5 == (long *)0x0) {
    uVar6 = 0x24;
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5,param_2,param_3);
  }
  local_68 = *(long *)(param_2 + 0x78);
  uVar16 = (uint)uVar6;
  if ((local_68 == 0) || (*(char *)(local_68 + 0x18) != '\x15')) {
    local_70 = 0xffffffff;
  }
  else {
    plVar5 = (long *)(local_68 + (ulong)(uVar16 >> 5 & 7) * 8 + 0x48);
    local_68 = *plVar5;
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = local_68 + (long)plVar5;
    }
    local_70 = (uVar16 >> 5) << 0x1d | 0x1fffffff;
  }
  local_80 = *(undefined8 *)(param_1 + 0x2a8);
  local_78 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x898) + 0x48) +
             (ulong)*(ushort *)(param_2 + 0x8a) * 0x50;
  local_88 = param_2;
  local_58 = param_2;
  FUN_030c7920(param_1,param_3,uVar16 >> 2 & 7,1,&local_a0,&local_c0,auStack_110,auStack_148);
  puVar9 = *(undefined8 **)(param_1 + 0x2a8);
  dVar11 = (double)puVar9[4];
  dVar1 = (double)puVar9[2];
  dVar2 = (double)puVar9[3];
  *(double *)(param_1 + 0x2e0) = dVar1;
  *(double *)(param_1 + 0x2e8) = dVar2;
  *(double *)(param_1 + 0x2f0) = dVar11;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  uVar7 = *puVar9;
  *(undefined8 *)(param_1 + 0x328) = puVar9[1];
  *(undefined8 *)(param_1 + 800) = uVar7;
  uVar7 = CONCAT44((float)(dStack_b8 - dVar2),(float)(local_c0 - dVar1));
  uVar18 = CONCAT44((float)dStack_a8,(float)(local_b0 - dVar11));
  *(undefined8 *)(param_1 + 0x318) = uVar18;
  *(undefined8 *)(param_1 + 0x310) = uVar7;
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x338) = uStack_98;
  *(undefined8 *)(param_1 + 0x330) = local_a0;
  *(uint *)(param_1 + 0x394) = (uint)*(ushort *)(param_3 + 0x94) << 0x10;
  *(undefined8 *)(param_1 + 0x378) = 0x7f8000007f800000;
  *(undefined8 *)(param_1 + 0x370) = 0x7f8000007f800000;
  lStack_188 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  local_1a0 = *(undefined8 *)(lStack_188 + 0x8a8);
  local_198 = *(undefined8 *)(lStack_188 + 0x898);
  local_190 = *(undefined8 *)(lStack_188 + 0x508);
  lStack_188 = lStack_188 + 0x530;
  local_180 = 0;
  local_168 = (byte)uVar6;
  local_160 = *(long *)(param_2 + 0x78);
  if (*(char *)(local_160 + 0x18) == '\x15') {
    plVar5 = (long *)(local_160 + ((uVar6 & 0xff) >> 2 & 0x38) + 0x48);
    local_160 = *plVar5;
    if (local_160 == 0) {
      local_160 = 0;
    }
    else {
      local_160 = local_160 + (long)plVar5;
    }
  }
  local_158 = *(long *)(param_3 + 0x78);
  if (*(char *)(local_158 + 0x18) == '\x15') {
    plVar5 = (long *)(local_158 + ((uVar6 & 0xff) >> 2 & 7) * 8 + 0x48);
    local_158 = *plVar5;
    if (local_158 == 0) {
      local_158 = 0;
    }
    else {
      local_158 = local_158 + (long)plVar5;
    }
  }
  local_150 = (uint)*(byte *)(local_160 + 0x19);
  local_14c = (uint)*(byte *)(local_158 + 0x19);
  *(long **)(param_1 + 0xa8) = &local_88;
  *(undefined1 **)(param_1 + 0xb0) = auStack_148;
  if (*(char *)(local_68 + 0x19) == '\x03') {
    bVar14 = 1;
  }
  else {
    bVar14 = *(byte *)(local_68 + 0x1a) >> 3 & 1;
  }
  local_178 = param_2;
  lStack_170 = param_3;
  if (*(char *)(local_128 + 0x19) == '\x03') {
    bVar15 = 1;
LAB_030ca2f0:
    if (bVar14 == 0) {
      lVar8 = local_160;
      uVar16 = local_150;
LAB_030ca388:
      local_150 = uVar16;
      local_160 = lVar8;
      uVar7 = FUN_03049554(&local_1a0,param_1 + 0x100);
    }
    else {
      if (bVar15 == 0) {
        local_168 = (byte)(uVar16 >> 3) & 0x1c | local_168 & 3 | (byte)((uVar16 >> 2 & 7) << 5);
        *(undefined8 *)(param_1 + 0x318) = 0;
        *(undefined8 *)(param_1 + 0x310) = 0;
        *(undefined1 **)(param_1 + 0xa8) = auStack_148;
        *(long **)(param_1 + 0xb0) = &local_88;
        uVar20 = puVar9[1];
        uVar19 = *puVar9;
        *(undefined8 *)(param_1 + 0x308) = uVar18;
        *(undefined8 *)(param_1 + 0x300) = uVar7;
        *(undefined8 *)(param_1 + 0x328) = uStack_98;
        *(undefined8 *)(param_1 + 800) = local_a0;
        *(undefined8 *)(param_1 + 0x338) = uVar20;
        *(undefined8 *)(param_1 + 0x330) = uVar19;
        *(uint *)(param_1 + 0x390) = (uint)*(ushort *)(param_3 + 0x94) << 0x10;
        *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x4c8);
        local_178 = param_3;
        lStack_170 = param_2;
        lVar8 = local_158;
        local_158 = local_160;
        uVar16 = local_14c;
        local_14c = local_150;
        goto LAB_030ca388;
      }
      uVar7 = FUN_030499bc(&local_1a0,param_1 + 0x100);
    }
    FUN_030c9d20(param_1,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),uVar7,
                 param_1 + 0x150);
  }
  else {
    bVar15 = *(byte *)(local_128 + 0x1a) >> 3 & 1;
    if ((bVar14 | bVar15) == 1) goto LAB_030ca2f0;
    local_60 = local_68;
    local_120 = local_128;
    if (*(int *)(param_1 + 0x118) < 0xe01) {
      lVar8 = *(long *)(param_1 + 0x110) + (long)*(int *)(param_1 + 0x118) + 0x20;
    }
    else {
      lVar8 = FUN_032bf82c(param_1 + 0x100);
    }
    FUN_03048d9c(lVar8,&local_1a0);
    FUN_030c8300(param_1,&local_88,auStack_148,lVar8);
    *(uint *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + (uint)*(byte *)(lVar8 + 9) * 0x10;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
  lVar8 = *(long *)(param_1 + 0xe0);
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xfa) == '\0') {
    FUN_0301e778(param_1 + 0x80,*(undefined8 *)(param_1 + 0x298),param_1);
    return;
  }
  uVar7 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(lVar8 + 8) = 0x7777;
  FUN_032bffbc(param_1 + 0xd0,*(undefined8 *)(param_1 + 200));
  plVar5 = *(long **)(param_1 + 200);
  uVar16 = *(uint *)((long)plVar5 + 0x1c);
  lVar8 = *plVar5;
  if (uVar16 == 0) {
    piVar13 = (int *)(lVar8 + 0x18);
    iVar4 = *piVar13;
    if (1 < iVar4) {
      puVar9 = (undefined8 *)plVar5[1];
      iVar3 = *(int *)(puVar9 + 0xb);
      lVar10 = puVar9[1];
      lVar17 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(iVar4 + -2) * 8);
      *(undefined8 *)(lVar10 + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(lVar8 + 0x10) + (long)(iVar4 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar3 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar3 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar10 + (long)(iVar3 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar3 + -5;
      }
      *(undefined8 *)(lVar17 + 8) = 0;
      uVar16 = 0xffffffff;
      goto LAB_030ca420;
    }
  }
  puVar12 = (uint *)plVar5[2];
  piVar13 = (int *)(lVar8 + 8);
  lVar8 = plVar5[3];
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = *puVar12 & 0xffff0000 | uVar16 & 0xffff;
  *puVar12 = *puVar12 & 0xffff | (int)lVar8 << 0x10;
LAB_030ca420:
  *piVar13 = *piVar13 + uVar16;
  *plVar5 = 0;
  plVar5[2] = 0;
  FUN_032bf658(*(undefined8 *)(param_1 + 200),uVar7,param_1 + 0xd0);
  plVar5 = *(long **)(param_1 + 200);
  lVar8 = plVar5[3];
  iVar4 = *(int *)((long)plVar5 + 0x1c);
  iVar3 = *(int *)(*plVar5 + 8);
  *(long *)(param_1 + 0xd0) = plVar5[2];
  *(short *)(param_1 + 0xd8) = (short)lVar8;
  *(short *)(param_1 + 0xda) = (short)iVar4;
  *(int *)(param_1 + 0xdc) = -(iVar4 + iVar3);
  *(long *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}


