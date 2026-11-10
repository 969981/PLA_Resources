/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ac000; name: FUN_004ac000
 */


undefined8 FUN_004ac000(int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  
  bVar22 = param_2[1];
  uVar32 = (uint)*param_2 << 0x18 | (uint)bVar22 << 0x10;
  uVar36 = uVar32 | (uint)param_2[2] << 8 | (uint)param_2[3];
  *param_3 = uVar36;
  bVar23 = param_2[5];
  uVar33 = (uint)param_2[4] << 0x18 | (uint)bVar23 << 0x10;
  uVar39 = uVar33 | (uint)param_2[6] << 8 | (uint)param_2[7];
  param_3[1] = uVar39;
  bVar24 = param_2[9];
  uVar37 = (uint)param_2[8] << 0x18 | (uint)bVar24 << 0x10;
  uVar42 = uVar37 | (uint)param_2[10] << 8 | (uint)param_2[0xb];
  param_3[2] = uVar42;
  bVar25 = param_2[0xd];
  uVar40 = (uint)param_2[0xc] << 0x18 | (uint)bVar25 << 0x10;
  uVar26 = uVar40 | (uint)param_2[0xe] << 8 | (uint)param_2[0xf];
  param_3[3] = uVar26;
  if (param_1 == 0x80) {
    uVar47 = uVar26;
    uVar35 = uVar42;
    uVar49 = uVar39;
    uVar31 = uVar36;
  }
  else {
    uVar31 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    param_3[8] = uVar31;
    uVar49 = (*(uint *)(param_2 + 0x14) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0x14) & 0xff00ff) << 8;
    uVar49 = uVar49 >> 0x10 | uVar49 << 0x10;
    param_3[9] = uVar49;
    if (param_1 == 0xc0) {
      uVar35 = ~uVar31;
      param_3[10] = uVar35;
      uVar47 = ~uVar49;
    }
    else {
      uVar47 = (*(uint *)(param_2 + 0x18) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2 + 0x18) & 0xff00ff) << 8;
      uVar35 = uVar47 >> 0x10 | uVar47 << 0x10;
      param_3[10] = uVar35;
      uVar47 = (*(uint *)(param_2 + 0x1c) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2 + 0x1c) & 0xff00ff) << 8;
      uVar47 = uVar47 >> 0x10 | uVar47 << 0x10;
    }
    uVar31 = uVar31 ^ uVar36;
    uVar49 = uVar49 ^ uVar39;
    param_3[0xb] = uVar47;
    uVar35 = uVar35 ^ uVar42;
    uVar47 = uVar47 ^ uVar26;
  }
  uVar10 = uVar31 ^ 0xa09e667f;
  uVar11 = uVar49 ^ 0x3bcc908b;
  uVar10 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar10 >> 0x18) * 4);
  uVar12 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar11 & 0xff) * 4) ^ uVar10 ^
           *(uint *)(&DAT_03a1eef8 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar11 >> 0x18) * 4);
  uVar35 = uVar12 ^ uVar35;
  uVar11 = uVar35 ^ 0xb67ae858;
  uVar12 = uVar47 ^ (uVar10 >> 8 | uVar10 << 0x18) ^ uVar12;
  uVar47 = uVar12 ^ 0x4caa73b2;
  uVar10 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar11 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar11 >> 0x18) * 4);
  uVar47 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar47 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar47 & 0xff) * 4) ^ uVar10 ^
           *(uint *)(&DAT_03a1eef8 + (ulong)(uVar47 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar47 >> 0x18) * 4);
  uVar11 = uVar31 ^ uVar36 ^ uVar47;
  uVar31 = uVar11 ^ 0xc6ef372f;
  uVar47 = uVar49 ^ uVar39 ^ (uVar10 >> 8 | uVar10 << 0x18) ^ uVar47;
  uVar49 = uVar47 ^ 0xe94f82be;
  uVar31 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar31 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar31 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar31 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar31 >> 0x18) * 4);
  uVar10 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar49 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar49 & 0xff) * 4) ^ uVar31 ^
           *(uint *)(&DAT_03a1eef8 + (ulong)(uVar49 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar49 >> 0x18) * 4);
  uVar49 = uVar35 ^ uVar42 ^ uVar10;
  uVar10 = uVar12 ^ uVar26 ^ (uVar31 >> 8 | uVar31 << 0x18) ^ uVar10;
  uVar31 = uVar49 ^ 0x54ff53a5;
  uVar35 = uVar10 ^ 0xf1d36f1c;
  uVar31 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar31 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar31 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar31 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar31 >> 0x18) * 4);
  uVar35 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar35 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar35 & 0xff) * 4) ^ uVar31 ^
           *(uint *)(&DAT_03a1eef8 + (ulong)(uVar35 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar35 >> 0x18) * 4);
  uVar11 = uVar35 ^ uVar11;
  uVar35 = uVar47 ^ (uVar31 >> 8 | uVar31 << 0x18) ^ uVar35;
  if (param_1 == 0x80) {
    param_3[4] = uVar11;
    param_3[5] = uVar35;
    param_3[6] = uVar49;
    param_3[7] = uVar10;
    uVar27 = (uint)(CONCAT44(uVar11,uVar35) >> 0x11);
    uVar13 = CONCAT44(uVar35,uVar49) >> 0x11;
    uVar14 = CONCAT44(uVar49,uVar10) >> 0x11;
    uVar21 = (uint)(CONCAT44(uVar10,uVar11) >> 0x11);
    uVar31 = (uint)uVar13;
    param_3[0xc] = uVar27;
    param_3[0xd] = uVar31;
    uVar1 = uVar35 >> 2 & 0x7fff | uVar27 << 0xf;
    uVar10 = uVar10 >> 2;
    uVar12 = uVar49 >> 2 & 0x7fff | uVar31 << 0xf;
    uVar11 = uVar11 >> 2;
    uVar31 = (uint)uVar14;
    param_3[0xe] = uVar31;
    param_3[0xf] = uVar21;
    uVar2 = uVar10 & 0x7fff | uVar31 << 0xf;
    uVar31 = (uint)((uVar13 & 0xffffffff) >> 2) & 0x7fff;
    uVar3 = uVar31 | uVar1 << 0xf;
    uVar47 = (uint)((uVar14 & 0xffffffff) >> 2) & 0x7fff;
    uVar4 = uVar47 | uVar12 << 0xf;
    uVar5 = uVar11 & 0x7fff | uVar21 << 0xf;
    param_3[0x10] = uVar1;
    param_3[0x11] = uVar12;
    param_3[0x18] = uVar3;
    param_3[0x19] = uVar4;
    uVar12 = uVar12 >> 2 & 0x7fff;
    uVar6 = uVar12 | uVar3 << 0xf;
    uVar3 = uVar2 >> 2 & 0x7fff;
    uVar7 = uVar3 | uVar4 << 0xf;
    uVar4 = uVar5 >> 2 & 0x7fff;
    uVar8 = uVar4 | (uVar10 << 0xf | uVar21 >> 2 & 0x7fff) << 0xf;
    uVar1 = uVar1 >> 2 & 0x7fff;
    uVar9 = uVar1 | (uVar11 << 0xf | uVar27 >> 2 & 0x7fff) << 0xf;
    uVar47 = uVar10 & 3 | (uVar3 | uVar47 << 0xf) << 2;
    uVar10 = uVar11 & 3 | (uVar4 | (uVar21 >> 2 & 0x7fff) << 0xf) << 2;
    param_3[0x1e] = uVar8;
    param_3[0x1f] = uVar9;
    uVar35 = uVar35 >> 2 & 3 | (uVar1 | (uVar27 >> 2 & 0x7fff) << 0xf) << 2;
    param_3[0x1c] = uVar6;
    param_3[0x1d] = uVar7;
    uVar31 = uVar49 >> 2 & 3 | (uVar12 | uVar31 << 0xf) << 2;
    param_3[0x2a] = uVar35;
    param_3[0x2b] = uVar31;
    uVar13 = CONCAT44(uVar36,uVar33) >> 0x11;
    uVar14 = CONCAT44(uVar39,uVar37) >> 0x11;
    uVar15 = CONCAT44(uVar42,uVar40) >> 0x11;
    uVar16 = CONCAT44(uVar26,uVar32) >> 0x11;
    param_3[0x30] = uVar8 >> 0xd & 0x1ffff | uVar47 << 0x11;
    param_3[0x31] = uVar9 >> 0xd & 0x1ffff | uVar10 << 0x11;
    uVar36 = (uint)uVar13;
    param_3[8] = uVar36;
    param_3[9] = (uint)uVar14;
    uVar42 = (uint)uVar15;
    uVar39 = (uint)uVar16;
    param_3[10] = uVar42;
    param_3[0xb] = uVar39;
    uVar36 = uVar36 >> 2;
    uVar17 = ((ulong)(uVar33 >> 0x11) << 0x20 | uVar14 & 0xffffffff) >> 2;
    uVar48 = uVar17 & 0xffffffff;
    uVar15 = ((ulong)(uVar37 >> 0x11) << 0x20 | uVar15 & 0xffffffff) >> 2;
    uVar33 = (uint)uVar15;
    uVar39 = uVar39 >> 2;
    uVar13 = ((ulong)(uVar32 >> 0x11) << 0x20 | uVar13 & 0xffffffff) >> 2;
    uVar38 = uVar13 & 0xffffffff;
    uVar16 = ((ulong)(uVar40 >> 0x11) << 0x20 | uVar16 & 0xffffffff) >> 2;
    uVar41 = uVar16 & 0xffffffff;
    param_3[0x32] = uVar6 >> 0xd & 0x1ffff | uVar35 << 0x11;
    param_3[0x33] = uVar7 >> 0xd & 0x1ffff | uVar31 << 0x11;
    param_3[0x1a] = (uint)(((ulong)uVar39 << 0x20 | uVar38) >> 0x11);
    param_3[0x1b] = (uint)(((ulong)uVar36 << 0x20 | uVar48) >> 0x11);
    uVar32 = (uVar33 & 0x3fff8000) << 2;
    uVar18 = ((ulong)(uVar42 >> 2) << 0x20 | uVar41) >> 0xf;
    uVar19 = ((ulong)uVar39 << 0x20 | uVar38) >> 0xf;
    uVar20 = ((ulong)uVar36 << 0x20 | uVar48) >> 0xf;
    uVar14 = (((uVar14 & 0xffffffff) >> 2) << 0x20 | uVar15 & 0xffffffff) >> 0xf;
    param_3[0x12] = uVar2;
    param_3[0x13] = uVar5;
    param_3[0x28] = uVar47;
    param_3[0x29] = uVar10;
    uVar36 = (uint)uVar17;
    param_3[0x14] = uVar36;
    param_3[0x15] = uVar33;
    uVar40 = (uint)uVar16;
    uVar37 = (uint)uVar13;
    param_3[0x16] = uVar40;
    param_3[0x17] = uVar37;
    param_3[0x20] = uVar33;
    param_3[0x21] = uVar40;
    param_3[0x22] = uVar37;
    param_3[0x23] = uVar36;
    uVar40 = (uint)((uVar18 & 0xffffffff) >> 0xf);
    uVar39 = (uint)(((uVar41 >> 0xf) << 0x20 | uVar19 & 0xffffffff) >> 0xf);
    uVar36 = (uint)(((uVar38 >> 0xf) << 0x20 | uVar20 & 0xffffffff) >> 0xf);
    uVar42 = (uint)(((uVar48 >> 0xf) << 0x20 | uVar14 & 0xffffffff) >> 0xf);
    param_3[0x24] = (uint)uVar18;
    param_3[0x25] = (uint)uVar19;
    uVar34 = 3;
    lVar43 = 0x2f;
    lVar44 = 0x2e;
    lVar45 = 0x2d;
    lVar46 = 0x2c;
    param_3[0x26] = (uint)uVar20;
    param_3[0x27] = (uint)uVar14;
  }
  else {
    uVar4 = param_3[8];
    uVar2 = param_3[9];
    uVar1 = param_3[10];
    uVar5 = param_3[0xb];
    uVar31 = uVar4 ^ uVar11 ^ 0x10e527fa;
    uVar47 = uVar2 ^ uVar35 ^ 0xde682d1d;
    uVar30 = (uint)(CONCAT44(uVar36,uVar33) >> 0x13);
    uVar33 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar31 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar31 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar31 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar31 >> 0x18) * 4);
    uVar47 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar47 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar47 & 0xff) * 4) ^ uVar33 ^
             *(uint *)(&DAT_03a1eef8 + (ulong)(uVar47 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar47 >> 0x18) * 4);
    uVar31 = uVar1 ^ uVar49 ^ uVar47;
    uVar47 = uVar5 ^ uVar10 ^ (uVar33 >> 8 | uVar33 << 0x18) ^ uVar47;
    uVar33 = uVar31 ^ 0xb05688c2;
    uVar12 = uVar47 ^ 0xb3e6c1fd;
    uVar6 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar33 & 0xff) * 4);
    uVar7 = *(uint *)(&DAT_03a1e6f8 + (ulong)(uVar12 >> 8 & 0xff) * 4);
    uVar3 = *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar33 >> 0x18) * 4);
    uVar8 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar12 >> 0x10 & 0xff) * 4);
    uVar9 = *(uint *)(&DAT_03a1e2f8 + (ulong)(uVar12 & 0xff) * 4);
    uVar21 = *(uint *)(&DAT_03a1eef8 + (ulong)(uVar33 >> 8 & 0xff) * 4);
    uVar33 = *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar33 >> 0x10 & 0xff) * 4);
    uVar12 = *(uint *)(&DAT_03a1eaf8 + (ulong)(uVar12 >> 0x18) * 4);
    param_3[6] = uVar31;
    param_3[7] = uVar47;
    param_3[0xe] = uVar49;
    param_3[0xf] = uVar10;
    param_3[0xc] = uVar11;
    param_3[0xd] = uVar35;
    uVar3 = uVar21 ^ uVar6 ^ uVar33 ^ uVar3;
    uVar13 = CONCAT44(uVar31,uVar47) >> 2;
    uVar12 = uVar7 ^ uVar9 ^ uVar3 ^ uVar8 ^ uVar12;
    uVar33 = uVar12 ^ uVar4 ^ uVar11;
    uVar12 = uVar2 ^ uVar35 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar12;
    uVar14 = CONCAT44(uVar47,uVar33) >> 2;
    param_3[0x16] = (uint)uVar13;
    param_3[0x17] = (uint)uVar14;
    uVar15 = ((ulong)(uVar31 >> 2) << 0x20 | uVar13 & 0xffffffff) >> 2;
    param_3[4] = uVar33;
    param_3[5] = uVar12;
    uVar16 = CONCAT44(uVar12,uVar31) >> 2;
    uVar17 = ((ulong)(uVar47 >> 2) << 0x20 | uVar14 & 0xffffffff) >> 2;
    param_3[0x2a] = (uint)uVar17;
    uVar18 = CONCAT44(uVar33,uVar12) >> 2;
    uVar19 = ((ulong)(uVar33 >> 2) << 0x20 | uVar18 & 0xffffffff) >> 2;
    uVar31 = (uint)uVar18;
    param_3[0x14] = uVar31;
    param_3[0x15] = (uint)uVar16;
    uVar33 = (uint)(((ulong)(uVar12 >> 2) << 0x20 | uVar16 & 0xffffffff) >> 2);
    param_3[0x28] = uVar33;
    param_3[0x29] = (uint)uVar15;
    param_3[0x41] = (uint)((((uVar14 & 0xffffffff) >> 2) << 0x20 | uVar19 & 0xffffffff) >> 0xd);
    uVar3 = uVar5 >> 2;
    param_3[0x2b] = (uint)uVar19;
    param_3[0x40] = (uint)((((uVar13 & 0xffffffff) >> 2) << 0x20 | uVar17 & 0xffffffff) >> 0xd);
    uVar9 = (uint)(CONCAT44(uVar1,uVar5) >> 0x11);
    param_3[10] = uVar9;
    param_3[0x42] = (uint)(CONCAT44(uVar31 >> 2,uVar33) >> 0xd);
    uVar9 = uVar9 << 0xf;
    uVar33 = uVar3 & 0x7fff | uVar9;
    uVar6 = uVar1 >> 2;
    uVar47 = (uint)(CONCAT44(uVar2,uVar1) >> 0x11);
    param_3[0x43] = (uint)((((uVar16 & 0xffffffff) >> 2) << 0x20 | uVar15 & 0xffffffff) >> 0xd);
    uVar27 = (uint)(CONCAT44(uVar4,uVar2) >> 0x11);
    uVar21 = uVar47 << 0xf;
    uVar31 = uVar6 & 0x7fff | uVar21;
    param_3[8] = uVar27;
    param_3[9] = uVar47;
    uVar7 = uVar2 >> 2;
    uVar27 = uVar27 << 0xf;
    uVar47 = uVar7 & 0x7fff | uVar27;
    uVar8 = uVar4 >> 2;
    param_3[0x24] = (uint)(CONCAT44(uVar7,uVar31) >> 2);
    param_3[0x25] = (uint)(CONCAT44(uVar6,uVar33) >> 2);
    uVar29 = (uint)(CONCAT44(uVar5,uVar4) >> 0x11);
    uVar28 = uVar29 << 0xf;
    uVar12 = uVar8 & 0x7fff | uVar28;
    param_3[0x12] = uVar33;
    param_3[0x13] = uVar12;
    param_3[0x10] = uVar47;
    param_3[0x11] = uVar31;
    param_3[0x36] = uVar7 & 0x7ffc | uVar27 | uVar2 >> 2 & 3;
    param_3[0x37] = uVar6 & 0x7ffc | uVar21 | uVar1 >> 2 & 3;
    uVar13 = CONCAT44(uVar10,uVar11) >> 0x11;
    uVar14 = ((ulong)(uVar10 >> 0x11) << 0x20 | uVar13 & 0xffffffff) >> 2;
    uVar33 = (uint)uVar14;
    param_3[0x26] = (uint)(CONCAT44(uVar3,uVar12) >> 2);
    param_3[0x27] = (uint)(CONCAT44(uVar8,uVar47) >> 2);
    param_3[0x31] = uVar33;
    param_3[0x34] = uVar3 & 0x7ffc | uVar9 | uVar5 >> 2 & 3;
    param_3[0x35] = uVar8 & 0x7ffc | uVar28 | uVar4 >> 2 & 3;
    uVar15 = CONCAT44(uVar49,uVar10) >> 0x11;
    uVar47 = (uint)uVar13;
    param_3[0xe] = (uint)uVar15;
    param_3[0xf] = uVar47;
    uVar13 = ((ulong)(uVar49 >> 0x11) << 0x20 | uVar15 & 0xffffffff) >> 2;
    uVar31 = (uint)uVar13;
    param_3[0x1d] = uVar31;
    param_3[0x1e] = uVar33;
    uVar16 = CONCAT44(uVar11,uVar35) >> 0x11;
    uVar17 = ((ulong)(uVar11 >> 0x11) << 0x20 | uVar16 & 0xffffffff) >> 2;
    param_3[0x38] = (uint)((((uVar15 & 0xffffffff) >> 2) << 0x20 | uVar14 & 0xffffffff) >> 0xf);
    param_3[0x39] = (uint)(((ulong)(uVar47 >> 2) << 0x20 | uVar17 & 0xffffffff) >> 0xf);
    uVar37 = (uint)(CONCAT44(uVar39,uVar37) >> 0x13);
    uVar40 = (uint)(CONCAT44(uVar42,uVar40) >> 0x13);
    uVar47 = (uint)(CONCAT44(uVar26,uVar32) >> 0x13);
    uVar32 = (uint)uVar17;
    param_3[0x1f] = uVar32;
    param_3[0x20] = uVar37 << 0xf | uVar42 >> 4 & 0x7fff;
    param_3[0x32] = uVar32;
    uVar14 = CONCAT44(uVar35,uVar49) >> 0x11;
    uVar15 = ((ulong)(uVar35 >> 0x11) << 0x20 | uVar14 & 0xffffffff) >> 2;
    uVar32 = (uint)uVar15;
    param_3[0x1b] = uVar30;
    param_3[0x1c] = uVar32;
    param_3[0x18] = uVar37;
    param_3[0x19] = uVar40;
    uVar49 = (uint)uVar16;
    uVar33 = (uint)uVar14;
    param_3[0xc] = uVar49;
    param_3[0xd] = uVar33;
    param_3[0x1a] = uVar47;
    param_3[0x33] = uVar32;
    param_3[0x30] = uVar31;
    param_3[0x3a] = (uint)(((ulong)(uVar49 >> 2) << 0x20 | uVar15 & 0xffffffff) >> 0xf);
    param_3[0x3b] = (uint)(((ulong)(uVar33 >> 2) << 0x20 | uVar13 & 0xffffffff) >> 0xf);
    uVar34 = 4;
    param_3[0x21] = uVar40 << 0xf | uVar26 >> 4 & 0x7fff;
    uVar33 = uVar30 & 0x1ffff | (uVar36 >> 4) << 0x11;
    uVar37 = uVar37 & 0x1ffff | (uVar39 >> 4) << 0x11;
    param_3[0x22] = uVar36 >> 4 & 0x7fff | uVar47 << 0xf;
    param_3[0x23] = uVar30 << 0xf | uVar39 >> 4 & 0x7fff;
    uVar40 = uVar40 & 0x1ffff | (uVar42 >> 4) << 0x11;
    uVar32 = uVar47 & 0x1ffff | (uVar26 >> 4) << 0x11;
    param_3[0xb] = uVar29;
    param_3[0x2c] = uVar40;
    param_3[0x2d] = uVar32;
    uVar36 = bVar23 >> 1 & 3 | uVar33 << 2;
    uVar39 = bVar22 >> 1 & 3 | uVar32 << 2;
    uVar42 = bVar24 >> 1 & 3 | uVar37 << 2;
    uVar32 = bVar25 >> 1 & 3;
    param_3[0x2e] = uVar33;
    param_3[0x2f] = uVar37;
    uVar40 = uVar40 << 2;
    lVar43 = 0x3f;
    lVar44 = 0x3e;
    lVar45 = 0x3d;
    lVar46 = 0x3c;
  }
  param_3[lVar46] = uVar39;
  param_3[lVar45] = uVar36;
  param_3[lVar44] = uVar42;
  param_3[lVar43] = uVar40 | uVar32;
  return uVar34;
}


