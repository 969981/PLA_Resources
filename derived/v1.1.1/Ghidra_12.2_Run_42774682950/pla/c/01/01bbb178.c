/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbb178; name: FUN_01bbb178
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bbb178(undefined1 param_1 [16],ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  code *pcVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  int iVar41;
  int iVar42;
  ulong uVar43;
  undefined8 uVar44;
  long lVar45;
  long *plVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  long *plVar51;
  undefined8 uVar52;
  long lVar53;
  byte bVar54;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar55;
  undefined1 extraout_var_09;
  undefined1 uVar56;
  undefined1 extraout_var_10;
  undefined1 uVar57;
  undefined1 extraout_var_11;
  undefined1 uVar58;
  undefined1 extraout_var_12;
  undefined1 uVar59;
  undefined1 extraout_var_13;
  undefined1 uVar60;
  undefined1 extraout_var_14;
  undefined1 uVar61;
  undefined1 extraout_var_15;
  undefined1 uVar62;
  undefined1 extraout_var_16;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  long *local_430;
  long *local_428;
  undefined1 *local_420;
  code *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  ulong local_400 [12];
  undefined4 local_3a0;
  undefined1 local_39c;
  long *local_388;
  undefined8 local_380 [2];
  long local_370;
  long lStack_368;
  undefined8 local_360;
  char *local_358;
  undefined8 local_350;
  long *local_348;
  undefined4 local_340;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  long local_2f8;
  long *local_2f0;
  char *pcStack_2e8;
  undefined8 local_2e0;
  long *local_2d8;
  long *local_2b8;
  char local_280 [8];
  long local_278;
  long local_270;
  long local_268;
  long *local_260;
  long *local_240;
  undefined1 local_230;
  undefined4 local_22c;
  long *local_220;
  long *local_218;
  undefined1 *local_210;
  code *local_208;
  long *local_1c8;
  undefined1 local_1a4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined1 *local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  char local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  long local_68;
  
  if (*(char *)(param_2 + 0x3a8) == '\0') {
    return;
  }
  uVar43 = FUN_01bbc258();
  if ((uVar43 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x3a8) = 0;
    FUN_01bb86a0(param_2 + 0x370,(long)*(int *)(param_2 + 0x36c));
    return;
  }
  FUN_009c69bc(&local_430,*param_3);
  puVar38 = PTR_DAT_04379660;
  plVar51 = local_430 + 0x18;
  lVar50 = local_430[0x19];
  uVar56 = (undefined1)((ulong)lVar50 >> 8);
  uVar57 = (undefined1)((ulong)lVar50 >> 0x10);
  uVar58 = (undefined1)((ulong)lVar50 >> 0x18);
  uVar59 = (undefined1)((ulong)lVar50 >> 0x20);
  uVar60 = (undefined1)((ulong)lVar50 >> 0x28);
  uVar61 = (undefined1)((ulong)lVar50 >> 0x30);
  uVar62 = (undefined1)((ulong)lVar50 >> 0x38);
  uVar77 = (undefined4)_UNK_03889a88;
  uVar78 = (undefined4)((ulong)_UNK_03889a88 >> 0x20);
  fVar79 = (float)*plVar51;
  fVar71 = fVar79 * (float)_DAT_03889ac0;
  fVar81 = (float)((ulong)*plVar51 >> 0x20);
  fVar72 = fVar81 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar75 = (float)lVar50 * (float)_UNK_03889ac8;
  fVar76 = (float)((ulong)lVar50 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar22._8_4_ = uVar77;
  auVar22._0_8_ = _DAT_03889a80;
  auVar22._12_4_ = uVar78;
  uVar52 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
  fVar82 = (float)((ulong)uVar52 >> 0x20);
  auVar15._4_4_ = fVar72;
  auVar15._0_4_ = fVar71;
  auVar15._8_4_ = fVar75;
  auVar15._12_4_ = fVar76;
  uVar65 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a580);
  auVar23._8_4_ = uVar77;
  auVar23._0_8_ = _DAT_03889a80;
  auVar23._12_4_ = uVar78;
  uVar27 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a680);
  fVar74 = (float)((ulong)uVar27 >> 0x20);
  auVar16._4_4_ = fVar72;
  auVar16._0_4_ = fVar71;
  auVar16._8_4_ = fVar75;
  auVar16._12_4_ = fVar76;
  uVar69 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a6c8);
  fVar80 = (float)((ulong)DAT_0388a618 >> 0x20);
  auVar17._4_4_ = fVar72;
  auVar17._0_4_ = fVar71;
  auVar17._8_4_ = fVar75;
  auVar17._12_4_ = fVar76;
  uVar83 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
  auVar18._4_4_ = fVar72;
  auVar18._0_4_ = fVar71;
  auVar18._8_4_ = fVar75;
  auVar18._12_4_ = fVar76;
  uVar84 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
  auVar19._4_4_ = fVar72;
  auVar19._0_4_ = fVar71;
  auVar19._8_4_ = fVar75;
  auVar19._12_4_ = fVar76;
  uVar85 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a790);
  fVar64 = (float)_DAT_03889ad0;
  fVar66 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar67 = (float)_UNK_03889ad8;
  fVar68 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar20._4_4_ = fVar72;
  auVar20._0_4_ = fVar71;
  auVar20._8_4_ = fVar71;
  auVar20._12_4_ = fVar72;
  uVar21 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a648);
  auVar24._8_4_ = uVar77;
  auVar24._0_8_ = _DAT_03889a80;
  auVar24._12_4_ = uVar78;
  uVar25 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
  fVar70 = (float)((ulong)uVar25 >> 0x20);
  auVar7[9] = uVar56;
  auVar7._0_9_ = *(unkbyte9 *)plVar51;
  auVar7[10] = uVar57;
  auVar7[0xb] = uVar58;
  auVar7[0xc] = uVar59;
  auVar7[0xd] = uVar60;
  auVar7[0xe] = uVar61;
  auVar7[0xf] = uVar62;
  uVar44 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
  fVar73 = (float)((ulong)uVar44 >> 0x20);
  fVar63 = (fVar71 * (float)uVar52 + fVar64 * (float)uVar65 * (float)DAT_0388a618 +
           fVar64 * (float)uVar25 * (float)uVar83) - (float)uVar27 * (float)uVar84;
  fVar72 = (fVar72 * fVar82 + fVar66 * (float)((ulong)uVar65 >> 0x20) * fVar80 +
           fVar66 * fVar70 * (float)((ulong)uVar83 >> 0x20)) -
           fVar74 * (float)((ulong)uVar84 >> 0x20);
  fVar75 = (fVar75 * (float)uVar52 + fVar67 * (float)uVar27 * (float)uVar69 +
           fVar67 * (float)uVar21 * (float)DAT_0388a618) - (float)uVar25 * (float)uVar85;
  fVar76 = (fVar76 * fVar82 + fVar68 * fVar74 * (float)((ulong)uVar69 >> 0x20) +
           fVar68 * (float)((ulong)uVar21 >> 0x20) * fVar80) -
           fVar70 * (float)((ulong)uVar85 >> 0x20);
  auVar10._4_4_ = fVar72;
  auVar10._0_4_ = fVar63;
  auVar10._8_4_ = fVar75;
  auVar10._12_4_ = fVar76;
  uVar83 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
  auVar8[9] = uVar56;
  auVar8._0_9_ = *(unkbyte9 *)plVar51;
  auVar8[10] = uVar57;
  auVar8[0xb] = uVar58;
  auVar8[0xc] = uVar59;
  auVar8[0xd] = uVar60;
  auVar8[0xe] = uVar61;
  auVar8[0xf] = uVar62;
  uVar21 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a680);
  fVar74 = (float)((ulong)uVar21 >> 0x20);
  auVar11._4_4_ = fVar72;
  auVar11._0_4_ = fVar63;
  auVar11._8_4_ = fVar75;
  auVar11._12_4_ = fVar76;
  uVar25 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6c8);
  auVar12._4_4_ = fVar72;
  auVar12._0_4_ = fVar63;
  auVar12._8_4_ = fVar75;
  auVar12._12_4_ = fVar76;
  uVar65 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a680);
  auVar13._4_4_ = fVar72;
  auVar13._0_4_ = fVar63;
  auVar13._8_4_ = fVar75;
  auVar13._12_4_ = fVar76;
  uVar27 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
  auVar9[9] = uVar56;
  auVar9._0_9_ = *(unkbyte9 *)plVar51;
  auVar9[10] = uVar57;
  auVar9[0xb] = uVar58;
  auVar9[0xc] = uVar59;
  auVar9[0xd] = uVar60;
  auVar9[0xe] = uVar61;
  auVar9[0xf] = uVar62;
  uVar69 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
  auVar26._4_4_ = fVar72;
  auVar26._0_4_ = fVar63;
  auVar26._8_4_ = fVar63;
  auVar26._12_4_ = fVar72;
  uVar52 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a648);
  fVar70 = (float)((ulong)uVar69 >> 0x20);
  fVar82 = fVar79 * (float)uVar52;
  fVar71 = fVar81 * (float)((ulong)uVar52 >> 0x20);
  auVar14._4_4_ = fVar72;
  auVar14._0_4_ = fVar63;
  auVar14._8_4_ = fVar75;
  auVar14._12_4_ = fVar76;
  uVar52 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a790);
  bVar55 = (byte)_UNK_038897c8;
  uVar5 = (ulong)_UNK_038897c8 >> 8;
  uVar32 = (ulong)_UNK_038897c8 >> 0x10;
  uVar33 = (ulong)_UNK_038897c8 >> 0x18;
  uVar34 = (ulong)_UNK_038897c8 >> 0x20;
  uVar35 = (ulong)_UNK_038897c8 >> 0x28;
  uVar36 = (ulong)_UNK_038897c8 >> 0x30;
  uVar37 = (ulong)_UNK_038897c8 >> 0x38;
  bVar54 = (byte)_DAT_038897c0;
  uVar43 = (ulong)_DAT_038897c0 >> 8;
  uVar47 = (ulong)_DAT_038897c0 >> 0x10;
  uVar48 = (ulong)_DAT_038897c0 >> 0x18;
  uVar6 = (ulong)_DAT_038897c0 >> 0x20;
  uVar29 = (ulong)_DAT_038897c0 >> 0x28;
  uVar30 = (ulong)_DAT_038897c0 >> 0x30;
  uVar31 = (ulong)_DAT_038897c0 >> 0x38;
  local_2f0 = (long *)0xa27c2081213afc6e;
  pcStack_2e8 = "poke_spawn_distance";
  local_2e0 = 0x13;
  local_2d8 = (long *)0x0;
  fVar79 = ((float)uVar44 * fVar63 + fVar64 * fVar79 * (float)uVar83 +
           fVar64 * (float)uVar69 * (float)uVar65) - (float)uVar21 * (float)uVar27;
  fVar81 = (fVar73 * fVar72 + fVar66 * fVar81 * (float)((ulong)uVar83 >> 0x20) +
           fVar66 * fVar70 * (float)((ulong)uVar65 >> 0x20)) -
           fVar74 * (float)((ulong)uVar27 >> 0x20);
  fVar63 = ((float)uVar44 * fVar75 + fVar67 * (float)uVar21 * (float)uVar25 + fVar67 * fVar82) -
           (float)uVar69 * (float)uVar52;
  fVar82 = (fVar73 * fVar76 + fVar68 * fVar74 * (float)((ulong)uVar25 >> 0x20) +
           fVar68 * (float)(CONCAT17((char)((uint)fVar71 >> 0x18),
                                     CONCAT16((char)((uint)fVar71 >> 0x10),
                                              CONCAT15((char)((uint)fVar71 >> 8),
                                                       CONCAT14(SUB41(fVar71,0),fVar82)))) >> 0x20))
           - fVar70 * (float)((ulong)uVar52 >> 0x20);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar41 = __cxa_guard_acquire(PTR_DAT_04379660), iVar41 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar40 = PTR_DAT_04379670;
  puVar39 = PTR_DAT_04379668;
  fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & (byte)uVar33,
                           CONCAT12((byte)((uint)fVar63 >> 0x10) & (byte)uVar32,
                                    CONCAT11((byte)((uint)fVar63 >> 8) & (byte)uVar5,
                                             SUB41(fVar63,0) & bVar55)));
  fVar79 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & (byte)uVar48,
                           CONCAT12((byte)((uint)fVar79 >> 0x10) & (byte)uVar47,
                                    CONCAT11((byte)((uint)fVar79 >> 8) & (byte)uVar43,
                                             SUB41(fVar79,0) & bVar54)));
  lVar50 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar50;
  uVar43 = *(ulong *)(lVar50 + 0x60);
  fVar71 = 0.0;
  if (uVar43 != 0) {
    uVar47 = uVar43 - (uVar43 >> 1 & 0x5555555555555555);
    uVar47 = (uVar47 & 0x3333333333333333) + (uVar47 >> 2 & 0x3333333333333333);
    uVar47 = (uVar47 + (uVar47 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar47 < 2) {
      uVar48 = uVar43 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar5 = 0;
      if (uVar43 != 0) {
        uVar5 = 0xc6a9fa08d7874415 / uVar43;
      }
      uVar48 = 0xc6a9fa08d7874415;
      if (uVar43 < 0xc6a9fa08d7874416) {
        uVar48 = 0xc6a9fa08d7874415 - uVar5 * uVar43;
      }
    }
    plVar51 = *(long **)(*(long *)(lVar50 + 0x58) + uVar48 * 8);
    if ((plVar51 != (long *)0x0) && (plVar51 = (long *)*plVar51, plVar51 != (long *)0x0)) {
      if (uVar47 < 2) {
        do {
          if (plVar51[1] == 0xc6a9fa08d7874415) {
            if (plVar51[2] == -0x395605f72878bbeb) goto LAB_01bbb3f4;
          }
          else if ((plVar51[1] & uVar43 - 1) != uVar48) break;
          plVar51 = (long *)*plVar51;
        } while (plVar51 != (long *)0x0);
      }
      else {
        do {
          uVar47 = plVar51[1];
          if (uVar47 == 0xc6a9fa08d7874415) {
            if (plVar51[2] == -0x395605f72878bbeb) goto LAB_01bbb3f4;
          }
          else {
            if (uVar43 <= uVar47) {
              uVar5 = 0;
              if (uVar43 != 0) {
                uVar5 = uVar47 / uVar43;
              }
              uVar47 = uVar47 - uVar5 * uVar43;
            }
            if (uVar47 != uVar48) break;
          }
          plVar51 = (long *)*plVar51;
        } while (plVar51 != (long *)0x0);
      }
    }
  }
LAB_01bbb434:
  fVar71 = -fVar71;
  fVar81 = param_1._4_4_ +
           (float)(CONCAT17((byte)((uint)fVar81 >> 0x18) & (byte)uVar31,
                            CONCAT16((byte)((uint)fVar81 >> 0x10) & (byte)uVar30,
                                     CONCAT15((byte)((uint)fVar81 >> 8) & (byte)uVar29,
                                              CONCAT14(SUB41(fVar81,0) & (byte)uVar6,fVar79)))) >>
                  0x20) * fVar71;
  fVar82 = param_1._12_4_ +
           (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) & (byte)uVar37,
                            CONCAT16((byte)((uint)fVar82 >> 0x10) & (byte)uVar36,
                                     CONCAT15((byte)((uint)fVar82 >> 8) & (byte)uVar35,
                                              CONCAT14(SUB41(fVar82,0) & (byte)uVar34,fVar63)))) >>
                  0x20) * fVar71;
  *(ulong *)(param_2 + 0x5c8) =
       CONCAT17((char)((uint)fVar82 >> 0x18),
                CONCAT16((char)((uint)fVar82 >> 0x10),
                         CONCAT15((char)((uint)fVar82 >> 8),
                                  CONCAT14(SUB41(fVar82,0),param_1._8_4_ + fVar63 * fVar71))));
  *(ulong *)(param_2 + 0x5c0) =
       CONCAT17((char)((uint)fVar81 >> 0x18),
                CONCAT16((char)((uint)fVar81 >> 0x10),
                         CONCAT15((char)((uint)fVar81 >> 8),
                                  CONCAT14(SUB41(fVar81,0),param_1._0_4_ + fVar79 * fVar71))));
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  if (local_430 != (long *)0x0) {
    lVar50 = local_430[0xb];
    piVar2 = (int *)(lVar50 + 0xc);
    do {
      iVar41 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar41 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar41 + -1 == 0) {
      *(undefined8 *)(lVar50 + 0x18) = 0;
      (**(code **)(*local_430 + 0x20))();
    }
  }
  uVar52 = *param_3;
  local_2f0 = (long *)&DAT_c7bf1ae08e414e46;
  pcStack_2e8 = "poke_spawn_navmesh_radius";
  local_2e0 = 0x19;
  local_2d8 = (long *)0x0;
  if (((*puVar38 & 1) == 0) && (iVar41 = __cxa_guard_acquire(PTR_DAT_04379660), iVar41 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar50 = *(long *)puVar39;
  *(long *)puVar40 = lVar50;
  uVar43 = *(ulong *)(lVar50 + 0x60);
  uVar56 = 0;
  if (uVar43 != 0) {
    uVar47 = uVar43 - (uVar43 >> 1 & 0x5555555555555555);
    uVar47 = (uVar47 & 0x3333333333333333) + (uVar47 >> 2 & 0x3333333333333333);
    uVar47 = (uVar47 + (uVar47 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar47 < 2) {
      uVar48 = uVar43 - 1 & 0xc6a9fa08d7874415;
    }
    else if (uVar43 < 0xc6a9fa08d7874416) {
      uVar48 = 0;
      if (uVar43 != 0) {
        uVar48 = 0xc6a9fa08d7874415 / uVar43;
      }
      uVar48 = 0xc6a9fa08d7874415 - uVar48 * uVar43;
    }
    else {
      uVar48 = 0xc6a9fa08d7874415;
    }
    plVar51 = *(long **)(*(long *)(lVar50 + 0x58) + uVar48 * 8);
    if ((plVar51 != (long *)0x0) && (plVar51 = (long *)*plVar51, plVar51 != (long *)0x0)) {
      if (uVar47 < 2) {
        do {
          if (plVar51[1] == 0xc6a9fa08d7874415) {
            if (plVar51[2] == -0x395605f72878bbeb) goto LAB_01bbb548;
          }
          else if ((plVar51[1] & uVar43 - 1) != uVar48) break;
          plVar51 = (long *)*plVar51;
        } while (plVar51 != (long *)0x0);
      }
      else {
        do {
          uVar47 = plVar51[1];
          if (uVar47 == 0xc6a9fa08d7874415) {
            if (plVar51[2] == -0x395605f72878bbeb) goto LAB_01bbb548;
          }
          else {
            if (uVar43 <= uVar47) {
              uVar6 = 0;
              if (uVar43 != 0) {
                uVar6 = uVar47 / uVar43;
              }
              uVar47 = uVar47 - uVar6 * uVar43;
            }
            if (uVar47 != uVar48) break;
          }
          plVar51 = (long *)*plVar51;
        } while (plVar51 != (long *)0x0);
      }
    }
  }
LAB_01bbb588:
  FUN_01a8b11c(local_a0,uVar56,uVar52,(undefined8 *)(param_2 + 0x5c0));
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  if (local_a0[0] == '\0') {
    *(undefined1 *)(param_2 + 0x3a8) = 0;
    FUN_01bb86a0(param_2 + 0x370,(long)*(int *)(param_2 + 0x36c));
  }
  else {
    *(undefined8 *)(param_2 + 0x5c8) = local_88;
    *(undefined8 *)(param_2 + 0x5c0) = local_90;
    if ((*(long *)(param_2 + 0x2f8) != 0) && (FUN_009acf14(&local_a8), local_a8 != (long *)0x0)) {
      FUN_01bbf298(param_2 + 0x580,*(undefined8 *)(param_2 + 0x580));
      uVar21 = _UNK_03888fc8;
      uVar52 = _DAT_03888fc0;
      lVar50 = 0;
      *(undefined8 *)(param_2 + 0x640) = 0;
      do {
        lVar49 = param_2 + 0x350 + lVar50 * 0x70;
        local_118 = *(undefined8 *)(lVar49 + 0x60);
        local_110 = *(undefined8 *)(lVar49 + 0x68);
        local_108 = *(undefined8 *)(lVar49 + 0x70);
        local_100 = *(undefined8 *)(lVar49 + 0x78);
        local_f8 = *(undefined8 *)(lVar49 + 0x80);
        local_f0 = *(undefined8 *)(lVar49 + 0x88);
        local_e8 = *(undefined8 *)(lVar49 + 0x90);
        local_e0 = *(undefined8 *)(lVar49 + 0x98);
        local_d8 = *(undefined8 *)(lVar49 + 0xa0);
        local_d0 = *(undefined8 *)(lVar49 + 0xa8);
        local_c8 = *(undefined8 *)(lVar49 + 0xb0);
        local_c0 = *(undefined8 *)(lVar49 + 0xb8);
        local_b8 = *(undefined8 *)(lVar49 + 0xc0);
        local_b0 = *(undefined8 *)(lVar49 + 200);
        lVar49 = *(long *)(param_2 + 0x350 + lVar50 * 8 + 0x1b0);
        if ((lVar49 != 0) && ((int)local_f0 != 0x38a)) {
          FUN_009c69bc(&local_2f0,param_2);
          fVar79 = (float)((ulong)local_2f0[0x1a] >> 0x20) + (float)((ulong)uVar52 >> 0x20);
          fVar81 = (float)((ulong)local_2f0[0x1b] >> 0x20) + (float)((ulong)uVar21 >> 0x20);
          uStack_178 = CONCAT17((char)((uint)fVar81 >> 0x18),
                                CONCAT16((char)((uint)fVar81 >> 0x10),
                                         CONCAT15((char)((uint)fVar81 >> 8),
                                                  CONCAT14(SUB41(fVar81,0),
                                                           (float)local_2f0[0x1b] + (float)uVar21)))
                               );
          local_180 = CONCAT17((char)((uint)fVar79 >> 0x18),
                               CONCAT16((char)((uint)fVar79 >> 0x10),
                                        CONCAT15((char)((uint)fVar79 >> 8),
                                                 CONCAT14(SUB41(fVar79,0),
                                                          (float)local_2f0[0x1a] + (float)uVar52))))
          ;
          FUN_0098fad4(PTR_DAT_04379570);
          uStack_168 = CONCAT17(extraout_var_16,
                                CONCAT16(extraout_var_15,
                                         CONCAT15(extraout_var_14,
                                                  CONCAT14(extraout_var_13,
                                                           CONCAT13(extraout_var_12,
                                                                    CONCAT12(extraout_var_11,
                                                                             CONCAT11(
                                                  extraout_var_10,extraout_var_09)))))));
          local_170 = CONCAT17(extraout_var_08,
                               CONCAT16(extraout_var_07,
                                        CONCAT15(extraout_var_06,
                                                 CONCAT14(extraout_var_05,
                                                          CONCAT13(extraout_var_04,
                                                                   CONCAT12(extraout_var_02,
                                                                            CONCAT11(extraout_var_00
                                                                                     ,extraout_b0_01
                                                                                    )))))));
          local_160 = *(undefined8 *)PTR_DAT_0437a120;
          uStack_158 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
          local_148 = 4;
          local_140 = 0;
          local_13c = 0;
          local_138 = 0;
          local_150 = &DAT_cbf29ce484222645;
          local_144 = 0;
          local_130 = &DAT_cbf29ce484222645;
          if (local_2f0 != (long *)0x0) {
            lVar45 = local_2f0[0xb];
            piVar2 = (int *)(lVar45 + 0xc);
            do {
              iVar41 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar41 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar41 + -1 == 0) {
              *(undefined8 *)(lVar45 + 0x18) = 0;
              (**(code **)(*local_2f0 + 0x20))();
            }
          }
          FUN_0099cba0(&local_2f0);
          local_2f8 = lVar49;
          FUN_0185b304(&local_430,&local_118,1,&local_2f8);
          pcVar28 = local_208;
          local_218 = local_428;
          local_220 = local_430;
          local_210 = local_420;
          local_208 = (code *)0x0;
          if (pcVar28 != (code *)0x0) {
            (**(code **)(*(long *)pcVar28 + 0x20))();
          }
          local_208 = local_418;
          local_418 = *(code **)(param_2 + 8);
          local_430 = (long *)0x0;
          local_428 = (long *)0x0;
          local_420 = (undefined1 *)0x0;
          local_400[0] = local_400[0] & 0xffffffff00000000;
          local_410 = (undefined1 *)0x1ffffffffffffff;
          local_408 = (undefined1 *)0x0;
          FUN_01bbf8b8(local_280,&local_430);
          plVar46 = local_430;
          plVar51 = local_428;
          pcVar28 = local_418;
          if (local_430 != (long *)0x0) {
            while (local_418 = pcVar28, plVar51 != plVar46) {
              plVar1 = plVar51 + -9;
              plVar51 = plVar51 + -0x10;
              if ((long *)*plVar1 != (long *)0x0) {
                (**(code **)(*(long *)*plVar1 + 0x20))();
                pcVar28 = local_418;
              }
            }
            lVar49 = (long)local_420 - (long)plVar46;
            local_428 = plVar46;
            uVar43 = (**(code **)(*(long *)pcVar28 + 0xc0))();
            if ((uVar43 & 1) != 0) {
              lVar45 = tpidr_el0;
              if (*(char *)(lVar45 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar45 + 0x38d488) = 1;
                *(undefined8 *)(lVar45 + 0x38d478) = 0;
                *(undefined8 *)(lVar45 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar45 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar45 + 0x38d480)) {
                FUN_02bcc824(pcVar28,plVar46,lVar49,0x10);
                goto LAB_01bbb9b0;
              }
            }
            (**(code **)(*(long *)pcVar28 + 0x18))(pcVar28,plVar46,lVar49,0x10);
          }
LAB_01bbb9b0:
          local_22c = 3;
          local_230 = 1;
          local_1a4 = 0;
          FUN_009c69bc(&local_430,param_2);
          local_380[0] = *(undefined8 *)(param_2 + 0x200);
          local_340 = *(undefined4 *)(param_2 + 0x308);
          lStack_368 = local_430[0x1b];
          local_370 = local_430[0x1a];
          local_358 = "sphere";
          local_360 = 0x645fb59e96a6f998;
          local_350 = 6;
          local_348 = (long *)0x0;
          local_330 = 0;
          uStack_328 = 0;
          local_310 = 0;
          local_320 = 0;
          uStack_318 = 0;
          if (local_430 != (long *)0x0) {
            lVar49 = local_430[0xb];
            piVar2 = (int *)(lVar49 + 0xc);
            do {
              iVar41 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar41 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar41 + -1 == 0) {
              *(undefined8 *)(lVar49 + 0x18) = 0;
              (**(code **)(*local_430 + 0x20))();
            }
          }
          FUN_01bbd1b8(&local_278,local_380);
          uVar43 = *(ulong *)(param_2 + 0x640);
          if (uVar43 == *(long *)(param_2 + 0x648) * 0x40) {
            uVar44 = FUN_01bbfa94(param_2 + 0x638,uVar43 + 1);
            FUN_00bb993c(param_2 + 0x638,uVar44);
            uVar43 = *(ulong *)(param_2 + 0x640);
          }
          *(ulong *)(param_2 + 0x640) = uVar43 + 1;
          uVar47 = uVar43 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(*(long *)(param_2 + 0x638) + uVar47) =
               *(ulong *)(*(long *)(param_2 + 0x638) + uVar47) &
               (1L << (uVar43 & 0x3f) ^ 0xffffffffffffffffU);
          plVar51 = (long *)FUN_01b631b0(&local_430,*(undefined8 *)(param_2 + 8),&local_180,
                                         &local_2f0,&local_118);
          if (plVar51 != (long *)0x0) {
            lVar49 = plVar51[0xb];
            if (*(undefined8 **)(lVar49 + 0x18) == (undefined8 *)0x0) {
LAB_01bbc240:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar49 + 0x10) == 0) {
              uVar44 = (**(code **)**(undefined8 **)(lVar49 + 0x18))();
              *(undefined8 *)(lVar49 + 0x10) = uVar44;
            }
            piVar2 = (int *)(lVar49 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar49 = *(long *)(param_2 + 0x2e8);
          if ((lVar49 != 0) && (*(int *)(lVar49 + 0xc) != 0)) {
            piVar2 = (int *)(lVar49 + 0xc);
            iVar41 = *(int *)(lVar49 + 0xc);
            do {
              plVar46 = *(long **)(lVar49 + 0x10);
              if (((*PTR_DAT_043796e0 & 1) == 0) &&
                 (iVar42 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar42 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar42 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar42 != 0)) {
                  uVar44 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar44;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043796e0);
              }
              while( true ) {
                if (plVar46 == (long *)0x0) goto joined_r0x01bbbfcc;
                if (plVar46 == (long *)PTR_DAT_043796e8) break;
                plVar46 = (long *)*plVar46;
              }
              iVar42 = *piVar2;
              if (iVar42 == iVar41) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar41 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_01bbbf0c;
                lVar49 = *(long *)(lVar49 + 0x18);
                if (lVar49 != 0) {
                  FUN_019a0a88(&local_430);
                  if (local_430 == (long *)0x0) {
                    local_388 = (long *)0x0;
                  }
                  else {
                    FUN_01b6303c(&local_388);
                    plVar46 = local_430;
                    if (local_430 != (long *)0x0) {
                      plVar1 = local_430 + 1;
                      do {
                        iVar41 = (int)*plVar1 + -1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar4) {
                          *(int *)plVar1 = iVar41;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar41 == 0) {
                        local_430[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar41 = __cxa_guard_acquire(PTR_DAT_04379498), iVar41 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar45 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar45;
                        local_68 = *plVar46;
                        FUN_02a44274(lVar45 + 0xd8,&local_68);
                      }
                    }
                    if (local_388 != (long *)0x0) {
                      local_430 = plVar51;
                      if (plVar51 != (long *)0x0) {
                        lVar45 = plVar51[0xb];
                        if (*(undefined8 **)(lVar45 + 0x18) == (undefined8 *)0x0) goto LAB_01bbc240;
                        if (*(long *)(lVar45 + 0x10) == 0) {
                          uVar44 = (**(code **)**(undefined8 **)(lVar45 + 0x18))();
                          *(undefined8 *)(lVar45 + 0x10) = uVar44;
                        }
                        piVar2 = (int *)(lVar45 + 0xc);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar4) {
                            *piVar2 = *piVar2 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      local_420 = &LAB_01bbfaec;
                      local_410 = &LAB_01bc069c;
                      local_418 = FUN_01bc00b4;
                      local_408 = &LAB_01bc06a8;
                      local_3a0 = 0x3f800000;
                      local_39c = 0x30;
                      local_400[0] = param_2;
                      FUN_02556868(local_388,&local_430);
                      pcVar28 = local_418;
                      if (local_418 != (code *)0x0) {
                        local_410 = (undefined1 *)0x0;
                        local_408 = (undefined1 *)0x0;
                        local_420 = (undefined1 *)0x0;
                        local_418 = (code *)0x0;
                        (*pcVar28)(local_400);
                      }
                      if (local_430 != (long *)0x0) {
                        lVar45 = local_430[0xb];
                        piVar2 = (int *)(lVar45 + 0xc);
                        do {
                          iVar41 = *piVar2;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar4) {
                            *piVar2 = iVar41 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar41 + -1 == 0) {
                          *(undefined8 *)(lVar45 + 0x18) = 0;
                          (**(code **)(*local_430 + 0x20))();
                        }
                      }
                      if (local_388 != (long *)0x0) {
                        lVar45 = local_388[0xb];
                        piVar2 = (int *)(lVar45 + 0xc);
                        do {
                          iVar41 = *piVar2;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar4) {
                            *piVar2 = iVar41 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar41 + -1 == 0) {
                          *(undefined8 *)(lVar45 + 0x18) = 0;
                          (**(code **)(*local_388 + 0x20))();
                        }
                      }
                    }
                  }
                  lVar45 = *(long *)(lVar49 + 8);
                  piVar2 = (int *)(lVar45 + 0xc);
                  do {
                    iVar41 = *piVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = iVar41 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar41 + -1 == 0) {
                    *(undefined8 *)(lVar45 + 0x18) = 0;
                    (**(code **)(*(long *)(lVar49 + -0x50) + 0x20))();
                  }
                }
                break;
              }
              ClearExclusiveLocal();
LAB_01bbbf0c:
              iVar41 = iVar42;
            } while (iVar42 != 0);
          }
joined_r0x01bbbfcc:
          if (plVar51 != (long *)0x0) {
            lVar49 = plVar51[0xb];
            piVar2 = (int *)(lVar49 + 0xc);
            do {
              iVar41 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar41 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar41 + -1 == 0) {
              *(undefined8 *)(lVar49 + 0x18) = 0;
              (**(code **)(*plVar51 + 0x20))(plVar51);
            }
          }
          if (local_348 != (long *)0x0) {
            (**(code **)(*local_348 + 0x20))();
          }
          if (local_1c8 != (long *)0x0) {
            (**(code **)(*local_1c8 + 0x20))();
          }
          if (local_208 != (code *)0x0) {
            (**(code **)(*(long *)local_208 + 0x20))();
          }
          plVar51 = local_240;
          if (local_240 != (long *)0x0) {
            plVar46 = local_240 + 1;
            do {
              iVar41 = (int)*plVar46 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar46,0x10);
              if (bVar4) {
                *(int *)plVar46 = iVar41;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar41 == 0) {
              local_240[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar41 = __cxa_guard_acquire(PTR_DAT_04379498), iVar41 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar49 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar49;
              local_430 = (long *)*plVar51;
              FUN_02a44274(lVar49 + 0xd8,&local_430);
            }
          }
          lVar49 = local_278;
          if (local_280[0] != '\0') {
            lVar45 = local_278;
            lVar53 = local_270;
            plVar51 = local_260;
            if (local_278 != 0) {
              while( true ) {
                local_278 = lVar45;
                local_260 = plVar51;
                if (lVar53 == lVar49) break;
                plVar46 = (long *)(lVar53 + -0x48);
                lVar53 = lVar53 + -0x80;
                if ((long *)*plVar46 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar46 + 0x20))();
                  lVar45 = local_278;
                  plVar51 = local_260;
                }
              }
              local_270 = lVar49;
              lVar49 = local_268 - lVar45;
              uVar43 = (**(code **)(*plVar51 + 0xc0))(plVar51);
              if ((uVar43 & 1) != 0) {
                lVar53 = tpidr_el0;
                if (*(char *)(lVar53 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar53 + 0x38d488) = 1;
                  *(undefined8 *)(lVar53 + 0x38d478) = 0;
                  *(undefined8 *)(lVar53 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar53 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar53 + 0x38d480)) {
                  FUN_02bcc824(plVar51,lVar45,lVar49,0x10);
                  goto LAB_01bbbba8;
                }
              }
              (**(code **)(*plVar51 + 0x18))(plVar51,lVar45,lVar49,0x10);
            }
LAB_01bbbba8:
            local_280[0] = '\0';
          }
          if (local_2b8 != (long *)0x0) {
            (**(code **)(*local_2b8 + 0x20))();
          }
        }
        lVar50 = lVar50 + 1;
      } while (lVar50 != 3);
      if (local_a8 != (long *)0x0) {
        lVar50 = local_a8[0xb];
        piVar2 = (int *)(lVar50 + 0xc);
        do {
          iVar41 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar41 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar41 + -1 == 0) {
          *(undefined8 *)(lVar50 + 0x18) = 0;
          (**(code **)(*local_a8 + 0x20))();
        }
      }
    }
  }
  return;
LAB_01bbb3f4:
  plVar51 = (long *)plVar51[3];
  if (plVar51 != (long *)0x0) {
    plVar46 = plVar51 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar4) {
        *(int *)plVar46 = (int)*plVar46 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00d7905c(plVar51,&local_2f0);
    fVar71 = (float)CONCAT13(extraout_var_03,
                             CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
    do {
      iVar41 = (int)*plVar46 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar4) {
        *(int *)plVar46 = iVar41;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar41 == 0) {
      (**(code **)(*plVar51 + 0x10))(plVar51);
    }
  }
  goto LAB_01bbb434;
LAB_01bbb548:
  plVar51 = (long *)plVar51[3];
  if (plVar51 != (long *)0x0) {
    plVar46 = plVar51 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar4) {
        *(int *)plVar46 = (int)*plVar46 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00d7905c(plVar51,&local_2f0);
    do {
      iVar41 = (int)*plVar46 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar4) {
        *(int *)plVar46 = iVar41;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar56 = extraout_b0_00;
    if (iVar41 == 0) {
      (**(code **)(*plVar51 + 0x10))(plVar51);
    }
  }
  goto LAB_01bbb588;
}


