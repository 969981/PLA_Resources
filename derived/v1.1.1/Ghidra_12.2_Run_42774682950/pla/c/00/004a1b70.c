/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a1b70; name: FUN_004a1b70
 */


void FUN_004a1b70(uint *param_1,uint *param_2,long param_3)

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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
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
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  
  if (param_3 != 0) {
    uVar66 = *param_1;
    uVar68 = param_1[1];
    uVar69 = param_1[2];
    uVar71 = param_1[3];
    uVar72 = param_1[4];
    uVar74 = param_1[5];
    uVar62 = param_1[6];
    uVar76 = param_1[7];
    do {
      uVar32 = (uint)(byte)param_2[3] << 0x18;
      uVar75 = (uint)(byte)param_2[4] << 0x18;
      uVar58 = (uint)(byte)param_2[6] << 0x18;
      uVar60 = (uint)(byte)param_2[7] << 0x18;
      uVar2 = (uint)*(byte *)((long)param_2 + 0xd) << 0x10;
      uVar3 = (uint)*(byte *)((long)param_2 + 0x11) << 0x10;
      uVar33 = (uint)(byte)param_2[8] << 0x18;
      uVar67 = (uint)(byte)param_2[10] << 0x18;
      uVar63 = (uint)(byte)param_2[0xb] << 0x18;
      uVar4 = (uint)*(byte *)((long)param_2 + 0x19) << 0x10;
      uVar73 = (uint)(byte)param_2[0xc] << 0x18;
      uVar70 = (uint)(byte)param_2[0xe] << 0x18;
      uVar64 = (uint)(byte)param_2[0xd] << 0x18;
      uVar5 = (uint)*(byte *)((long)param_2 + 0x35) << 0x10;
      uVar28 = uVar64 | uVar5;
      uVar6 = (uint)*(byte *)((long)param_2 + 0x39) << 0x10;
      uVar29 = uVar70 | uVar6;
      uVar7 = (uint)*(byte *)((long)param_2 + 0xe) << 8;
      uVar8 = (uint)*(byte *)((long)param_2 + 0x12) << 8;
      uVar59 = (uint)(byte)param_2[5] << 0x18;
      uVar9 = (uint)*(byte *)((long)param_2 + 0x15) << 0x10;
      uVar10 = (uint)*(byte *)((long)param_2 + 0x1d) << 0x10;
      uVar11 = (uint)*(byte *)((long)param_2 + 0x21) << 0x10;
      uVar12 = (uint)*(byte *)((long)param_2 + 0x16) << 8;
      uVar13 = (uint)*(byte *)((long)param_2 + 0x1a) << 8;
      uVar14 = (uint)*(byte *)((long)param_2 + 0x1e) << 8;
      uVar65 = (uint)(byte)param_2[9] << 0x18;
      uVar15 = (uint)*(byte *)((long)param_2 + 0x25) << 0x10;
      uVar16 = (uint)*(byte *)((long)param_2 + 0x29) << 0x10;
      uVar17 = (uint)*(byte *)((long)param_2 + 0x22) << 8;
      uVar18 = (uint)*(byte *)((long)param_2 + 0x26) << 8;
      uVar19 = (uint)*(byte *)((long)param_2 + 0x2a) << 8;
      uVar34 = uVar32 | uVar2 | uVar7 | (uint)*(byte *)((long)param_2 + 0xf);
      uVar35 = uVar75 | uVar3 | uVar8 | (uint)*(byte *)((long)param_2 + 0x13);
      uVar36 = uVar59 | uVar9 | uVar12 | (uint)*(byte *)((long)param_2 + 0x17);
      uVar37 = uVar58 | uVar4 | uVar13 | (uint)*(byte *)((long)param_2 + 0x1b);
      uVar38 = uVar60 | uVar10 | uVar14 | (uint)*(byte *)((long)param_2 + 0x1f);
      uVar20 = (uint)*(byte *)((long)param_2 + 0x2d) << 0x10;
      uVar21 = (uint)*(byte *)((long)param_2 + 0x2e) << 8;
      uVar22 = (uint)*(byte *)((long)param_2 + 0x31) << 0x10;
      uVar23 = (uint)*(byte *)((long)param_2 + 0x32) << 8;
      uVar39 = uVar33 | uVar11 | uVar17 | (uint)*(byte *)((long)param_2 + 0x23);
      uVar40 = uVar65 | uVar15 | uVar18 | (uint)*(byte *)((long)param_2 + 0x27);
      uVar41 = uVar67 | uVar16 | uVar19 | (uint)*(byte *)((long)param_2 + 0x2b);
      uVar42 = uVar63 | uVar20 | uVar21 | (uint)*(byte *)((long)param_2 + 0x2f);
      uVar24 = (uint)*(byte *)((long)param_2 + 0x36) << 8;
      uVar43 = uVar73 | uVar22 | uVar23 | (uint)*(byte *)((long)param_2 + 0x33);
      uVar44 = uVar28 | uVar24 | (uint)*(byte *)((long)param_2 + 0x37);
      uVar61 = (uint)(byte)param_2[0xf] << 0x18;
      uVar25 = (uint)*(byte *)((long)param_2 + 0x3d) << 0x10;
      uVar30 = uVar61 | uVar25;
      uVar26 = (uint)*(byte *)((long)param_2 + 0x3a) << 8;
      uVar45 = uVar29 | uVar26 | (uint)*(byte *)((long)param_2 + 0x3b);
      uVar27 = (uint)*(byte *)((long)param_2 + 0x3e) << 8;
      uVar46 = uVar30 | uVar27 | (uint)*(byte *)((long)param_2 + 0x3f);
      uVar48 = uVar66 >> 0x14 | uVar66 << 0xc;
      uVar1 = uVar48 + uVar72 + 0x79cc4519;
      uVar49 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      uVar47 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (uVar68 ^ uVar66 ^ uVar69) + uVar71 + (uVar49 ^ uVar48) + (uVar35 ^ uVar47);
      uVar48 = (uVar74 ^ uVar72 ^ uVar62) + uVar76 + uVar49 + uVar47;
      uVar47 = uVar38 ^ uVar47 ^ (uint)(CONCAT44(uVar44,uVar28) >> 0x11);
      uVar50 = uVar68 >> 0x17 | uVar68 << 9;
      uVar28 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
      uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
      uVar49 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar51 = uVar74 >> 0xd | uVar74 << 0x13;
      uVar31 = uVar39 ^ uVar28 ^ (uint)(CONCAT44(uVar45,uVar29) >> 0x11);
      uVar48 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
      uVar29 = uVar48 >> 0x10 | uVar48 << 0x10;
      uVar52 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar49 + uVar52 + 0xf3988a32;
      uVar53 = uVar72 >> 0xd | uVar72 << 0x13;
      uVar54 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar28 + uVar62 + (uVar51 ^ uVar72 ^ uVar49) + uVar54;
      uVar28 = (uVar50 ^ uVar66 ^ uVar1) + uVar69 + (uVar36 ^ uVar28) + (uVar54 ^ uVar52);
      uVar54 = uVar66 >> 0x17 | uVar66 << 9;
      uVar55 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar52 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar56 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar48 = uVar56 + uVar52 + 0xe7311465;
      uVar48 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar30 = uVar40 ^ uVar29 ^ (uint)(CONCAT44(uVar46,uVar30) >> 0x11);
      uVar1 = (uVar37 ^ uVar29) + uVar50 + (uVar1 ^ uVar54 ^ uVar28) + (uVar48 ^ uVar56);
      uVar48 = uVar29 + uVar51 + (uVar49 ^ uVar53 ^ uVar52) + uVar48;
      uVar50 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar51 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar51 + uVar50 + 0xce6228cb;
      uVar29 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = (uVar38 ^ uVar34) + uVar54 + (uVar28 ^ uVar55 ^ uVar1) + (uVar29 ^ uVar51);
      uVar51 = uVar49 >> 0xd | uVar49 << 0x13;
      uVar54 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar29 = uVar34 + uVar53 + (uVar52 ^ uVar51 ^ uVar50) + uVar29;
      uVar49 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar53 = uVar52 >> 0xd | uVar52 << 0x13;
      uVar52 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar28 = uVar52 + uVar49 + 0x9cc45197;
      uVar29 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = (uVar39 ^ uVar35) + uVar55 + (uVar1 ^ uVar54 ^ uVar48) + (uVar29 ^ uVar52);
      uVar55 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar29 = uVar35 + uVar51 + (uVar50 ^ uVar53 ^ uVar49) + uVar29;
      uVar52 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar50 = uVar50 >> 0xd | uVar50 << 0x13;
      uVar51 = uVar49 >> 0xd | uVar49 << 0x13;
      uVar56 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar1 = uVar56 + uVar52 + 0x3988a32f;
      uVar29 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = (uVar40 ^ uVar36) + uVar54 + (uVar48 ^ uVar55 ^ uVar28) + (uVar29 ^ uVar56);
      uVar54 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar29 = uVar53 + uVar36 + (uVar49 ^ uVar50 ^ uVar52) + uVar29;
      uVar49 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar53 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar53 + uVar49 + 0x7311465e;
      uVar29 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = (uVar41 ^ uVar37) + uVar55 + (uVar28 ^ uVar54 ^ uVar1) + (uVar29 ^ uVar53);
      uVar53 = uVar52 >> 0xd | uVar52 << 0x13;
      uVar55 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar56 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar29 = uVar50 + uVar37 + (uVar52 ^ uVar51 ^ uVar49) + uVar29;
      uVar29 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar52 = uVar49 >> 0xd | uVar49 << 0x13;
      uVar50 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar28 = uVar50 + uVar29 + 0xe6228cbc;
      uVar57 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar51 + uVar38 + (uVar49 ^ uVar53 ^ uVar29) + uVar57;
      uVar2 = uVar41 ^ ((uint)(byte)((byte)param_2[3] >> 1) |
                       (uVar32 & 0x1ffffff | uVar2 | uVar7 | (uint)*(byte *)((long)param_2 + 0xf))
                       << 7) ^ uVar47 ^ (uVar47 >> 0x11 | uVar47 << 0xf) ^
              (uVar47 >> 9 | uVar47 << 0x17);
      uVar3 = uVar42 ^ ((uint)(byte)((byte)param_2[4] >> 1) |
                       (uVar75 & 0x1ffffff | uVar3 | uVar8 | (uint)*(byte *)((long)param_2 + 0x13))
                       << 7) ^ uVar31 ^ (uVar31 >> 0x11 | uVar31 << 0xf) ^
              (uVar31 >> 9 | uVar31 << 0x17);
      uVar7 = uVar43 ^ ((uint)(byte)((byte)param_2[5] >> 1) |
                       (uVar59 & 0x1ffffff | uVar9 | uVar12 | (uint)*(byte *)((long)param_2 + 0x17))
                       << 7) ^ uVar30 ^ (uVar30 >> 0x11 | uVar30 << 0xf) ^
              (uVar30 >> 9 | uVar30 << 0x17);
      uVar1 = uVar54 + (uVar42 ^ uVar38) + (uVar1 ^ uVar55 ^ uVar48) + (uVar57 ^ uVar50);
      uVar8 = uVar41 ^ uVar34 ^ (uVar2 >> 0x11 | uVar2 << 0xf);
      uVar4 = uVar44 ^ ((uint)(byte)((byte)param_2[6] >> 1) |
                       (uVar58 & 0x1ffffff | uVar4 | uVar13 | (uint)*(byte *)((long)param_2 + 0x1b))
                       << 7) ^ uVar8 ^ (uVar8 >> 0x11 | uVar8 << 0xf) ^ (uVar8 >> 9 | uVar8 << 0x17)
      ;
      uVar8 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar30 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar12 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar28 = uVar12 + uVar8 + 0xcc451979;
      uVar13 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar53 + uVar39 + (uVar29 ^ uVar52 ^ uVar8) + uVar13;
      uVar9 = uVar42 ^ uVar35 ^ (uVar3 >> 0x11 | uVar3 << 0xf);
      uVar29 = uVar55 + (uVar43 ^ uVar39) + (uVar48 ^ uVar56 ^ uVar1) + (uVar13 ^ uVar12);
      uVar47 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar9 = uVar45 ^ ((uint)(byte)((byte)param_2[7] >> 1) |
                       (uVar60 & 0x1ffffff | uVar10 | uVar14 | (uint)*(byte *)((long)param_2 + 0x1f)
                       ) << 7) ^ uVar9 ^ (uVar9 >> 0x11 | uVar9 << 0xf) ^
              (uVar9 >> 9 | uVar9 << 0x17);
      uVar48 = uVar43 ^ uVar36 ^ (uVar7 >> 0x11 | uVar7 << 0xf);
      uVar10 = uVar46 ^ ((uint)(byte)((byte)param_2[8] >> 1) |
                        (uVar33 & 0x1ffffff | uVar11 | uVar17 |
                        (uint)*(byte *)((long)param_2 + 0x23)) << 7) ^ uVar48 ^
               (uVar48 >> 0x11 | uVar48 << 0xf) ^ (uVar48 >> 9 | uVar48 << 0x17);
      uVar11 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar17 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar12 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar48 = uVar12 + uVar11 + 0x988a32f3;
      uVar13 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar52 + uVar40 + (uVar8 ^ uVar30 ^ uVar11) + uVar13;
      uVar28 = uVar44 ^ uVar37 ^ (uVar4 >> 0x11 | uVar4 << 0xf);
      uVar8 = uVar2 ^ ((uint)(byte)((byte)param_2[9] >> 1) |
                      (uVar65 & 0x1ffffff | uVar15 | uVar18 | (uint)*(byte *)((long)param_2 + 0x27))
                      << 7) ^ uVar28 ^ (uVar28 >> 0x11 | uVar28 << 0xf) ^
              (uVar28 >> 9 | uVar28 << 0x17);
      uVar18 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar1 = uVar56 + (uVar44 ^ uVar40) + (uVar1 ^ uVar47 ^ uVar29) + (uVar13 ^ uVar12);
      uVar49 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar12 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar31 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar48 = uVar45 ^ uVar38 ^ (uVar9 >> 0x11 | uVar9 << 0xf);
      uVar28 = uVar46 ^ uVar39 ^ (uVar10 >> 0x11 | uVar10 << 0xf);
      uVar13 = uVar3 ^ ((uint)(byte)((byte)param_2[10] >> 1) |
                       (uVar67 & 0x1ffffff | uVar16 | uVar19 | (uint)*(byte *)((long)param_2 + 0x2b)
                       ) << 7) ^ uVar48 ^ (uVar48 >> 0x11 | uVar48 << 0xf) ^
               (uVar48 >> 9 | uVar48 << 0x17);
      uVar15 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar14 = uVar7 ^ ((uint)(byte)((byte)param_2[0xb] >> 1) |
                       (uVar63 & 0x1ffffff | uVar20 | uVar21 | (uint)*(byte *)((long)param_2 + 0x2f)
                       ) << 7) ^ uVar28 ^ (uVar28 >> 0x11 | uVar28 << 0xf) ^
               (uVar28 >> 9 | uVar28 << 0x17);
      uVar48 = uVar15 + uVar12 + 0x311465e7;
      uVar28 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar47 + (uVar45 ^ uVar41) + (uVar29 ^ uVar18 ^ uVar1) + (uVar28 ^ uVar15);
      uVar28 = uVar30 + uVar41 + (uVar11 ^ uVar17 ^ uVar12) + uVar28;
      uVar29 = uVar2 ^ uVar40 ^ (uVar8 >> 0x11 | uVar8 << 0xf);
      uVar11 = uVar3 ^ uVar41 ^ (uVar13 >> 0x11 | uVar13 << 0xf);
      uVar15 = uVar4 ^ ((uint)(byte)((byte)param_2[0xc] >> 1) |
                       (uVar73 & 0x1ffffff | uVar22 | uVar23 | (uint)*(byte *)((long)param_2 + 0x33)
                       ) << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar16 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar5 = uVar9 ^ ((uint)(byte)((byte)param_2[0xd] >> 1) |
                      (uVar64 & 0x1ffffff | uVar5 | uVar24 | (uint)*(byte *)((long)param_2 + 0x37))
                      << 7) ^ uVar11 ^ (uVar11 >> 0x11 | uVar11 << 0xf) ^
              (uVar11 >> 9 | uVar11 << 0x17);
      uVar29 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar19 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar28 = uVar16 + uVar29 + 0x6228cbce;
      uVar20 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar17 + uVar42 + (uVar12 ^ uVar31 ^ uVar29) + uVar20;
      uVar17 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar11 = uVar7 ^ uVar42 ^ (uVar14 >> 0x11 | uVar14 << 0xf);
      uVar1 = uVar18 + (uVar46 ^ uVar42) + (uVar1 ^ uVar49 ^ uVar48) + (uVar20 ^ uVar16);
      uVar6 = uVar10 ^ ((uint)(byte)((byte)param_2[0xe] >> 1) |
                       (uVar70 & 0x1ffffff | uVar6 | uVar26 | (uint)*(byte *)((long)param_2 + 0x3b))
                       << 7) ^ uVar11 ^ (uVar11 >> 0x11 | uVar11 << 0xf) ^
              (uVar11 >> 9 | uVar11 << 0x17);
      uVar11 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar12 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar18 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar28 = uVar12 + uVar11 + 0xc451979c;
      uVar16 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar31 + uVar43 + (uVar29 ^ uVar19 ^ uVar11) + uVar16;
      uVar29 = uVar49 + (uVar2 ^ uVar43) + (uVar48 ^ uVar17 ^ uVar1) + (uVar16 ^ uVar12);
      uVar12 = uVar4 ^ uVar43 ^ (uVar15 >> 0x11 | uVar15 << 0xf);
      uVar28 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar20 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar21 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar12 = uVar8 ^ ((uint)(byte)((byte)param_2[0xf] >> 1) |
                       (uVar61 & 0x1ffffff | uVar25 | uVar27 | (uint)*(byte *)((long)param_2 + 0x3f)
                       ) << 7) ^ uVar12 ^ (uVar12 >> 0x11 | uVar12 << 0xf) ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar22 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar16 = uVar9 ^ uVar44 ^ (uVar5 >> 0x11 | uVar5 << 0xf);
      uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar48 = uVar22 + uVar28 + 0x88a32f39;
      uVar24 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar19 + uVar44 + (uVar11 ^ uVar18 ^ uVar28) + uVar24;
      uVar1 = uVar17 + (uVar3 ^ uVar44) + (uVar1 ^ uVar20 ^ uVar29) + (uVar24 ^ uVar22);
      uVar11 = uVar13 ^ (uVar2 >> 0x19 | uVar2 << 7) ^ uVar16 ^ (uVar16 >> 0x11 | uVar16 << 0xf) ^
               (uVar16 >> 9 | uVar16 << 0x17);
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar17 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar17 + uVar16 + 0x11465e73;
      uVar22 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar19 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar24 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar48 = uVar18 + uVar45 + (uVar28 ^ uVar21 ^ uVar16) + uVar19;
      uVar28 = uVar20 + (uVar7 ^ uVar45) + (uVar29 ^ uVar23 ^ uVar1) + (uVar19 ^ uVar17);
      uVar25 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar29 = uVar10 ^ uVar45 ^ (uVar6 >> 0x11 | uVar6 << 0xf);
      uVar17 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar18 = uVar14 ^ (uVar3 >> 0x19 | uVar3 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar19 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar26 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar48 = uVar19 + uVar17 + 0x228cbce6;
      uVar20 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar29 = uVar8 ^ uVar46 ^ (uVar12 >> 0x11 | uVar12 << 0xf);
      uVar48 = uVar21 + uVar46 + (uVar16 ^ uVar22 ^ uVar17) + uVar20;
      uVar1 = uVar23 + (uVar4 ^ uVar46) + (uVar1 ^ uVar24 ^ uVar28) + (uVar20 ^ uVar19);
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar19 = uVar15 ^ (uVar7 >> 0x19 | uVar7 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar29 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar29 + 0x9d8a7a87 + uVar16;
      uVar23 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar20 = uVar13 ^ uVar2 ^ (uVar11 >> 0x11 | uVar11 << 0xf);
      uVar48 = uVar22 + uVar2 + (uVar17 & uVar16 | uVar26 & (uVar16 ^ 0xffffffff)) + uVar23;
      uVar29 = uVar24 + (uVar9 ^ uVar2) + ((uVar1 | uVar28) & uVar25 | uVar1 & uVar28) +
               (uVar23 ^ uVar29);
      uVar2 = uVar5 ^ (uVar4 >> 0x19 | uVar4 << 7) ^ uVar20 ^ (uVar20 >> 0x11 | uVar20 << 0xf) ^
              (uVar20 >> 9 | uVar20 << 0x17);
      uVar20 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar22 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar28 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar24 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar17 = uVar14 ^ uVar3 ^ (uVar18 >> 0x11 | uVar18 << 0xf);
      uVar48 = uVar22 + 0x3b14f50f + uVar28;
      uVar48 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar1 = uVar25 + (uVar10 ^ uVar3) + ((uVar29 | uVar1) & uVar20 | uVar29 & uVar1) +
              (uVar48 ^ uVar22);
      uVar48 = uVar26 + uVar3 + (uVar16 & uVar28 | uVar21 & (uVar28 ^ 0xffffffff)) + uVar48;
      uVar3 = uVar6 ^ (uVar9 >> 0x19 | uVar9 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
              (uVar17 >> 9 | uVar17 << 0x17);
      uVar22 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar25 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar26 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar48 = uVar25 + 0x7629ea1e + uVar16;
      uVar17 = uVar15 ^ uVar7 ^ (uVar19 >> 0x11 | uVar19 << 0xf);
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar21 + uVar7 + (uVar28 & uVar16 | uVar24 & (uVar16 ^ 0xffffffff)) + uVar27;
      uVar28 = uVar20 + (uVar8 ^ uVar7) + ((uVar1 | uVar29) & uVar23 | uVar1 & uVar29) +
               (uVar27 ^ uVar25);
      uVar7 = uVar12 ^ (uVar10 >> 0x19 | uVar10 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
              (uVar17 >> 9 | uVar17 << 0x17);
      uVar17 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar21 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar25 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar48 = uVar25 + 0xec53d43c + uVar17;
      uVar48 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar29 = uVar5 ^ uVar4 ^ (uVar2 >> 0x11 | uVar2 << 0xf);
      uVar1 = uVar23 + (uVar13 ^ uVar4) + ((uVar28 | uVar1) & uVar22 | uVar28 & uVar1) +
              (uVar48 ^ uVar25);
      uVar48 = uVar24 + uVar4 + (uVar16 & uVar17 | uVar26 & (uVar17 ^ 0xffffffff)) + uVar48;
      uVar4 = uVar11 ^ (uVar8 >> 0x19 | uVar8 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
              (uVar29 >> 9 | uVar29 << 0x17);
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar23 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar24 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar25 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar25 + 0xd8a7a879 + uVar16;
      uVar29 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar22 + (uVar14 ^ uVar9) + ((uVar1 | uVar28) & uVar20 | uVar1 & uVar28) +
               (uVar29 ^ uVar25);
      uVar28 = uVar6 ^ uVar9 ^ (uVar3 >> 0x11 | uVar3 << 0xf);
      uVar29 = uVar26 + uVar9 + (uVar17 & uVar16 | uVar21 & (uVar16 ^ 0xffffffff)) + uVar29;
      uVar29 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar9 = uVar18 ^ (uVar13 >> 0x19 | uVar13 << 7) ^ uVar28 ^ (uVar28 >> 0x11 | uVar28 << 0xf) ^
              (uVar28 >> 9 | uVar28 << 0x17);
      uVar22 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar25 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar26 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar17 = uVar12 ^ uVar10 ^ (uVar7 >> 0x11 | uVar7 << 0xf);
      uVar28 = uVar25 + 0xb14f50f3 + uVar29;
      uVar27 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar21 + uVar10 + (uVar16 & uVar29 | uVar24 & (uVar29 ^ 0xffffffff)) + uVar27;
      uVar1 = uVar20 + (uVar15 ^ uVar10) + ((uVar48 | uVar1) & uVar23 | uVar48 & uVar1) +
              (uVar27 ^ uVar25);
      uVar20 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar10 = uVar19 ^ (uVar14 >> 0x19 | uVar14 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar16 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar21 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar17 = uVar11 ^ uVar8 ^ (uVar4 >> 0x11 | uVar4 << 0xf);
      uVar25 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar28 = uVar20 + 0x629ea1e7 + uVar16;
      uVar27 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar24 + uVar8 + (uVar29 & uVar16 | uVar26 & (uVar16 ^ 0xffffffff)) + uVar27;
      uVar48 = uVar23 + (uVar5 ^ uVar8) + ((uVar1 | uVar48) & uVar22 | uVar1 & uVar48) +
               (uVar27 ^ uVar20);
      uVar8 = uVar2 ^ (uVar15 >> 0x19 | uVar15 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
              (uVar17 >> 9 | uVar17 << 0x17);
      uVar17 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar24 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar20 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar29 = uVar18 ^ uVar13 ^ (uVar9 >> 0x11 | uVar9 << 0xf);
      uVar28 = uVar20 + 0xc53d43ce + uVar17;
      uVar28 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar1 = uVar22 + (uVar6 ^ uVar13) + ((uVar48 | uVar1) & uVar21 | uVar48 & uVar1) +
              (uVar28 ^ uVar20);
      uVar28 = uVar26 + uVar13 + (uVar16 & uVar17 | uVar25 & (uVar17 ^ 0xffffffff)) + uVar28;
      uVar13 = uVar3 ^ (uVar5 >> 0x19 | uVar5 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar16 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar20 = uVar19 ^ uVar14 ^ (uVar10 >> 0x11 | uVar10 << 0xf);
      uVar22 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar26 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar28 = uVar26 + 0x8a7a879d + uVar16;
      uVar29 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar21 + (uVar12 ^ uVar14) + ((uVar1 | uVar48) & uVar23 | uVar1 & uVar48) +
               (uVar29 ^ uVar26);
      uVar29 = uVar25 + uVar14 + (uVar17 & uVar16 | uVar24 & (uVar16 ^ 0xffffffff)) + uVar29;
      uVar21 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar29 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar14 = uVar7 ^ (uVar6 >> 0x19 | uVar6 << 7) ^ uVar20 ^ (uVar20 >> 0x11 | uVar20 << 0xf) ^
               (uVar20 >> 9 | uVar20 << 0x17);
      uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar25 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar26 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar17 = uVar2 ^ uVar15 ^ (uVar8 >> 0x11 | uVar8 << 0xf);
      uVar48 = uVar26 + 0x14f50f3b + uVar29;
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar24 + uVar15 + (uVar16 & uVar29 | uVar22 & (uVar29 ^ 0xffffffff)) + uVar27;
      uVar1 = uVar23 + (uVar11 ^ uVar15) + ((uVar28 | uVar1) & uVar21 | uVar28 & uVar1) +
              (uVar27 ^ uVar26);
      uVar15 = uVar4 ^ (uVar12 >> 0x19 | uVar12 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar23 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar24 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar26 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar48 = uVar23 + 0x29ea1e76 + uVar16;
      uVar17 = uVar3 ^ uVar5 ^ (uVar13 >> 0x11 | uVar13 << 0xf);
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar22 + uVar5 + (uVar29 & uVar16 | uVar25 & (uVar16 ^ 0xffffffff)) + uVar27;
      uVar28 = uVar21 + (uVar18 ^ uVar5) + ((uVar1 | uVar28) & uVar20 | uVar1 & uVar28) +
               (uVar27 ^ uVar23);
      uVar5 = uVar9 ^ (uVar11 >> 0x19 | uVar11 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
              (uVar17 >> 9 | uVar17 << 0x17);
      uVar21 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar29 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar22 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar23 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar48 = uVar22 + 0x53d43cec + uVar29;
      uVar17 = uVar7 ^ uVar6 ^ (uVar14 >> 0x11 | uVar14 << 0xf);
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar25 + uVar6 + (uVar16 & uVar29 | uVar26 & (uVar29 ^ 0xffffffff)) + uVar27;
      uVar1 = uVar20 + (uVar19 ^ uVar6) + ((uVar28 | uVar1) & uVar24 | uVar28 & uVar1) +
              (uVar27 ^ uVar22);
      uVar6 = uVar10 ^ (uVar18 >> 0x19 | uVar18 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
              (uVar17 >> 9 | uVar17 << 0x17);
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar20 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar22 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar25 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar17 = uVar4 ^ uVar12 ^ (uVar15 >> 0x11 | uVar15 << 0xf);
      uVar48 = uVar22 + 0xa7a879d8 + uVar16;
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar26 + uVar12 + (uVar29 & uVar16 | uVar23 & (uVar16 ^ 0xffffffff)) + uVar27;
      uVar28 = uVar24 + (uVar2 ^ uVar12) + ((uVar1 | uVar28) & uVar21 | uVar1 & uVar28) +
               (uVar27 ^ uVar22);
      uVar12 = uVar8 ^ (uVar19 >> 0x19 | uVar19 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar29 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar22 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar24 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar26 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar48 = uVar26 + 0x4f50f3b1 + uVar29;
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar17 = uVar9 ^ uVar11 ^ (uVar5 >> 0x11 | uVar5 << 0xf);
      uVar48 = uVar23 + uVar11 + (uVar16 & uVar29 | uVar20 & (uVar29 ^ 0xffffffff)) + uVar27;
      uVar1 = uVar21 + (uVar3 ^ uVar11) + ((uVar28 | uVar1) & uVar25 | uVar28 & uVar1) +
              (uVar27 ^ uVar26);
      uVar11 = uVar13 ^ (uVar2 >> 0x19 | uVar2 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar16 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar17 = uVar10 ^ uVar18 ^ (uVar6 >> 0x11 | uVar6 << 0xf);
      uVar21 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar23 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar26 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar27 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar27 + 0x9ea1e762 + uVar16;
      uVar30 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar20 + uVar18 + (uVar29 & uVar16 | uVar24 & (uVar16 ^ 0xffffffff)) + uVar30;
      uVar28 = uVar25 + (uVar7 ^ uVar18) + ((uVar1 | uVar28) & uVar22 | uVar1 & uVar28) +
               (uVar30 ^ uVar27);
      uVar17 = uVar14 ^ (uVar3 >> 0x19 | uVar3 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar29 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar20 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar18 = uVar8 ^ uVar19 ^ (uVar12 >> 0x11 | uVar12 << 0xf);
      uVar25 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar48 = uVar20 + 0x3d43cec5 + uVar29;
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar24 + uVar19 + (uVar16 & uVar29 | uVar23 & (uVar29 ^ 0xffffffff)) + uVar27;
      uVar1 = uVar22 + (uVar4 ^ uVar19) + ((uVar28 | uVar1) & uVar21 | uVar28 & uVar1) +
              (uVar27 ^ uVar20);
      uVar16 = uVar15 ^ (uVar7 >> 0x19 | uVar7 << 7) ^ uVar18 ^ (uVar18 >> 0x11 | uVar18 << 0xf) ^
               (uVar18 >> 9 | uVar18 << 0x17);
      uVar18 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar20 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar22 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar22 + uVar18 + 0x7a879d8a;
      uVar24 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar19 = uVar13 ^ uVar2 ^ (uVar11 >> 0x11 | uVar11 << 0xf);
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar23 + uVar2 + (uVar29 & uVar18 | uVar26 & (uVar18 ^ 0xffffffff)) + uVar27;
      uVar28 = uVar21 + (uVar9 ^ uVar2) + ((uVar1 | uVar28) & uVar25 | uVar1 & uVar28) +
               (uVar27 ^ uVar22);
      uVar2 = uVar5 ^ (uVar4 >> 0x19 | uVar4 << 7) ^ uVar19 ^ (uVar19 >> 0x11 | uVar19 << 0xf) ^
              (uVar19 >> 9 | uVar19 << 0x17);
      uVar29 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar21 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar19 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar48 = uVar19 + uVar29 + 0xf50f3b14;
      uVar22 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar23 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar48 = uVar26 + uVar3 + (uVar18 & uVar29 | uVar24 & (uVar29 ^ 0xffffffff)) + uVar22;
      uVar18 = uVar14 ^ uVar3 ^ (uVar17 >> 0x11 | uVar17 << 0xf);
      uVar1 = uVar25 + (uVar10 ^ uVar3) + ((uVar28 | uVar1) & uVar20 | uVar28 & uVar1) +
              (uVar22 ^ uVar19);
      uVar3 = uVar6 ^ (uVar9 >> 0x19 | uVar9 << 7) ^ uVar18 ^ (uVar18 >> 0x11 | uVar18 << 0xf) ^
              (uVar18 >> 9 | uVar18 << 0x17);
      uVar18 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar19 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar22 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar48 = uVar19 + uVar18 + 0xea1e7629;
      uVar25 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar26 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar24 + uVar7 + (uVar29 & uVar18 | uVar23 & (uVar18 ^ 0xffffffff)) + uVar26;
      uVar29 = uVar15 ^ uVar7 ^ (uVar16 >> 0x11 | uVar16 << 0xf);
      uVar28 = uVar20 + (uVar8 ^ uVar7) + ((uVar1 | uVar28) & uVar21 | uVar1 & uVar28) +
               (uVar26 ^ uVar19);
      uVar7 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar19 = uVar12 ^ (uVar10 >> 0x19 | uVar10 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar29 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar24 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar48 = uVar29 + uVar7 + 0xd43cec53;
      uVar20 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar23 + uVar4 + (uVar18 & uVar7 | uVar25 & (uVar7 ^ 0xffffffff)) + uVar20;
      uVar18 = uVar5 ^ uVar4 ^ (uVar2 >> 0x11 | uVar2 << 0xf);
      uVar29 = uVar21 + (uVar13 ^ uVar4) + ((uVar28 | uVar1) & uVar22 | uVar28 & uVar1) +
               (uVar20 ^ uVar29);
      uVar4 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar48 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar21 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar18 = uVar11 ^ (uVar8 >> 0x19 | uVar8 << 7) ^ uVar18 ^ (uVar18 >> 0x11 | uVar18 << 0xf) ^
               (uVar18 >> 9 | uVar18 << 0x17);
      uVar23 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar1 = uVar48 + uVar4 + 0xa879d8a7;
      uVar20 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar26 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar1 = uVar25 + uVar9 + (uVar7 & uVar4 | uVar24 & (uVar4 ^ 0xffffffff)) + uVar20;
      uVar7 = uVar6 ^ uVar9 ^ (uVar3 >> 0x11 | uVar3 << 0xf);
      uVar48 = uVar22 + (uVar14 ^ uVar9) + ((uVar29 | uVar28) & uVar21 | uVar29 & uVar28) +
               (uVar20 ^ uVar48);
      uVar9 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar7 = uVar17 ^ (uVar13 >> 0x19 | uVar13 << 7) ^ uVar7 ^ (uVar7 >> 0x11 | uVar7 << 0xf) ^
              (uVar7 >> 9 | uVar7 << 0x17);
      uVar22 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar25 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar1 = uVar22 + uVar9 + 0x50f3b14f;
      uVar28 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar27 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar20 = uVar12 ^ uVar10 ^ (uVar19 >> 0x11 | uVar19 << 0xf);
      uVar1 = uVar21 + (uVar15 ^ uVar10) + ((uVar48 | uVar29) & uVar26 | uVar48 & uVar29) +
              (uVar28 ^ uVar22);
      uVar28 = uVar24 + uVar10 + (uVar4 & uVar9 | uVar23 & (uVar9 ^ 0xffffffff)) + uVar28;
      uVar4 = uVar16 ^ (uVar14 >> 0x19 | uVar14 << 7) ^ uVar20 ^ (uVar20 >> 0x11 | uVar20 << 0xf) ^
              (uVar20 >> 9 | uVar20 << 0x17);
      uVar29 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar20 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar21 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar22 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar28 = uVar20 + uVar29 + 0xa1e7629e;
      uVar28 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar10 = uVar11 ^ uVar8 ^ (uVar18 >> 0x11 | uVar18 << 0xf);
      uVar48 = uVar26 + (uVar5 ^ uVar8) + ((uVar1 | uVar48) & uVar27 | uVar1 & uVar48) +
               (uVar28 ^ uVar20);
      uVar28 = uVar23 + uVar8 + (uVar9 & uVar29 | uVar25 & (uVar29 ^ 0xffffffff)) + uVar28;
      uVar8 = uVar2 ^ (uVar15 >> 0x19 | uVar15 << 7) ^ uVar10 ^ (uVar10 >> 0x11 | uVar10 << 0xf) ^
              (uVar10 >> 9 | uVar10 << 0x17);
      uVar9 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar10 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar24 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar28 = uVar10 + uVar9 + 0x43cec53d;
      uVar20 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar25 + uVar13 + (uVar29 & uVar9 | uVar22 & (uVar9 ^ 0xffffffff)) + uVar20;
      uVar29 = uVar17 ^ uVar13 ^ (uVar7 >> 0x11 | uVar7 << 0xf);
      uVar1 = uVar27 + (uVar6 ^ uVar13) + ((uVar48 | uVar1) & uVar21 | uVar48 & uVar1) +
              (uVar20 ^ uVar10);
      uVar10 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar13 = uVar3 ^ (uVar5 >> 0x19 | uVar5 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar29 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar25 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar28 = uVar29 + uVar10 + 0x879d8a7a;
      uVar26 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar20 = uVar16 ^ uVar14 ^ (uVar4 >> 0x11 | uVar4 << 0xf);
      uVar28 = uVar22 + uVar14 + (uVar9 & uVar10 | uVar24 & (uVar10 ^ 0xffffffff)) + uVar26;
      uVar29 = uVar21 + (uVar12 ^ uVar14) + ((uVar1 | uVar48) & uVar23 | uVar1 & uVar48) +
               (uVar26 ^ uVar29);
      uVar9 = uVar19 ^ (uVar6 >> 0x19 | uVar6 << 7) ^ uVar20 ^ (uVar20 >> 0x11 | uVar20 << 0xf) ^
              (uVar20 >> 9 | uVar20 << 0x17);
      uVar20 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar21 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar28 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar22 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar48 = uVar21 + uVar28 + 0xf3b14f5;
      uVar26 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar27 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar14 = uVar2 ^ uVar15 ^ (uVar8 >> 0x11 | uVar8 << 0xf);
      uVar48 = uVar24 + uVar15 + (uVar10 & uVar28 | uVar25 & (uVar28 ^ 0xffffffff)) + uVar26;
      uVar1 = uVar23 + (uVar11 ^ uVar15) + ((uVar29 | uVar1) & uVar20 | uVar29 & uVar1) +
              (uVar26 ^ uVar21);
      uVar10 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar21 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar14 = uVar18 ^ (uVar12 >> 0x19 | uVar12 << 7) ^ uVar14 ^ (uVar14 >> 0x11 | uVar14 << 0xf) ^
               (uVar14 >> 9 | uVar14 << 0x17);
      uVar23 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar48 = uVar21 + uVar10 + 0x1e7629ea;
      uVar24 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar26 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar48 = uVar25 + uVar5 + (uVar28 & uVar10 | uVar27 & (uVar10 ^ 0xffffffff)) + uVar24;
      uVar15 = uVar3 ^ uVar5 ^ (uVar13 >> 0x11 | uVar13 << 0xf);
      uVar28 = uVar20 + (uVar17 ^ uVar5) + ((uVar1 | uVar29) & uVar22 | uVar1 & uVar29) +
               (uVar24 ^ uVar21);
      uVar29 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar5 = uVar7 ^ (uVar11 >> 0x19 | uVar11 << 7) ^ uVar15 ^ (uVar15 >> 0x11 | uVar15 << 0xf) ^
              (uVar15 >> 9 | uVar15 << 0x17);
      uVar20 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar48 = uVar20 + uVar29 + 0x3cec53d4;
      uVar21 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar24 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar15 = uVar19 ^ uVar6 ^ (uVar9 >> 0x11 | uVar9 << 0xf);
      uVar48 = uVar27 + uVar6 + (uVar10 & uVar29 | uVar23 & (uVar29 ^ 0xffffffff)) + uVar24;
      uVar25 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar1 = uVar22 + (uVar16 ^ uVar6) + ((uVar28 | uVar1) & uVar26 | uVar28 & uVar1) +
              (uVar24 ^ uVar20);
      uVar20 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar6 = uVar4 ^ (uVar17 >> 0x19 | uVar17 << 7) ^ uVar15 ^ (uVar15 >> 0x11 | uVar15 << 0xf) ^
              (uVar15 >> 9 | uVar15 << 0x17);
      uVar10 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar22 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar48 = uVar20 + uVar10 + 0x79d8a7a8;
      uVar15 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar24 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar48 = uVar23 + uVar12 + (uVar29 & uVar10 | uVar21 & (uVar10 ^ 0xffffffff)) + uVar15;
      uVar29 = uVar18 ^ uVar12 ^ (uVar14 >> 0x11 | uVar14 << 0xf);
      uVar28 = uVar26 + (uVar2 ^ uVar12) + ((uVar1 | uVar28) & uVar25 | uVar1 & uVar28) +
               (uVar15 ^ uVar20);
      uVar12 = uVar8 ^ (uVar16 >> 0x19 | uVar16 << 7) ^ uVar29 ^ (uVar29 >> 0x11 | uVar29 << 0xf) ^
               (uVar29 >> 9 | uVar29 << 0x17);
      uVar29 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar15 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar48 = uVar15 + uVar29 + 0xf3b14f50;
      uVar23 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar26 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar48 = uVar21 + uVar11 + (uVar10 & uVar29 | uVar24 & (uVar29 ^ 0xffffffff)) + uVar23;
      uVar10 = uVar7 ^ uVar11 ^ (uVar5 >> 0x11 | uVar5 << 0xf);
      uVar1 = uVar25 + (uVar3 ^ uVar11) + ((uVar28 | uVar1) & uVar22 | uVar28 & uVar1) +
              (uVar23 ^ uVar15);
      uVar11 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar10 = uVar13 ^ (uVar2 >> 0x19 | uVar2 << 7) ^ uVar10 ^ (uVar10 >> 0x11 | uVar10 << 0xf) ^
               (uVar10 >> 9 | uVar10 << 0x17);
      uVar21 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar23 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar48 = uVar21 + uVar11 + 0xe7629ea1;
      uVar15 = uVar4 ^ uVar17 ^ (uVar6 >> 0x11 | uVar6 << 0xf);
      uVar25 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar24 + uVar17 + (uVar29 & uVar11 | uVar26 & (uVar11 ^ 0xffffffff)) + uVar25;
      uVar29 = uVar22 + (uVar19 ^ uVar17) + ((uVar1 | uVar28) & uVar20 | uVar1 & uVar28) +
               (uVar25 ^ uVar21);
      uVar15 = uVar9 ^ (uVar3 >> 0x19 | uVar3 << 7) ^ uVar15 ^ (uVar15 >> 0x11 | uVar15 << 0xf) ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar21 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar22 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar28 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar24 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar25 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar48 = uVar22 + uVar28 + 0xcec53d43;
      uVar48 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar17 = uVar8 ^ uVar16 ^ (uVar12 >> 0x11 | uVar12 << 0xf);
      uVar1 = uVar20 + (uVar18 ^ uVar16) + ((uVar29 | uVar1) & uVar21 | uVar29 & uVar1) +
              (uVar48 ^ uVar22);
      uVar48 = uVar26 + uVar16 + (uVar11 & uVar28 | uVar23 & (uVar28 ^ 0xffffffff)) + uVar48;
      uVar20 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar11 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar16 = uVar14 ^ (uVar19 >> 0x19 | uVar19 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
               (uVar17 >> 9 | uVar17 << 0x17);
      uVar22 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar48 = uVar20 + 0x9d8a7a87 + uVar11;
      uVar26 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar17 = uVar13 ^ uVar2 ^ (uVar10 >> 0x11 | uVar10 << 0xf);
      uVar27 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar23 + uVar2 + (uVar28 & uVar11 | uVar25 & (uVar11 ^ 0xffffffff)) + uVar27;
      uVar28 = uVar21 + (uVar7 ^ uVar2) + ((uVar1 | uVar29) & uVar24 | uVar1 & uVar29) +
               (uVar27 ^ uVar20);
      uVar29 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar2 = uVar5 ^ (uVar18 >> 0x19 | uVar18 << 7) ^ uVar17 ^ (uVar17 >> 0x11 | uVar17 << 0xf) ^
              (uVar17 >> 9 | uVar17 << 0x17);
      uVar17 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar21 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar48 = uVar29 + 0x3b14f50f + uVar17;
      uVar20 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar25 + uVar3 + (uVar11 & uVar17 | uVar26 & (uVar17 ^ 0xffffffff)) + uVar20;
      uVar29 = uVar24 + (uVar4 ^ uVar3) + ((uVar28 | uVar1) & uVar22 | uVar28 & uVar1) +
               (uVar20 ^ uVar29);
      uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar11 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar24 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar25 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar48 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar1 = uVar48 + 0x7629ea1e + uVar11;
      uVar20 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar26 + uVar19 + (uVar17 & uVar11 | uVar21 & (uVar11 ^ 0xffffffff)) + uVar20;
      uVar48 = uVar22 + (uVar8 ^ uVar19) + ((uVar29 | uVar28) & uVar23 | uVar29 & uVar28) +
               (uVar20 ^ uVar48);
      uVar22 = uVar29 >> 0x17 | uVar29 * 0x200;
      uVar17 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar26 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar28 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar1 = uVar28 + 0xec53d43c + uVar17;
      uVar20 = uVar5 ^ uVar18 ^ (uVar2 >> 0x11 | uVar2 << 0xf);
      uVar19 = uVar14 ^ uVar19 ^ (uVar16 >> 0x11 | uVar16 << 0xf);
      uVar27 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar21 + uVar18 + (uVar11 & uVar17 | uVar25 & (uVar17 ^ 0xffffffff)) + uVar27;
      uVar28 = uVar23 + (uVar13 ^ uVar18) + ((uVar48 | uVar29) & uVar24 | uVar48 & uVar29) +
               (uVar27 ^ uVar28);
      uVar11 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar29 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar18 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar1 = uVar11 + 0xd8a7a879 + uVar29;
      uVar23 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar25 + uVar7 + (uVar17 & uVar29 | uVar26 & (uVar29 ^ 0xffffffff)) + uVar23;
      uVar48 = uVar24 + (uVar9 ^ uVar7) + ((uVar28 | uVar48) & uVar22 | uVar28 & uVar48) +
               (uVar23 ^ uVar11);
      uVar17 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar11 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar23 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar24 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar1 = uVar17 + 0xb14f50f3 + uVar11;
      uVar25 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar26 + uVar4 + (uVar29 & uVar11 | uVar21 & (uVar11 ^ 0xffffffff)) + uVar25;
      uVar28 = uVar22 + (uVar14 ^ uVar4) + ((uVar48 | uVar28) & uVar18 | uVar48 & uVar28) +
               (uVar25 ^ uVar17);
      uVar17 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar29 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar22 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar25 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar1 = uVar25 + 0x629ea1e7 + uVar29;
      uVar26 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar21 + uVar8 + (uVar11 & uVar29 | uVar24 & (uVar29 ^ 0xffffffff)) + uVar26;
      uVar21 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar48 = uVar18 + (uVar5 ^ uVar8) + ((uVar28 | uVar48) & uVar23 | uVar28 & uVar48) +
               (uVar26 ^ uVar25);
      uVar18 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar11 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar25 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar1 = uVar18 + 0xc53d43ce + uVar11;
      uVar26 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar24 + uVar13 + (uVar29 & uVar11 | uVar22 & (uVar11 ^ 0xffffffff)) + uVar26;
      uVar28 = uVar23 + (uVar6 ^ uVar13) + ((uVar48 | uVar28) & uVar17 | uVar48 & uVar28) +
               (uVar26 ^ uVar18);
      uVar18 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar13 = uVar1 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar1 >> 0xf | uVar1 * 0x20000);
      uVar1 = uVar18 + 0x8a7a879d + uVar13;
      uVar29 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar17 + (uVar12 ^ uVar9) + ((uVar28 | uVar48) & uVar21 | uVar28 & uVar48) +
              (uVar29 ^ uVar18);
      uVar17 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar18 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar23 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar29 = uVar22 + uVar9 + (uVar11 & uVar13 | uVar25 & (uVar13 ^ 0xffffffff)) + uVar29;
      uVar11 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar22 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar48 = uVar23 + 0x14f50f3b + uVar11;
      uVar29 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar21 + (uVar10 ^ uVar14) + ((uVar1 | uVar28) & uVar18 | uVar1 & uVar28) +
               (uVar29 ^ uVar23);
      uVar21 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar23 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar29 = uVar25 + uVar14 + (uVar13 & uVar11 | uVar17 & (uVar11 ^ 0xffffffff)) + uVar29;
      uVar29 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar13 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar28 = uVar23 + 0x29ea1e76 + uVar29;
      uVar28 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar1 = uVar18 + (uVar15 ^ uVar5) + ((uVar48 | uVar1) & uVar22 | uVar48 & uVar1) +
              (uVar28 ^ uVar23);
      uVar14 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar18 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar28 = uVar17 + uVar5 + (uVar11 & uVar29 | uVar21 & (uVar29 ^ 0xffffffff)) + uVar28;
      uVar5 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar28 = uVar14 + 0x53d43cec + uVar5;
      uVar28 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar17 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar48 = uVar22 + (uVar16 ^ uVar6) + ((uVar1 | uVar48) & uVar13 | uVar1 & uVar48) +
               (uVar28 ^ uVar14);
      uVar14 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar28 = uVar21 + uVar6 + (uVar29 & uVar5 | uVar18 & (uVar5 ^ 0xffffffff)) + uVar28;
      uVar11 = uVar28 ^ (uVar28 >> 0x17 | uVar28 * 0x200) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar21 = uVar48 >> 0x14 | uVar48 * 0x1000;
      uVar28 = uVar21 + 0xa7a879d8 + uVar11;
      uVar29 = uVar28 >> 0x19 | uVar28 * 0x80;
      uVar28 = uVar13 + (uVar2 ^ uVar12) + ((uVar48 | uVar1) & uVar17 | uVar48 & uVar1) +
               (uVar29 ^ uVar21);
      uVar2 = uVar9 ^ uVar3 ^ (uVar15 >> 0x11 | uVar15 << 0xf);
      uVar9 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar13 = uVar5 >> 0xd | uVar5 << 0x13;
      uVar29 = uVar18 + uVar12 + (uVar5 & uVar11 | uVar14 & (uVar11 ^ 0xffffffff)) + uVar29;
      uVar3 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar5 = uVar28 >> 0x14 | uVar28 * 0x1000;
      uVar1 = uVar5 + 0x4f50f3b1 + uVar3;
      uVar29 = uVar1 >> 0x19 | uVar1 * 0x80;
      uVar1 = uVar17 + (uVar6 ^ (uVar7 >> 0x19 | uVar7 << 7) ^ uVar10 ^ uVar2 ^
                        (uVar2 >> 0x11 | uVar2 << 0xf) ^ (uVar2 >> 9 | uVar2 << 0x17)) +
              ((uVar28 | uVar48) & uVar9 | uVar28 & uVar48) + (uVar29 ^ uVar5);
      uVar29 = uVar14 + uVar10 + (uVar11 & uVar3 | uVar13 & (uVar3 ^ 0xffffffff)) + uVar29;
      uVar5 = uVar48 >> 0x17 | uVar48 * 0x200;
      uVar6 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar2 = uVar29 ^ (uVar29 >> 0x17 | uVar29 * 0x200) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar29 = uVar1 >> 0x14 | uVar1 * 0x1000;
      uVar48 = uVar29 + 0x9ea1e762 + uVar2;
      uVar7 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar13 + uVar15 + (uVar3 & uVar2 | uVar6 & (uVar2 ^ 0xffffffff)) + uVar7;
      uVar11 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar69 = uVar69 ^ (uVar1 >> 0x17 | uVar1 * 0x200);
      uVar29 = uVar9 + (uVar12 ^ (uVar4 >> 0x19 | uVar4 << 7) ^ uVar15 ^ uVar19 ^
                        (uVar19 >> 0x11 | uVar19 << 0xf) ^ (uVar19 >> 9 | uVar19 << 0x17)) +
               ((uVar1 | uVar28) & uVar5 | uVar1 & uVar28) + (uVar7 ^ uVar29);
      uVar62 = uVar62 ^ (uVar2 >> 0xd | uVar2 << 0x13);
      uVar3 = uVar48 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^ (uVar48 >> 0xf | uVar48 * 0x20000);
      uVar4 = uVar29 >> 0x14 | uVar29 * 0x1000;
      uVar28 = uVar28 >> 0x17 | uVar28 * 0x200;
      uVar74 = uVar3 ^ uVar74;
      uVar48 = uVar4 + 0x3d43cec5 + uVar3;
      uVar7 = uVar48 >> 0x19 | uVar48 * 0x80;
      uVar48 = uVar6 + uVar16 + (uVar2 & uVar3 | uVar11 & (uVar3 ^ 0xffffffff)) + uVar7;
      param_3 = param_3 + -1;
      uVar68 = uVar29 ^ uVar68;
      uVar71 = uVar28 ^ uVar71;
      uVar66 = uVar5 + (uVar10 ^ (uVar8 >> 0x19 | uVar8 << 7) ^ uVar16 ^ uVar20 ^
                        (uVar20 >> 0x11 | uVar20 << 0xf) ^ (uVar20 >> 9 | uVar20 << 0x17)) +
               ((uVar29 | uVar1) & uVar28 | uVar29 & uVar1) + (uVar7 ^ uVar4) ^ uVar66;
      uVar76 = uVar11 ^ uVar76;
      uVar72 = uVar48 ^ uVar72 ^ (uVar48 >> 0x17 | uVar48 * 0x200) ^
               (uVar48 >> 0xf | uVar48 * 0x20000);
      param_2 = param_2 + 0x10;
      param_1[2] = uVar69;
      param_1[3] = uVar71;
      param_1[6] = uVar62;
      param_1[7] = uVar76;
      *param_1 = uVar66;
      param_1[1] = uVar68;
      param_1[4] = uVar72;
      param_1[5] = uVar74;
    } while (param_3 != 0);
  }
  return;
}


