/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004817e0; name: FUN_004817e0
 */


undefined8
FUN_004817e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  long lVar53;
  ulong uVar54;
  long lVar55;
  long lVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  long lVar63;
  undefined1 auStack_308 [216];
  ushort local_230;
  undefined2 local_22e;
  undefined1 local_22c;
  undefined1 local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  undefined2 local_228;
  undefined1 local_226;
  undefined2 local_225;
  undefined2 local_223;
  undefined1 local_221;
  undefined1 local_220;
  undefined1 local_21f;
  byte local_21e;
  byte local_21d;
  byte local_21c;
  ushort local_21b;
  byte local_219;
  undefined1 local_218;
  undefined1 local_217;
  undefined2 local_216;
  uint local_214;
  undefined1 auStack_1f0 [40];
  undefined1 auStack_1c8 [40];
  undefined1 auStack_1a0 [80];
  undefined1 local_150;
  undefined1 local_14f;
  byte local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined2 local_141;
  undefined1 local_13f;
  byte local_13e;
  byte local_13d;
  byte local_13c;
  ushort local_13b;
  undefined3 local_139;
  undefined1 local_136;
  undefined1 local_135;
  uint local_134;
  ushort local_110;
  byte local_10e;
  undefined1 local_10d;
  undefined1 local_10c;
  undefined1 local_10b [3];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined1 local_100;
  undefined1 local_ff;
  byte local_fe;
  byte local_fd;
  byte local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  byte local_f9;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  uint local_f4;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  char local_80 [32];
  
  FUN_00428390(auStack_308);
  FUN_00429720(auStack_308,param_5,0x20);
  FUN_004283d0(&local_110,auStack_308);
  local_110 = local_110 & 0xfff8;
  local_f4 = local_f4 & 0x3fffffff | 0x40000000;
  FUN_00428390(auStack_308);
  FUN_00429720(auStack_308,auStack_f0,0x20);
  FUN_00429720(auStack_308,param_2,param_3);
  FUN_004283d0(&local_150,auStack_308);
  FUN_004826d0(&local_150);
  FUN_00482e40(auStack_1f0,&local_150);
  FUN_0048a0d0(&local_230,auStack_1a0);
  FUN_0048a900(auStack_a8,auStack_1f0,&local_230);
  FUN_0048a900(auStack_d0,auStack_1c8,&local_230);
  FUN_0048ac80(param_1,auStack_d0);
  FUN_0048ac80(local_80,auStack_a8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_80[0] << 7;
  FUN_00428390(auStack_308);
  FUN_00429720(auStack_308,param_1,0x20);
  FUN_00429720(auStack_308,param_4,0x20);
  FUN_00429720(auStack_308,param_2,param_3);
  FUN_004283d0(&local_230,auStack_308);
  FUN_004826d0(&local_230);
  uVar30 = (ulong)(CONCAT13(local_226,CONCAT21(local_228,local_229)) >> 7) & 0x1fffff;
  uVar20 = (ulong)(CONCAT13((undefined1)local_223,CONCAT21(local_225,local_226)) >> 4) & 0x1fffff;
  uVar50 = (ulong)(CONCAT13(local_fe,CONCAT12(local_ff,CONCAT11(local_100,local_101))) >> 6) &
           0x1fffff;
  uVar42 = (ulong)(CONCAT13(local_22b,CONCAT12(local_22c,local_22e)) >> 5) & 0x1fffff;
  uVar47 = (ulong)local_230 | ((ulong)(byte)local_22e & 0x1f) << 0x10;
  uVar29 = (ulong)local_21b | ((ulong)local_219 & 0x1f) << 0x10;
  uVar37 = (ulong)local_110 | ((ulong)local_10e & 0x1f) << 0x10;
  uVar27 = (ulong)CONCAT11(local_fa,local_fb) | ((ulong)local_f9 & 0x1f) << 0x10;
  uVar22 = (ulong)(uint3)(CONCAT12(local_229,CONCAT11(local_22a,local_22b)) >> 2) & 0x1fffff;
  uVar35 = (ulong)(CONCAT13(local_10b[0],CONCAT12(local_10c,CONCAT11(local_10d,local_10e))) >> 5) &
           0x1fffff;
  uVar41 = (ulong)((uint3)local_10b >> 2) & 0x1fffff;
  lVar34 = uVar37 * uVar22 + uVar35 * uVar42 + uVar41 * uVar47 +
           ((ulong)(uint3)(CONCAT12(local_149,CONCAT11(local_14a,local_14b)) >> 2) & 0x1fffff);
  uVar39 = (ulong)(CONCAT13(local_106,CONCAT12(local_107,CONCAT11(local_108,local_10b[2]))) >> 7) &
           0x1fffff;
  uVar46 = (ulong)(CONCAT13(local_103,CONCAT12(local_104,CONCAT11(local_105,local_106))) >> 4) &
           0x1fffff;
  lVar49 = uVar37 * uVar20 + uVar35 * uVar30 + uVar41 * uVar22 + uVar39 * uVar42 + uVar46 * uVar47 +
           ((ulong)(CONCAT13(local_143,CONCAT12(local_144,CONCAT11(local_145,local_146))) >> 4) &
           0x1fffff);
  uVar52 = (ulong)(uint3)(CONCAT12(local_101,CONCAT11(local_102,local_103)) >> 1) & 0x1fffff;
  uVar54 = (ulong)(CONCAT13(local_f6,CONCAT12(local_f7,CONCAT11(local_f8,local_f9))) >> 5) &
           0x1fffff;
  uVar59 = (ulong)(uint3)(CONCAT12((undefined1)local_f4,CONCAT11(local_f5,local_f6)) >> 2) &
           0x1fffff;
  uVar62 = (ulong)(uint3)(CONCAT12(local_221,local_223) >> 1) & 0x1fffff;
  uVar25 = (ulong)(CONCAT13(local_21e,CONCAT12(local_21f,CONCAT11(local_220,local_221))) >> 6) &
           0x1fffff;
  lVar13 = uVar37 * uVar25 + uVar35 * uVar62 + uVar41 * uVar20 + uVar39 * uVar30 + uVar46 * uVar22 +
           uVar52 * uVar42 + uVar50 * uVar47 +
           ((ulong)(CONCAT13(local_13e,CONCAT12(local_13f,local_141)) >> 6) & 0x1fffff);
  uVar23 = ((ulong)local_21e & 0xf8 | (ulong)local_21d << 8 | (ulong)local_21c << 0x10) >> 3;
  uVar43 = ((ulong)local_fe & 0xf8 | (ulong)local_fd << 8 | (ulong)local_fc << 0x10) >> 3;
  lVar14 = uVar37 * uVar29 + uVar35 * uVar23 + uVar41 * uVar25 + uVar39 * uVar62 + uVar46 * uVar20 +
           uVar52 * uVar30 + uVar50 * uVar22 + uVar43 * uVar42 + uVar27 * uVar47 +
           ((ulong)local_13b | ((ulong)(byte)local_139 & 0x1f) << 0x10);
  uVar48 = (ulong)(CONCAT13((undefined1)local_216,CONCAT12(local_217,CONCAT11(local_218,local_219)))
                  >> 5) & 0x1fffff;
  uVar57 = (ulong)(uint3)(CONCAT12((undefined1)local_214,local_216) >> 2) & 0x1fffff;
  lVar31 = uVar37 * uVar57 + uVar35 * uVar48 + uVar41 * uVar29 + uVar39 * uVar23 + uVar46 * uVar25 +
           uVar52 * uVar62 + uVar50 * uVar20 + uVar43 * uVar30 + uVar27 * uVar22 + uVar54 * uVar42 +
           uVar59 * uVar47 +
           ((ulong)(uint3)(CONCAT12((undefined1)local_134,CONCAT11(local_135,local_136)) >> 2) &
           0x1fffff);
  lVar55 = ((ulong)CONCAT11(local_14f,local_150) | ((ulong)local_14e & 0x1f) << 0x10) +
           uVar37 * uVar47;
  uVar1 = lVar55 + 0x100000;
  lVar15 = uVar37 * uVar42 + uVar35 * uVar47 + (uVar1 >> 0x15) +
           ((ulong)(CONCAT13(local_14b,CONCAT12(local_14c,CONCAT11(local_14d,local_14e))) >> 5) &
           0x1fffff);
  uVar2 = lVar14 + 0x100000;
  lVar16 = uVar37 * uVar48 + uVar35 * uVar29 + uVar41 * uVar23 + uVar39 * uVar25 + uVar46 * uVar62 +
           uVar52 * uVar20 + uVar50 * uVar30 + uVar43 * uVar22 + uVar27 * uVar42 + uVar54 * uVar47 +
           ((long)uVar2 >> 0x15) + ((ulong)(CONCAT13(local_136,local_139) >> 5) & 0x1fffff);
  uVar33 = (ulong)(local_214 >> 7);
  uVar60 = (ulong)(local_f4 >> 7);
  lVar32 = uVar35 * uVar33 + uVar41 * uVar57 + uVar39 * uVar48 + uVar46 * uVar29 + uVar52 * uVar23 +
           uVar50 * uVar25 + uVar43 * uVar62 + uVar27 * uVar20 + uVar54 * uVar30 + uVar59 * uVar22 +
           uVar60 * uVar42;
  uVar3 = lVar34 + 0x100000;
  lVar44 = uVar43 * uVar33 + uVar27 * uVar57 + uVar54 * uVar48 + uVar59 * uVar29 + uVar60 * uVar23;
  lVar51 = uVar54 * uVar33 + uVar59 * uVar57 + uVar60 * uVar48;
  lVar40 = uVar52 * uVar33 + uVar50 * uVar57 + uVar43 * uVar48 + uVar27 * uVar29 + uVar54 * uVar23 +
           uVar59 * uVar25 + uVar60 * uVar62;
  lVar17 = uVar37 * uVar30 + uVar35 * uVar22 + uVar41 * uVar42 + uVar39 * uVar47 +
           ((ulong)(CONCAT13(local_146,CONCAT12(local_147,CONCAT11(local_148,local_149))) >> 7) &
           0x1fffff) + (uVar3 >> 0x15);
  uVar4 = lVar15 + 0x100000;
  uVar5 = lVar40 + 0x100000;
  uVar6 = lVar44 + 0x100000;
  lVar24 = uVar27 * uVar33 + uVar54 * uVar57 + uVar59 * uVar48 + uVar60 * uVar29 +
           ((long)uVar6 >> 0x15);
  uVar7 = lVar51 + 0x100000;
  lVar63 = uVar59 * uVar33 + uVar60 * uVar57 + (uVar7 >> 0x15);
  lVar18 = uVar50 * uVar33 + uVar43 * uVar57 + uVar27 * uVar48 + uVar54 * uVar29 + uVar59 * uVar23 +
           uVar60 * uVar25 + ((long)uVar5 >> 0x15);
  uVar8 = uVar60 * uVar33 + 0x100000;
  uVar9 = lVar17 + 0x100000;
  lVar38 = uVar39 * uVar33 + uVar46 * uVar57 + uVar52 * uVar48 + uVar50 * uVar29 + uVar43 * uVar23 +
           uVar27 * uVar25 + uVar54 * uVar62 + uVar59 * uVar20 + uVar60 * uVar30;
  uVar10 = lVar18 + 0x100000;
  lVar44 = (lVar44 - (uVar6 & 0xffffffffffe00000)) + ((long)uVar10 >> 0x15);
  uVar6 = lVar24 + 0x100000;
  uVar26 = uVar8 >> 0x15;
  lVar51 = (lVar51 - (uVar7 & 0x7fffffffffe00000)) + ((long)uVar6 >> 0x15);
  lVar24 = lVar24 - (uVar6 & 0xffffffffffe00000);
  uVar6 = lVar63 + 0x100000;
  lVar28 = (uVar60 * uVar33 - (uVar8 & 0x7fffffffffe00000)) + (uVar6 >> 0x15);
  uVar7 = lVar38 + 0x100000;
  lVar36 = uVar46 * uVar33 + uVar52 * uVar57 + uVar50 * uVar48 + uVar43 * uVar29 + uVar27 * uVar23 +
           uVar54 * uVar25 + uVar59 * uVar62 + uVar60 * uVar20 + ((long)uVar7 >> 0x15);
  uVar8 = lVar32 + 0x100000;
  lVar63 = lVar63 - (uVar6 & 0x7fffffffffe00000);
  lVar21 = uVar41 * uVar33 + uVar39 * uVar57 + uVar46 * uVar48 + uVar52 * uVar29 + uVar50 * uVar23 +
           uVar43 * uVar25 + uVar27 * uVar62 + uVar54 * uVar20 + uVar59 * uVar30 + uVar60 * uVar22 +
           ((long)uVar8 >> 0x15);
  uVar6 = lVar49 + 0x100000;
  lVar19 = uVar37 * uVar62 + uVar35 * uVar20 + uVar41 * uVar30 + uVar39 * uVar22 + uVar46 * uVar42 +
           uVar52 * uVar47 +
           ((ulong)(uint3)(CONCAT12((undefined1)local_141,CONCAT11(local_142,local_143)) >> 1) &
           0x1fffff) + ((long)uVar6 >> 0x15);
  uVar11 = lVar19 + 0x100000;
  uVar12 = lVar13 + 0x100000;
  lVar45 = uVar37 * uVar23 + uVar35 * uVar25 + uVar41 * uVar62 + uVar39 * uVar20 + uVar46 * uVar30 +
           uVar52 * uVar22 + uVar50 * uVar42 + uVar43 * uVar47 +
           (((ulong)local_13e & 0xf8 | (ulong)local_13d << 8 | (ulong)local_13c << 0x10) >> 3) +
           ((long)uVar12 >> 0x15);
  lVar53 = (lVar44 * 0xa2c13 + ((long)uVar11 >> 0x15) + lVar13) - (uVar12 & 0xffffffffffe00000);
  uVar12 = lVar45 + 0x100000;
  lVar58 = (lVar51 * 0xa2c13 + lVar24 * 0x72d18 + lVar44 * 0x9fb67 + lVar14 + ((long)uVar12 >> 0x15)
           ) - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar31 + 0x100000;
  lVar13 = uVar37 * uVar33 + uVar35 * uVar57 + uVar41 * uVar48 + uVar39 * uVar29 + uVar46 * uVar23 +
           uVar52 * uVar25 + uVar50 * uVar62 + uVar43 * uVar20 + uVar27 * uVar30 + uVar54 * uVar22 +
           uVar59 * uVar42 + uVar60 * uVar47 + (ulong)(local_134 >> 7) + ((long)uVar2 >> 0x15);
  uVar20 = lVar16 + 0x100000;
  lVar61 = (lVar28 * 0xa2c13 + lVar63 * 0x72d18 + lVar51 * 0x9fb67 + lVar24 * -0xf39ad +
            lVar44 * 0x215d1 + lVar31 + ((long)uVar20 >> 0x15)) - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar58 + 0x100000;
  lVar56 = (lVar63 * 0xa2c13 + lVar51 * 0x72d18 + lVar24 * 0x9fb67 + lVar44 * -0xf39ad + lVar16 +
           ((long)uVar2 >> 0x15)) - (uVar20 & 0xffffffffffe00000);
  uVar20 = lVar13 + 0x100000;
  lVar14 = ((lVar32 + uVar26 * 0x72d18) - (uVar8 & 0xffffffffffe00000)) + lVar28 * 0x9fb67 +
           lVar63 * -0xf39ad + lVar51 * 0x215d1 + lVar24 * -0xa6f7d + ((long)uVar20 >> 0x15);
  uVar8 = lVar21 + 0x100000;
  uVar22 = lVar14 + 0x100000;
  lVar31 = ((lVar21 + uVar26 * 0x9fb67) - (uVar8 & 0xffffffffffe00000)) + lVar28 * -0xf39ad +
           lVar63 * 0x215d1 + lVar51 * -0xa6f7d + ((long)uVar22 >> 0x15);
  uVar23 = lVar36 + 0x100000;
  lVar16 = ((lVar40 + uVar26 * -0xa6f7d) - (uVar5 & 0xffffffffffe00000)) + ((long)uVar23 >> 0x15);
  lVar21 = ((lVar38 + uVar26 * -0xf39ad) - (uVar7 & 0xffffffffffe00000)) + ((long)uVar8 >> 0x15) +
           lVar28 * 0x215d1 + lVar63 * -0xa6f7d;
  uVar5 = lVar21 + 0x100000;
  lVar36 = ((lVar36 + uVar26 * 0x215d1) - (uVar23 & 0xffffffffffe00000)) + lVar28 * -0xa6f7d +
           ((long)uVar5 >> 0x15);
  uVar7 = lVar16 + 0x100000;
  lVar18 = (lVar18 - (uVar10 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15);
  uVar8 = lVar61 + 0x100000;
  lVar13 = ((uVar26 * 0xa2c13 + lVar28 * 0x72d18 + lVar63 * 0x9fb67 + lVar51 * -0xf39ad +
             lVar24 * 0x215d1 + lVar44 * -0xa6f7d + lVar13) - (uVar20 & 0xffffffffffe00000)) +
           ((long)uVar8 >> 0x15);
  uVar10 = lVar13 + 0x100000;
  lVar14 = (lVar14 - (uVar22 & 0xffffffffffe00000)) + ((long)uVar10 >> 0x15);
  uVar20 = lVar31 + 0x100000;
  lVar63 = (lVar21 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar20 >> 0x15);
  lVar31 = lVar31 - (uVar20 & 0xffffffffffe00000);
  uVar5 = lVar36 + 0x100000;
  lVar16 = (lVar16 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar36 = lVar36 - (uVar5 & 0xffffffffffe00000);
  uVar5 = lVar56 + 0x100000;
  lVar51 = (lVar61 + lVar18 * -0xa6f7d + ((long)uVar5 >> 0x15)) - (uVar8 & 0xffffffffffe00000);
  uVar7 = lVar53 + 0x100000;
  lVar24 = ((lVar24 * 0xa2c13 + lVar44 * 0x72d18 + lVar45) - (uVar12 & 0xffffffffffe00000)) +
           ((long)uVar7 >> 0x15);
  uVar8 = lVar24 + 0x100000;
  lVar21 = (lVar18 * -0xf39ad + lVar16 * 0x215d1 + lVar36 * -0xa6f7d + lVar58 +
           ((long)uVar8 >> 0x15)) - (uVar2 & 0xffffffffffe00000);
  lVar38 = (lVar55 - (uVar1 & 0xfffffe00000)) + lVar14 * 0xa2c13;
  uVar1 = lVar38 + 0x100000;
  lVar15 = (lVar15 - (uVar4 & 0xffffffffffe00000)) + lVar14 * 0x72d18 + lVar31 * 0xa2c13 +
           ((long)uVar1 >> 0x15);
  lVar45 = ((lVar18 * 0x72d18 + lVar16 * 0x9fb67 + lVar36 * -0xf39ad + lVar53) -
           (uVar7 & 0xffffffffffe00000)) + lVar63 * 0x215d1 + lVar31 * -0xa6f7d;
  lVar32 = ((lVar34 + (uVar4 >> 0x15)) - (uVar3 & 0xffffffffffe00000)) + lVar14 * 0x9fb67 +
           lVar63 * 0xa2c13 + lVar31 * 0x72d18;
  lVar28 = ((lVar49 + ((long)uVar9 >> 0x15)) - (uVar6 & 0xffffffffffe00000)) + lVar16 * 0xa2c13 +
           lVar36 * 0x72d18 + lVar14 * 0x215d1 + lVar63 * 0x9fb67 + lVar31 * -0xf39ad;
  uVar2 = lVar45 + 0x100000;
  uVar3 = lVar32 + 0x100000;
  lVar34 = ((lVar18 * 0x9fb67 + lVar16 * -0xf39ad + lVar36 * 0x215d1 + lVar24) -
           (uVar8 & 0xffffffffffe00000)) + lVar63 * -0xa6f7d + ((long)uVar2 >> 0x15);
  uVar4 = lVar34 + 0x100000;
  uVar6 = lVar21 + 0x100000;
  lVar24 = (lVar18 * 0x215d1 + lVar16 * -0xa6f7d + lVar56 + ((long)uVar6 >> 0x15)) -
           (uVar5 & 0xffffffffffe00000);
  uVar5 = lVar51 + 0x100000;
  lVar49 = (lVar13 - (uVar10 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar7 = lVar15 + 0x100000;
  uVar8 = lVar24 + 0x100000;
  uVar10 = lVar49 + 0x100000;
  lVar44 = (long)uVar10 >> 0x15;
  lVar13 = (lVar17 - (uVar9 & 0xffffffffffe00000)) + lVar36 * 0xa2c13 + lVar14 * -0xf39ad +
           lVar63 * 0x72d18 + lVar31 * 0x9fb67 + ((long)uVar3 >> 0x15);
  uVar9 = lVar13 + 0x100000;
  uVar12 = lVar28 + 0x100000;
  uVar22 = (lVar38 - (uVar1 & 0xffffffffffe00000)) + lVar44 * 0xa2c13;
  uVar20 = ((lVar15 + lVar44 * 0x72d18) - (uVar7 & 0xffffffffffe00000)) + ((long)uVar22 >> 0x15);
  lVar14 = ((lVar19 + lVar18 * 0xa2c13 + lVar16 * 0x72d18 + lVar36 * 0x9fb67) -
           (uVar11 & 0xffffffffffe00000)) + lVar14 * -0xa6f7d + lVar63 * -0xf39ad + lVar31 * 0x215d1
           + ((long)uVar12 >> 0x15);
  uVar1 = lVar14 + 0x100000;
  uVar3 = ((lVar32 + lVar44 * 0x9fb67) - (uVar3 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15) +
          ((long)uVar20 >> 0x15);
  uVar7 = ((lVar13 + lVar44 * -0xf39ad) - (uVar9 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  uVar9 = ((lVar28 + lVar44 * 0x215d1) - (uVar12 & 0xffffffffffe00000)) + ((long)uVar9 >> 0x15) +
          ((long)uVar7 >> 0x15);
  uVar11 = ((lVar14 + lVar44 * -0xa6f7d) - (uVar1 & 0xffffffffffe00000)) + ((long)uVar9 >> 0x15);
  uVar1 = (lVar45 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15) + ((long)uVar11 >> 0x15);
  uVar2 = (lVar34 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar4 = (lVar21 - (uVar6 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15) + ((long)uVar2 >> 0x15);
  uVar6 = (lVar24 - (uVar8 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar5 = ((lVar51 + ((long)uVar8 >> 0x15)) - (uVar5 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15);
  uVar8 = (lVar49 - (uVar10 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar34 = (long)uVar8 >> 0x15;
  lVar49 = (uVar22 & 0x1fffff) + lVar34 * 0xa2c13;
  uVar10 = (uVar20 & 0x1fffff) + lVar34 * 0x72d18 + (lVar49 >> 0x15);
  *(char *)(param_1 + 0x21) = (char)((ulong)lVar49 >> 8);
  *(char *)(param_1 + 0x20) = (char)lVar49;
  *(byte *)(param_1 + 0x22) =
       (byte)((ulong)lVar49 >> 0x10) & 0x1f | (byte)(((uint)uVar10 & 0x1fffff) << 5);
  uVar3 = (uVar3 & 0x1fffff) + lVar34 * 0x9fb67 + ((long)uVar10 >> 0x15);
  uVar7 = (uVar7 & 0x1fffff) + lVar34 * -0xf39ad + ((long)uVar3 >> 0x15);
  *(char *)(param_1 + 0x23) = (char)(uVar10 >> 3);
  *(char *)(param_1 + 0x24) = (char)(uVar10 >> 0xb);
  *(byte *)(param_1 + 0x25) =
       (byte)((uint)uVar10 >> 0x13) & 3 | (byte)(((uint)uVar3 & 0x1fffff) << 2);
  *(char *)(param_1 + 0x26) = (char)(uVar3 >> 6);
  *(byte *)(param_1 + 0x27) =
       (byte)((uint)uVar3 >> 0xe) & 0x7f | (byte)(((uint)uVar7 & 0x1fffff) << 7);
  uVar3 = (uVar9 & 0x1fffff) + lVar34 * 0x215d1 + ((long)uVar7 >> 0x15);
  uVar9 = (uVar11 & 0x1fffff) + lVar34 * -0xa6f7d + ((long)uVar3 >> 0x15);
  *(char *)(param_1 + 0x28) = (char)(uVar7 >> 1);
  *(char *)(param_1 + 0x29) = (char)(uVar7 >> 9);
  *(byte *)(param_1 + 0x2a) =
       (byte)((uint)uVar7 >> 0x11) & 0xf | (byte)(((uint)uVar3 & 0x1fffff) << 4);
  *(char *)(param_1 + 0x2b) = (char)(uVar3 >> 4);
  *(char *)(param_1 + 0x2c) = (char)(uVar3 >> 0xc);
  *(byte *)(param_1 + 0x2d) =
       (byte)((uint)uVar3 >> 0x14) & 1 | (byte)(((uint)uVar9 & 0x1fffff) << 1);
  *(char *)(param_1 + 0x2e) = (char)(uVar9 >> 7);
  uVar1 = (uVar1 & 0x1fffff) + ((long)uVar9 >> 0x15);
  *(byte *)(param_1 + 0x2f) =
       (byte)((uint)uVar9 >> 0xf) & 0x3f | (byte)(((uint)uVar1 & 0x1fffff) << 6);
  *(char *)(param_1 + 0x30) = (char)(uVar1 >> 2);
  *(char *)(param_1 + 0x31) = (char)(uVar1 >> 10);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(byte *)(param_1 + 0x32) = (byte)((uint)uVar1 >> 0x12) & 7 | (byte)((int)uVar2 << 3);
  *(char *)(param_1 + 0x33) = (char)(uVar2 >> 5);
  *(char *)(param_1 + 0x34) = (char)(uVar2 >> 0xd);
  lVar34 = (uVar4 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(char *)(param_1 + 0x36) = (char)((ulong)lVar34 >> 8);
  uVar1 = (uVar6 & 0x1fffff) + (lVar34 >> 0x15);
  *(char *)(param_1 + 0x35) = (char)lVar34;
  *(byte *)(param_1 + 0x37) =
       (byte)((ulong)lVar34 >> 0x10) & 0x1f | (byte)(((uint)uVar1 & 0x1fffff) << 5);
  *(char *)(param_1 + 0x38) = (char)(uVar1 >> 3);
  uVar2 = (uVar5 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(char *)(param_1 + 0x39) = (char)(uVar1 >> 0xb);
  *(byte *)(param_1 + 0x3a) =
       (byte)((uint)uVar1 >> 0x13) & 3 | (byte)(((uint)uVar2 & 0x1fffff) << 2);
  *(char *)(param_1 + 0x3b) = (char)(uVar2 >> 6);
  uVar1 = (uVar8 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(param_1 + 0x3c) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar1 << 7);
  *(char *)(param_1 + 0x3d) = (char)(uVar1 >> 1);
  *(char *)(param_1 + 0x3e) = (char)(uVar1 >> 9);
  *(char *)(param_1 + 0x3f) = (char)(uVar1 >> 0x11);
  FUN_004006a0(auStack_308,0xd8);
  FUN_004006a0(&local_150,0x40);
  FUN_004006a0(&local_110,0x40);
  return 1;
}


