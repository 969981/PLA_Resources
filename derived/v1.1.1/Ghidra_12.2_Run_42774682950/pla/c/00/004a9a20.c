/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a9a20; name: FUN_004a9a20
 */


undefined8 FUN_004a9a20(byte *param_1,int param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  
  iVar5 = param_2 + 0x11f;
  if (-1 < param_2 + 0x100) {
    iVar5 = param_2 + 0x100;
  }
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_3 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar41 = param_2 - 0x80;
  if (((uVar41 != 0) && (param_2 != 0x100)) && (param_2 != 0xc0)) {
    return 0xfffffffe;
  }
  param_3[0x44] = iVar5 >> 5;
  uVar10 = param_2 - 0x41;
  if (-1 < (int)uVar41) {
    uVar10 = uVar41;
  }
  bVar15 = param_1[4];
  bVar16 = *param_1;
  bVar17 = param_1[5];
  uVar31 = (uint)bVar16 << 0x18;
  bVar18 = param_1[1];
  uVar32 = (uint)bVar15 << 0x18;
  uVar41 = uVar32 | (uint)bVar17 << 0x10;
  bVar19 = param_1[2];
  uVar2 = uVar31 | (uint)bVar18 << 0x10;
  bVar20 = param_1[3];
  bVar21 = param_1[8];
  bVar22 = param_1[9];
  uVar33 = (uint)bVar21 << 0x18;
  uVar3 = uVar33 | (uint)bVar22 << 0x10;
  uVar35 = uVar2 | (uint)bVar19 << 8 | (uint)bVar20;
  bVar23 = param_1[6];
  bVar24 = param_1[7];
  bVar25 = param_1[10];
  uVar36 = uVar41 | (uint)bVar23 << 8 | (uint)bVar24;
  bVar26 = param_1[0xc];
  bVar27 = param_1[0xb];
  uVar34 = (uint)bVar26 << 0x18;
  bVar28 = param_1[0xd];
  uVar37 = uVar3 | (uint)bVar25 << 8 | (uint)bVar27;
  bVar29 = param_1[0xe];
  lVar1 = (long)((int)uVar10 >> 6) * 0x10;
  uVar4 = uVar34 | (uint)bVar28 << 0x10;
  uVar6 = *(uint *)(&DAT_03a1d250 + lVar1) ^ uVar35;
  uVar7 = *(uint *)(&DAT_03a1d254 + lVar1) ^ uVar36;
  uVar8 = *(uint *)(&DAT_03a1d258 + lVar1) ^ uVar37;
  bVar30 = param_1[0xf];
  uVar44 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1c250 + (ulong)(uVar6 >> 0x18) * 4) ^
           *(uint *)(&DAT_03a1ca50 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1ce50 + (ulong)(uVar6 & 0xff) * 4);
  uVar38 = uVar4 | (uint)bVar29 << 8 | (uint)bVar30;
  uVar6 = *(uint *)(&DAT_03a1d25c + lVar1) ^ uVar38;
  uVar9 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ce50 + (ulong)(uVar8 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ce50 + (ulong)(uVar7 & 0xff) * 4) ^ uVar9;
  uVar8 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ce50 + (ulong)(uVar6 & 0xff) * 4);
  uVar9 = uVar8 ^ uVar9;
  uVar6 = uVar7 ^ uVar44;
  uVar44 = uVar9 ^ uVar44;
  uVar8 = uVar8 ^ uVar7;
  uVar9 = uVar9 ^ uVar6;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  uVar7 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar39 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar7 = ((uVar44 & 0xff00ff) << 8 | uVar44 >> 8 & 0xff00ff) ^ uVar9;
  uVar9 = uVar9 ^ uVar39;
  uVar8 = uVar7 ^ uVar6;
  if (param_2 < 0x81) {
    uVar43 = 0;
    uVar44 = 0;
  }
  else {
    uVar44 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8;
    uVar43 = uVar44 >> 0x10 | uVar44 << 0x10;
    uVar44 = (*(uint *)(param_1 + 0x14) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x14) & 0xff00ff) << 8;
    uVar44 = uVar44 >> 0x10 | uVar44 << 0x10;
    if (0xc0 < param_2) {
      uVar45 = (*(uint *)(param_1 + 0x18) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x18) & 0xff00ff) << 8;
      uVar45 = uVar45 >> 0x10 | uVar45 << 0x10;
      uVar42 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      uVar42 = uVar42 >> 0x10 | uVar42 << 0x10;
      goto LAB_004a9cac;
    }
  }
  uVar45 = 0;
  uVar42 = 0;
LAB_004a9cac:
  uVar44 = uVar9 ^ uVar6 ^ uVar44;
  lVar1 = ((long)((ulong)uVar10 << 0x20) >> 0x26) * 0x10;
  uVar45 = uVar8 ^ uVar9 ^ uVar45;
  uVar42 = uVar7 ^ uVar39 ^ uVar42;
  uVar10 = *(uint *)(&DAT_03a1d264 + lVar1) ^ uVar44;
  uVar6 = *(uint *)(&DAT_03a1d268 + lVar1) ^ uVar45;
  uVar43 = uVar43 ^ uVar8;
  uVar7 = *(uint *)(&DAT_03a1d26c + lVar1) ^ uVar42;
  uVar6 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c650 + (ulong)(uVar6 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03a1d260 + lVar1) ^ uVar43;
  uVar9 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c650 + (ulong)(uVar7 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar10 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c650 + (ulong)(uVar10 & 0xff) * 4) ^ uVar6;
  uVar10 = uVar9 ^ uVar7;
  uVar9 = uVar9 ^ uVar6;
  uVar14 = *(uint *)(&DAT_03a1d274 + lVar1);
  uVar39 = (uVar10 & 0xff00ff) << 8 | uVar10 >> 8 & 0xff00ff;
  uVar10 = *(uint *)(&DAT_03a1ce50 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1ca50 + (ulong)(uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_03a1c250 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1c650 + (ulong)(uVar8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar10;
  uVar11 = uVar9 ^ uVar7;
  uVar9 = uVar9 ^ uVar10;
  uVar10 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar40 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar10 = (uVar10 >> 0x10 | uVar10 << 0x10) ^ uVar11;
  uVar11 = uVar39 ^ uVar11;
  uVar6 = uVar10 ^ uVar40;
  uVar39 = uVar10 ^ uVar38 ^ uVar39;
  uVar10 = uVar6 ^ uVar35;
  uVar7 = uVar10 ^ *(uint *)(&DAT_03a1d270 + lVar1);
  uVar8 = uVar39 ^ *(uint *)(&DAT_03a1d27c + lVar1);
  uVar6 = uVar6 ^ uVar37 ^ uVar11;
  uVar9 = uVar6 ^ *(uint *)(&DAT_03a1d278 + lVar1);
  uVar12 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1c250 + (ulong)(uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_03a1ca50 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1ce50 + (ulong)(uVar7 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ce50 + (ulong)(uVar9 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ce50 + (ulong)(uVar8 & 0xff) * 4);
  uVar13 = uVar8 ^ uVar9;
  uVar7 = uVar13 ^ uVar12;
  *param_3 = uVar35 ^ uVar43 >> 0x13 ^ uVar42 << 0xd;
  param_3[1] = uVar36 ^ uVar43 << 0xd ^ uVar44 >> 0x13;
  param_3[2] = uVar37 ^ uVar44 << 0xd ^ uVar45 >> 0x13;
  uVar11 = uVar40 ^ uVar36 ^ uVar11;
  uVar14 = uVar11 ^ uVar14;
  param_3[3] = uVar38 ^ uVar45 << 0xd ^ uVar42 >> 0x13;
  uVar9 = *(uint *)(&DAT_03a1c650 + (ulong)(uVar14 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1c250 + (ulong)(uVar14 >> 0x18) * 4) ^
          *(uint *)(&DAT_03a1ca50 + (ulong)(uVar14 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a1ce50 + (ulong)(uVar14 & 0xff) * 4) ^ uVar9;
  uVar12 = uVar9 ^ uVar12;
  uVar8 = uVar8 ^ uVar9;
  param_3[4] = uVar43 ^ uVar10 >> 0x13 ^ uVar39 << 0xd;
  uVar13 = uVar13 ^ uVar12;
  uVar9 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar13 = ((uVar7 & 0xff00ff) << 8 | uVar7 >> 8 & 0xff00ff) ^ uVar9;
  uVar9 = uVar9 ^ uVar8;
  uVar7 = uVar8 ^ uVar42 ^ uVar13;
  uVar13 = uVar13 ^ uVar12;
  uVar8 = uVar12 ^ uVar44 ^ uVar9;
  uVar14 = uVar13 ^ uVar43;
  uVar13 = uVar9 ^ uVar45 ^ uVar13;
  param_3[5] = uVar44 ^ uVar10 << 0xd ^ uVar11 >> 0x13;
  param_3[6] = uVar45 ^ uVar6 >> 0x13 ^ uVar11 << 0xd;
  param_3[7] = uVar42 ^ uVar39 >> 0x13 ^ uVar6 << 0xd;
  param_3[8] = uVar10 ^ uVar14 >> 0x13 ^ uVar7 << 0xd;
  param_3[9] = uVar11 ^ uVar8 >> 0x13 ^ uVar14 << 0xd;
  param_3[10] = uVar6 ^ uVar8 << 0xd ^ uVar13 >> 0x13;
  param_3[0xb] = uVar39 ^ uVar7 >> 0x13 ^ uVar13 << 0xd;
  param_3[0xc] = (uint)(CONCAT44(uVar38,uVar2) >> 0x13) ^ uVar14;
  param_3[0xd] = (uint)(CONCAT44(uVar35,uVar41) >> 0x13) ^ uVar8;
  param_3[0xe] = (uint)(CONCAT44(uVar36,uVar3) >> 0x13) ^ uVar13;
  param_3[0xf] = (uint)(CONCAT44(uVar37,uVar4) >> 0x13) ^ uVar7;
  param_3[0x10] = uVar35 ^ uVar43 >> 0x1f ^ uVar42 << 1;
  param_3[0x11] = uVar36 ^ uVar43 << 1 ^ uVar44 >> 0x1f;
  param_3[0x12] = uVar37 ^ uVar44 << 1 ^ uVar45 >> 0x1f;
  param_3[0x13] = uVar38 ^ uVar45 << 1 ^ uVar42 >> 0x1f;
  param_3[0x14] = uVar43 ^ uVar10 >> 0x1f ^ uVar39 << 1;
  param_3[0x15] = uVar44 ^ uVar10 << 1 ^ uVar11 >> 0x1f;
  param_3[0x16] = uVar45 ^ uVar6 >> 0x1f ^ uVar11 << 1;
  param_3[0x17] = uVar42 ^ uVar39 >> 0x1f ^ uVar6 << 1;
  param_3[0x18] = uVar10 ^ uVar14 >> 0x1f ^ uVar7 << 1;
  param_3[0x19] = uVar11 ^ uVar8 >> 0x1f ^ uVar14 << 1;
  param_3[0x1a] = uVar6 ^ uVar8 << 1 ^ uVar13 >> 0x1f;
  param_3[0x1b] = uVar39 ^ uVar7 >> 0x1f ^ uVar13 << 1;
  param_3[0x1c] =
       ((uint)(bVar16 >> 7) |
       (uVar34 & 0x7fffffff | (uint)bVar28 << 0x10 | (uint)bVar29 << 8 | (uint)bVar30) << 1) ^
       uVar14;
  param_3[0x1d] =
       ((uint)(bVar15 >> 7) |
       (uVar31 & 0x7fffffff | (uint)bVar18 << 0x10 | (uint)bVar19 << 8 | (uint)bVar20) << 1) ^ uVar8
  ;
  param_3[0x1e] =
       ((uint)(bVar21 >> 7) |
       (uVar32 & 0x7fffffff | (uint)bVar17 << 0x10 | (uint)bVar23 << 8 | (uint)bVar24) << 1) ^
       uVar13;
  param_3[0x1f] =
       ((uint)(bVar26 >> 7) |
       (uVar33 & 0x7fffffff | (uint)bVar22 << 0x10 | (uint)bVar25 << 8 | (uint)bVar27) << 1) ^ uVar7
  ;
  param_3[0x20] = uVar35 ^ uVar44 << 0x1d ^ uVar45 >> 3;
  param_3[0x21] = uVar36 ^ uVar45 << 0x1d ^ uVar42 >> 3;
  param_3[0x22] = uVar37 ^ uVar43 >> 3 ^ uVar42 << 0x1d;
  param_3[0x23] = uVar38 ^ uVar43 << 0x1d ^ uVar44 >> 3;
  param_3[0x24] = uVar43 ^ uVar6 >> 3 ^ uVar11 << 0x1d;
  param_3[0x25] = uVar44 ^ uVar39 >> 3 ^ uVar6 << 0x1d;
  param_3[0x26] = uVar45 ^ uVar10 >> 3 ^ uVar39 << 0x1d;
  param_3[0x27] = uVar42 ^ uVar10 << 0x1d ^ uVar11 >> 3;
  param_3[0x28] = uVar10 ^ uVar8 << 0x1d ^ uVar13 >> 3;
  param_3[0x29] = uVar11 ^ uVar7 >> 3 ^ uVar13 << 0x1d;
  param_3[0x2a] = uVar6 ^ uVar14 >> 3 ^ uVar7 << 0x1d;
  param_3[0x2b] = uVar39 ^ uVar8 >> 3 ^ uVar14 << 0x1d;
  param_3[0x2c] = (uint)(CONCAT14(bVar24,uVar37) >> 3) ^ uVar14;
  param_3[0x2d] = (uint)(CONCAT14(bVar27,uVar38) >> 3) ^ uVar8;
  param_3[0x2e] = (uint)(CONCAT14(bVar30,uVar35) >> 3) ^ uVar13;
  param_3[0x2f] = (uint)(CONCAT14(bVar20,uVar36) >> 3) ^ uVar7;
  param_3[0x30] = uVar35 ^ uVar43 << 0x1f ^ uVar44 >> 1;
  param_3[0x31] = uVar36 ^ uVar44 << 0x1f ^ uVar45 >> 1;
  param_3[0x32] = uVar37 ^ uVar45 << 0x1f ^ uVar42 >> 1;
  param_3[0x33] = uVar38 ^ uVar43 >> 1 ^ uVar42 << 0x1f;
  if (0x80 < param_2) {
    param_3[0x34] = uVar43 ^ uVar10 << 0x1f ^ uVar11 >> 1;
    param_3[0x35] = uVar44 ^ uVar6 >> 1 ^ uVar11 << 0x1f;
    param_3[0x36] = uVar45 ^ uVar39 >> 1 ^ uVar6 << 0x1f;
    param_3[0x37] = uVar42 ^ uVar10 >> 1 ^ uVar39 << 0x1f;
    param_3[0x38] = uVar10 ^ uVar8 >> 1 ^ uVar14 << 0x1f;
    param_3[0x39] = uVar11 ^ uVar8 << 0x1f ^ uVar13 >> 1;
    param_3[0x3a] = uVar6 ^ uVar7 >> 1 ^ uVar13 << 0x1f;
    param_3[0x3b] = uVar39 ^ uVar14 >> 1 ^ uVar7 << 0x1f;
    if (0xc0 < param_2) {
      param_3[0x42] = uVar37 ^ uVar45 << 0x13 ^ uVar42 >> 0xd;
      param_3[0x3c] = (uint)(CONCAT14(bVar20,uVar36) >> 1) ^ uVar14;
      param_3[0x3d] = (uint)(CONCAT14(bVar24,uVar37) >> 1) ^ uVar8;
      param_3[0x3e] = (uint)(CONCAT14(bVar27,uVar38) >> 1) ^ uVar13;
      param_3[0x3f] = (uint)(CONCAT14(bVar30,uVar35) >> 1) ^ uVar7;
      param_3[0x40] = uVar35 ^ uVar43 << 0x13 ^ uVar44 >> 0xd;
      param_3[0x41] = uVar36 ^ uVar44 << 0x13 ^ uVar45 >> 0xd;
      param_3[0x43] = uVar38 ^ uVar43 >> 0xd ^ uVar42 << 0x13;
      return 0;
    }
  }
  return 0;
}


