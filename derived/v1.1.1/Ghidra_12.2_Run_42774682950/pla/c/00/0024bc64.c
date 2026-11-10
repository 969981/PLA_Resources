/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024bc64; name: FUN_0024bc64
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0024bc64(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,long param_5,
                 long param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ushort uVar5;
  undefined4 uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  long lVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  long *plVar30;
  undefined8 uVar31;
  uint uVar32;
  undefined *puVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  long lVar40;
  long lVar41;
  float fVar42;
  long local_90;
  
  FUN_00242014();
  *param_1 = (long)(PTR_DAT_04372b20 + 0x10);
  lVar40 = param_5;
  lVar27 = param_5;
  if (param_6 == 0) {
    lVar34 = *(long *)(param_7 + 0x30);
    lVar36 = param_5;
    local_90 = lVar34;
LAB_0024bd18:
    lVar41 = param_5;
  }
  else {
    uVar8 = *(ushort *)(param_7 + 0x40);
    lVar36 = param_6;
    if ((uVar8 != 0) || (*(short *)(param_7 + 0x44) != 0)) {
      lVar34 = *(long *)(param_7 + 0x30);
      local_90 = *(long *)(param_7 + 0x38);
      if ((uVar8 & 1) == 0) {
        local_90 = lVar34;
        lVar36 = param_5;
      }
      if ((uVar8 & 2) != 0) {
        lVar27 = param_6;
      }
      if ((uVar8 & 4) != 0) {
        lVar40 = param_6;
      }
      goto LAB_0024bd18;
    }
    lVar34 = *(long *)(param_7 + 0x38);
    lVar40 = param_6;
    lVar27 = param_6;
    lVar41 = param_6;
    local_90 = lVar34;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = -1;
  *(undefined8 *)((long)param_1 + 0x124) = 0x3f8000003f800000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xff000000ff000000;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar11 = *(ushort *)(lVar41 + 0x54) >> 1;
  uVar9 = *(ushort *)(lVar40 + 0x5e);
  uVar12 = *(ushort *)(lVar36 + 0x56) >> 1;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar41 + 0x68);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar41 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x116) = *(undefined1 *)(lVar27 + 0x5c);
  bVar7 = *(byte *)(lVar27 + 0x5d);
  *(ushort *)((long)param_1 + 0x114) = bVar7 & 3;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(lVar41 + 0x78);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar41 + 0x7c);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar41 + 0x60);
  uVar8 = *(short *)(lVar41 + 0x5e) << 3;
  uVar10 = (bVar7 | uVar8) & 0x103;
  *(ushort *)((long)param_1 + 0x114) = uVar10;
  uVar5 = (*(ushort *)(lVar41 + 0x5e) >> 10 & 1) << 0xb;
  *(ushort *)((long)param_1 + 0x114) = uVar10 | uVar5;
  uVar9 = bVar7 & 3 | (uVar9 & 1) << 3;
  uVar10 = *(ushort *)(lVar41 + 0x5e);
  *(ushort *)((long)param_1 + 0x114) = uVar8 & 0x100 | uVar5 | uVar9;
  uVar6 = *(undefined4 *)(lVar40 + 0x88);
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(lVar40 + 0x84);
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  uVar6 = *(undefined4 *)(lVar40 + 0x90);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar40 + 0x8c);
  *(undefined4 *)(param_1 + 0x25) = uVar6;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar40 + 0x94);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar40 + 0x98);
  *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(lVar40 + 0x9c);
  uVar9 = uVar9 | (*(ushort *)(lVar41 + 0x5e) >> 2 & 1) << 4;
  *(ushort *)((long)param_1 + 0x114) = uVar8 & 0x100 | uVar5 | uVar9;
  uVar9 = uVar9 | (*(ushort *)(lVar41 + 0x5e) >> 3 & 1) << 5;
  *(ushort *)((long)param_1 + 0x114) = uVar8 & 0x100 | uVar5 | uVar9;
  uVar9 = uVar9 | (*(ushort *)(lVar41 + 0x5e) >> 4 & 1) << 7;
  *(ushort *)((long)param_1 + 0x114) = uVar8 & 0x100 | uVar5 | uVar9;
  uVar5 = uVar5 | uVar8 & 0x100 | uVar9 | (*(ushort *)(lVar41 + 0x5e) >> 8 & 1) << 9;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar41 + 0x5e) & 0x200) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar41 + 0x5e) & 0x800) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | *(ushort *)(lVar41 + 0x5e) & 0x2000;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar41 + 0x5e) & 0xc000) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  *(ushort *)((long)param_1 + 0x114) = uVar5 | (ushort)*(byte *)(param_7 + 0xd2) << 0xe | 0x40;
  if (((uVar10 >> 6 & 1) == 0) || (*(uint *)(lVar41 + 0xa0) == 0)) {
    param_1[0x27] = 0;
    goto joined_r0x0024c388;
  }
  pbVar38 = (byte *)(lVar41 + (ulong)*(uint *)(lVar41 + 0xa0));
  pbVar37 = pbVar38 + 1;
  bVar7 = *pbVar38;
  lVar27 = FUN_00232654(0x10);
  param_1[0x27] = lVar27;
  plVar30 = param_1 + 0x27;
  uVar28 = FUN_00232654(0x40);
  *(undefined8 *)(param_1[0x27] + 8) = uVar28;
  uVar28 = FUN_00232654(0x40);
  *(undefined8 *)param_1[0x27] = uVar28;
  if (bVar7 == 0) {
    **(undefined4 **)(*plVar30 + 8) = 0;
LAB_0024c018:
    bVar1 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 4) = 0;
LAB_0024c02c:
    bVar13 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 8) = 0;
LAB_0024c040:
    bVar14 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0xc) = 0;
LAB_0024c054:
    bVar15 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x10) = 0;
LAB_0024c068:
    bVar16 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x14) = 0;
LAB_0024c078:
    bVar17 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x18) = 0;
LAB_0024c088:
    bVar18 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x1c) = 0;
LAB_0024c098:
    bVar19 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x20) = 0;
LAB_0024c0a8:
    bVar20 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x24) = 0;
LAB_0024c0b8:
    bVar21 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x28) = 0;
LAB_0024c0c8:
    bVar22 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x2c) = 0;
LAB_0024c0d8:
    bVar23 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x30) = 0;
LAB_0024c0e8:
    bVar24 = false;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x34) = 0;
LAB_0024c0f8:
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x38) = 0;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x3c) = 0;
    if (bVar7 == 0) {
      **(undefined4 **)*plVar30 = 0;
      pbVar38 = pbVar37;
    }
    else {
      pbVar38 = pbVar37 + 4;
      **(undefined4 **)*plVar30 = *(undefined4 *)pbVar37;
    }
    if (bVar1) {
      bVar1 = false;
      bVar25 = false;
      goto LAB_0024c130;
    }
    bVar25 = false;
    bVar1 = false;
    *(undefined4 *)(*(long *)*plVar30 + 4) = 0;
    if (bVar13) goto LAB_0024c144;
LAB_0024c288:
    *(undefined4 *)(*(long *)*plVar30 + 8) = 0;
    if (bVar14) goto LAB_0024c298;
LAB_0024c158:
    *(undefined4 *)(*(long *)*plVar30 + 0xc) = 0;
    pbVar37 = pbVar38;
    if (bVar15) goto LAB_0024c168;
LAB_0024c2ac:
    *(undefined4 *)(*(long *)*plVar30 + 0x10) = 0;
    if (bVar16) goto LAB_0024c2bc;
LAB_0024c17c:
    *(undefined4 *)(*(long *)*plVar30 + 0x14) = 0;
    pbVar38 = pbVar37;
    if (bVar17) goto LAB_0024c18c;
LAB_0024c2d0:
    *(undefined4 *)(*(long *)*plVar30 + 0x18) = 0;
    if (bVar18) goto LAB_0024c2e0;
LAB_0024c1a0:
    *(undefined4 *)(*(long *)*plVar30 + 0x1c) = 0;
    pbVar37 = pbVar38;
    if (bVar19) goto LAB_0024c1b0;
LAB_0024c2f4:
    *(undefined4 *)(*(long *)*plVar30 + 0x20) = 0;
    if (bVar20) goto LAB_0024c304;
LAB_0024c1c4:
    *(undefined4 *)(*(long *)*plVar30 + 0x24) = 0;
    pbVar38 = pbVar37;
    if (bVar21) goto LAB_0024c1d4;
LAB_0024c318:
    *(undefined4 *)(*(long *)*plVar30 + 0x28) = 0;
    if (bVar22) goto LAB_0024c32c;
LAB_0024c1ec:
    *(undefined4 *)(*(long *)*plVar30 + 0x2c) = 0;
    pbVar37 = pbVar38;
    if (bVar23) goto LAB_0024c1fc;
LAB_0024c340:
    *(undefined4 *)(*(long *)*plVar30 + 0x30) = 0;
    if (bVar24) goto LAB_0024c350;
LAB_0024c210:
    *(undefined4 *)(*(long *)*plVar30 + 0x34) = 0;
    pbVar38 = pbVar37;
    if (bVar25) goto LAB_0024c220;
LAB_0024c364:
    *(undefined4 *)(*(long *)*plVar30 + 0x38) = 0;
    pbVar37 = pbVar38;
  }
  else {
    **(undefined4 **)(*plVar30 + 8) = *(undefined4 *)pbVar37;
    pbVar37 = pbVar38 + 5;
    if (bVar7 == 1) goto LAB_0024c018;
    pbVar37 = pbVar38 + 9;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 4) = *(undefined4 *)(pbVar38 + 5);
    if (bVar7 < 3) {
      bVar1 = true;
      goto LAB_0024c02c;
    }
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 8) = *(undefined4 *)pbVar37;
    if (bVar7 == 3) {
      bVar1 = true;
      bVar13 = true;
      pbVar37 = pbVar38 + 0xd;
      goto LAB_0024c040;
    }
    pbVar37 = pbVar38 + 0x11;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0xc) = *(undefined4 *)(pbVar38 + 0xd);
    if (bVar7 < 5) {
      bVar13 = true;
      bVar1 = true;
      bVar14 = true;
      goto LAB_0024c054;
    }
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x10) = *(undefined4 *)pbVar37;
    if (bVar7 == 5) {
      bVar14 = true;
      bVar1 = true;
      bVar13 = true;
      bVar15 = true;
      pbVar37 = pbVar38 + 0x15;
      goto LAB_0024c068;
    }
    pbVar37 = pbVar38 + 0x19;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x14) = *(undefined4 *)(pbVar38 + 0x15);
    if (bVar7 < 7) {
      bVar15 = true;
      bVar13 = true;
      bVar1 = true;
      bVar14 = true;
      bVar16 = true;
      goto LAB_0024c078;
    }
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x18) = *(undefined4 *)pbVar37;
    if (bVar7 == 7) {
      bVar16 = true;
      bVar14 = true;
      bVar1 = true;
      bVar13 = true;
      bVar15 = true;
      bVar17 = true;
      pbVar37 = pbVar38 + 0x1d;
      goto LAB_0024c088;
    }
    pbVar37 = pbVar38 + 0x21;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x1c) = *(undefined4 *)(pbVar38 + 0x1d);
    if (bVar7 < 9) {
      bVar17 = true;
      bVar15 = true;
      bVar13 = true;
      bVar1 = true;
      bVar14 = true;
      bVar16 = true;
      bVar18 = true;
      goto LAB_0024c098;
    }
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x20) = *(undefined4 *)pbVar37;
    if (bVar7 == 9) {
      bVar18 = true;
      bVar16 = true;
      bVar14 = true;
      bVar1 = true;
      bVar13 = true;
      bVar15 = true;
      bVar17 = true;
      bVar19 = true;
      pbVar37 = pbVar38 + 0x25;
      goto LAB_0024c0a8;
    }
    pbVar37 = pbVar38 + 0x29;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x24) = *(undefined4 *)(pbVar38 + 0x25);
    if (bVar7 < 0xb) {
      bVar19 = true;
      bVar17 = true;
      bVar15 = true;
      bVar13 = true;
      bVar1 = true;
      bVar14 = true;
      bVar16 = true;
      bVar18 = true;
      bVar20 = true;
      goto LAB_0024c0b8;
    }
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x28) = *(undefined4 *)pbVar37;
    if (bVar7 == 0xb) {
      bVar20 = true;
      bVar18 = true;
      bVar16 = true;
      bVar14 = true;
      bVar1 = true;
      bVar13 = true;
      bVar15 = true;
      bVar17 = true;
      bVar19 = true;
      bVar21 = true;
      pbVar37 = pbVar38 + 0x2d;
      goto LAB_0024c0c8;
    }
    pbVar37 = pbVar38 + 0x31;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x2c) = *(undefined4 *)(pbVar38 + 0x2d);
    if (bVar7 < 0xd) {
      bVar21 = true;
      bVar19 = true;
      bVar17 = true;
      bVar15 = true;
      bVar13 = true;
      bVar1 = true;
      bVar14 = true;
      bVar16 = true;
      bVar18 = true;
      bVar20 = true;
      bVar22 = true;
      goto LAB_0024c0d8;
    }
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x30) = *(undefined4 *)pbVar37;
    if (bVar7 == 0xd) {
      bVar22 = true;
      bVar20 = true;
      bVar18 = true;
      bVar16 = true;
      bVar14 = true;
      bVar1 = true;
      bVar13 = true;
      bVar15 = true;
      bVar17 = true;
      bVar19 = true;
      bVar21 = true;
      bVar23 = true;
      pbVar37 = pbVar38 + 0x35;
      goto LAB_0024c0e8;
    }
    pbVar37 = pbVar38 + 0x39;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x34) = *(undefined4 *)(pbVar38 + 0x35);
    if (bVar7 < 0xf) {
      bVar23 = true;
      bVar21 = true;
      bVar19 = true;
      bVar17 = true;
      bVar15 = true;
      bVar13 = true;
      bVar1 = true;
      bVar14 = true;
      bVar16 = true;
      bVar18 = true;
      bVar20 = true;
      bVar22 = true;
      bVar24 = true;
      goto LAB_0024c0f8;
    }
    pbVar39 = pbVar38 + 0x3d;
    bVar1 = bVar7 != 0xf;
    *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x38) = *(undefined4 *)pbVar37;
    if (bVar7 == 0xf) {
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x3c) = 0;
    }
    else {
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x3c) = *(undefined4 *)pbVar39;
      pbVar39 = pbVar38 + 0x41;
    }
    pbVar38 = pbVar39 + 4;
    bVar24 = true;
    bVar22 = true;
    bVar20 = true;
    bVar18 = true;
    bVar16 = true;
    bVar14 = true;
    bVar13 = true;
    bVar15 = true;
    bVar17 = true;
    **(undefined4 **)*plVar30 = *(undefined4 *)pbVar39;
    bVar19 = true;
    bVar21 = true;
    bVar23 = true;
    bVar25 = true;
LAB_0024c130:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 4) = *(undefined4 *)pbVar38;
    pbVar38 = pbVar37;
    if (!bVar13) goto LAB_0024c288;
LAB_0024c144:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 8) = *(undefined4 *)pbVar38;
    pbVar38 = pbVar37;
    if (!bVar14) goto LAB_0024c158;
LAB_0024c298:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0xc) = *(undefined4 *)pbVar38;
    if (!bVar15) goto LAB_0024c2ac;
LAB_0024c168:
    pbVar38 = pbVar37 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x10) = *(undefined4 *)pbVar37;
    pbVar37 = pbVar38;
    if (!bVar16) goto LAB_0024c17c;
LAB_0024c2bc:
    pbVar38 = pbVar37 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x14) = *(undefined4 *)pbVar37;
    if (!bVar17) goto LAB_0024c2d0;
LAB_0024c18c:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x18) = *(undefined4 *)pbVar38;
    pbVar38 = pbVar37;
    if (!bVar18) goto LAB_0024c1a0;
LAB_0024c2e0:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x1c) = *(undefined4 *)pbVar38;
    if (!bVar19) goto LAB_0024c2f4;
LAB_0024c1b0:
    pbVar38 = pbVar37 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x20) = *(undefined4 *)pbVar37;
    pbVar37 = pbVar38;
    if (!bVar20) goto LAB_0024c1c4;
LAB_0024c304:
    pbVar38 = pbVar37 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x24) = *(undefined4 *)pbVar37;
    if (!bVar21) goto LAB_0024c318;
LAB_0024c1d4:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x28) = *(undefined4 *)pbVar38;
    pbVar38 = pbVar37;
    if (!bVar22) goto LAB_0024c1ec;
LAB_0024c32c:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x2c) = *(undefined4 *)pbVar38;
    if (!bVar23) goto LAB_0024c340;
LAB_0024c1fc:
    pbVar38 = pbVar37 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x30) = *(undefined4 *)pbVar37;
    pbVar37 = pbVar38;
    if (!bVar24) goto LAB_0024c210;
LAB_0024c350:
    pbVar38 = pbVar37 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x34) = *(undefined4 *)pbVar37;
    if (!bVar25) goto LAB_0024c364;
LAB_0024c220:
    pbVar37 = pbVar38 + 4;
    *(undefined4 *)(*(long *)*plVar30 + 0x38) = *(undefined4 *)pbVar38;
  }
  if (bVar1) {
    *(undefined4 *)(*(long *)*plVar30 + 0x3c) = *(undefined4 *)pbVar37;
  }
  else {
    *(undefined4 *)(*(long *)*plVar30 + 0x3c) = 0;
  }
joined_r0x0024c388:
  if ((uVar10 >> 7 & 1) != 0) {
    if (*(char *)(param_7 + 0xd1) == '\0') {
      puVar33 = PTR_DAT_04372988;
    }
    else {
      puVar33 = PTR_DAT_04372950;
    }
    param_1[0x21] = (long)puVar33;
  }
  if ((*(char *)((long)param_1 + 0x114) < '\0') && (*(uint *)(lVar41 + 0xa4) != 0)) {
    puVar3 = (undefined4 *)(lVar41 + (ulong)*(uint *)(lVar41 + 0xa4));
    if (*(char *)((long)puVar3 + 10) == '\0') {
      lVar40 = 0;
      lVar27 = 0x30;
    }
    else {
      lVar40 = 0xc;
      if (0x800 < *(ushort *)(param_7 + 0xd6)) {
        lVar40 = 0x20;
      }
      lVar40 = (long)puVar3 + lVar40;
      if ((ulong)*(byte *)(lVar40 + 4) == 0) {
        lVar27 = 0x30;
      }
      else {
        lVar27 = (ulong)*(byte *)(lVar40 + 4) * 0x10 + 0x20;
      }
    }
    puVar29 = (undefined4 *)FUN_00232654(lVar27);
    param_1[0x2a] = (long)puVar29;
    *puVar29 = *puVar3;
    *(undefined4 *)(param_1[0x2a] + 4) = puVar3[1];
    *(undefined8 *)(param_1[0x2a] + 8) = 0;
    *(undefined1 *)(param_1[0x2a] + 0x10) = *(undefined1 *)(puVar3 + 2);
    *(undefined1 *)(param_1[0x2a] + 0x11) = *(undefined1 *)((long)puVar3 + 9);
    if (*(ushort *)(param_7 + 0xd6) < 0x801) {
      *(undefined4 *)(param_1[0x2a] + 0x14) = 0;
      uVar32 = 0;
      *(undefined4 *)(param_1[0x2a] + 0x18) = 0;
    }
    else {
      *(undefined4 *)(param_1[0x2a] + 0x14) = puVar3[3];
      *(undefined4 *)(param_1[0x2a] + 0x18) = puVar3[4];
      uVar32 = (uint)*(byte *)(puVar3 + 5);
    }
    *(uint *)(param_1[0x2a] + 0x1c) = uVar32;
    if (lVar40 == 0) {
      *(undefined1 *)(param_1[0x2a] + 0x12) = 0;
    }
    else {
      *(undefined1 *)(param_1[0x2a] + 0x12) = *(undefined1 *)(lVar40 + 4);
      if (*(char *)(lVar40 + 4) != '\0') {
        lVar27 = 0;
        uVar35 = 0;
        do {
          lVar2 = uVar35 * 4;
          uVar35 = uVar35 + 1;
          lVar2 = lVar40 + (ulong)*(uint *)(lVar40 + 8 + lVar2);
          *(long *)(param_1[0x2a] + lVar27 + 0x20) = lVar2;
          lVar4 = param_1[0x2a] + lVar27;
          lVar27 = lVar27 + 0x10;
          *(uint *)(lVar4 + 0x28) = (uint)*(byte *)(lVar2 + 1);
        } while (uVar35 < *(byte *)(lVar40 + 4));
      }
    }
  }
  lVar27 = *(long *)(lVar34 + 8) + 0xc;
  plVar30 = (long *)(**(code **)(**(long **)(lVar34 + 0x30) + 0x68))
                              (*(long **)(lVar34 + 0x30),param_3,
                               lVar27 + (ulong)*(uint *)(lVar27 + (ulong)*(ushort *)(lVar41 + 0x5a)
                                                                  * 4));
  param_1[0x1e] = (long)plVar30;
  fVar42 = *(float *)(lVar41 + 0x70);
  if ((*(byte *)(lVar41 + 0x5f) >> 4 & 1) == 0) {
    *(float *)(param_1 + 0x1f) = fVar42;
    *(undefined4 *)((long)param_1 + 0xfc) = *(undefined4 *)(lVar41 + 0x74);
  }
  else {
    iVar26 = (**(code **)(*plVar30 + 0x20))();
    *(float *)(param_1 + 0x1f) = fVar42 * (float)iVar26;
    fVar42 = *(float *)(lVar41 + 0x74);
    iVar26 = (**(code **)(*(long *)param_1[0x1e] + 0x28))();
    *(float *)((long)param_1 + 0xfc) = fVar42 * (float)iVar26;
  }
  uVar31 = FUN_0022d180(*(undefined8 *)(param_7 + 0x30),*(undefined2 *)(param_5 + 0x58));
  uVar28 = 0;
  if (param_6 != 0) {
    uVar28 = FUN_0022d180(*(undefined8 *)(param_7 + 0x38),*(undefined2 *)(param_6 + 0x58));
  }
  plVar30 = (long *)FUN_00232654(0x50);
  if (plVar30 != (long *)0x0) {
    *plVar30 = (long)(PTR_DAT_04372cb0 + 0x10);
    FUN_0023aa78(plVar30,param_2,param_3,uVar31,uVar28,param_7);
  }
  param_1[0x28] = (long)plVar30;
  if (*(uint *)(lVar36 + 0x80) != 0) {
    param_1[0x1c] = lVar36 + (ulong)*(uint *)(lVar36 + 0x80);
  }
  *param_4 = (uint)*(ushort *)(lVar41 + 0x5e);
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_90 + 0x38);
  uVar32 = *(uint *)(lVar36 + 100);
  param_4[8] = (uint)uVar12 - (uint)(uVar12 != 0);
  *(ulong *)(param_4 + 4) = lVar36 + (ulong)uVar32;
  *(ulong *)(param_4 + 6) = (ulong)uVar11 - (ulong)(uVar11 != 0) & 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x117) = *(undefined1 *)(param_7 + 0xd1);
  if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
    lVar27 = FUN_00244240(param_1);
    *(byte *)(lVar27 + 0x228) = *(byte *)(lVar27 + 0x228) & 0xfd | *(char *)(param_7 + 0xdc) << 1;
  }
  return;
}


