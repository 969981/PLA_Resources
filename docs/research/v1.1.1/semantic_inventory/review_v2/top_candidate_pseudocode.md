# PLA 1.1.1 — top semantic candidate pseudocode

All entries below are Ghidra C pseudocode, not original game source. Domain membership is a static string/call-graph hypothesis.

## pokemon_data

### 025e26b4 — FUN_025e26b4

- Signature: undefined FUN_025e26b4(void)
- Body bytes: 14360
- String xrefs: 20 (12 unique strings)
- Candidate score: 170
- Sample strings: wildpokemon_coward_reaction_distance | wildpokemon_mild_reaction_distance | wildpokemon_random_reaction_frame_max | wildpokemon_random_reaction_frame_min | wildpokemon_random_reaction_keep_frame | wildpokemon_reaction_distance | wildpokemon_reaction_escaping_keep_time | wildpokemon_reaction_mild_keep_time | wildpokemon_reaction_warning_keep_time | wildpokemon_sleep_reaction_frame_max | wildpokemon_sleep_reaction_frame_min | wildpokemon_sleep_reaction_keep_frame
- Direct callers: [{"entry": "025dbfbc", "name": "FUN_025dbfbc", "call_count": 1}]
- Direct callees: [{"entry": "00100250", "name": "FUN_00100250", "call_count": 33}, {"entry": "033a2e00", "name": "__cxa_guard_acquire", "call_count": 33}, {"entry": "033a2e10", "name": "__cxa_guard_release", "call_count": 33}, {"entry": "00d78f50", "name": "FUN_00d78f50", "call_count": 18}, {"entry": "02a44274", "name": "FUN_02a44274", "call_count": 12}, {"entry": "025d35b8", "name": "FUN_025d35b8", "call_count": 7}, {"entry": "009c69bc", "name": "FUN_009c69bc", "call_count": 6}, {"entry": "01a75574", "name": "FUN_01a75574", "call_count": 6}, {"entry": "025e2580", "name": "FUN_025e2580", "call_count": 6}, {"entry": "00d7905c", "name": "FUN_00d7905c", "call_count": 3}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

undefined8 FUN_025e26b4(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 in_q3 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  long local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 *local_190;
  char *local_188;
  undefined8 local_180;
  long *local_178;
  long *local_170;
  undefined8 local_168;
  uint5 local_160;
  undefined3 uStack_15b;
  long *local_158;
  ulong *local_150 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  ulong local_f0 [2];
  undefined8 *local_e0 [2];
  undefined8 *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_98;
  long *local_90 [2];
  long *local_78;
  
  uVar33 = in_q3._8_8_;
  uVar27 = in_q3._0_8_;
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return 0;
  }
  FUN_00cfac20(&local_78);
  if (local_78 == (long *)0x0) {
    return 0;
  }
  FUN_01aef8b8(local_150);
  if (local_150[0] == (ulong *)0x0) {
    local_90[0] = (long *)0x0;
LAB_025e2740:
    if (local_90[0] == (long *)0x0) goto LAB_025e2abc;
LAB_025e2748:
    FUN_01aeda28(local_150,local_78);
    if (local_150[0] == (ulong *)0x0) {
      local_98 = (long *)0x0;
LAB_025e2760:
      if (local_98 == (long *)0x0) goto LAB_025e2b3c;
LAB_025e2768:
      FUN_01f2bf7c(local_f0);
      if ((char)local_f0[0] != '\0') {
        uVar22 = FUN_01f2b1e8(local_e0);
        if (((uVar22 & 1) == 0) && (uVar22 = FUN_01f32e34(local_98), (uVar22 & 1) == 0)) {
          if ((local_d0 != (undefined8 *)0x0) &&
             (FUN_00b911c4(local_150), puVar17 = local_150[0], local_150[0] != (ulong *)0x0)) {
            local_100 = 0;
            local_110 = (long *)0x0;
            uStack_108 = 0;
            uStack_fc = 0x3f800000;
            local_f8 = 0x3f800000;
            local_150[0] = (ulong *)CONCAT44(local_150[0]._4_4_,4);
            local_120 = (undefined8 *)0x0;
            uStack_118 = 0;
            local_130 = (undefined8 *)0x0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            (**(code **)(*puVar17 + 0x10))(&local_170,puVar17);
            local_190 = (undefined8 *)0x0;
            local_188 = (char *)0x0;
            FUN_00946790(&local_190,&local_170);
            plVar26 = local_170;
            if (local_170 != (long *)0x0) {
              plVar3 = local_170 + 1;
              do {
                iVar18 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar18;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 == 0) {
                local_170[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_1b0 = *plVar26;
                FUN_02a44274(lVar23 + 0xd8,&local_1b0);
              }
            }
            FUN_00bfffdc(&local_130,&local_190);
            puVar13 = local_190;
            if (local_190 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_190 + 1);
              do {
                iVar18 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 + -1 == 0) {
                local_190[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_170 = (long *)*puVar13;
                FUN_02a44274(lVar23 + 0xd8,&local_170);
              }
            }
            FUN_025e2110(param_1 + 0x260,local_150);
            (**(code **)(*puVar17 + 0x10))(&local_170,puVar17);
            local_190 = (undefined8 *)0x0;
            local_188 = (char *)0x0;
            FUN_00946790(&local_190,&local_170);
            plVar26 = local_170;
            if (local_170 != (long *)0x0) {
              plVar3 = local_170 + 1;
              do {
                iVar18 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar18;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 == 0) {
                local_170[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_1b0 = *plVar26;
                FUN_02a44274(lVar23 + 0xd8,&local_1b0);
              }
            }
            FUN_00b6081c(param_1 + 0x2d8,&local_190);
            puVar13 = local_190;
            if (local_190 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_190 + 1);
              do {
                iVar18 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar18 + -1 == 0) {
                local_190[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_170 = (long *)*puVar13;
                FUN_02a44274(lVar23 + 0xd8,&local_170);
              }
            }
            if (0 < *(int *)(param_1 + 0x2f4)) {
              *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + -1;
            }
            if (0 < *(int *)(param_1 + 0x2ec)) {
              *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + -1;
            }
            puVar14 = PTR_DAT_04379660;
            iVar18 = *(int *)(param_1 + 0x2d0);
            local_170 = (long *)0x18314d7c7ad72a27;
            local_168 = "look_wild_face_delay_frame";
            _local_160 = 0x1a;
            local_158 = (long *)0x0;
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            puVar16 = PTR_DAT_04379670;
            puVar15 = PTR_DAT_04379668;
            lVar23 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar23;
            uVar22 = *(ulong *)(lVar23 + 0x60);
            if (uVar22 != 0) {
              uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
              uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar24 < 2) {
                uVar25 = uVar22 - 1 & 0xdda9f413319d82e4;
              }
              else {
                uVar25 = 0xdda9f413319d82e4;
                if (uVar22 < 0xdda9f413319d82e5) {
                  uVar25 = 0;
                  if (uVar22 != 0) {
                    uVar25 = 0xdda9f413319d82e4 / uVar22;
                  }
                  uVar25 = 0xdda9f413319d82e4 - uVar25 * uVar22;
                }
              }
              plVar26 = *(long **)(*(long *)(lVar23 + 0x58) + uVar25 * 8);
              if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0))
              {
                if (uVar24 < 2) {
                  do {
                    if (plVar26[1] == 0xdda9f413319d82e4) {
                      if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e2f60;
                    }
                    else if ((plVar26[1] & uVar22 - 1) != uVar25) goto LAB_025e3f74;
                    plVar26 = (long *)*plVar26;
                    iVar19 = 0;
                  } while (plVar26 != (long *)0x0);
                  goto joined_r0x025e3a44;
                }
                do {
                  uVar24 = plVar26[1];
                  if (uVar24 == 0xdda9f413319d82e4) {
                    if (plVar26[2] == -0x22560becce627d1c) goto LAB_025e2f60;
                  }
                  else {
                    if (uVar22 <= uVar24) {
                      uVar7 = 0;
                      if (uVar22 != 0) {
                        uVar7 = uVar24 / uVar22;
                      }
                      uVar24 = uVar24 - uVar7 * uVar22;
                    }
                    if (uVar24 != uVar25) break;
                  }
                  plVar26 = (long *)*plVar26;
                } while (plVar26 != (long *)0x0);
              }
            }
            goto LAB_025e3f74;
          }
          local_f8 = 0x3f800000;
          local_130 = (undefined8 *)0x0;
          uStack_128 = 0;
          local_150[0] = (ulong *)((ulong)local_150[0] & 0xffffffff00000000);
          local_120 = (undefined8 *)0x0;
          uStack_118 = 0;
          local_110 = (long *)0x0;
          uStack_108 = 0;
          local_140 = local_c0;
          uStack_138 = uStack_b8;
          local_100 = 0;
          uStack_fc = 0x3f800000;
          FUN_025e2110(param_1 + 0x260,local_150);
          if (local_110 != (long *)0x0) {
            (**(code **)(*local_110 + 0x20))();
          }
          puVar13 = local_120;
          if (local_120 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_120 + 1);
            do {
              iVar18 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar18 + -1 
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 021b651c — FUN_021b651c

- Signature: undefined FUN_021b651c(void)
- Body bytes: 19076
- String xrefs: 33 (7 unique strings)
- Candidate score: 163
- Sample strings: __haxe_export_AddPokemonLoopOneshotAnimation | __haxe_export_CreateNpcPokemonObject | __haxe_export_CreateNpcPokemonObjectDirectly | __haxe_export_FindNpcPokemonComponent | __haxe_export_RemovePokemonLoopOneshotAnimation | __haxe_export_SetAllWildPokemonSuspend | __haxe_export_SetWildPokemonVisible
- Direct callers: [{"entry": "021b5fc0", "name": "FUN_021b5fc0", "call_count": 1}]
- Direct callees: [{"entry": "033a2520", "name": "strlen", "call_count": 94}, {"entry": "008f2c60", "name": "FUN_008f2c60", "call_count": 51}, {"entry": "033a23b0", "name": "memcpy", "call_count": 43}, {"entry": "033a3190", "name": "__throw_length_error", "call_count": 43}, {"entry": "02bcc824", "name": "FUN_02bcc824", "call_count": 3}, {"entry": "033a4530", "name": "__cxa_thread_atexit", "call_count": 3}, {"entry": "033a28b0", "name": "memcmp", "call_count": 2}, {"entry": "008cca50", "name": "FUN_008cca50", "call_count": 1}, {"entry": "008e8c90", "name": "FUN_008e8c90", "call_count": 1}, {"entry": "008e8ed4", "name": "FUN_008e8ed4", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_021b651c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                 undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16
                 ,undefined8 *param_17,undefined8 *param_18,undefined8 *param_19,
                 undefined8 *param_20,undefined8 *param_21,undefined8 *param_22,undefined8 *param_23
                 ,undefined8 *param_24,undefined8 *param_25,undefined8 *param_26,
                 undefined8 *param_27,undefined8 *param_28,undefined8 *param_29,undefined8 *param_30
                 ,undefined8 *param_31,undefined8 *param_32,undefined8 *param_33,
                 undefined8 *param_34,undefined8 *param_35,undefined8 *param_36,undefined8 *param_37
                 ,undefined8 *param_38,undefined8 *param_39,undefined8 *param_40,
                 undefined8 *param_41,undefined8 *param_42,undefined8 *param_43)

{
  long *plVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *psVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  size_t sVar60;
  ulong uVar61;
  long lVar62;
  ulong uVar63;
  long *plVar64;
  long lVar65;
  long *plVar66;
  string *psVar67;
  long lVar68;
  string *psVar69;
  long lVar70;
  ulong uVar71;
  string *psVar72;
  char *pcVar73;
  long *plVar74;
  void *pvVar75;
  ulong uVar76;
  byte local_10b0;
  undefined7 uStack_10af;
  undefined1 local_10a8;
  undefined7 uStack_10a7;
  void *local_10a0;
  undefined7 local_1098;
  undefined1 uStack_1091;
  undefined7 uStack_1090;
  byte local_1088;
  undefined7 uStack_1087;
  undefined1 local_1080;
  undefined7 uStack_107f;
  void *local_1078;
  undefined7 local_1070;
  undefined1 uStack_1069;
  undefined7 uStack_1068;
  byte local_1060;
  undefined7 uStack_105f;
  undefined1 local_1058;
  undefined7 uStack_1057;
  void *local_1050;
  undefined7 local_1048;
  undefined1 uStack_1041;
  undefined7 uStack_1040;
  byte local_1038;
  undefined7 uStack_1037;
  undefined1 local_1030;
  undefined7 uStack_102f;
  void *local_1028;
  undefined7 local_1020;
  undefined1 uStack_1019;
  undefined7 uStack_1018;
  byte local_1010;
  undefined7 uStack_100f;
  undefined1 local_1008;
  undefined7 uStack_1007;
  void *local_1000;
  undefined7 local_ff8;
  undefined1 uStack_ff1;
  undefined7 uStack_ff0;
  byte local_fe8;
  undefined7 uStack_fe7;
  undefined1 local_fe0;
  undefined7 uStack_fdf;
  void *local_fd8;
  undefined7 local_fd0;
  undefined1 uStack_fc9;
  undefined7 uStack_fc8;
  byte local_fc0;
  undefined7 uStack_fbf;
  undefined1 local_fb8;
  undefined7 uStack_fb7;
  void *local_fb0;
  undefined7 local_fa8;
  undefined1 uStack_fa1;
  undefined7 uStack_fa0;
  byte local_f98;
  undefined7 uStack_f97;
  undefined1 local_f90;
  undefined7 uStack_f8f;
  void *local_f88;
  undefined7 local_f80;
  undefined1 uStack_f79;
  undefined7 uStack_f78;
  byte local_f70;
  undefined7 uStack_f6f;
  undefined1 local_f68;
  undefined7 uStack_f67;
  void *local_f60;
  undefined7 local_f58;
  undefined1 uStack_f51;
  undefined7 uStack_f50;
  byte local_f48;
  undefined7 uStack_f47;
  undefined1 local_f40;
  undefined7 uStack_f3f;
  void *local_f38;
  undefined7 local_f30;
  undefined1 uStack_f29;
  undefined7 uStack_f28;
  byte local_f20;
  undefined7 uStack_f1f;
  undefined1 local_f18;
  undefined7 uStack_f17;
  void *local_f10;
  undefined7 local_f08;
  undefined1 uStack_f01;
  undefined7 uStack_f00;
  byte local_ef8;
  undefined7 uStack_ef7;
  undefined1 local_ef0;
  undefined7 uStack_eef;
  void *local_ee8;
  undefined7 local_ee0;
  undefined1 uStack_ed9;
  undefined7 uStack_ed8;
  byte local_ed0;
  undefined7 uStack_ecf;
  undefined1 local_ec8;
  undefined7 uStack_ec7;
  void *local_ec0;
  undefined7 local_eb8;
  undefined1 uStack_eb1;
  undefined7 uStack_eb0;
  byte local_ea8;
  undefined7 uStack_ea7;
  undefined1 local_ea0;
  undefined7 uStack_e9f;
  void *local_e98;
  undefined7 local_e90;
  undefined1 uStack_e89;
  undefined7 uStack_e88;
  byte local_e80;
  undefined7 uStack_e7f;
  undefined1 local_e78;
  undefined7 uStack_e77;
  void *local_e70;
  undefined7 local_e68;
  undefined1 uStack_e61;
  undefined7 uStack_e60;
  byte local_e58;
  undefined7 uStack_e57;
  undefined1 local_e50;
  undefined7 uStack_e4f;
  void *local_e48;
  undefined7 local_e40;
  undefined1 uStack_e39;
  undefined7 uStack_e38;
  byte local_e30;
  undefined7 uStack_e2f;
  undefined1 local_e28;
  undefined7 uStack_e27;
  void *local_e20;
  undefined7 local_e18;
  undefined1 uStack_e11;
  undefined7 uStack_e10;
  byte local_e08;
  undefined7 uStack_e07;
  undefined1 local_e00;
  undefined7 uStack_dff;
  void *local_df8;
  undefined7 local_df0;
  undefined1 uStack_de9;
  undefined7 uStack_de8;
  byte local_de0;
  undefined7 uStack_ddf;
  undefined1 local_dd8;
  undefined7 uStack_dd7;
  void *local_dd0;
  undefined7 local_dc8;
  undefined1 uStack_dc1;
  undefined7 uStack_dc0;
  byte local_db8;
  undefined7 uStack_db7;
  undefined1 local_db0;
  undefined7 uStack_daf;
  void *local_da8;
  undefined7 local_da0;
  undefined1 uStack_d99;
  undefined7 uStack_d98;
  byte local_d90;
  undefined7 uStack_d8f;
  undefined1 local_d88;
  undefined7 uStack_d87;
  void *local_d80;
  undefined7 local_d78;
  undefined1 uStack_d71;
  undefined7 uStack_d70;
  byte local_d68;
  undefined7 uStack_d67;
  undefined1 local_d60;
  undefined7 uStack_d5f;
  void *local_d58;
  undefined7 local_d50;
  undefined1 uStack_d49;
  undefined7 uStack_d48;
  byte local_d40;
  undefined7 uStack_d3f;
  undefined1 local_d38;
  undefined7 uStack_d37;
  void *local_d30;
  undefined7 local_d28;
  undefined1 uStack_d21;
  undefined7 uStack_d20;
  byte local_d18;
  undefined7 uStack_d17;
  undefined1 local_d10;
  undefined7 uStack_d0f;
  void *local_d08;
  undefined7 local_d00;
  undefined1 uStack_cf9;
  undefined7 uStack_cf8;
  byte local_cf0;
  undefined7 uStack_cef;
  undefined1 local_ce8;
  undefined7 uStack_ce7;
  void *local_ce0;
  undefined7 local_cd8;
  undefined1 uStack_cd1;
  undefined7 uStack_cd0;
  byte local_cc8;
  undefined7 uStack_cc7;
  undefined1 local_cc0;
  undefined7 uStack_cbf;
  void *local_cb8;
  undefined7 local_cb0;
  undefined1 uStack_ca9;
  undefined7 uStack_ca8;
  byte local_ca0;
  undefined7 uStack_c9f;
  undefined1 local_c98;
  undefined7 uStack_c97;
  void *local_c90;
  undefined7 local_c88;
  undefined1 uStack_c81;
  undefined7 uStack_c80;
  byte local_c78;
  undefined7 uStack_c77;
  undefined1 local_c70;
  undefined7 uStack_c6f;
  void *local_c68;
  undefined7 local_c60;
  undefined1 uStack_c59;
  undefined7 uStack_c58;
  byte local_c50;
  undefined7 uStack_c4f;
  undefined1 local_c48;
  undefined7 uStack_c47;
  void *local_c40;
  undefined7 local_c38;
  undefined1 uStack_c31;
  undefined7 uStack_c30;
  byte local_c28;
  undefined7 uStack_c27;
  undefined1 local_c20;
  undefined7 uStack_c1f;
  void *local_c18;
  undefined7 local_c10;
  undefined1 uStack_c09;
  undefined7 uStack_c08;
  byte local_c00;
  undefined7 uStack_bff;
  undefined1 local_bf8;
  undefined7 uStack_bf7;
  void *local_bf0;
  undefined7 local_be8;
  undefined1 uStack_be1;
  undefined7 uStack_be0;
  byte local_bd8;
  undefined7 uStack_bd7;
  undefined1 local_bd0;
  undefined7 uStack_bcf;
  void *local_bc8;
  undefined7 local_bc0;
  undefined1 uStack_bb9;
  undefined7 uStack_bb8;
  byte local_bb0;
  undefined7 uStack_baf;
  undefined1 local_ba8;
  undefined7 uStack_ba7;
  void *local_ba0;
  undefined7 local_b98;
  undefined1 uStack_b91;
  undefined7 uStack_b90;
  byte local_b88;
  undefined7 uStack_b87;
  undefined1 local_b80;
  undefined7 uStack_b7f;
  void *local_b78;
  undefined7 local_b70;
  undefined1 uStack_b69;
  undefined7 uStack_b68;
  byte local_b60;
  undefined7 uStack_b5f;
  undefined1 local_b58;
  undefined7 uStack_b57;
  void *local_b50;
  undefined7 local_b48;
  undefined1 uStack_b41;
  undefined7 uStack_b40;
  byte local_b38;
  undefined7 uStack_b37;
  undefined1 local_b30;
  undefined7 uStack_b2f;
  void *local_b28;
  undefined7 local_b20;
  undefined1 uStack_b19;
  undefined7 uStack_b18;
  byte local_b10;
  undefined7 uStack_b0f;
  undefined1 local_b08;
  undefined7 uStack_b07;
  void *local_b00;
  undefined7 local_af8;
  undefined1 uStack_af1;
  undefined7 uStack_af0;
  byte local_ae8;
  undefined7 uStack_ae7;
  undefined1 local_ae0;
  undefined7 uStack_adf;
  void *local_ad8;
  undefined7 local_ad0;
  undefined1 uStack_ac9;
  undefined7 uStack_ac8;
  byte local_ac0;
  undefined7 uStack_abf;
  undefined1 local_ab8;
  undefined7 uStack_ab7;
  void *local_ab0;
  undefined7 local_aa8;
  undefined1 uStack_aa1;
  undefined7 uStack_aa0;
  byte local_a98;
  undefined7 uStack_a97;
  undefined1 local_a90;
  undefined7 uStack_a8f;
  void *local_a88;
  undefined7 local_a80;
  undefined1 uStack_a79;
  undefined7 uStack_a78;
  byte local_a70;
  undefined7 uStack_a6f;
  undefined1 local_a68;
  undefined7 uStack_a67;
  void *local_a60;
  undefined7 local_a58;
  undefined1 uStack_a51;
  undefined7 uStack_a50;
  byte local_a48;
  undefined7 uStack_a47;
  byte local_a40;
  undefined7 uStack_a3f;
  void *local_a38;
  undefined8 local_a30;
  undefined7 uStack_a28;
  undefined7 local_a20;
  undefined1 uStack_a19;
  undefined7 uStack_a18;
  string local_a10;
  undefined7 local_a0f;
  undefined1 uStack_a08;
  undefined7 uStack_a07;
  void *local_a00;
  undefined1 *local_9f8;
  undefined1 *local_9f0;
  undefined4 local_9e8;
  byte local_9e0;
  undefined7 local_9df;
  byte bStack_9d8;
  undefined7 uStack_9d7;
  void *local_9d0;
  undefined1 *local_9c8;
  undefined1 *local_9c0;
  undefined4 local_9b8;
  byte local_9b0;
  undefined7 local_9af;
  undefined1 uStack_9a8;
  undefined7 uStack_9a7;
  void *local_9a0;
  undefined1 *local_998;
  undefined1 *local_990;
  undefined4 local_988;
  byte local_980;
  undefined7 local_97f;
  undefined1 uStack_978;
  undefined7 uStack_977;
  void *local_970;
  undefined1 *local_968;
  undefined1 *local_960;
  undefined4 local_958;
  byte local_950;
  undefined7 local_94f;
  undefined1 uStack_948;
  undefined7 uStack_947;
  void *local_940;
  undefined1 *local_938;
  undefined1 *local_930;
  undefined4 local_928;
  byte local_920;
  undefined7 local_91f;
  undefined1 uStack_918;
  undefined7 uStack_917;
  void *local_910;
  undefined1 *local_908;
  undefined1 *local_900;
  undefined4 local_8f8;
  byte local_8f0;
  undefined7 local_8ef;
  undefined1 uStack_8e8;
  undefined7 uStack_8e7;
  void *local_8e0;
  undefined1 *local_8d8;
  undefined1 *local_8d0;
  undefined4 local_8c8;
  byte local_8c0;
  undefined7 local_8bf;
  undefined1 uStack_8b8;
  undefined7 uStack_8b7;
  void *local_8b0;
  undefined1 *local_8a8;
  undefined1 *local_8a0;
  undefined4 local_898;
  byte local_890;
  undefined7 local_88f;
  undefined1 uStack_888;
  undefined7 uStack_887;
  void *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined4 local_868;
  byte local_860;
  undefined7 local_85f;
  undefined1 uStack_858;
  undefined7 uStack_857;
  void *local_850;
  undefined1 *local_848;
  undefined1 *local_840;
  undefined4 local_838;
  byte local_830;
  undefined7 local_82f;
  undefined1 uStac
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 0148a368 — FUN_0148a368

- Signature: undefined FUN_0148a368(void)
- Body bytes: 7472
- String xrefs: 15 (10 unique strings)
- Candidate score: 155
- Sample strings: anime_L_item_pokemon_00_switch | anime_L_item_pokemon_00_switch_complete | pane_L_item_pokemon_00 | pane_L_item_pokemon_00_A_alignment_01 | pane_L_item_pokemon_00_T_header_pokeget_00 | pane_L_item_pokemon_00_T_param_level_00 | pane_L_item_pokemon_00_T_param_pokeget_00 | pane_L_item_pokemon_00_T_param_pokeget_01 | pane_L_item_pokemon_00_T_param_pokeget_02 | pane_L_item_pokemon_00_T_pokemon_00
- Direct callers: []
- Direct callees: [{"entry": "02c2e33c", "name": "FUN_02c2e33c", "call_count": 12}, {"entry": "002350e8", "name": "FUN_002350e8", "call_count": 7}, {"entry": "0283ce7c", "name": "FUN_0283ce7c", "call_count": 6}, {"entry": "02c33414", "name": "FUN_02c33414", "call_count": 6}, {"entry": "02c338a4", "name": "FUN_02c338a4", "call_count": 6}, {"entry": "02c395d0", "name": "FUN_02c395d0", "call_count": 6}, {"entry": "01494c08", "name": "FUN_01494c08", "call_count": 4}, {"entry": "01495a54", "name": "FUN_01495a54", "call_count": 4}, {"entry": "00d2e2f0", "name": "FUN_00d2e2f0", "call_count": 3}, {"entry": "0148d838", "name": "FUN_0148d838", "call_count": 3}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_0148a368(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined6 uStack_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 local_88;
  undefined7 local_84;
  undefined4 uStack_7d;
  
  if ((*(long *)(param_1 + 0x2a88) != 0) || (*(long *)(param_1 + 0x2a18) == 0)) {
    if ((*(long *)(param_1 + 0x2b68) != 0) ||
       ((*(long *)(param_1 + 11000) == 0 || (*(long *)(param_1 + 0x2a88) != 0)))) goto LAB_0148a3bc;
    if (*(char *)(param_1 + 0x2b90) == '\0') {
      uVar22 = *(ulong *)(param_1 + 0x2af0);
      lVar20 = *(long *)(*(long *)(param_1 + 0x2ab8) + (uVar22 / 0x38) * 8);
      lVar23 = *(long *)(param_1 + 0x2b28);
      lVar18 = *(long *)(param_1 + 0x2b30) - lVar23;
      uVar16 = 0;
      if (lVar18 != 0) {
        uVar16 = (lVar18 >> 3) * 0x38 - 1;
      }
      uVar24 = *(ulong *)(param_1 + 0x2b60);
      if (uVar16 == uVar24) {
        FUN_01494c08(param_1 + 0x2b20);
        uVar24 = *(long *)(param_1 + 0x2b60) + *(long *)(param_1 + 0x2b68);
        lVar23 = *(long *)(param_1 + 0x2b28);
        if (*(long *)(param_1 + 0x2b30) != lVar23) goto LAB_0148b8d0;
LAB_0148bbac:
        lVar18 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x2b30) == lVar23) goto LAB_0148bbac;
LAB_0148b8d0:
        lVar18 = *(long *)(lVar23 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
      }
      FUN_01495a54(param_1 + 0x2b70,lVar18,lVar20 + (uVar22 % 0x38) * 0x48);
      lVar18 = *(long *)(param_1 + 0x2b68);
      *(long *)(param_1 + 0x2b68) = lVar18 + 1;
      uVar16 = *(long *)(param_1 + 0x2b60) + lVar18;
      uVar22 = uVar16 % 0x38;
      lVar18 = *(long *)(*(long *)(param_1 + 0x2b28) + (uVar16 / 0x38) * 8);
      puVar25 = (undefined1 *)(lVar18 + uVar22 * 0x48);
      local_d8 = CONCAT71(local_d8._1_7_,*puVar25);
      local_d0 = *(long **)(puVar25 + 8);
      if (local_d0 == (long *)0x0) {
        plVar27 = (long *)0x0;
      }
      else {
        plVar27 = local_d0 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar11) {
            *(int *)plVar27 = (int)*plVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar27 = local_d0;
      }
      lVar18 = lVar18 + uVar22 * 0x48;
      uStack_b8 = *(undefined8 *)(lVar18 + 0x20);
      local_c8 = *(undefined8 *)(lVar18 + 0x10);
      local_c0 = *(long **)(lVar18 + 0x18);
      uVar26 = *(undefined8 *)(lVar18 + 0x38);
      local_b0 = *(undefined8 *)(lVar18 + 0x28);
      local_a8 = *(undefined8 *)(lVar18 + 0x30);
      uStack_98 = (undefined6)((ulong)*(undefined8 *)(lVar18 + 0x3e) >> 0x10);
      uStack_a0 = (undefined4)uVar26;
      local_9c._0_2_ = (undefined2)((ulong)uVar26 >> 0x20);
      local_9c._2_2_ = (undefined2)((ulong)uVar26 >> 0x30);
      FUN_0148dfe4(param_1,&local_d8);
      FUN_0148d838(param_1 + 0x2ab0);
      if (plVar27 != (long *)0x0) {
        plVar32 = plVar27 + 10;
        do {
          iVar15 = (int)*plVar32 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar11) {
            *(int *)plVar32 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        goto LAB_0148b9b4;
      }
    }
    else {
      uVar22 = (*(long *)(param_1 + 11000) + *(long *)(param_1 + 0x2af0)) - 1;
      lVar23 = *(long *)(*(long *)(param_1 + 0x2ab8) + (uVar22 / 0x38) * 8);
      lVar20 = *(long *)(param_1 + 0x2b28);
      lVar18 = *(long *)(param_1 + 0x2b30) - lVar20;
      uVar16 = 0;
      if (lVar18 != 0) {
        uVar16 = (lVar18 >> 3) * 0x38 - 1;
      }
      uVar24 = *(ulong *)(param_1 + 0x2b60);
      if (uVar16 == uVar24) {
        FUN_01494c08(param_1 + 0x2b20);
        uVar24 = *(long *)(param_1 + 0x2b60) + *(long *)(param_1 + 0x2b68);
        lVar20 = *(long *)(param_1 + 0x2b28);
        if (*(long *)(param_1 + 0x2b30) != lVar20) goto LAB_0148b600;
LAB_0148ba64:
        lVar18 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x2b30) == lVar20) goto LAB_0148ba64;
LAB_0148b600:
        lVar18 = *(long *)(lVar20 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
      }
      FUN_01495a54(param_1 + 0x2b70,lVar18,lVar23 + (uVar22 % 0x38) * 0x48);
      lVar18 = *(long *)(param_1 + 0x2b68);
      *(long *)(param_1 + 0x2b68) = lVar18 + 1;
      uVar16 = *(long *)(param_1 + 0x2b60) + lVar18;
      uVar22 = uVar16 % 0x38;
      lVar18 = *(long *)(*(long *)(param_1 + 0x2b28) + (uVar16 / 0x38) * 8);
      puVar25 = (undefined1 *)(lVar18 + uVar22 * 0x48);
      local_d8 = CONCAT71(local_d8._1_7_,*puVar25);
      local_d0 = *(long **)(puVar25 + 8);
      if (local_d0 == (long *)0x0) {
        plVar27 = (long *)0x0;
      }
      else {
        plVar27 = local_d0 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar11) {
            *(int *)plVar27 = (int)*plVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar27 = local_d0;
      }
      lVar18 = lVar18 + uVar22 * 0x48;
      uStack_b8 = *(undefined8 *)(lVar18 + 0x20);
      local_c8 = *(undefined8 *)(lVar18 + 0x10);
      local_c0 = *(long **)(lVar18 + 0x18);
      local_b0 = *(undefined8 *)(lVar18 + 0x28);
      local_a8 = *(undefined8 *)(lVar18 + 0x30);
      uStack_98 = (undefined6)((ulong)*(undefined8 *)(lVar18 + 0x3e) >> 0x10);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar18 + 0x38);
      local_9c = *(int *)(param_1 + 11000) + -1;
      FUN_0148dfe4(param_1,&local_d8);
      FUN_0149139c(param_1 + 0x2ab0);
      *(char *)(param_1 + 0x2b90) = '\0';
      if (plVar27 != (long *)0x0) {
        plVar32 = plVar27 + 10;
        do {
          iVar15 = (int)*plVar32 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar11) {
            *(int *)plVar32 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_0148b9b4:
        if (iVar15 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2b91) = 1;
    lVar18 = *(long *)(param_1 + 0x29a8);
    goto joined_r0x0148b56c;
  }
  if (*(long *)(param_1 + 0x2b68) == 0) {
    uVar22 = *(ulong *)(param_1 + 0x2a10);
    lVar20 = *(long *)(*(long *)(param_1 + 0x29d8) + (uVar22 / 0x38) * 8);
    lVar23 = *(long *)(param_1 + 0x2a48);
    lVar18 = *(long *)(param_1 + 0x2a50) - lVar23;
    uVar16 = 0;
    if (lVar18 != 0) {
      uVar16 = (lVar18 >> 3) * 0x38 - 1;
    }
    uVar24 = *(ulong *)(param_1 + 0x2a80);
    if (uVar16 == uVar24) {
      FUN_01494c08(param_1 + 0x2a40);
      uVar24 = *(long *)(param_1 + 0x2a80) + *(long *)(param_1 + 0x2a88);
      lVar23 = *(long *)(param_1 + 0x2a48);
      if (*(long *)(param_1 + 0x2a50) != lVar23) goto LAB_0148a464;
LAB_0148ba18:
      lVar18 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x2a50) == lVar23) goto LAB_0148ba18;
LAB_0148a464:
      lVar18 = *(long *)(lVar23 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48;
    }
    FUN_01495a54(param_1 + 0x2a90,lVar18,lVar20 + (uVar22 % 0x38) * 0x48);
    lVar18 = *(long *)(param_1 + 0x2a88);
    *(long *)(param_1 + 0x2a88) = lVar18 + 1;
    uVar16 = *(long *)(param_1 + 0x2a80) + lVar18;
    uVar22 = uVar16 % 0x38;
    lVar18 = *(long *)(*(long *)(param_1 + 0x2a48) + (uVar16 / 0x38) * 8);
    plVar27 = *(long **)(lVar18 + uVar22 * 0x48 + 8);
    if (plVar27 == (long *)0x0) {
      plVar32 = (long *)0x0;
    }
    else {
      plVar32 = plVar27 + 10;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar11) {
          *(int *)plVar32 = (int)*plVar32 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      plVar32 = plVar27;
    }
    plVar28 = DAT_043c3988;
    lVar20 = DAT_043c3970;
    lVar18 = lVar18 + uVar22 * 0x48;
    uVar3 = *(uint *)(lVar18 + 0x24);
    uVar4 = *(uint *)(lVar18 + 0x28);
    uVar6 = *(undefined1 *)(lVar18 + 0x2e);
    cVar10 = *(char *)(lVar18 + 0x2c);
    cVar7 = *(char *)(lVar18 + 0x2d);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined1 *)(lVar18 + 0x34);
    plVar30 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if (DAT_043c3988 != (long *)0x0) {
      (**(code **)(*DAT_043c3988 + 0x18))(DAT_043c3988);
    }
    plVar33 = plVar30;
    if ((lVar18 != 0) && (*plVar30 != lVar20)) {
      lVar23 = lVar18 * 0x30;
      plVar29 = plVar30 + lVar18 * 6;
      do {
        lVar23 = lVar23 + -0x30;
        plVar33 = plVar29;
        if (lVar23 == 0) break;
        plVar21 = plVar30 + 6;
        plVar30 = plVar30 + 6;
        plVar33 = plVar30;
      } while (*plVar21 != lVar20);
    }
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    *(byte *)(plVar33[4] + 0x58) = *(byte *)(plVar33[4] + 0x58) | 1;
    local_d8 = 0xd6ad0c29ccb27e05;
    local_d0 = (long *)0x399b37b;
    local_c8 = 0x16;
    local_c0 = (long *)0x0;
    lVar18 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0xe8), lVar18 != 0)) {
      FUN_00235780(lVar18);
      FUN_002350e8(lVar18,"T_header_pokeget_00");
      FUN_002350e8(lVar18,"T_param_u_pokeget_00");
      FUN_002350e8(lVar18,"T_param_u_pokeget_01");
      FUN_002350e8(lVar18,"T_param_u_pokeget_02");
      FUN_002350e8(lVar18,"T_param_pokeget_00");
      FUN_002350e8(lVar18,"T_param_pokeget_01");
      FUN_002350e8(lVar18,"T_param_pokeget_02");
    }
    plVar30 = *(long **)(param_1 + 0x2c8);
    if (plVar30 != (long *)0x0) {
      plVar28 = plVar30 + 10;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = (int)*plVar28 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        iVar15 = (int)*plVar28 + -1;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
    plVar28 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
    if (plVar28 != (long *)0x0) {
      lVar18 = plVar28[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0148c080;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar26;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plVar33 = 
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

## save_storage

### 033899a0 — FUN_033899a0

- Signature: undefined FUN_033899a0(void)
- Body bytes: 6688
- String xrefs: 39 (2 unique strings)
- Candidate score: 149
- Sample strings: ../..\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h | C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp
- Direct callers: [{"entry": "0337f6a4", "name": "FUN_0337f6a4", "call_count": 1}]
- Direct callees: [{"entry": "03326338", "name": "FUN_03326338", "call_count": 59}, {"entry": "03326994", "name": "FUN_03326994", "call_count": 34}, {"entry": "033269dc", "name": "FUN_033269dc", "call_count": 24}, {"entry": "03326a7c", "name": "FUN_03326a7c", "call_count": 8}, {"entry": "03326adc", "name": "FUN_03326adc", "call_count": 8}, {"entry": "032e37ec", "name": "FUN_032e37ec", "call_count": 2}, {"entry": "032e4384", "name": "FUN_032e4384", "call_count": 2}, {"entry": "033875a4", "name": "FUN_033875a4", "call_count": 2}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

/* WARNING: Removing unreachable block (ram,0x0338b00c) */
/* WARNING: Removing unreachable block (ram,0x03389e3c) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_033899a0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long *local_220;
  uint local_218 [2];
  ulong *local_210;
  int local_208;
  int local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  ulong local_1e8;
  undefined1 local_1e0 [16];
  uint local_1cc;
  ulong *local_1c8;
  undefined1 auStack_1c0 [25];
  undefined1 local_1a7;
  char *local_188;
  undefined8 local_180;
  uint local_70 [4];
  
  uVar3 = *param_2;
  uVar20 = param_2[1];
  if ((uVar20 - uVar3 & 3) == 0) {
    uVar17 = uVar20 - uVar3 >> 2;
    uVar1 = uVar3 + ((long)(uVar17 << 0x20) >> 0x1e);
    if (uVar20 < uVar1) {
      *param_2 = uVar20;
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
    }
    else {
      *param_2 = uVar1;
    }
    local_1fc = 0;
    while( true ) {
      uVar22 = 0x80040200;
      lVar19 = (long)local_1fc;
      iVar8 = local_1fc + 2;
      uVar16 = (uint)uVar17;
      if ((int)uVar16 <= iVar8) break;
      local_1fc = local_1fc + 1;
      uVar4 = *(uint *)(uVar3 + lVar19 * 4);
      local_1e0._0_4_ = uVar4;
      if (uVar4 == 0) {
        local_210 = (ulong *)0x0;
        local_208 = 0;
        local_1f8 = 0;
        lVar19 = *param_1;
        bVar15 = *(byte *)(lVar19 + 0x50);
LAB_0338a4b0:
        local_218[0] = local_1f8;
        if (bVar15 < 4) {
          if (DAT_04350668 == '\0') break;
LAB_0338b29c:
          FUN_03326a7c(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Finished internal, starting external",PTR_DAT_04372528)
          ;
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0x103;
          FUN_03326adc(auStack_1c0);
          cVar5 = (char)param_1[6];
        }
        else {
          if (DAT_04350668 != '\0') goto LAB_0338b29c;
          FUN_03326994(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Finished internal, starting external",PTR_DAT_04372528)
          ;
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0x103;
          FUN_033269dc(auStack_1c0);
          cVar5 = (char)param_1[6];
        }
        if (cVar5 == '\0') {
          return 0;
        }
        goto LAB_0338a51c;
      }
      if ((ulong)uVar4 < (ulong)(param_1[4] - param_1[3] >> 3)) {
        if (*(long *)(param_1[3] + (long)(int)uVar4 * 8) == 0) {
          local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,0x80040200);
          if (*(char *)(*param_1 + 0x50) != '\0') {
            FUN_03326994(auStack_1c0,*param_1,1);
            local_180 = 0xd7;
            local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                  &local_1c8);
            local_1e8 = CONCAT44(local_1e8._4_4_,local_1fc + -1);
            pcVar13 = 
            "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
            goto LAB_03389c14;
          }
          goto LAB_03389c2c;
        }
        iVar9 = *(int *)(uVar3 + (long)local_1fc * 4);
        local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,iVar9);
        local_1fc = iVar8;
        if ((int)uVar16 < iVar9 + iVar8) {
          local_1e8 = CONCAT44(local_1e8._4_4_,0x80040200);
          uVar22 = 0x80040200;
          if (*(char *)(*param_1 + 0x50) != '\0') {
            FUN_03326994(auStack_1c0,*param_1,1);
            local_180 = 0xde;
            local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                  &local_1e8);
            local_70[0] = local_1fc - 1;
            FUN_03326338(uVar10,"Corrupt patch index body at index {}: invalid entries number {}",
                         &DAT_0411b3a0,local_70,&local_1c8);
            FUN_033269dc(auStack_1c0);
            uVar22 = (uint)local_1e8;
          }
          goto LAB_03389c2c;
        }
        lVar19 = *param_1;
        if (*(byte *)(lVar19 + 0x50) < 4) {
          if (DAT_04350668 != '\0') goto LAB_0338b21c;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_1e0,
                                &local_1c8,param_1[3] + (long)(int)local_1e0._0_4_ * 8);
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0xe1;
          FUN_033269dc(auStack_1c0);
        }
        else {
LAB_0338b21c:
          FUN_03326a7c(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_1e0,
                                &local_1c8,param_1[3] + (long)(int)local_1e0._0_4_ * 8);
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0xe1;
          FUN_03326adc(auStack_1c0);
        }
        local_210 = *(ulong **)(param_1[3] + (long)(int)local_1e0._0_4_ * 8);
        local_208 = (uint)local_1c8;
        local_1f8 = 0;
      }
      else {
        local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,0x80040200);
        uVar22 = 0x80040200;
        if (*(char *)(*param_1 + 0x50) != '\0') {
          FUN_03326994(auStack_1c0,*param_1,1);
          local_180 = 0xd2;
          local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,&local_1c8)
          ;
          pcVar13 = "Corrupt patch index body at index {}: invalid TypeId {}";
          local_1e8 = CONCAT44(local_1e8._4_4_,local_1fc + -1);
LAB_03389c14:
          FUN_03326338(uVar10,pcVar13,&DAT_0411b3a0,&local_1e8,local_1e0);
          FUN_033269dc(auStack_1c0);
          uVar22 = (uint)local_1c8;
        }
LAB_03389c2c:
        local_210 = (ulong *)0x0;
        local_208 = 0;
        local_1f8 = uVar22;
        if ((int)uVar22 < 0) {
          return uVar22;
        }
      }
      lVar19 = *param_1;
      bVar15 = *(byte *)(lVar19 + 0x50);
      if (local_210 == (ulong *)0x0) goto LAB_0338a4b0;
      local_218[0] = local_1f8;
      if (bVar15 < 4) {
        if (DAT_04350668 != '\0') goto LAB_0338b174;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_1c0,lVar19,4);
        lVar11 = FUN_03326338(auStack_1c0,"Internal fixups for type {}",PTR_DAT_043891f8,&local_210)
        ;
        *(char **)(lVar11 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x40) = 0x107;
        *(undefined1 *)(lVar11 + 0x19) = 1;
        FUN_033269dc(auStack_1c0);
      }
      else {
LAB_0338b174:
        FUN_03326a7c(auStack_1c0,lVar19,4);
        lVar11 = FUN_03326338(auStack_1c0,"Internal fixups for type {}",PTR_DAT_043891f8,&local_210)
        ;
        *(char **)(lVar11 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x40) = 0x107;
        *(undefined1 *)(lVar11 + 0x19) = 1;
        FUN_03326adc(auStack_1c0);
      }
      puVar18 = local_210;
      do {
        uVar20 = *puVar18;
        if (((uint)uVar20 >> 2 & 1) != 0) {
          local_220 = (long *)puVar18[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
          goto joined_r0x03389cf0;
        }
        puVar18 = (ulong *)puVar18[1];
      } while (puVar18 != (ulong *)0x0);
      local_220 = (long *)0x0;
joined_r0x03389cf0:
      if (local_208 == 0) {
        bVar6 = false;
      }
      else {
        puVar14 = (uint *)(uVar3 + (long)local_1fc * 4);
        bVar15 = (byte)*local_210;
        puVar18 = local_210;
        while ((bVar15 & 1) == 0) {
          puVar18 = (ulong *)puVar18[1];
          bVar15 = (byte)*puVar18;
        }
        uVar22 = (uint)puVar18[2] & 0x1f;
        lVar11 = (long)local_208 << 2;
        do {
          if ((ulong)(param_1[2] - param_1[1]) <= (ulong)*puVar14) {
            local_1f8 = 0x80040200;
            bVar6 = true;
            if (*(char *)(*param_1 + 0x50) != '\0') {
              FUN_03326994(auStack_1c0,*param_1,1);
              local_180 = 0x113;
              local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_1f8);
              FUN_03326338(uVar10,"Corrupt patch index body at index {}: invalid offset {}",
                           &DAT_0436ed18,&local_1fc,puVar14);
              FUN_033269dc(auStack_1c0);
            }
            goto LAB_0338a3c8;
          }
          lVar12 = *param_1;
          puVar23 = (uint *)(param_1[1] + (long)(int)*puVar14);
          if (*(byte *)(lVar12 + 0x50) < 4) {
            if (DAT_04350668 != '\0') goto LAB_0338b0cc;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1c0,lVar12,4);
            lVar12 = FUN_03326338(auStack_1c0,"srcOff={}",PTR_DAT_04389020,puVar14);
            *(char **)(lVar12 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar12 + 0x40) = 0x116;
            FUN_033269dc(auStack_1c0);
          }
          else {
LAB_0338b0cc:
            FUN_03326a7c(auStack_1c0,lVar12,4);
            lVar12 = FUN_03326338(auStack_1c0,"srcOff={}",PTR_DAT_04389020,puVar14);
            *(char **)(lVar12 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar12 + 0x40) = 0x116;
            FUN_03326adc(auStack_1c0);
          }
          puVar18 = local_210;
          local_1f4 = *puVar23;
          local_1f0 = 0x80040200;
          if ((ulong)local_1f4 < (ulong)param_1[5]) {
            local_1c8 = local_210;
            *puVar23 = 0;
            local_1cc = local_1f4;
            if (local_1f4 == 0) {
              local_70[0] = 0x80040200;
              iVar8 = (**(code **)(*local_220 + 0x10))(local_220,puVar23,local_210,0,0,0);
              if (iVar8 < 0) {
                if (DAT_04450900 != '\0') {
                  FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                  local_180 = 0xaa8;
                  local_188 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                        PTR_DAT_043894b0,
                                        "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                        ,local_70);
                  local_1e0._0_8_ = (long)puVar23 - param_1[1];
                  FUN_03326338(uVar10,"Failed to apply null fixup of type \'{}\' at data offset {}",
                               PTR_DAT_043891b8,&local_1c8,local_1e0);
                  goto LAB_0338a190;
                }
              }
              else {
LAB_03389ea4:
  
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 0337f6a4 — FUN_0337f6a4

- Signature: undefined FUN_0337f6a4(void)
- Body bytes: 5920
- String xrefs: 34 (2 unique strings)
- Candidate score: 144
- Sample strings: ../..\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h | C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp
- Direct callers: [{"entry": "0338e230", "name": "FUN_0338e230", "call_count": 1}]
- Direct callees: [{"entry": "03326338", "name": "FUN_03326338", "call_count": 47}, {"entry": "03326994", "name": "FUN_03326994", "call_count": 28}, {"entry": "033269dc", "name": "FUN_033269dc", "call_count": 22}, {"entry": "03326a7c", "name": "FUN_03326a7c", "call_count": 13}, {"entry": "03326adc", "name": "FUN_03326adc", "call_count": 11}, {"entry": "03328a7c", "name": "FUN_03328a7c", "call_count": 2}, {"entry": "032dba50", "name": "FUN_032dba50", "call_count": 1}, {"entry": "032dbdc0", "name": "FUN_032dbdc0", "call_count": 1}, {"entry": "032dbe70", "name": "FUN_032dbe70", "call_count": 1}, {"entry": "032dc210", "name": "FUN_032dc210", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_0337f6a4(undefined4 *param_1,long *param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  byte *pbVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long local_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  uint local_1f8 [2];
  byte *local_1f0;
  uint local_1e8;
  int local_1dc;
  uint local_1d8 [2];
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined1 local_1a0;
  char *local_198;
  long local_190;
  long local_188;
  int local_7c;
  uint local_78 [2];
  uint local_70;
  uint local_6c [3];
  
  if ((param_3 & 1) == 0) {
    lVar7 = *param_2;
    if ((param_2[1] - lVar7 & 3U) == 0) {
      lVar22 = *(long *)(param_1 + 4);
      uVar21 = (uint)((ulong)(param_2[1] - lVar7) >> 2);
      iVar6 = param_1[6];
      lVar13 = *(long *)(param_1 + 0x14);
      lVar14 = *(long *)(param_1 + 0x16);
      local_1dc = 0;
      uVar24 = *(long *)(param_1 + 0x12) - *(long *)(param_1 + 0x10);
      iVar4 = (int)*(long *)(param_1 + 0x10);
      if (2 < (int)uVar21) {
        iVar18 = 0;
        iVar12 = 2;
LAB_0337f72c:
        local_1dc = (int)((long)iVar18 + 1);
        local_6c[0] = *(uint *)(lVar7 + (long)iVar18 * 4);
        if (local_6c[0] != 0) {
          if ((ulong)local_6c[0] < (ulong)(long)iVar6) {
            if (*(long *)(lVar22 + (long)(int)local_6c[0] * 8) == 0) {
              local_70 = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_0337fd98;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd7;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_70);
              pcVar9 = 
              "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
              goto LAB_0337fbe0;
            }
            local_70 = *(uint *)(lVar7 + ((long)iVar18 + 1) * 4);
            local_1dc = iVar12;
            if ((int)uVar21 < (int)(local_70 + iVar12)) {
              local_78[0] = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_0337fd98;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xde;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_78
                                   );
              local_7c = local_1dc + -1;
              FUN_03326338(uVar20,"Corrupt patch index body at index {}: invalid entries number {}",
                           &DAT_0411b3a0,&local_7c,&local_70);
              FUN_033269dc(&local_1d0);
              local_1d8[0] = local_78[0];
              goto LAB_0337fbf8;
            }
            if (DAT_04450900 < 4) {
              if (DAT_04350668 != '\0') goto LAB_0337fe04;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_6c,
                                    &local_70,lVar22 + (long)(int)local_6c[0] * 8);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0xe1;
              FUN_033269dc(&local_1d0);
            }
            else {
LAB_0337fe04:
              FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_6c,
                                    &local_70,lVar22 + (long)(int)local_6c[0] * 8);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0xe1;
              FUN_03326adc(&local_1d0);
            }
            local_1f0 = *(byte **)(lVar22 + (long)(int)local_6c[0] * 8);
            local_1e8 = local_70;
            local_1d8[0] = 0;
          }
          else {
            local_70 = 0x80040200;
            if (DAT_04450900 == 0) {
LAB_0337fd98:
              local_1d8[0] = 0x80040200;
            }
            else {
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd2;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_70);
              pcVar9 = "Corrupt patch index body at index {}: invalid TypeId {}";
LAB_0337fbe0:
              local_78[0] = local_1dc - 1;
              FUN_03326338(uVar20,pcVar9,&DAT_0411b3a0,local_78,local_6c);
              FUN_033269dc(&local_1d0);
              local_1d8[0] = local_70;
            }
LAB_0337fbf8:
            local_1f0 = (byte *)0x0;
            local_1e8 = 0;
            local_1f8[0] = local_1d8[0];
            if ((int)local_1d8[0] < 0) goto joined_r0x03380024;
          }
          if (local_1f0 == (byte *)0x0) goto LAB_0337fa9c;
          local_1f8[0] = local_1d8[0];
          if (DAT_04450900 < 4) {
            if (DAT_04350668 != '\0') {
LAB_0337fc7c:
              FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Internal fixups for type {}",PTR_DAT_043891f8,
                                    &local_1f0);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0x107;
              *(undefined1 *)(lVar23 + 0x19) = 1;
              FUN_03326adc(&local_1d0);
              goto joined_r0x0337fcd4;
            }
            if (local_1e8 != 0) goto LAB_0337f7c8;
LAB_0337f8b8:
            bVar5 = false;
          }
          else {
            if (DAT_04350668 != '\0') goto LAB_0337fc7c;
            FUN_03326994(&local_1d0,&DAT_044508b0,4);
            lVar23 = FUN_03326338(&local_1d0,"Internal fixups for type {}",PTR_DAT_043891f8,
                                  &local_1f0);
            *(char **)(lVar23 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar23 + 0x40) = 0x107;
            *(undefined1 *)(lVar23 + 0x19) = 1;
            FUN_033269dc(&local_1d0);
joined_r0x0337fcd4:
            if (local_1e8 == 0) goto LAB_0337f8b8;
LAB_0337f7c8:
            puVar10 = (uint *)(lVar7 + (long)local_1dc * 4);
            bVar3 = *local_1f0;
            pbVar19 = local_1f0;
            while ((bVar3 & 1) == 0) {
              pbVar19 = *(byte **)(pbVar19 + 8);
              bVar3 = *pbVar19;
            }
            lVar23 = (long)(int)local_1e8 << 2;
            if ((*(ulong *)(pbVar19 + 0x10) & 0x1f) == 3) {
              do {
                uVar2 = *puVar10;
                if (uVar24 <= uVar2) goto LAB_0337fe60;
                if (DAT_04450900 < 4) {
                  if (DAT_04350668 != '\0') goto LAB_03380254;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_033269dc(&local_1d0);
                }
                else {
LAB_03380254:
                  FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_03326adc(&local_1d0);
                }
                local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,(iVar4 + uVar2) - param_1[0x10]);
                FUN_03328a7c(*(undefined8 *)(param_1 + 0x46),&local_1d0);
                local_1dc = local_1dc + 1;
                puVar10 = puVar10 + 1;
                lVar23 = lVar23 + -4;
                local_1d8[0] = 0;
              } while (lVar23 != 0);
            }
            else {
              do {
                if (uVar24 <= *puVar10) goto LAB_0337fe60;
                if (DAT_04450900 < 4) {
                  if (DAT_04350668 != '\0') goto LAB_0337ff8c;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_033269dc(&local_1d0);
                }
                else {
LAB_0337ff8c:
                  FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_03326adc(&local_1d0);
                }
                local_1dc = local_1dc + 1;
                puVar10 = puVar10 + 1;
                lVar23 = lVar23 + -4;
                local_1d8[0] = 0;
              } while (lVar23 != 0);
            }
            local_1d8[0] = 0;
            bVar5 = false;
          }
          goto LAB_0337f83c;
        }
        local_1f0 = (byte *)0x0;
        local_1e8 = 0;
        local_1d8[0] = 0;
LAB_0337fa9c:
        local_1f8[0] = local_1d8[0];
        if (DAT_04450900 < 4) {
          if (DAT_04350668 == '\0') goto LAB_0337ffe4;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1d0,&DAT_044508b0,4);
          lVar23 = FUN_03326338(&local_1d0,"Finished internal, starting external",PTR_DAT_04372528);
          *(char **)(lVar23 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar23 + 0x40) = 0x103;
          FUN_033269dc(&local_1d0);
          goto LAB_0337ffe4;
        }
        FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
        lVar23 = FUN_03326338(&local_1d0,"Finished internal, starting external",PTR_DAT_04372528);
        *(char **)(lVar23 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar23 + 0x40) = 0x103;
        FUN_03326adc(&local_1d0);
      }
LAB_0337ffe4:
LAB_0338000c:
      lVar23 = (long)local_1dc;
      iVar12 = local_1dc + 2;
      if (iVar12 < (int)uVar21) {
        local_1dc = local_1dc + 1;
        local_6c[0] = *(uint *)(lVar7 + lVar23 * 4);
        if (local_6c[0] != 0) {
          if ((ulong)local_6c[0] < (ulong)(long)iVar6) {
            if (*(long *)(lVar22 + (long)(int)local_6c[0] * 8) == 0) {
              local_70 = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_03380c70;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd7;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_7
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 02b8e180 — FUN_02b8e180

- Signature: undefined FUN_02b8e180(void)
- Body bytes: 12580
- String xrefs: 24 (24 unique strings)
- Candidate score: 124
- Sample strings: nvnBufferBuilderSetStorage | nvnCommandBufferBindStorageBuffer | nvnCommandBufferBindStorageBuffers | nvnCommandBufferInsertCheckpointDynamic | nvnCommandBufferInsertCheckpointStatic | nvnCommandBufferSaveZCullData | nvnDeviceSetAutomaticCheckpointsByDebugGroup | nvnDeviceSetAutomaticCheckpointsEnable | nvnDeviceSetAutomaticCheckpointsSamplingInterval | nvnDeviceSetCheckpointCallStacksEnable | nvnDeviceSetCheckpointMaxCallStacksDepth | nvnEventBuilderGetStorage
- Direct callers: [{"entry": "02b8b6bc", "name": "FUN_02b8b6bc", "call_count": 1}, {"entry": "02b8c2a8", "name": "FUN_02b8c2a8", "call_count": 1}]
- Direct callees: []
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_02b8e180(undefined8 param_1,code *param_2)

{
  DAT_043f0030 = (*param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_043f0038 = (*param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_043f0040 = (*param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_043f0048 = (*param_2)(param_1,"nvnDeviceInitialize");
  DAT_043f0050 = (*param_2)(param_1,"nvnDeviceFinalize");
  DAT_043f0058 = (*param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_043f0060 = (*param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_043f0068 = (*param_2)(param_1,"nvnDeviceGetInteger");
  DAT_043f0070 = (*param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_043f0078 = (*param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_043f0080 = (*param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_043f0088 = (*param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_043f0090 = (*param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_043f0098 = (*param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_043f00a0 = (*param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_043f00a8 = (*param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_043f00b0 = (*param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_043f00b8 = (*param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_043f00c0 = (*param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_043f00c8 = (*param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_043f00d0 = (*param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_043f00d8 = (*param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_043f00e0 = (*param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_043f00e8 = (*param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_043f00f0 = (*param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_043f00f8 = (*param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_043f0100 = (*param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_043f0108 = (*param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_043f0110 = (*param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_043f0118 = (*param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_043f0120 = (*param_2)(param_1,"nvnQueueGetError");
  DAT_043f0128 = (*param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_043f0130 = (*param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_043f0138 = (*param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_043f0140 = (*param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_043f0148 = (*param_2)(param_1,"nvnQueueBuilderSetDevice");
  DAT_043f0150 = (*param_2)(param_1,"nvnQueueBuilderSetDefaults");
  DAT_043f0158 = (*param_2)(param_1,"nvnQueueBuilderSetFlags");
  DAT_043f0160 = (*param_2)(param_1,"nvnQueueBuilderSetCommandMemorySize");
  DAT_043f0168 = (*param_2)(param_1,"nvnQueueBuilderSetComputeMemorySize");
  DAT_043f0170 = (*param_2)(param_1,"nvnQueueBuilderSetControlMemorySize");
  DAT_043f0178 = (*param_2)(param_1,"nvnQueueBuilderGetQueueMemorySize");
  DAT_043f0180 = (*param_2)(param_1,"nvnQueueBuilderSetQueueMemory");
  DAT_043f0188 = (*param_2)(param_1,"nvnQueueBuilderSetCommandFlushThreshold");
  DAT_043f0190 = (*param_2)(param_1,"nvnQueueBuilderSetQueuePriority");
  DAT_043f0198 = (*param_2)(param_1,"nvnQueueBuilderGetQueuePriority");
  DAT_043f01a0 = (*param_2)(param_1,"nvnQueueBuilderGetDevice");
  DAT_043f01a8 = (*param_2)(param_1,"nvnQueueBuilderGetFlags");
  DAT_043f01b0 = (*param_2)(param_1,"nvnQueueBuilderGetCommandMemorySize");
  DAT_043f01b8 = (*param_2)(param_1,"nvnQueueBuilderGetComputeMemorySize");
  DAT_043f01c0 = (*param_2)(param_1,"nvnQueueBuilderGetControlMemorySize");
  DAT_043f01c8 = (*param_2)(param_1,"nvnQueueBuilderGetCommandFlushThreshold");
  DAT_043f01d0 = (*param_2)(param_1,"nvnQueueBuilderGetMemorySize");
  DAT_043f01d8 = (*param_2)(param_1,"nvnQueueBuilderGetMemory");
  DAT_043f01e0 = (*param_2)(param_1,"nvnQueueInitialize");
  DAT_043f01e8 = (*param_2)(param_1,"nvnQueueFinalize");
  DAT_043f01f0 = (*param_2)(param_1,"nvnQueueSetDebugLabel");
  DAT_043f01f8 = (*param_2)(param_1,"nvnQueueSubmitCommands");
  DAT_043f0200 = (*param_2)(param_1,"nvnQueueFlush");
  DAT_043f0208 = (*param_2)(param_1,"nvnQueueFinish");
  DAT_043f0210 = (*param_2)(param_1,"nvnQueuePresentTexture");
  DAT_043f0218 = (*param_2)(param_1,"nvnQueueAcquireTexture");
  DAT_043f0220 = (*param_2)(param_1,"nvnWindowBuilderSetDevice");
  DAT_043f0228 = (*param_2)(param_1,"nvnWindowBuilderSetDefaults");
  DAT_043f0230 = (*param_2)(param_1,"nvnWindowBuilderSetNativeWindow");
  DAT_043f0238 = (*param_2)(param_1,"nvnWindowBuilderSetTextures");
  DAT_043f0240 = (*param_2)(param_1,"nvnWindowBuilderSetPresentInterval");
  DAT_043f0248 = (*param_2)(param_1,"nvnWindowBuilderSetNumActiveTextures");
  DAT_043f0250 = (*param_2)(param_1,"nvnWindowBuilderGetDevice");
  DAT_043f0258 = (*param_2)(param_1,"nvnWindowBuilderGetNumTextures");
  DAT_043f0260 = (*param_2)(param_1,"nvnWindowBuilderGetTexture");
  DAT_043f0268 = (*param_2)(param_1,"nvnWindowBuilderGetNativeWindow");
  DAT_043f0270 = (*param_2)(param_1,"nvnWindowBuilderGetPresentInterval");
  DAT_043f0278 = (*param_2)(param_1,"nvnWindowBuilderGetNumActiveTextures");
  DAT_043f0280 = (*param_2)(param_1,"nvnWindowInitialize");
  DAT_043f0288 = (*param_2)(param_1,"nvnWindowFinalize");
  DAT_043f0290 = (*param_2)(param_1,"nvnWindowSetDebugLabel");
  DAT_043f0298 = (*param_2)(param_1,"nvnWindowAcquireTexture");
  DAT_043f02a0 = (*param_2)(param_1,"nvnWindowGetNativeWindow");
  DAT_043f02a8 = (*param_2)(param_1,"nvnWindowGetPresentInterval");
  DAT_043f02b0 = (*param_2)(param_1,"nvnWindowSetPresentInterval");
  DAT_043f02b8 = (*param_2)(param_1,"nvnWindowSetCrop");
  DAT_043f02c0 = (*param_2)(param_1,"nvnWindowGetCrop");
  DAT_043f02c8 = (*param_2)(param_1,"nvnWindowSetNumActiveTextures");
  DAT_043f02d0 = (*param_2)(param_1,"nvnWindowGetNumActiveTextures");
  DAT_043f02d8 = (*param_2)(param_1,"nvnWindowGetNumTextures");
  DAT_043f02e0 = (*param_2)(param_1,"nvnProgramInitialize");
  DAT_043f02e8 = (*param_2)(param_1,"nvnProgramFinalize");
  DAT_043f02f0 = (*param_2)(param_1,"nvnProgramSetDebugLabel");
  DAT_043f02f8 = (*param_2)(param_1,"nvnProgramSetShaders");
  DAT_043f0300 = (*param_2)(param_1,"nvnProgramSetShadersExt");
  DAT_043f0308 = (*param_2)(param_1,"nvnProgramSetSampleShading");
  DAT_043f0310 = (*param_2)(param_1,"nvnMemoryPoolBuilderSetDevice");
  DAT_043f0318 = (*param_2)(param_1,"nvnMemoryPoolBuilderSetDefaults");
  DAT_043f0320 = (*param_2)(param_1,"nvnMemoryPoolBuilderSetStorage");
  DAT_043f0328 = (*param_2)(param_1,"nvnMemoryPoolBuilderSetFlags");
  DAT_043f0330 = (*param_2)(param_1,"nvnMemoryPoolBuilderGetDevice");
  DAT_043f0338 = (*param_2)(param_1,"nvnMemoryPoolBuilderGetMemory");
  DAT_043f0340 = (*param_2)(param_1,"nvnMemoryPoolBuilderGetSize");
  DAT_043f0348 = (*param_2)(param_1,"nvnMemoryPoolBuilderGetFlags");
  DAT_043f0350 = (*param_2)(param_1,"nvnMemoryPoolInitialize");
  DAT_043f0358 = (*param_2)(param_1,"nvnMemoryPoolSetDebugLabel");
  DAT_043f0360 = (*param_2)(param_1,"nvnMemoryPoolFinalize");
  DAT_043f0368 = (*param_2)(param_1,"nvnMemoryPoolMap");
  DAT_043f0370 = (*param_2)(param_1,"nvnMemoryPoolFlushMappedRange");
  DAT_043f0378 = (*param_2)(param_1,"nvnMemoryPoolInvalidateMappedRange");
  DAT_043f0380 = (*param_2)(param_1,"nvnMemoryPoolGetBufferAddress");
  DAT_043f0388 = (*param_2)(param_1,"nvnMemoryPoolMapVirtual");
  DAT_043f0390 = (*param_2)(param_1,"nvnMemoryPoolGetSize");
  DAT_043f0398 = (*param_2)(param_1,"nvnMemoryPoolGetFlags");
  DAT_043f03a0 = (*param_2)(param_1,"nvnTexturePoolInitialize");
  DAT_043f03a8 = (*param_2)(param_1,"nvnTexturePoolSetDebugLabel");
  DAT_043f03b0 = (*param_2)(param_1,"nvnTexturePoolFinalize");
  DAT_043f03b8 = (*param_2)(param_1,"nvnTexturePoolRegisterTexture");
  DAT_043f03c0 = (*param_2)(param_1,"nvnTexturePoolRegisterImage");
  DAT_043f03c8 = (*param_2)(param_1,"nvnTexturePoolGetMemoryPool");
  DAT_043f03d0 = (*param_2)(param_1,"nvnTexturePoolGetMemoryOffset");
  DAT_043f03d8 = (*param_2)(param_1,"nvnTexturePoolGetSize");
  DAT_043f03e0 = (*param_2)(param_1,"nvnSamplerPoolInitialize");
  DAT_043f03e8 = (*param_2)(param_1,"nvnSamplerPoolSetDebugLabel");
  DAT_043f03f0 = (*param_2)(param_1,"nvnSamplerPoolFinalize");
  DAT_043f03f8 = (*param_2)(param_1,"nvnSamplerPoolRegisterSampler");
  DAT_043f0400 = (*param_2)(param_1,"nvnSamplerPoolRegisterSamplerBuilder");
  DAT_043f0408 = (*param_2)(param_1,"nvnSamplerPoolGetMemoryPool");
  DAT_043f0410 = (*param_2)(param_1,"nvnSamplerPoolGetMemoryOffset");
  DAT_043f0418 = (*param_2)(param_1,"nvnSamplerPoolGetSize");
  DAT_043f0420 = (*param_2)(param_1,"nvnBufferBuilderSetDevice");
  DAT_043f0428 = (*param_2)(param_1,"nvnBufferBuilderSetDefaults");
  DAT_043f0430 = (*param_2)(param_1,"nvnBufferBuilderSetStorage");
  DAT_043f0438 = (*param_2)(param_1,"nvnBufferBuilderGetDevice");
  DAT_043f0440 = (*param_2)(param_1,"nvnBufferBuilderGetMemoryPool");
  DAT_043f0448 = (*param_2)(param_1,"nvnBufferBuilderGetMemoryOffset");
  DAT_043f0450 = (*param_2)(param_1,"nvnBufferBuilderGetSize");
  DAT_043f0458 = (*param_2)(param_1,"nvnBufferInitialize");
  DAT_043f0460 = (*param_2)(param_1,"nvnBufferSetDebugLabel");
  DAT_043f0468 = (*param_2)(param_1,"nvnBufferFinalize");
  DAT_043f0470 = (*param_2)(param_1,"nvnBufferMap");
  DAT_043f0478 = (*param_2)(param_1,"nvnBufferGetAddress");
  DAT_043f0480 = (*param_2)(param_1,"nvnBufferFlushMappedRange");
  DAT_043f0488 = (*param_2)(param_1,"nvnBufferInvalidateMappedRange");
  DAT_043f0490 = (*param_2)(param_1,"nvnBufferGetMemoryPool");
  DAT_043f0498 = (*param_2)(param_1,"nvnBufferGetMemoryOffset");
  DAT_043f04a0 = (*param_2)(param_1,"nvnBufferGetSize");
  DAT_043f04a8 = (*param_2)(param_1,"nvnBufferGetDebugID");
  DAT_043f04b0 = (*param_2)(param_1,"nvnTextureBuilderSetDevice");
  DAT_043f04b8 = (*param_2)(param_1,"nvnTextureBuilderSetDefaults");
  DAT_043f04c0 = (*param_2)(param_1,"nvnTextureBuilderSetFlags");
  DAT_043f04c8 = (*param_2)(param_1,"nvnTextureBuilderSetTarget");
  DAT_043f04d0 = (*param_2)(param_1,"nvnTextureBuilderSetWidth");
  DAT_043f04d8 = (*param_2)(param_1,"nvnTextureBuilderSetHeight");
  DAT_043f04e0 = (*param_2)(param_1,"nvnTextureBuilderSetDepth");
  DAT_043f04e8 = (*param_2)(param_1,"nvnTextureBuilderSetSize1D");
  DAT_043f04f0 = (*param_2)(param_1,"nvnTextureBuilderSetSize2D");
  DAT_043f04f8 = (*param_2)(param_1,"nvnTextureBuilderSetSize3D");
  DAT_043f0500 = (*param_2)(param_1,"nvnTextureBuilderSetLevels");
  DAT_043f0508 = (*param_2)(param_1,"nvnTextureBuilderSetFormat");
  DAT_043f0510 = (*param_2)(param_1,"nvnTextureBuilderSetSamples");
  DAT_043f0518 = (*param_2)(param_1,"nvnTextureBuilderSetSwizzle");
  DAT_043f0520 = (*param_2)(param_1,"nvnTextureBuilderSetDepthStencilMode");
  DAT_043f0528 = (*param_2)(param_1,"nvnTextureBuilderGetStorageSize");
  DAT_043f0530 = (*param_2)(param_1,"nvnTextureBuilderGetStorageAlignment");
  DAT_043f0538 = (*param_2)(param_1,"nvnTextureBuilderSetStorage");
  DAT_043f0540 = (*param_2)(param_1,"nvnTextureBuilderSetPackagedTextureData");
  DAT_043f0548 = (*param_2)(param_1,"nvnTextureBuilderSetPackagedTextureLayout");
  DAT_043f0550 = (*param_2)(param_1,"nvnTextureBuilderSetStride");
  DAT_043f0558 = (*param_2)(param_1,"nvnTextureBuilderSetGLTextureName");
  DAT_043f0560 = (*param_2)(param_1,"nvnTextureBuilderGetStorageClass");
  DAT_043f0568 = (*param_2)(param_1,"nvnTextureBuilderGetDevice");
  DAT_043f0570 = (*param_2)(param_1,"nvnTextureBuilderGetFlags");
  DAT_043f0578 = (*param_2)(param_1,"nvnTextureBuilderGetTarget");
  DAT_043f0580 = (*param_2)(param_1,"nvnTextureBuilderGetWidth");
  DAT_043f0588 = (*param_2)(param_1,"nvnTextureBuilderGetHeight");
  DAT_043f0590 = (*param_2)(param_1,"nvnTextureBuilderGetDepth");
  DAT_043f0598 = (*param_2)(param_1,"nvnTextureBuilderGetLevels");
  DAT_043f05a0 = (*param_2)(param_1,"nvnTextureBuilderGetFormat");
  DAT_043f05a8 = (*param_2)(param_1,"nvnTextureBuilderGetSamples");
  DAT_043f05b0 = (*param_2)(param_1,"nvnTextureBuil
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

## battle

### 01174890 — _INIT_163

- Signature: undefined _INIT_163(void)
- Body bytes: 12720
- String xrefs: 80 (80 unique strings)
- Candidate score: 402
- Sample strings: anime_L_list_poke_00_L_info_poke_00_switch_status | anime_L_list_poke_00_L_info_poke_01_switch_status | anime_L_list_poke_00_L_info_poke_02_switch_status | anime_L_list_poke_00_L_info_poke_03_switch_status | anime_L_list_poke_00_L_info_poke_04_switch_status | anime_L_list_poke_00_L_info_poke_05_switch_status | anime_L_list_poke_00_L_info_poke_06_switch_status | anime_L_list_poke_00_L_info_poke_07_switch_status | anime_L_list_poke_00_L_info_poke_08_switch_status | anime_L_list_poke_00_L_info_poke_09_switch_status | anime_L_list_poke_00_L_info_poke_10_switch_status | anime_L_list_poke_00_L_info_poke_11_switch_status
- Direct callers: []
- Direct callees: [{"entry": "00100250", "name": "FUN_00100250", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void _INIT_163(void)

{
  DAT_043bafb0 = 0;
  DAT_043bafd0 = 0;
  DAT_043baff0 = 0;
  DAT_043bb010 = 0;
  DAT_043bb030 = 0;
  DAT_043bad98 = 0x77d9ac6b62fa7861;
  DAT_043bada0 = "pane_L_list_poke_00_L_info_poke_00";
  DAT_043badb8 = 0x59324e0deaf061a1;
  DAT_043badc0 = "pane_L_list_poke_00_L_info_poke_00_P_loader_icon_poke_00";
  DAT_043bb050 = 0;
  DAT_043badd8 = 0x5ae6ef18a4491dd;
  DAT_043bade0 = "pane_L_list_poke_00_L_info_poke_00_T_p_lv_00";
  DAT_043bb070 = 0;
  DAT_043bb090 = 0;
  DAT_043badf8 = 0xebaf8d5c25455345;
  DAT_043bae00 = "anime_L_list_poke_00_L_info_poke_00_switch_status";
  DAT_043bae18 = 0x77d9ab6b62fa76ae;
  DAT_043bae20 = "pane_L_list_poke_00_L_info_poke_01";
  DAT_043bb0b0 = 0;
  DAT_043bae38 = 0xceb3bc0ca93aa1b2;
  DAT_043bae40 = "pane_L_list_poke_00_L_info_poke_01_P_loader_icon_poke_00";
  DAT_043bb0d0 = 0;
  DAT_043bae58 = 0x44ebf8ab61493516;
  DAT_043bae60 = "pane_L_list_poke_00_L_info_poke_01_T_p_lv_00";
  DAT_043bb0f0 = 0;
  DAT_043bae78 = 0xb4f28e8f5a736c2;
  DAT_043bae80 = "anime_L_list_poke_00_L_info_poke_01_switch_status";
  DAT_043bb110 = 0;
  DAT_043bae98 = 0x77d9aa6b62fa74fb;
  DAT_043baea0 = "pane_L_list_poke_00_L_info_poke_02";
  DAT_043bb130 = 0;
  DAT_043baeb8 = 0x3fe4317c574edfab;
  DAT_043baec0 = "pane_L_list_poke_00_L_info_poke_02_P_loader_icon_poke_00";
  DAT_043bb150 = 0;
  DAT_043baed8 = 0x42faa5ac08756f83;
  DAT_043baee0 = "pane_L_list_poke_00_L_info_poke_02_T_p_lv_00";
  DAT_043bb170 = 0;
  DAT_043baef8 = 0x1eb4b727127ac4f3;
  DAT_043baf00 = "anime_L_list_poke_00_L_info_poke_02_switch_status";
  DAT_043bb190 = 0;
  DAT_043baf18 = 0x77d9a96b62fa7348;
  DAT_043baf20 = "pane_L_list_poke_00_L_info_poke_03";
  DAT_043bb1b0 = 0;
  DAT_043baf38 = 0xd072d9ad06656e4;
  DAT_043baf40 = "pane_L_list_poke_00_L_info_poke_03_P_loader_icon_poke_00";
  DAT_043bb1d0 = 0;
  DAT_043baf58 = 0x5a00e1f7da7c454c;
  DAT_043baf60 = "pane_L_list_poke_00_L_info_poke_03_T_p_lv_00";
  DAT_043bb1f0 = 0;
  DAT_043baf78 = 0xc0d30be07fc302c8;
  DAT_043baf80 = "anime_L_list_poke_00_L_info_poke_03_switch_status";
  DAT_043baf90 = 0;
  DAT_043baf98 = 0x77d9b06b62fa7f2d;
  DAT_043bafa0 = "pane_L_list_poke_00_L_info_poke_04";
  DAT_043bafb8 = 0x15811b37d2797585;
  DAT_043bafc0 = "pane_L_list_poke_00_L_info_poke_04_P_loader_icon_poke_00";
  DAT_043bafa8 = 0x22;
  DAT_043bafd8 = 0x27404cfe27a4b791;
  DAT_043bafe0 = "pane_L_list_poke_00_L_info_poke_04_T_p_lv_00";
  DAT_043bafc8 = 0x38;
  DAT_043baff8 = 0x1032b2d340b08451;
  DAT_043bb000 = "anime_L_list_poke_00_L_info_poke_04_switch_status";
  DAT_043bb028 = 0x22;
  DAT_043bb018 = 0x77d9af6b62fa7d7a;
  DAT_043bb020 = "pane_L_list_poke_00_L_info_poke_05";
  DAT_043bb048 = 0x38;
  DAT_043bb038 = 0xb73dbf3fa18de7f6;
  DAT_043bb040 = "pane_L_list_poke_00_L_info_poke_05_P_loader_icon_poke_00";
  DAT_043bb0a8 = 0x22;
  DAT_043bb058 = 0x58620987ee911a1a;
  DAT_043bb060 = "pane_L_list_poke_00_L_info_poke_05_T_p_lv_00";
  DAT_043bb0c8 = 0x38;
  DAT_043bb078 = 0x6deec2c65c16dfee;
  DAT_043bb080 = "anime_L_list_poke_00_L_info_poke_05_switch_status";
  DAT_043bb128 = 0x22;
  DAT_043bb098 = 0x77d9ae6b62fa7bc7;
  DAT_043bb0a0 = "pane_L_list_poke_00_L_info_poke_06";
  DAT_043bb148 = 0x38;
  DAT_043bb0b8 = 0x44884eddb51b769f;
  DAT_043bb0c0 = "pane_L_list_poke_00_L_info_poke_06_P_loader_icon_poke_00";
  DAT_043bb1a8 = 0x22;
  DAT_043bb0d8 = 0x3f949e12adb40487;
  DAT_043bb0e0 = "pane_L_list_poke_00_L_info_poke_06_T_p_lv_00";
  DAT_043bb1c8 = 0x38;
  DAT_043bb0f8 = 0x66254bd0e76aa20f;
  DAT_043bb100 = "anime_L_list_poke_00_L_info_poke_06_switch_status";
  DAT_043bb210 = 0;
  DAT_043bb118 = 0x77d9ad6b62fa7a14;
  DAT_043bb120 = "pane_L_list_poke_00_L_info_poke_07";
  DAT_043bb228 = 0x22;
  DAT_043bb138 = 0x841427f0e0f032a8;
  DAT_043bb140 = "pane_L_list_poke_00_L_info_poke_07_P_loader_icon_poke_00";
  DAT_043bb230 = 0;
  DAT_043bb158 = 0xb2b59d7c68cb9bb0;
  DAT_043bb160 = "pane_L_list_poke_00_L_info_poke_07_T_p_lv_00";
  DAT_043bb248 = 0x38;
  DAT_043bb178 = 0xd6fe2f5ac0cdcac4;
  DAT_043bb180 = "anime_L_list_poke_00_L_info_poke_07_switch_status";
  DAT_043bb250 = 0;
  DAT_043bb198 = 0x77d9a46b62fa6ac9;
  DAT_043bb1a0 = "pane_L_list_poke_00_L_info_poke_08";
  DAT_043bb270 = 0;
  DAT_043bb1b8 = 0x145a9ffcc232b929;
  DAT_043bb1c0 = "pane_L_list_poke_00_L_info_poke_08_P_loader_icon_poke_00";
  DAT_043bb290 = 0;
  DAT_043bb1d8 = 0x22cd683a25a47af5;
  DAT_043bb1e0 = "pane_L_list_poke_00_L_info_poke_08_T_p_lv_00";
  DAT_043bb2a8 = 0x22;
  DAT_043bb1f8 = 0xe7b0783e2e2fdd0d;
  DAT_043bb200 = "anime_L_list_poke_00_L_info_poke_08_switch_status";
  DAT_043bb2b0 = 0;
  DAT_043bb218 = 0x77d9a36b62fa6916;
  DAT_043bb220 = "pane_L_list_poke_00_L_info_poke_09";
  DAT_043bb2c8 = 0x38;
  DAT_043bb238 = 0xf3a68669214505a;
  DAT_043bb240 = "pane_L_list_poke_00_L_info_poke_09_P_loader_icon_poke_00";
  DAT_043bb2d0 = 0;
  DAT_043bb258 = 0xf961055362f1aa0e;
  DAT_043bb260 = "pane_L_list_poke_00_L_info_poke_09_T_p_lv_00";
  DAT_043bb2f0 = 0;
  DAT_043bb278 = 0x7a57857309d7e16a;
  DAT_043bb280 = "anime_L_list_poke_00_L_info_poke_09_switch_status";
  DAT_043bb328 = 0x22;
  DAT_043bb298 = 0x77d6266b62f75ed8;
  DAT_043bb2a0 = "pane_L_list_poke_00_L_info_poke_10";
  DAT_043bb3c8 = 0x38;
  DAT_043bb2b8 = 0x35cf5122318aecb4;
  DAT_043bb2c0 = "pane_L_list_poke_00_L_info_poke_10_P_loader_icon_poke_00";
  DAT_043bb428 = 0x22;
  DAT_043bb2d8 = 0x3090537fe81c49bc;
  DAT_043bb2e0 = "pane_L_list_poke_00_L_info_poke_10_T_p_lv_00";
  DAT_043bb448 = 0x38;
  DAT_043bb2f8 = 0xdece095a5792a258;
  DAT_043bb300 = "anime_L_list_poke_00_L_info_poke_10_switch_status";
  DAT_043bb450 = 0;
  DAT_043bb318 = 0x77d6276b62f7608b;
  DAT_043bb320 = "pane_L_list_poke_00_L_info_poke_11";
  DAT_043bb430 = 0;
  DAT_043bb338 = 0xfe24a682210497fb;
  DAT_043bb340 = "pane_L_list_poke_00_L_info_poke_11_P_loader_icon_poke_00";
  DAT_043bb410 = 0;
  DAT_043bb358 = 0xb19698807238eaf3;
  DAT_043bb360 = "pane_L_list_poke_00_L_info_poke_11_T_p_lv_00";
  DAT_043bb3f0 = 0;
  DAT_043bb378 = 0xe1643bffa04ceb43;
  DAT_043bb380 = "anime_L_list_poke_00_L_info_poke_11_switch_status";
  DAT_043bb3d0 = 0;
  DAT_043bb398 = 0x77d6286b62f7623e;
  DAT_043bb3a0 = "pane_L_list_poke_00_L_info_poke_12";
  DAT_043bb3b0 = 0;
  DAT_043bb3b8 = 0xd65608997e482e02;
  DAT_043bb3c0 = "pane_L_list_poke_00_L_info_poke_12_P_loader_icon_poke_00";
  DAT_043bb3a8 = 0x22;
  DAT_043bb3d8 = 0xe5c1337aaab1d0c6;
  DAT_043bb3e0 = "pane_L_list_poke_00_L_info_poke_12_T_p_lv_00";
  DAT_043bb390 = 0;
  DAT_043bb3f8 = 0x70a4bf2b3000b9d2;
  DAT_043bb400 = "anime_L_list_poke_00_L_info_poke_12_switch_status";
  DAT_043bb4a8 = 0x22;
  DAT_043bb418 = 0x77d6296b62f763f1;
  DAT_043bb420 = "pane_L_list_poke_00_L_info_poke_13";
  DAT_043bb528 = 0x22;
  DAT_043bb438 = 0xc5b94ea8ca93c9b1;
  DAT_043bb440 = "pane_L_list_poke_00_L_info_poke_13_P_loader_icon_poke_00";
  DAT_043bb5a8 = 0x22;
  DAT_043bb458 = 0xb31a325d2412498d;
  DAT_043bb460 = "pane_L_list_poke_00_L_info_poke_13_T_p_lv_00";
  DAT_043bb628 = 0x22;
  DAT_043bb478 = 0xeaf6bb503344fb95;
  DAT_043bb480 = "anime_L_list_poke_00_L_info_poke_13_switch_status";
  DAT_043bb6a8 = 0x22;
  DAT_043bb498 = 0x77d62a6b62f765a4;
  DAT_043bb4a0 = "pane_L_list_poke_00_L_info_poke_14";
  DAT_043bcd28 = 0x22;
  DAT_043bb4b8 = 0xca5d6bb02cf003f8;
  DAT_043bb4c0 = "pane_L_list_poke_00_L_info_poke_14_P_loader_icon_poke_00";
  DAT_043bb728 = 0x22;
  DAT_043bb4d8 = 0x96355b2e0a6a02a0;
  DAT_043bb4e0 = "pane_L_list_poke_00_L_info_poke_14_T_p_lv_00";
  DAT_043bcca8 = 0x22;
  DAT_043bb4f8 = 0x7dbda27a5c429894;
  DAT_043bb500 = "anime_L_list_poke_00_L_info_poke_14_switch_status";
  DAT_043bcc28 = 0x22;
  DAT_043bb518 = 0x77d62b6b62f76757;
  DAT_043bb520 = "pane_L_list_poke_00_L_info_poke_15";
  DAT_043bb7a8 = 0x22;
  DAT_043bb538 = 0xc4b20bfe673f99ef;
  DAT_043bb540 = "pane_L_list_poke_00_L_info_poke_15_P_loader_icon_poke_00";
  DAT_043bcba8 = 0x22;
  DAT_043bb558 = 0xa5ffd050190e0037;
  DAT_043bb560 = "pane_L_list_poke_00_L_info_poke_15_T_p_lv_00";
  DAT_043bcb28 = 0x22;
  DAT_043bb578 = 0xdb06406ef10eeedf;
  DAT_043bb580 = "anime_L_list_poke_00_L_info_poke_15_switch_status";
  DAT_043bb828 = 0x22;
  DAT_043bb598 = 0x77d62c6b62f7690a;
  DAT_043bb5a0 = "pane_L_list_poke_00_L_info_poke_16";
  DAT_043bcaa8 = 0x22;
  DAT_043bb5b8 = 0x7000b95b78f5786;
  DAT_043bb5c0 = "pane_L_list_poke_00_L_info_poke_16_P_loader_icon_poke_00";
  DAT_043bca28 = 0x22;
  DAT_043bb5d8 = 0xa22d430db3ded74a;
  DAT_043bb5e0 = "pane_L_list_poke_00_L_info_poke_16_T_p_lv_00";
  DAT_043bb8a8 = 0x22;
  DAT_043bb5f8 = 0x469fbcbdf6ca99fe;
  DAT_043bb600 = "anime_L_list_poke_00_L_info_poke_16_switch_status";
  DAT_043bc9a8 = 0x22;
  DAT_043bb618 = 0x77d62d6b62f76abd;
  DAT_043bb620 = "pane_L_list_poke_00_L_info_poke_17";
  DAT_043bc928 = 0x22;
  DAT_043bb638 = 0x4f1d2b3cdddbbdd5;
  DAT_043bb640 = "pane_L_list_poke_00_L_info_poke_17_P_loader_icon_poke_00";
  DAT_043bb928 = 0x22;
  DAT_043bb658 = 0x22d256bc63852641;
  DAT_043bb660 = "pane_L_list_poke_00_L_info_poke_17_T_p_lv_00";
  DAT_043bc8a8 = 0x22;
  DAT_043bb678 = 0xd6623d7eca10cb61;
  DAT_043bb680 = "anime_L_list_poke_00_L_info_poke_17_switch_status";
  DAT_043bc828 = 0x22;
  DAT_043bb698 = 0x77d61e6b62f75140;
  DAT_043bb6a0 = "pane_L_list_poke_00_L_info_poke_18";
  DAT_043bb9a8 = 0x22;
  DAT_043bb6b8 = 0x3461d392c12104fc;
  DAT_043bb6c0 = "pane_L_list_poke_00_L_info_poke_18_P_loader_icon_poke_00";
  DAT_043bc7a8 = 0x22;
  DAT_043bb6d8 = 0x28276ab20a7e634;
  DAT_043bb6e0 = "pane_L_list_poke_00_L_info_poke_18_T_p_lv_00";
  DAT_043bc728 = 0x22;
  DAT_043bb6f8 = 0x219b116eed96d980;
  DAT_043bb700 = "anime_L_list_poke_00_L_info_poke_18_switch_status";
  DAT_043bba28 = 0x22;
  DAT_043bb718 = 0x77d61f6b62f752f3;
  DAT_043bb720 = "pane_L_list_poke_00_L_info_poke_19";
  DAT_043bc6a8 = 0x22;
  DAT_043bb738 = 0x2f9ed7fea8454243;
  DAT_043bb740 = "pane_L_list_poke_00_L_info_poke_19_P_loader_icon_poke_00";
  DAT_043bc628 = 0x22;
  DAT_043bb758 = 0xb7be88aba1a927cb;
  DAT_043bb760 = "pane_L_list_poke_00_L_info_poke_19_T_p_lv_00";
  DAT_043bb348 = 0x38;
  DAT_043bb778 = 0xb1cf644ab6d0c30b;
  DAT_043bb780 = "anime_L_list_poke_00_L_info_poke_19_switch_status";
  DAT_043bb4c8 = 0x38;
  DAT_043bb798 = 0x77e0986b63007513;
  DAT_043bb7a0 = "pane_L_list_poke_00_L_info_poke_20";
  DAT_043bb548 = 0x38;
  DAT_043bb7b8 = 0x7ed6cfaa2883d8e3;
  DAT_043bb7c0 = "pane_L_list_poke_00_L_info_poke_20_P_loader_icon_poke_00";
  DAT_043bb5c8 = 0x38;
  DAT_043bb7d8 = 0x2773b6efadd3ac2b;
  DAT_043bb7e0 = "pane_L_list_poke_00_L_info_poke_20_T_p_lv_00";
  DAT_043bb648 = 0x38;
  DAT_043bb7f8 = 0xbfef9d75087bd92b;
  DAT_043bb800 = "anime_L_list_poke_00_L_info_poke_20_switch_status";
  DAT_043bb6c8 = 0x38;
  DAT_043bb818 = 0x77e0976b63007360;
  DAT_043bb820 = "pane_L_list_poke_00_L_info_poke_21";
  DAT_043bcd48 = 0x38;
  DAT_043bb838 = 0xb8512d4d462e641c;
  DAT_043bb840 = "pane_L_list_poke_00_L_info_poke_21_P_loader_icon_poke_00";
  DAT_043bccc8 = 0x38;
  DAT_043bb858 = 0xe99278e8b05c0814;
  DAT_043bb860 = "pane_L_list_poke_00_L_info_poke_21_T_p_lv_00";
  DAT_043bb748 = 0x38;
  DAT_043bb878 = 0x7acfdab37c818620;
  DAT_043bb880 = "anime_L_list_poke_00_L_info_poke_21_switch_status";
  DAT_043bcc48 = 0x38;
  DAT_043bb898 = 0x77e09a6b63007879;
  DAT_043bb8a0 = "pane_L_list_poke_00_L_info_poke_22";
  DAT_043bcbc8 = 0x38;
  DAT_043bb8b8 = 0x1a93086916b207d9;
  DAT_043bb8c0 = "pane_L_list_poke_00_L_info_poke_22_P_loader_icon_poke_00";
  DAT_043bb7c8 = 0x38;
  DAT_043bb8d8 = 0xdbee12bc52869b05;
  DAT_043bb8e0 = "pane_L_list_poke_00_L_info_poke_22_T_p_lv_00";
  DAT_043bcb48 = 0x38;
  DAT_043bb8f8 = 0x8a723852e74a59bd;
  DAT_043bb900 = "anime_L_list_poke_00_L_info_poke_22_switch_status";
  DAT_043bcac8 = 0x38;
  DAT_043bb918 = 0x77e0996b630076c6;
  DAT_043bb920 = "pane_L_list_poke_00_L_info_poke_23";
  DAT_043bb848 = 0x38;
  DAT_043bb938 = 0x338ef31bee5d4aca;
  DAT_043bb940 = "pane_L_list_poke_00_L_info_poke_23_P_loader_icon_poke_00";
  DAT_043bca48 = 0x38;
  DAT_043bb958 = 0xae4b5b55c8fbff9e;
  DAT_043bb960 = "pane_L_list_poke_00_L_info_poke_23_T_p_lv_00";
  
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 02081f8c — FUN_02081f8c

- Signature: undefined FUN_02081f8c(void)
- Body bytes: 19220
- String xrefs: 85 (17 unique strings)
- Candidate score: 255
- Sample strings: GetBallOutNpcReactionTarget | GetBallOutNpcReactionTargetPokemonAnimationController | IsBallOutNpcReactionTargetPokemon | IsBattleBallOut | IsBattleEndReturnPlayerReq | IsBattleStartFailure | IsRequestReturnPlayer | MoveDirectItemEventTargetToHold | OnBattleBallIn | OnBattleBallOut | OnBattleCommandEscapeEnd | OnBattleEnd
- Direct callers: [{"entry": "02081910", "name": "FUN_02081910", "call_count": 1}]
- Direct callees: [{"entry": "033a2520", "name": "strlen", "call_count": 97}, {"entry": "008f2c60", "name": "FUN_008f2c60", "call_count": 51}, {"entry": "033a23b0", "name": "memcpy", "call_count": 46}, {"entry": "033a3190", "name": "__throw_length_error", "call_count": 46}, {"entry": "02bcc824", "name": "FUN_02bcc824", "call_count": 3}, {"entry": "033a4530", "name": "__cxa_thread_atexit", "call_count": 3}, {"entry": "033a28b0", "name": "memcmp", "call_count": 2}, {"entry": "008cca50", "name": "FUN_008cca50", "call_count": 1}, {"entry": "008e8c90", "name": "FUN_008e8c90", "call_count": 1}, {"entry": "008e8ed4", "name": "FUN_008e8ed4", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_02081f8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                 undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16
                 ,undefined8 *param_17,undefined8 *param_18,undefined8 *param_19,
                 undefined8 *param_20,undefined8 *param_21,undefined8 *param_22,undefined8 *param_23
                 ,undefined8 *param_24,undefined8 *param_25,undefined8 *param_26,
                 undefined8 *param_27,undefined8 *param_28,undefined8 *param_29,undefined8 *param_30
                 ,undefined8 *param_31,undefined8 *param_32,undefined8 *param_33,
                 undefined8 *param_34,undefined8 *param_35,undefined8 *param_36,undefined8 *param_37
                 ,undefined8 *param_38,undefined8 *param_39,undefined8 *param_40,
                 undefined8 *param_41,undefined8 *param_42,undefined8 *param_43,undefined8 *param_44
                 ,undefined8 *param_45,undefined8 *param_46,undefined8 *param_47)

{
  long *plVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *psVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  size_t sVar60;
  ulong uVar61;
  long lVar62;
  ulong uVar63;
  long *plVar64;
  long lVar65;
  long *plVar66;
  long lVar67;
  string *psVar68;
  long lVar69;
  string *psVar70;
  ulong uVar71;
  string *psVar72;
  char *pcVar73;
  long *plVar74;
  void *pvVar75;
  ulong uVar76;
  byte local_1158;
  undefined7 uStack_1157;
  undefined1 local_1150;
  undefined7 uStack_114f;
  void *local_1148;
  undefined7 local_1140;
  undefined1 uStack_1139;
  undefined7 uStack_1138;
  byte local_1130;
  undefined7 uStack_112f;
  undefined1 local_1128;
  undefined7 uStack_1127;
  void *local_1120;
  undefined7 local_1118;
  undefined1 uStack_1111;
  undefined7 uStack_1110;
  byte local_1108;
  undefined7 uStack_1107;
  undefined1 local_1100;
  undefined7 uStack_10ff;
  void *local_10f8;
  undefined7 local_10f0;
  undefined1 uStack_10e9;
  undefined7 uStack_10e8;
  byte local_10e0;
  undefined7 uStack_10df;
  undefined1 local_10d8;
  undefined7 uStack_10d7;
  void *local_10d0;
  undefined7 local_10c8;
  undefined1 uStack_10c1;
  undefined7 uStack_10c0;
  byte local_10b8;
  undefined7 uStack_10b7;
  undefined1 local_10b0;
  undefined7 uStack_10af;
  void *local_10a8;
  undefined7 local_10a0;
  undefined1 uStack_1099;
  undefined7 uStack_1098;
  byte local_1090;
  undefined7 uStack_108f;
  undefined1 local_1088;
  undefined7 uStack_1087;
  void *local_1080;
  undefined7 local_1078;
  undefined1 uStack_1071;
  undefined7 uStack_1070;
  byte local_1068;
  undefined7 uStack_1067;
  undefined1 local_1060;
  undefined7 uStack_105f;
  void *local_1058;
  undefined7 local_1050;
  undefined1 uStack_1049;
  undefined7 uStack_1048;
  byte local_1040;
  undefined7 uStack_103f;
  undefined1 local_1038;
  undefined7 uStack_1037;
  void *local_1030;
  undefined7 local_1028;
  undefined1 uStack_1021;
  undefined7 uStack_1020;
  byte local_1018;
  undefined7 uStack_1017;
  undefined1 local_1010;
  undefined7 uStack_100f;
  void *local_1008;
  undefined7 local_1000;
  undefined1 uStack_ff9;
  undefined7 uStack_ff8;
  byte local_ff0;
  undefined7 uStack_fef;
  undefined1 local_fe8;
  undefined7 uStack_fe7;
  void *local_fe0;
  undefined7 local_fd8;
  undefined1 uStack_fd1;
  undefined7 uStack_fd0;
  byte local_fc8;
  undefined7 uStack_fc7;
  undefined1 local_fc0;
  undefined7 uStack_fbf;
  void *local_fb8;
  undefined7 local_fb0;
  undefined1 uStack_fa9;
  undefined7 uStack_fa8;
  byte local_fa0;
  undefined7 uStack_f9f;
  undefined1 local_f98;
  undefined7 uStack_f97;
  void *local_f90;
  undefined7 local_f88;
  undefined1 uStack_f81;
  undefined7 uStack_f80;
  byte local_f78;
  undefined7 uStack_f77;
  undefined1 local_f70;
  undefined7 uStack_f6f;
  void *local_f68;
  undefined7 local_f60;
  undefined1 uStack_f59;
  undefined7 uStack_f58;
  byte local_f50;
  undefined7 uStack_f4f;
  undefined1 local_f48;
  undefined7 uStack_f47;
  void *local_f40;
  undefined7 local_f38;
  undefined1 uStack_f31;
  undefined7 uStack_f30;
  byte local_f28;
  undefined7 uStack_f27;
  undefined1 local_f20;
  undefined7 uStack_f1f;
  void *local_f18;
  undefined7 local_f10;
  undefined1 uStack_f09;
  undefined7 uStack_f08;
  byte local_f00;
  undefined7 uStack_eff;
  undefined1 local_ef8;
  undefined7 uStack_ef7;
  void *local_ef0;
  undefined7 local_ee8;
  undefined1 uStack_ee1;
  undefined7 uStack_ee0;
  byte local_ed8;
  undefined7 uStack_ed7;
  undefined1 local_ed0;
  undefined7 uStack_ecf;
  void *local_ec8;
  undefined7 local_ec0;
  undefined1 uStack_eb9;
  undefined7 uStack_eb8;
  byte local_eb0;
  undefined7 uStack_eaf;
  undefined1 local_ea8;
  undefined7 uStack_ea7;
  void *local_ea0;
  undefined7 local_e98;
  undefined1 uStack_e91;
  undefined7 uStack_e90;
  byte local_e88;
  undefined7 uStack_e87;
  undefined1 local_e80;
  undefined7 uStack_e7f;
  void *local_e78;
  undefined7 local_e70;
  undefined1 uStack_e69;
  undefined7 uStack_e68;
  byte local_e60;
  undefined7 uStack_e5f;
  undefined1 local_e58;
  undefined7 uStack_e57;
  void *local_e50;
  undefined7 local_e48;
  undefined1 uStack_e41;
  undefined7 uStack_e40;
  byte local_e38;
  undefined7 uStack_e37;
  undefined1 local_e30;
  undefined7 uStack_e2f;
  void *local_e28;
  undefined7 local_e20;
  undefined1 uStack_e19;
  undefined7 uStack_e18;
  byte local_e10;
  undefined7 uStack_e0f;
  undefined1 local_e08;
  undefined7 uStack_e07;
  void *local_e00;
  undefined7 local_df8;
  undefined1 uStack_df1;
  undefined7 uStack_df0;
  byte local_de8;
  undefined7 uStack_de7;
  undefined1 local_de0;
  undefined7 uStack_ddf;
  void *local_dd8;
  undefined7 local_dd0;
  undefined1 uStack_dc9;
  undefined7 uStack_dc8;
  byte local_dc0;
  undefined7 uStack_dbf;
  undefined1 local_db8;
  undefined7 uStack_db7;
  void *local_db0;
  undefined7 local_da8;
  undefined1 uStack_da1;
  undefined7 uStack_da0;
  byte local_d98;
  undefined7 uStack_d97;
  undefined1 local_d90;
  undefined7 uStack_d8f;
  void *local_d88;
  undefined7 local_d80;
  undefined1 uStack_d79;
  undefined7 uStack_d78;
  byte local_d70;
  undefined7 uStack_d6f;
  undefined1 local_d68;
  undefined7 uStack_d67;
  void *local_d60;
  undefined7 local_d58;
  undefined1 uStack_d51;
  undefined7 uStack_d50;
  byte local_d48;
  undefined7 uStack_d47;
  undefined1 local_d40;
  undefined7 uStack_d3f;
  void *local_d38;
  undefined7 local_d30;
  undefined1 uStack_d29;
  undefined7 uStack_d28;
  byte local_d20;
  undefined7 uStack_d1f;
  undefined1 local_d18;
  undefined7 uStack_d17;
  void *local_d10;
  undefined7 local_d08;
  undefined1 uStack_d01;
  undefined7 uStack_d00;
  byte local_cf8;
  undefined7 uStack_cf7;
  undefined1 local_cf0;
  undefined7 uStack_cef;
  void *local_ce8;
  undefined7 local_ce0;
  undefined1 uStack_cd9;
  undefined7 uStack_cd8;
  byte local_cd0;
  undefined7 uStack_ccf;
  undefined1 local_cc8;
  undefined7 uStack_cc7;
  void *local_cc0;
  undefined7 local_cb8;
  undefined1 uStack_cb1;
  undefined7 uStack_cb0;
  byte local_ca8;
  undefined7 uStack_ca7;
  undefined1 local_ca0;
  undefined7 uStack_c9f;
  void *local_c98;
  undefined7 local_c90;
  undefined1 uStack_c89;
  undefined7 uStack_c88;
  byte local_c80;
  undefined7 uStack_c7f;
  undefined1 local_c78;
  undefined7 uStack_c77;
  void *local_c70;
  undefined7 local_c68;
  undefined1 uStack_c61;
  undefined7 uStack_c60;
  byte local_c58;
  undefined7 uStack_c57;
  undefined1 local_c50;
  undefined7 uStack_c4f;
  void *local_c48;
  undefined7 local_c40;
  undefined1 uStack_c39;
  undefined7 uStack_c38;
  byte local_c30;
  undefined7 uStack_c2f;
  undefined1 local_c28;
  undefined7 uStack_c27;
  void *local_c20;
  undefined7 local_c18;
  undefined1 uStack_c11;
  undefined7 uStack_c10;
  byte local_c08;
  undefined7 uStack_c07;
  undefined1 local_c00;
  undefined7 uStack_bff;
  void *local_bf8;
  undefined7 local_bf0;
  undefined1 uStack_be9;
  undefined7 uStack_be8;
  byte local_be0;
  undefined7 uStack_bdf;
  undefined1 local_bd8;
  undefined7 uStack_bd7;
  void *local_bd0;
  undefined7 local_bc8;
  undefined1 uStack_bc1;
  undefined7 uStack_bc0;
  byte local_bb8;
  undefined7 uStack_bb7;
  undefined1 local_bb0;
  undefined7 uStack_baf;
  void *local_ba8;
  undefined7 local_ba0;
  undefined1 uStack_b99;
  undefined7 uStack_b98;
  byte local_b90;
  undefined7 uStack_b8f;
  undefined1 local_b88;
  undefined7 uStack_b87;
  void *local_b80;
  undefined7 local_b78;
  undefined1 uStack_b71;
  undefined7 uStack_b70;
  byte local_b68;
  undefined7 uStack_b67;
  undefined1 local_b60;
  undefined7 uStack_b5f;
  void *local_b58;
  undefined7 local_b50;
  undefined1 uStack_b49;
  undefined7 uStack_b48;
  byte local_b40;
  undefined7 uStack_b3f;
  undefined1 local_b38;
  undefined7 uStack_b37;
  void *local_b30;
  undefined7 local_b28;
  undefined1 uStack_b21;
  undefined7 uStack_b20;
  byte local_b18;
  undefined7 uStack_b17;
  undefined1 local_b10;
  undefined7 uStack_b0f;
  void *local_b08;
  undefined7 local_b00;
  undefined1 uStack_af9;
  undefined7 uStack_af8;
  byte local_af0;
  undefined7 uStack_aef;
  undefined1 local_ae8;
  undefined7 uStack_ae7;
  void *local_ae0;
  undefined7 local_ad8;
  undefined1 uStack_ad1;
  undefined7 uStack_ad0;
  byte local_ac8;
  undefined7 uStack_ac7;
  undefined1 local_ac0;
  undefined7 uStack_abf;
  void *local_ab8;
  undefined7 local_ab0;
  undefined1 uStack_aa9;
  undefined7 uStack_aa8;
  byte local_aa0;
  undefined7 uStack_a9f;
  undefined1 local_a98;
  undefined7 uStack_a97;
  void *local_a90;
  undefined7 local_a88;
  undefined1 uStack_a81;
  undefined7 uStack_a80;
  byte local_a78;
  undefined7 uStack_a77;
  byte local_a70;
  undefined7 uStack_a6f;
  void *local_a68;
  undefined8 local_a60;
  undefined7 uStack_a58;
  undefined7 local_a50;
  undefined1 uStack_a49;
  undefined7 uStack_a48;
  string local_a40;
  char local_a3f [8];
  undefined2 local_a37;
  undefined1 local_a35;
  undefined4 local_a34;
  undefined8 local_a30;
  undefined1 *local_a28;
  undefined1 *local_a20;
  undefined4 local_a18;
  string local_a10;
  undefined7 local_a0f;
  undefined1 uStack_a08;
  undefined7 uStack_a07;
  void *local_a00;
  undefined1 *local_9f8;
  undefined1 *local_9f0;
  undefined4 local_9e8;
  byte local_9e0;
  undefined7 local_9df;
  undefined1 uStack_9d8;
  undefined7 uStack_9d7;
  void *local_9d0;
  undefined1 *local_9c8;
  undefined1 *local_9c0;
  undefined4 local_9b8;
  byte local_9b0;
  undefined7 local_9af;
  undefined1 uStack_9a8;
  undefined7 uStack_9a7;
  void *local_9a0;
  undefined1 *local_998;
  undefined1 *local_990;
  undefined4 local_988;
  byte local_980;
  undefined7 local_97f;
  undefined1 uStack_978;
  undefined7 uStack_977;
  void *local_970;
  undefined1 *local_968;
  undefined1 *local_960;
  undefined4 local_958;
  byte local_950;
  undefined7 local_94f;
  undefined1 uStack_948;
  undefined7 uStack_947;
  void *local_940;
  undefined1 *local_938;
  undefined1 *local_930;
  undefined4 local_928;
  byte local_920;
  undefined7 local_91f;
  undefined1 uStack_918;
  undefine
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 01044920 — FUN_01044920

- Signature: undefined FUN_01044920(void)
- Body bytes: 5924
- String xrefs: 22 (22 unique strings)
- Candidate score: 212
- Sample strings: BattleStartDescription | FieldHearingTargetComponent | IsChangedAnyStatus | IsChangedStatus | IsMoveEnd | MoveStart | MoveStop | PathMoveComponent | PathMoveSetting | PlayerStatusComponent | ResetAllStatus | StartMove
- Direct callers: [{"entry": "010431a0", "name": "FUN_010431a0", "call_count": 1}]
- Direct callees: [{"entry": "01788a54", "name": "FUN_01788a54", "call_count": 1}, {"entry": "0178b97c", "name": "FUN_0178b97c", "call_count": 1}, {"entry": "0179d630", "name": "FUN_0179d630", "call_count": 1}, {"entry": "017b1500", "name": "FUN_017b1500", "call_count": 1}, {"entry": "01fb0ec8", "name": "FUN_01fb0ec8", "call_count": 1}, {"entry": "01fbafc4", "name": "FUN_01fbafc4", "call_count": 1}, {"entry": "01fc8250", "name": "FUN_01fc8250", "call_count": 1}, {"entry": "01fd0eb0", "name": "FUN_01fd0eb0", "call_count": 1}, {"entry": "01fe2674", "name": "FUN_01fe2674", "call_count": 1}, {"entry": "01fe472c", "name": "FUN_01fe472c", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_01044920(code *param_1)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  code *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  code *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  
  local_78 = (code *)&LAB_0256ab40;
  uStack_70 = 0;
  local_88 = FUN_0256f91c;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_0256fcf8;
  uStack_98 = 0;
  local_b0 = FUN_025700e4;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_02533f78(&local_c0,"TerrainManager","WaitLoadTerrainFirst",&local_78,"SetDetailDistanceNear",
               &local_88,"ResetDetailDistanceNear",&local_a0,"SetTerrainFrustumCullingEnable",
               &local_b0);
  local_78 = FUN_01839e08;
  uStack_70 = 0;
  local_88 = FUN_01839f2c;
  uStack_80 = 0;
  local_a0 = FUN_0183d4c8;
  uStack_98 = 0;
  local_b0 = param_1;
  FUN_021ad980(&local_b0,"FieldObjectComponent","IsLoaded",&local_78,"IsLoading",&local_88,
               "UpdateGameObjectPos",&local_a0);
  FUN_020ca380(param_1);
  FUN_021ecb20(param_1);
  FUN_022128b0(param_1);
  FUN_02348350(param_1);
  local_78 = param_1;
  FUN_0219ef60(&local_78,"NpcControllerComponent",&DAT_03a7d388,&local_88);
  FUN_0235f5a0(param_1);
  FUN_020d9cd0(param_1);
  FUN_020b1670(param_1);
  local_78 = FUN_01827904;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_02012884(&local_88,"CharacterRotationController",&DAT_03a7d2c0,&local_a0,
               "CancelDesiredDirection",&local_78);
  FUN_02513060(param_1);
  local_78 = FUN_01831870;
  uStack_70 = 0;
  local_a0 = FUN_01832100;
  uStack_98 = 0;
  local_d0 = (code *)0x10;
  local_e0 = (code *)0x20;
  local_f0 = (code *)0x24;
  local_100 = (undefined1 *)0x28;
  local_90 = (code *)0x2c;
  local_88 = FUN_01831d04;
  uStack_80 = 0;
  local_108 = 0x30;
  local_c0 = (code *)0x0;
  local_b0 = param_1;
  FUN_01fe2674(&local_b0,"CameraParameter","ToWorldCoordinate",&local_78,"ToOffsetCoordinate",
               &local_88,"ConvertOffsetCoordinate",&local_a0,"lookAtPos",&local_c0,"cameraPos",
               &local_d0,&DAT_0397610a,&local_e0,"pitch",&local_f0,&DAT_039587d5,&local_100,
               &DAT_038c36ce,&local_90,"isWorldCoordinate",&local_108);
  local_a0 = (code *)0x40;
  local_b0 = (code *)0xc0;
  local_c0 = (code *)0xc4;
  local_d0 = (code *)0xc8;
  local_e0 = (code *)0xcc;
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_01fe472c(&local_78,"CameraInterpolationParameter","start",&local_88,&DAT_039a7d21,&local_a0,
               &DAT_039a01c1,&local_b0,"addRate",&local_c0,"frame",&local_d0,&DAT_03962b86,&local_e0
              );
  FUN_020a3ce0(param_1);
  FUN_0228c070(param_1);
  FUN_02099950(param_1);
  FUN_01fd0eb0(param_1);
  local_78 = (code *)&LAB_02293d14;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_02292e00(&local_88,"FieldScriptObject","__haxe_export_Dummy",&local_78);
  local_78 = (code *)&LAB_01ab563c;
  uStack_70 = 0;
  local_88 = FUN_01ab566c;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_02152e98(&local_a0,"FieldHearingTargetComponent","PlayAdd",&local_78,&DAT_039b3942,&local_88);
  FUN_02158e70(param_1);
  FUN_0210f840(param_1);
  local_78 = (code *)0x30;
  uStack_70 = 1;
  local_88 = (code *)0x38;
  uStack_80 = 1;
  local_a0 = (code *)0x40;
  uStack_98 = 1;
  local_b0 = param_1;
  FUN_023578a0(&local_b0,"IPlayerInputInfoHandler","IsEnable",&local_78,"IsUpdateJobExist",&local_88
               ,"ClearBuffer",&local_a0);
  local_78 = (code *)&LAB_02605408;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_02350290(&local_88,"PlayerInputInfoHandler",&DAT_03a7d4c8,&local_a0,"SetEnable",&local_78);
  local_78 = (code *)&LAB_017ee9f8;
  uStack_70 = 0;
  local_88 = (code *)&LAB_017eea54;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_01fc8250(&local_a0,"CameraInputInfoHandler","SetEnable",&local_78,"IsEnable",&local_88);
  FUN_02050ca0(param_1);
  FUN_02285130(param_1);
  FUN_0227d780(param_1);
  local_b0 = (code *)&LAB_018b45fc;
  local_c0 = (code *)&LAB_018b46a4;
  local_d0 = (code *)&LAB_018b4730;
  local_e0 = (code *)&LAB_018b47d8;
  local_78 = (code *)&LAB_01fb2a7c;
  uStack_70 = 0;
  local_88 = (code *)&LAB_018ba3f8;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_01fb0ec8(&local_a0,"AreaSettingData","__haxe_export_GetAreaNameByIndex",&local_b0,
               "GetAreaCount",&local_c0,"__haxe_export_GetDoorName",&local_d0,"GetDoorCount",
               &local_e0,"__haxe_export_GetAreaName",&local_78,"__haxe_export_GetParentAreaName",
               &local_88);
  FUN_02327d00(param_1);
  FUN_020479e0(param_1);
  FUN_02222cc0(param_1);
  FUN_021b5fc0(param_1);
  FUN_02121ac0(param_1);
  local_78 = FUN_01bde2e8;
  uStack_70 = 0;
  local_88 = FUN_01bde330;
  uStack_80 = 0;
  local_a0 = FUN_01bde340;
  uStack_98 = 0;
  local_c0 = (code *)&LAB_01bde5d4;
  uStack_b8 = 0;
  local_d0 = FUN_01bde5e4;
  uStack_c8 = 0;
  local_b0 = FUN_01bde3b8;
  uStack_a8 = 0;
  local_f0 = FUN_01be12e4;
  uStack_e8 = 0;
  local_e0 = (code *)&LAB_01bde5f4;
  uStack_d8 = 0;
  local_100 = &LAB_01be153c;
  uStack_f8 = 0;
  local_90 = param_1;
  FUN_02309eb0(&local_90,"NpcAnimationController",&DAT_03a7d488,&local_108,"PlayLoopActionAddMotion"
               ,&local_78,"EndLoopActionAddMotion",&local_88,"PlayOneActionAddMotion",&local_a0,
               "PlayMotion",&local_b0,"PlayUniqueLoopActionMotion",&local_c0,"EndLoopActionMotion",
               &local_d0,"EndUniqueLoopActionMotion",&local_e0,"ResetAddIdlingMotion",&local_f0,
               "CancelMotionTalkOneAction",&local_100);
  FUN_02391470(param_1);
  FUN_0218eb00(param_1);
  FUN_021df070(param_1);
  FUN_02402090(param_1);
  FUN_024eaf60(param_1);
  local_a0 = (code *)0x4;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x8;
  local_78 = param_1;
  FUN_023d7fcc(&local_78,"ChangeWhooguruSettingParam","canChangeHeight",&local_88,
               "forwardCheckLength",&local_a0,"forwardCheckHight",&local_b0);
  local_a0 = (code *)0xc;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x14;
  local_78 = param_1;
  FUN_023d9c98(&local_78,"ChangeSettingParam","whooguru",&local_88,"nyuura",&local_a0,"basurao",
               &local_b0);
  local_78 = (code *)&LAB_023db9c8;
  uStack_70 = 0;
  local_a0 = (code *)&LAB_023db9d0;
  local_88 = param_1;
  FUN_023dac38(&local_88,"ChangeSetting","GetSetting",&local_78,"__haxe_export_GetInstance",
               &local_a0);
  local_78 = (code *)&LAB_024a33c4;
  uStack_70 = 0;
  local_a0 = (code *)&LAB_024a33cc;
  local_88 = param_1;
  FUN_024a2630(&local_88,"Setting","GetSetting",&local_78,"__haxe_export_GetInstance",&local_a0);
  local_a0 = (code *)0x80;
  local_b0 = (code *)0x90;
  local_c0 = (code *)0x170;
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_024a1408(&local_78,"SettingParam","ringuma",&local_88,"whooguru",&local_a0,"nyuura",&local_b0,
               "common",&local_c0);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_78 = param_1;
  FUN_02498d1c(&local_78,"CameraaInterpolationParam","easeFunc",&local_88,"frame",&local_a0,
               "orbitRate",&local_b0);
  local_88 = (code *)0x0;
  local_a0 = (code *)0xc;
  local_b0 = (code *)0x18;
  local_78 = param_1;
  FUN_024a0468(&local_78,"CommonSettingParam","startCamaeraInterpolation",&local_88,
               "endCamaeraInterpolation",&local_a0,"airRideChangeSpeedRate",&local_b0);
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_0249f9a0(&local_78,"WhooguruSettingParam","startCamaeraInterpolation",&local_88);
  FUN_02499cc0(param_1);
  FUN_0249cb80(param_1);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_78 = param_1;
  FUN_023d8f6c(&local_78,"ChangeNyuuraSettingParam","oshikomiCheckFrame",&local_88,
               "isSeamlessOdoshishiChange",&local_a0);
  local_78 = (code *)&LAB_0245ea58;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_0245db34(&local_88,"RidePokemonControllerComponent",&DAT_03a7d580,&local_a0,"Dummy",&local_78)
  ;
  FUN_024114e0(param_1);
  FUN_024f4f60(param_1);
  FUN_02437cf0(param_1);
  local_78 = param_1;
  FUN_0222a770(&local_78,"FieldPokemonComponent",&DAT_03a7d3d8,&local_88);
  FUN_02081910(param_1);
  local_c0 = (code *)0x24;
  local_e0 = (code *)0x2c;
  local_100 = (undefined1 *)0x34;
  local_90 = (code *)0x38;
  local_88 = (code *)0x0;
  local_108 = 0x3c;
  local_110 = 0x40;
  local_118 = 0x44;
  local_120 = 0x48;
  local_128 = 0x4c;
  local_130 = 0x50;
  local_138 = 0x54;
  local_f0 = (code *)0x30;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_d0 = (code *)0x28;
  local_78 = param_1;
  FUN_01788a54(&local_78,"SearchBallOutPointDescription","ballHitPos",&local_88,"hitTargetPos",
               &local_a0,"ballOutStateType",&local_b0,"targetWidth",&local_c0,"baseDistance",
               &local_d0,"checkDistance",&local_e0,"checkCount",&local_f0,"divisionCount",&local_100
               ,"checkRangeUpper",&local_90,"checkRangeLower",&local_108,"playerToBuddyDistanceRate"
               ,&local_110,"checkStartAngleMin",&local_118,"checkStartAngleMax",&local_120,
               "isBehindCheck",&local_128,"behindPlayerNgAngle",&local_130,"behindPlayerGeta",
               &local_138);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_78 = param_1;
  FUN_0178b97c(&local_78,"SearchBallOutPointResult","isHit",&local_88,&DAT_03933ed9,&local_a0,
               "isSwimming",&local_b0);
  FUN_017b1500(param_1);
  FUN_0179d630(param_1);
  FUN_02254670(param_1);
  local_78 = (code *)&LAB_026419bc;
  uStack_70 = 0;
  local_88 = (code *)&LAB_026419c4;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_026419d0;
  uStack_98 = 0;
  local_b0 = param_1;
  FUN_023cf978(&local_b0,"RideChangeObserverComponent","DisableWhooguru",&local_78,
               "ShowNyuuraKabeInfoRequest",&local_88,"ShowNyuuraDownStartInfoRequest",&local_a0);
  FUN_02465a10(param_1);
  FUN_02476000(param_1);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0xc;
  local_78 = param_1;
  FUN_0248391c(&local_78,"SearchResult","state",&local_88,"isQuest",&local_a0,"distanceRate",
               &local_b0);
  FUN_02167b10(param_1);
  FUN_021a4c50(param_1);
  FUN_022b6a20(param_1);
  FUN_0232dab0(param_1);
  local_78 = (code *)0x140;
  uStack_70 = 1;
  local_88 = (code *)0x148;
  uStack_80 = 1;
  local_a0 = (code *)0x150;
  uStack_98 = 1;
  local_b0 = param_1;
  FUN_022ad82c(&local_b0,"FieldWildPokemonComponent",&DAT_03a7d440,&local_c0,"StartWildPokemonAi",
               &local_78,"IsWildPokemonAiStarted",&local_88,"AbortWildPokemonAi",&local_a0);
  FUN_02078c60(param_1);
  local_d0 = (code *)0x1c;
  local_88 = (code *)0x0;
  local_a0 = (code *)0x8;
  local_b0 = (code *)0x10;
  local_c0 = (code *)0x18;
  local_78 = param_1;
  FUN_0201ab20(&local_78,"BattleStartDescription","pPlayerController",&local_88,
               "pBuddyPokemonController",&local_a0,"pTargetPokemonController",&local_b0,
               "battleStartPattern",&local_c0,"battleStartType",&local_d0);
  FUN_02026440(param_1);
  local_100 = (undefined1 *)0x40;
  local_a0 = (code *)0x8;
  local_c0 = (code *)0x18;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x10;
  local_d0 = (code *)0x20;
  local_e0 = (code *)0x28;
  local_f0 = (code *)0x30;
  local_78 = param_1;
  FUN_020248a8(&local_78,"EventLandmarkCoroutineParam","eventType",&local_88,
               "pPlayerInputInfoHandler",&local_a0,"pPlayerController",&local_b0,
               "pBuddyPokemonController",&local_c0,"pLandmark",&local_d0,"pPlayerComponent",
               &local_e0,"pBuddyComponent",&local_f0,"ballHitPos",&local_100);
  FUN_022cbe30(param_1);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_78 = param_1;
  FUN_0243
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

## pokedex_research

### 00e4faf0 — FUN_00e4faf0

- Signature: undefined FUN_00e4faf0(void)
- Body bytes: 9804
- String xrefs: 27 (7 unique strings)
- Candidate score: 157
- Sample strings: GetAllPokeResearchPoint | GetPokeResearchRate | GetResearchPoint | GetTotalResearchPoint | IsPokedexCompleted | IsPokedexPerfect | PokedexSave
- Direct callers: [{"entry": "010431e0", "name": "FUN_010431e0", "call_count": 1}]
- Direct callees: [{"entry": "033a2520", "name": "strlen", "call_count": 20}, {"entry": "02bcc824", "name": "FUN_02bcc824", "call_count": 18}, {"entry": "033a4530", "name": "__cxa_thread_atexit", "call_count": 18}, {"entry": "008f2c60", "name": "FUN_008f2c60", "call_count": 15}, {"entry": "033a23b0", "name": "memcpy", "call_count": 5}, {"entry": "033a3190", "name": "__throw_length_error", "call_count": 5}, {"entry": "033a28b0", "name": "memcmp", "call_count": 2}, {"entry": "0014fef0", "name": "FUN_0014fef0", "call_count": 1}, {"entry": "001522a0", "name": "FUN_001522a0", "call_count": 1}, {"entry": "008cca50", "name": "FUN_008cca50", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

/* WARNING: Type propagation algorithm not settling */

void FUN_00e4faf0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  size_t sVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  char *pcVar29;
  long *plVar30;
  long lVar31;
  string *psVar32;
  long lVar33;
  string *psVar34;
  undefined8 uVar35;
  string *psVar36;
  long *plVar37;
  char *pcVar38;
  char *pcVar39;
  void *pvVar40;
  long lVar41;
  char *pcVar42;
  byte local_418;
  undefined7 uStack_417;
  undefined4 local_410;
  undefined4 local_40c;
  ulong local_408;
  byte local_400;
  undefined7 uStack_3ff;
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  void *local_3f0;
  undefined7 local_3e8;
  undefined1 uStack_3e1;
  undefined7 uStack_3e0;
  byte local_3d8;
  undefined7 uStack_3d7;
  undefined1 local_3d0;
  undefined7 uStack_3cf;
  void *local_3c8;
  undefined7 local_3c0;
  undefined1 uStack_3b9;
  undefined7 uStack_3b8;
  byte local_3b0;
  undefined7 uStack_3af;
  undefined1 local_3a8;
  undefined7 uStack_3a7;
  void *local_3a0;
  undefined7 local_398;
  undefined1 uStack_391;
  undefined7 uStack_390;
  byte local_388;
  undefined7 uStack_387;
  undefined1 local_380;
  undefined7 uStack_37f;
  void *local_378;
  undefined7 local_370;
  undefined1 uStack_369;
  undefined7 uStack_368;
  undefined7 local_360;
  undefined1 uStack_359;
  undefined7 uStack_358;
  string local_350;
  char local_34f [7];
  char cStack_348;
  char acStack_347 [7];
  undefined1 *local_340;
  undefined1 *local_338;
  undefined1 *puStack_330;
  undefined4 local_328;
  byte local_320;
  char local_31f [7];
  char cStack_318;
  char acStack_317 [7];
  long local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  string local_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  void *local_2e0;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  undefined7 local_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  void *local_2b0;
  undefined1 *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  byte local_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  void *local_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined4 local_268;
  byte local_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  void *local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  void *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  char local_1ff [7];
  char cStack_1f8;
  char acStack_1f7 [7];
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [7];
  char cStack_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char local_19f [7];
  char cStack_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar1 = DAT_043f1798;
  local_418 = 0x16;
  local_408 = 0;
  local_40c = 0;
  uStack_417 = s_PokedexSave_0399a39c._0_7_;
  local_410 = CONCAT31(0x657661,s_PokedexSave_0399a39c[7]);
  lVar5 = tpidr_el0;
  plVar23 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  plVar23 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x1f8,8);
  plVar23[4] = 0;
  plVar37 = plVar23 + 1;
  *plVar37 = 0;
  *(undefined4 *)(plVar23 + 5) = 0x3f800000;
  plVar23[10] = 0;
  plVar23[6] = (long)FUN_00e52150;
  plVar23[7] = (long)FUN_00e52200;
  plVar23[0xc] = (long)"IsPokedexCompleted";
  plVar23[0xd] = (long)FUN_0112e818;
  plVar23[0x10] = (long)&LAB_0112e83c;
  plVar23[0x11] = 0;
  plVar23[0x12] = (long)"GetCompletePokeNum";
  plVar23[0x13] = (long)FUN_0112ed20;
  plVar23[0x16] = (long)FUN_0112edc4;
  plVar23[0x17] = 0;
  plVar23[0x18] = (long)"UpdateAllReportPoke";
  plVar23[0x19] = (long)&LAB_0112f4f8;
  plVar23[0x14] = 0;
  plVar23[0x15] = (long)"GetReportPokeNum";
  plVar23[0x1a] = 0;
  plVar23[0x1b] = (long)"GetAllPokeResearchPoint";
  plVar23[0x1e] = (long)"GetTotalResearchPoint";
  plVar23[0x1f] = (long)FUN_0113097c;
  plVar23[0x20] = 0;
  plVar23[0x21] = (long)"GetResearchPoint";
  plVar23[0x22] = (long)FUN_0113204c;
  plVar23[0x23] = 0;
  *plVar23 = (long)&PTR_FUN_041ee8a0;
  *(undefined1 *)(plVar23 + 0xb) = 0;
  plVar23[0x3e] = 0;
  plVar23[0x3c] = 0;
  *(undefined1 *)(plVar23 + 0x3d) = 0;
  plVar23[0x1c] = (long)FUN_011308d0;
  plVar23[0x1d] = 0;
  plVar23[0x24] = (long)"GetPokeGetCount";
  plVar23[0x25] = (long)FUN_0112ec0c;
  plVar23[0x26] = 0;
  plVar23[0x27] = (long)"GetPokeResearchRate";
  plVar23[0x28] = (long)FUN_0112ecd0;
  plVar23[0x29] = 0;
  plVar23[0x2a] = (long)"SetChallengeBattleFlag";
  plVar23[0x2b] = (long)&LAB_01135c0c;
  plVar23[0x2e] = (long)&LAB_01135c2c;
  plVar23[0x2f] = 0;
  plVar23[0x32] = 0;
  plVar23[0x33] = (long)&DAT_038ca815;
  plVar23[0x34] = (long)&DAT_0392da3c;
  plVar23[0x35] = 0;
  plVar23[0x30] = (long)"GetChallengeBattleCount";
  plVar23[0x31] = (long)&LAB_01135c50;
  plVar23[0x38] = (long)&LAB_00e52674;
  plVar23[0x39] = (long)&LAB_00e52960;
  plVar23[2] = 0;
  plVar23[3] = 0;
  plVar23[8] = 0;
  plVar23[9] = 0;
  plVar23[0xe] = 0;
  plVar23[0xf] = (long)"IsPokedexPerfect";
  plVar23[0x2c] = 0;
  plVar23[0x2d] = (long)"GetChallengeBattleFlag";
  plVar23[0x36] = 0;
  plVar23[0x37] = (long)FUN_00e52390;
  plVar23[0x3a] = (long)&LAB_00e52970;
  plVar23[0x3b] = 0;
  local_350 = (string)0x24;
  local_34f[0] = s_IsPokedexCompleted_038de027[0];
  local_34f[1] = s_IsPokedexCompleted_038de027[1];
  local_34f[2] = s_IsPokedexCompleted_038de027[2];
  local_34f[3] = s_IsPokedexCompleted_038de027[3];
  local_34f[4] = s_IsPokedexCompleted_038de027[4];
  local_34f[5] = s_IsPokedexCompleted_038de027[5];
  local_34f[6] = s_IsPokedexCompleted_038de027[6];
  local_328 = 0xffffffff;
  cStack_348 = s_IsPokedexCompleted_038de027[7];
  acStack_347[0] = s_IsPokedexCompleted_038de027[8];
  acStack_347[1] = s_IsPokedexCompleted_038de027[9];
  acStack_347[2] = s_IsPokedexCompleted_038de027[10];
  acStack_347[3] = s_IsPokedexCompleted_038de027[0xb];
  acStack_347[4] = s_IsPokedexCompleted_038de027[0xc];
  acStack_347[5] = s_IsPokedexCompleted_038de027[0xd];
  acStack_347[6] = s_IsPokedexCompleted_038de027[0xe];
  local_340 = &LAB_00646574;
  local_320 = 0x20;
  local_338 = &LAB_00e52974;
  puStack_330 = &LAB_00e529bc;
  local_31f[0] = s_IsPokedexPerfect_038de03a[0];
  local_31f[1] = s_IsPokedexPerfect_038de03a[1];
  local_31f[2] = s_IsPokedexPerfect_038de03a[2];
  local_31f[3] = s_IsPokedexPerfect_038de03a[3];
  local_31f[4] = s_IsPokedexPerfect_038de03a[4];
  local_31f[5] = s_IsPokedexPerfect_038de03a[5];
  local_31f[6] = s_IsPokedexPerfect_038de03a[6];
  local_2f8 = 0xffffffff;
  cStack_318 = s_IsPokedexPerfect_038de03a[7];
  acStack_317[0] = s_IsPokedexPerfect_038de03a[8];
  acStack_317[1] = s_IsPokedexPerfect_038de03a[9];
  acStack_317[2] = s_IsPokedexPerfect_038de03a[10];
  acStack_317[3] = s_IsPokedexPerfect_038de03a[0xb];
  acStack_317[4] = s_IsPokedexPerfect_038de03a[0xc];
  acStack_317[5] = s_IsPokedexPerfect_038de03a[0xd];
  acStack_317[6] = s_IsPokedexPerfect_038de03a[0xe];
  local_310 = 0x74;
  local_308 = &LAB_00e52a04;
  puStack_300 = &LAB_00e52a4c;
  pcVar38 = (char *)plVar23[0x12];
  sVar24 = strlen(pcVar38);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar24) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar24 < 0x17) {
    local_80 = SUB41((int)sVar24 << 1,0);
    pvVar40 = (void *)((ulong)&local_80 | 1);
    if (sVar24 != 0) goto LAB_00e4fdf8;
  }
  else {
    uVar27 = sVar24 + 0x10 & 0xfffffffffffffff0;
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar30 = plVar1;
    }
    pvVar40 = (void *)(**(code **)(*plVar30 + 0x10))(plVar30,uVar27,8);
    local_80 = (string)((byte)uVar27 | 1);
    uStack_7f = (undefined7)(uVar27 >> 8);
    local_78 = (undefined1)sVar24;
    uStack_77 = (undefined7)(sVar24 >> 8);
    local_70 = pvVar40;
LAB_00e4fdf8:
    memcpy(pvVar40,pcVar38,sVar24);
  }
  local_2e0 = local_70;
  uStack_2e7 = uStack_77;
  uStack_2e8 = local_78;
  local_2ef = uStack_7f;
  local_2f0 = local_80;
  pcVar38 = "GetChallengeBattleFlag";
  *(undefined1 *)((long)pvVar40 + sVar24) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_360 = 0;
  uStack_359 = 0;
  uStack_358 = 0;
  local_2c8 = 0xffffffff;
  local_2d8 = &LAB_00e52a94;
  puStack_2d0 = &LAB_00e52adc;
  pcVar39 = (char *)plVar23[0x15];
  sVar24 = strlen(pcVar39);
  plVar1 = DAT_043f1798;
  local_388 = 0;
  uStack_387 = 0;
  local_380 = 0;
  uStack_37f = 0;
  local_378 = (void *)0x0;
  if (0xffffffffffffffef < sVar24) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar24 < 0x17) {
    local_388 = (byte)((int)sVar24 << 1);
    pvVar40 = (void *)((ulong)&local_388 | 1);
    if (sVar24 != 0) goto LAB_00e4fe98;
  }
  else {
    uVar27 = sVar24 + 0x10 & 0xfffffffffffffff0;
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar30 = plVar1;
    }
    pvVar40 = (void *)(**(code **)(*plVar30 + 0x10))(plVar30,uVar27,8);
    local_388 = (byte)uVar27 | 1;
    uStack_387 = (undefined7)(uVar27 >> 8);
    local_380 = (undefined1)sVar24;
    uStack_37f = (undefined7)(sVar24 >> 8);
    local_378 = pvVar40;
LAB_00e4fe98:
    memcpy(pvVar40,pcVar39,sVar24);
  }
  local_2b0 = local_378;
  uStack_2b7 = uStack_37f;
  uStack_2b8 = local_380;
  local_2bf = uStack_387;
  local_2c0 = local_388;
  *(undefined1 *)((long)pvVar40 + sVar24) = 0;
  local_380 = 0;
  uStack_37f = 0;
  local_378 = (void *)0x0;
  local_388 = 0;
  uStack_387 = 0;
  local_370 = 0;
  uStack_369 = 0;
  uStack_368 = 0;
  local_298 = 0xffffffff;
  local_2a8 = &LAB_00e52b24;
  puStack_2a0 = &LAB_00e52b6c;
  pcVar39 = (char *)plVar23[0x18];
  sVar24 = strlen(pcVar39);
  plVar1 = DAT_043f1798;
  local_3b0 = 0;
  uStack_3af = 0;
  local_3a8 = 0;
  uStack_3a7 = 0;
  local_
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 010431e0 — FUN_010431e0

- Signature: undefined FUN_010431e0(void)
- Body bytes: 3104
- String xrefs: 5 (5 unique strings)
- Candidate score: 127
- Sample strings: PokedexUpdateInfo | remainResearchPointAfterUpdate | remainResearchPointBeforeUpdate | researchPointAfterUpdate | researchPointRateAfterUpdate
- Direct callers: [{"entry": "010431a0", "name": "FUN_010431a0", "call_count": 1}]
- Direct callees: [{"entry": "00b3f374", "name": "FUN_00b3f374", "call_count": 1}, {"entry": "00b49940", "name": "FUN_00b49940", "call_count": 1}, {"entry": "00dc45ec", "name": "FUN_00dc45ec", "call_count": 1}, {"entry": "00dcd2a4", "name": "FUN_00dcd2a4", "call_count": 1}, {"entry": "00dd7954", "name": "FUN_00dd7954", "call_count": 1}, {"entry": "00de4c20", "name": "FUN_00de4c20", "call_count": 1}, {"entry": "00def410", "name": "FUN_00def410", "call_count": 1}, {"entry": "00dfdd60", "name": "FUN_00dfdd60", "call_count": 1}, {"entry": "00e070fc", "name": "FUN_00e070fc", "call_count": 1}, {"entry": "00e080c0", "name": "FUN_00e080c0", "call_count": 1}]
- Pseudocode truncated: false

----- C PSEUDOCODE START -----

void FUN_010431e0(code *param_1)

{
  code *local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 uStack_78;
  code *local_70 [2];
  
  local_80 = (code *)&LAB_01043f1c;
  uStack_78 = 0;
  local_90 = param_1;
  FUN_00ed17c4(&local_90,"Uint64",&DAT_038ca815,&DAT_03a78878,"Equals",&local_80);
  local_90 = (code *)&LAB_01085cd8;
  local_a0 = (code *)&LAB_01085cf4;
  local_b0 = (code *)&LAB_01085d08;
  local_c0 = (code *)&LAB_01085d2c;
  local_d0 = (code *)&LAB_01085d50;
  local_80 = param_1;
  FUN_00ec79e0(&local_80,"Utility","clamp",&local_90,"clampInt",&local_a0,"RadianToDegree",&local_b0
               ,"DegreeToRadian",&local_c0,"GetFloatEpsilon",&local_d0);
  FUN_00ed98e0(param_1);
  FUN_00eb4280(param_1);
  FUN_00f11df0(param_1);
  local_90 = (code *)&LAB_00e944d4;
  local_a0 = (code *)&LAB_00e946c0;
  local_b0 = (code *)&LAB_00e94764;
  local_c0 = (code *)&LAB_00e947f8;
  local_d0 = (code *)&LAB_00e94ab8;
  local_e0 = (code *)&LAB_00e94cb0;
  local_f0 = &LAB_00e94e90;
  local_100 = &LAB_00e9510c;
  local_110 = (code *)&LAB_00e95110;
  local_80 = param_1;
  FUN_00f25170(&local_80,"SoundCommand","PostEvent",&local_90,"IsPlaying",&local_a0,&DAT_039b3942,
               &local_b0,"SetSwitch",&local_c0,"SetRTPC",&local_d0,"PostTrigger",&local_e0,
               "SetState",&local_f0,"PlayPokeVoice",&local_100,"PlayPokeVoice2d",&local_110);
  FUN_00e080c0(param_1);
  local_a0 = (code *)0x4;
  local_90 = (code *)0x0;
  local_b0 = (code *)0x8;
  local_80 = param_1;
  FUN_00e070fc(&local_80,"NsRematchDispResult","minute",&local_90,"second",&local_a0,"milli",
               &local_b0);
  FUN_00e95120(param_1);
  FUN_00f51a60(param_1);
  FUN_00def410(param_1);
  FUN_00ea9710(param_1);
  FUN_00e62390(param_1);
  FUN_00de4c20(param_1);
  local_80 = FUN_010da868;
  uStack_78 = 0;
  local_90 = FUN_010daa64;
  uStack_88 = 0;
  local_a0 = FUN_010db1d8;
  uStack_98 = 0;
  local_c0 = FUN_010db41c;
  uStack_b8 = 0;
  local_b0 = FUN_010db350;
  uStack_a8 = 0;
  local_d0 = FUN_010db560;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_00dcd2a4(&local_e0,&DAT_039b3c66,"GetItemNum",&local_80,"HaveNeverAdded",&local_90,"AddItem",
               &local_a0,"AddItemToLimit",&local_b0,"IsAddItem",&local_c0,"SubItem",&local_d0);
  local_80 = FUN_0111e624;
  uStack_78 = 0;
  local_90 = FUN_0111d778;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00f42148(&local_a0,"MyItem",&DAT_039b4184,&local_80,"GetItemNum",&local_90);
  FUN_00e4faf0(param_1);
  FUN_0217e7b0(param_1);
  local_80 = FUN_02582a00;
  uStack_78 = 0;
  local_90 = (code *)&LAB_02582d10;
  uStack_88 = 0;
  local_a0 = FUN_02583190;
  uStack_98 = 0;
  local_c0 = FUN_025837e8;
  uStack_b8 = 0;
  local_b0 = (code *)&LAB_025836c0;
  uStack_a8 = 0;
  local_d0 = (code *)&LAB_02583808;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_02117bc0(&local_e0,"FieldContextMenu","SetContextMenuItem",&local_80,
               "__haxe_export_SetContextMenuItemExternalResource",&local_90,"ShowContextMenu",
               &local_a0,"CloseContextMenu",&local_b0,"GetContextMenuResult",&local_c0,
               "IsEndContextMenu",&local_d0);
  FUN_02175c50(param_1);
  local_80 = FUN_00b1e19c;
  uStack_78 = 0;
  local_90 = (code *)&LAB_00b1e25c;
  uStack_88 = 0;
  local_b0 = (code *)&LAB_00b1e4ec;
  uStack_a8 = 0;
  local_a0 = (code *)&LAB_00b1e3bc;
  uStack_98 = 0;
  local_c0 = (code *)&LAB_00b1e57c;
  uStack_b8 = 0;
  local_d0 = param_1;
  FUN_00b3f374(&local_d0,"DressUpData","GetAppendDataCount",&local_80,
               "GetPartsNameByApeendLocalDataIndex",&local_90,"GetDataIndexByName",&local_a0,
               "GetNameByDataIndex",&local_b0,"GetApeendLocalDataIndexByDataIndex",&local_c0);
  FUN_00b49940(param_1);
  FUN_01591f10(param_1);
  FUN_027e05c0(param_1);
  local_c0 = (code *)0xc;
  local_d0 = (code *)0x10;
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_80 = param_1;
  FUN_027df14c(&local_80,"PokedexUpdateInfo","researchPointAfterUpdate",&local_90,
               "remainResearchPointBeforeUpdate",&local_a0,"remainResearchPointAfterUpdate",
               &local_b0,"researchPointRateAfterUpdate",&local_c0,"progressPokeNum",&local_d0);
  local_80 = FUN_013d056c;
  uStack_78 = 0;
  local_90 = FUN_013d0968;
  uStack_88 = 0;
  local_a0 = FUN_013d08e0;
  uStack_98 = 0;
  local_b0 = (code *)&LAB_013d0a08;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_012bae04(&local_c0,"ProcOneShot","ShowRequest",&local_80,"CloseRequest",&local_90,"IsClosed",
               &local_a0,"IsAnimation",&local_b0);
  FUN_012dc020(param_1);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_00e7a534(&local_80,&DAT_038a3bc2,"notify",&local_90);
  local_90 = (code *)&LAB_014e5a7c;
  local_80 = param_1;
  FUN_00e7b008(&local_80,"EventURankUp","CallEvent",&local_90);
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_80 = param_1;
  FUN_00f30d14(&local_80,&DAT_038a3bc2,"notify",&local_90,&DAT_039a01c1,&local_a0,"questId",
               &local_b0);
  local_90 = FUN_0138250c;
  local_80 = param_1;
  FUN_00f31cb4(&local_80,"EventMssnNotify","CallEvent",&local_90);
  local_90 = FUN_014a8208;
  local_80 = param_1;
  FUN_00e727cc(&local_80,"EventShowTip","CallEvent",&local_90);
  local_80 = FUN_011171a4;
  uStack_78 = 0;
  local_90 = (code *)&LAB_011171ac;
  uStack_88 = 0;
  local_a0 = FUN_011171c8;
  uStack_98 = 0;
  local_b0 = FUN_011171f4;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_00e23be4(&local_c0,&DAT_038a3adc,"GetGold",&local_80,"SetGold",&local_90,"AddGold",&local_a0,
               "SubGold",&local_b0);
  local_80 = FUN_0111b748;
  uStack_78 = 0;
  local_90 = FUN_0111b7c0;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00e2d2b4(&local_a0,"MyDressup","SetPartsHash",&local_80,"GetPartsHash",&local_90);
  local_80 = FUN_01123ce8;
  uStack_78 = 0;
  local_90 = param_1;
  FUN_00e36784(&local_90,"MyStatus","GetSex",&local_80);
  local_80 = (code *)&LAB_00f49ff0;
  uStack_78 = 0;
  local_90 = (code *)&LAB_00f49ff8;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00f48e34(&local_a0,"SimpleParam","__haxe_export_GetMonsNo",&local_80,"__haxe_export_GetFormNo"
               ,&local_90);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_011fbcfc(&local_80,"BoxParam","callMode",&local_90);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_0116b9b4(&local_80,"Param","callMode",&local_90);
  local_90 = FUN_0115c8fc;
  local_80 = param_1;
  FUN_01163884(&local_80,"EventAdvresult","CallEvent",&local_90);
  local_80 = FUN_010d7334;
  uStack_78 = 0;
  local_90 = (code *)&LAB_010d7344;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00dc45ec(&local_a0,"Advresult","IsPokemon",&local_80,"GetPokemonCount",&local_90);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_012e6dd0(&local_80,"Param","callMode",&local_90);
  local_80 = (code *)&LAB_010f101c;
  uStack_78 = 0;
  local_90 = (code *)&LAB_010f1080;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00dd7954(&local_a0,"EventRandomSeedSave","GetRandom",&local_80,"RandomSeedInit",&local_90);
  local_80 = (code *)&LAB_00e5d184;
  uStack_78 = 0;
  local_90 = param_1;
  FUN_00e5c270(&local_90,"Random","__haxe_export_GetRand",&local_80);
  local_80 = FUN_0192c050;
  uStack_78 = 0;
  local_a0 = (code *)&LAB_0192c094;
  uStack_98 = 0;
  local_b0 = (code *)&LAB_0192c0b4;
  uStack_a8 = 0;
  local_d0 = FUN_0192c0d0;
  uStack_c8 = 0;
  local_e0 = FUN_0192c0d8;
  uStack_d8 = 0;
  local_90 = FUN_0192c058;
  uStack_88 = 0;
  local_100 = &LAB_0192c14c;
  uStack_f8 = 0;
  local_c0 = FUN_0192c0c8;
  uStack_b8 = 0;
  local_110 = FUN_0192c178;
  uStack_108 = 0;
  local_f0 = &LAB_0192c118;
  uStack_e8 = 0;
  local_70[0] = param_1;
  FUN_0225cb04(local_70,"FieldPostEffect","RequestRadialBlur",&local_80,"StopRadialBlur",&local_90,
               "GetRadialBlurParam",&local_a0,"GetRadialBlurCurrentParam",&local_b0,
               "IsEasingRadialBlur",&local_c0,"RequestFeedbackEffect",&local_d0,"StopFeedbackEffect"
               ,&local_e0,"GetFeedbackEffectParam",&local_f0,"GetFeedbackEffectCurrentParam",
               &local_100,"IsEasingFeedbackEffect",&local_110);
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_c0 = (code *)0xc;
  local_d0 = (code *)0x10;
  local_80 = param_1;
  FUN_02270bd0(&local_80,"RadialBlurParam","enable",&local_90,&DAT_03977319,&local_a0,&DAT_038bde25,
               &local_b0,"strength",&local_c0,"radius",&local_d0);
  local_e0 = (code *)0x14;
  local_f0 = (undefined1 *)0x18;
  local_100 = (undefined1 *)0x1c;
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_c0 = (code *)0xc;
  local_d0 = (code *)0x10;
  local_80 = param_1;
  FUN_0227203c(&local_80,"FeedbackEffectParam","enable",&local_90,"blendWeight",&local_a0,"rotation"
               ,&local_b0,"scale",&local_c0,&DAT_039b6c37,&local_d0,"saturation",&local_e0,
               "brightness",&local_f0,"contrast",&local_100);
  FUN_012aa980(param_1);
  FUN_012d42a0(param_1);
  FUN_012c3ba0(param_1);
  FUN_012b2720(param_1);
  FUN_0159d1c0(param_1);
  FUN_012a2c30(param_1);
  FUN_012cc130(param_1);
  FUN_00dfdd60(param_1);
  local_90 = FUN_00dac4e4;
  local_a0 = FUN_00dac5ac;
  local_80 = param_1;
  FUN_00e47a54(&local_80,"PlayReportEventRecord","SetValue",&local_90,"AddValue",&local_a0);
  FUN_00e3ee30(param_1);
  return;
}
----- C PSEUDOCODE END -----

### 0141308c — FUN_0141308c

- Signature: undefined FUN_0141308c(void)
- Body bytes: 4908
- String xrefs: 4 (4 unique strings)
- Candidate score: 120
- Sample strings: common/pokedex.dat | pane_T_p_research_00 | pokedex_level2_count | pokedex_level3_count
- Direct callers: []
- Direct callees: [{"entry": "00100250", "name": "FUN_00100250", "call_count": 4}, {"entry": "033a2880", "name": "snprintf", "call_count": 4}, {"entry": "033a2e00", "name": "__cxa_guard_acquire", "call_count": 4}, {"entry": "033a2e10", "name": "__cxa_guard_release", "call_count": 4}, {"entry": "00d2e4b8", "name": "FUN_00d2e4b8", "call_count": 3}, {"entry": "01306260", "name": "FUN_01306260", "call_count": 3}, {"entry": "00d37bb4", "name": "FUN_00d37bb4", "call_count": 2}, {"entry": "00d78f50", "name": "FUN_00d78f50", "call_count": 2}, {"entry": "00d7d9e4", "name": "FUN_00d7d9e4", "call_count": 2}, {"entry": "0112e8d0", "name": "FUN_0112e8d0", "call_count": 2}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_0141308c(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  int iVar31;
  short *psVar32;
  long *plVar33;
  undefined4 uVar34;
  long local_518;
  char *pcStack_510;
  undefined8 local_508;
  long *local_500;
  long *local_4f8;
  long *local_4f0;
  long *local_4e8;
  long *local_4e0;
  long *local_4d8;
  long *local_4d0;
  long *local_4c8;
  long *local_4c0;
  long *local_4b8;
  long *local_4b0;
  long *local_4a8;
  undefined1 *local_4a0;
  char *pcStack_498;
  undefined8 local_490;
  long *local_488;
  long *local_a0;
  long *local_98;
  undefined1 **local_90;
  char *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  local_4a0 = &DAT_304928236d5bcabe;
  pcStack_498 = "common/pokedex.dat";
  local_490 = 0x12;
  local_488 = (long *)0x0;
  FUN_00d37bb4(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_4a0,10);
  plVar30 = (long *)local_98[0xd];
  if (plVar30 != (long *)0x0) {
    plVar25 = plVar30 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (local_98 != (long *)0x0) {
    lVar22 = local_98[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_488 != (long *)0x0) {
    (**(code **)(*local_488 + 0x20))();
  }
  local_4a0 = (undefined1 *)0x68ebf6b5d08185b8;
  pcStack_498 = "common/report.dat";
  local_490 = 0x11;
  local_488 = (long *)0x0;
  FUN_00d37bb4(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_4a0,10);
  plVar25 = (long *)local_98[0xd];
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (local_98 != (long *)0x0) {
    lVar22 = local_98[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_488 != (long *)0x0) {
    (**(code **)(*local_488 + 0x20))();
  }
  plVar23 = *(long **)(param_1 + 0x2c8);
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar22 = param_1 + 0x180;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379558), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148f20(&local_a0);
  memset(&local_4a0,0,0x400);
  uVar29 = 0;
  plVar2 = plVar30 + 10;
  plVar3 = plVar23 + 10;
  do {
    if (uVar29 == 0) {
      uVar26 = 0;
    }
    else {
      snprintf((char *)&local_4a0,0x400,"pane_N_area_info_%02d",(int)uVar29);
      lVar20 = FUN_01306260(lVar22,&local_4a0);
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x630) + 0xa0) + 8) == '\0') {
        bVar12 = FUN_013e19d0(*(undefined4 *)(&UNK_03a7b7a8 + uVar29 * 4));
      }
      else {
        bVar12 = 0;
      }
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe | bVar12 & 1;
      uVar26 = uVar29 & 0xffffffff;
    }
    iVar19 = (int)uVar26;
    snprintf((char *)&local_4a0,0x400,"pane_T_p_registration_%02d",iVar19);
    if (plVar23 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_4a8 = plVar23;
    local_88 = (char *)strlen((char *)&local_4a0);
    local_98 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_4a0 != 0) {
      local_98 = (long *)&DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_4a0 | 1);
      bVar12 = (byte)local_4a0;
      do {
        local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar12) * 0x100000001b3);
        bVar12 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar12 != 0);
    }
    local_90 = &local_4a0;
    local_80 = (long *)0x0;
    if (plVar30 == (long *)0x0) {
      plVar33 = (long *)0x0;
    }
    else {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar33 = plVar30;
    }
    local_518 = 0x72e8950e2784f081;
    iVar31 = 0;
    lVar20 = -0x389;
    puVar27 = (uint *)((long)local_a0 + 0x134);
    local_4b0 = plVar30;
    do {
      iVar13 = FUN_0112e8d0(uVar26,(int)lVar20 + 0x38a,0);
      if (iVar13 != 0) {
        iVar31 = (*puVar27 & 1) + iVar31;
      }
      bVar11 = lVar20 != -1;
      lVar20 = lVar20 + 1;
      puVar27 = puVar27 + 0x16;
    } while (bVar11);
    FUN_014143b8(&local_4a8,&local_98,&local_4b0,&local_518,iVar31);
    if (plVar33 != (long *)0x0) {
      plVar4 = plVar33 + 10;
      do {
        iVar31 = (int)*plVar4 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *(int *)plVar4 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_4a8 != (long *)0x0) {
      plVar33 = local_4a8 + 10;
      do {
        iVar31 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *(int *)plVar33 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*local_4a8 + 0x10))();
      }
    }
    iVar31 = 0;
    bVar12 = 1;
    lVar20 = -0x389;
    psVar32 = (short *)((long)local_a0 + 0x13e);
    do {
      iVar13 = FUN_0112e8d0(uVar26,(int)lVar20 + 0x38a,0);
      if (iVar13 != 0) {
        if (*psVar32 != 0) {
          iVar31 = iVar31 + 1;
        }
        bVar12 = bVar12 & *psVar32 != 0;
      }
      bVar11 = lVar20 != -1;
      lVar20 = lVar20 + 1;
      psVar32 = psVar32 + 0x2c;
    } while (bVar11);
    snprintf((char *)&local_4a0,0x400,"pane_T_p_complete_%02d",iVar19);
    if (plVar23 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_4b8 = plVar23;
    local_88 = (char *)strlen((char *)&local_4a0);
    local_98 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_4a0 != 0) {
      local_98 = (long *)&DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_4a0 | 1);
      bVar5 = (byte)local_4a0;
      do {
        local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar5 != 0);
    }
    local_90 = &local_4a0;
    local_80 = (long *)0x0;
    if (plVar30 == (long *)0x0) {
      plVar33 = (long *)0x0;
    }
    else {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar33 = plVar30;
    }
    local_518 = 0x72e8950e2784f081;
    local_4c0 = plVar30;
    FUN_014143b8(&local_4b8,&local_98,&local_4c0,&local_518,iVar31);
    if (plVar33 != (long *)0x0) {
      plVar4 = plVar33 + 10;
      do {
        iVar31 = (int)*plVar4 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *(int *)plVar4 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_4b8 != (long *)0x0) {
      plVar33 = local_4b8 + 10;
      do {
        iVar31 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *(int *)plVar33 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*local_4b8 + 0x10))();
      }
    }
    if (uVar29 != 0) {
      snprintf((char *)&local_4a0,0x400,"pane_N_deco_area%02d_com_00",iVar19);
      lVar20 = FUN_01306260(lVar22,&local_4a0);
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe | bVar12;
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 != 6);
  bVar12 = FUN_0112e818(local_a0,0);
  uVar14 = FUN_01133924(local_a0);
  uVar15 = FUN_0113097c(local_a0);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379558), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar20 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar20;
  if (lVar20 == 0) {
    uVar28 = 0;
    uVar16 = 0;
    uVar29 = 0;
  }
  else {
    plVar33 = *(long **)(lVar20 + 0x228);
    if (plVar33 == (long *)0x0) {
      uVar28 = 0;
      uVar16 = 0;
      uVar29 = 0;
    }
    else {
      lVar20 = plVar33[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_014143a0;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar21;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_98 = (long *)0x52daf76250fe632a;
      local_90 = (undefined1 **)0x394c3c0;
      local_88 = (char *)0xb;
      local_80 = (long *)0x0;
      uVar16 = FUN_010f5878(plVar33,&local_98);
      uVar29 = (ulong)uVar16;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (uVar16 < 10) {
        uVar17 = FUN_013f6c68(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xf00),uVar29);
        uVar18 = FUN_013f6c68(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xf00),uVar16 + 1);
        uVar16 = uVar18 - uVar15;
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

## items_inventory

### 01502a80 — _INIT_257

- Signature: undefined _INIT_257(void)
- Body bytes: 3548
- String xrefs: 48 (48 unique strings)
- Candidate score: 244
- Sample strings: anime_L_list_shop_00_switch_price | anime_L_list_shop_01_switch_price | anime_L_list_shop_02_switch_price | anime_L_list_shop_03_switch_price | anime_L_list_shop_04_switch_price | anime_L_list_shop_05_switch_price | anime_L_list_shop_06_switch_price | anime_L_list_shop_07_switch_price | pane_L_list_shop_00_N_icon_check_00 | pane_L_list_shop_00_P_icon_type_text_00 | pane_L_list_shop_00_T_name_w_00 | pane_L_list_shop_00_T_price_00
- Direct callers: []
- Direct callees: [{"entry": "00100250", "name": "FUN_00100250", "call_count": 2}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void _INIT_257(void)

{
  DAT_043c7a08 = 0;
  DAT_043c7a10 = 0;
  DAT_043c7bf0 = 0;
  DAT_043c7c10 = 0;
  DAT_043c79d8 = 0xd52a7d0814b99919;
  DAT_043c79e0 = "pane_L_list_shop_00_T_name_w_00";
  DAT_043c7c30 = 0;
  DAT_043c7a18 = 0x4b831f2cd91b34ca;
  DAT_043c7a20 = "pane_L_list_shop_00_P_icon_type_text_00";
  DAT_043c7c28 = 0;
  DAT_043c7c48 = 0;
  DAT_043c7a58 = 0x306c73b6696a934a;
  DAT_043c7a60 = "pane_L_list_shop_00_N_icon_check_00";
  DAT_043c7a78 = 0xe9772f39212e4737;
  DAT_043c7a80 = "pane_L_list_shop_00_T_price_00";
  DAT_043c7c50 = 0;
  DAT_043c7a98 = 0xe9772e39212e4584;
  DAT_043c7aa0 = "pane_L_list_shop_00_T_price_01";
  DAT_043c7c70 = 0;
  DAT_043c7ab8 = 0x5c02f213e18c68d6;
  DAT_043c7ac0 = "anime_L_list_shop_00_switch_price";
  DAT_043c7c88 = 0;
  DAT_043c7b18 = 0x9a773da0691f07ae;
  DAT_043c7b20 = "pane_L_list_shop_01_T_name_w_00";
  DAT_043c7c90 = 0;
  DAT_043c7b58 = 0xa179d0a031daafbd;
  DAT_043c7b60 = "pane_L_list_shop_01_P_icon_type_text_00";
  DAT_043c7cb0 = 0;
  DAT_043c7b98 = 0xa000d59d34a65995;
  DAT_043c7ba0 = "pane_L_list_shop_01_N_icon_check_00";
  DAT_043c7cd0 = 0;
  DAT_043c7bb8 = 0xecdd05e78556337a;
  DAT_043c7bc0 = "pane_L_list_shop_01_T_price_00";
  DAT_043c7bd8 = 0xecdd06e78556352d;
  DAT_043c7be0 = "pane_L_list_shop_01_T_price_01";
  DAT_043c7bf8 = 0xc1af04378bbf92d7;
  DAT_043c7c00 = "anime_L_list_shop_01_switch_price";
  DAT_043c7cc8 = 0;
  DAT_043c7c58 = 0x8c1a77afa3661457;
  DAT_043c7c60 = "pane_L_list_shop_02_T_name_w_00";
  DAT_043c7cf0 = 0;
  DAT_043c7c98 = 0x2862ebdcf748b648;
  DAT_043c7ca0 = "pane_L_list_shop_02_P_icon_type_text_00";
  DAT_043c7d10 = 0;
  DAT_043c7cd8 = 0x33189f5a3a5cd844;
  DAT_043c7ce0 = "pane_L_list_shop_02_N_icon_check_00";
  DAT_043c7d30 = 0;
  DAT_043c7cf8 = 0x6ef7426d3f9b9add;
  DAT_043c7d00 = "pane_L_list_shop_02_T_price_00";
  DAT_043c7d50 = 0;
  DAT_043c7d18 = 0x6ef7416d3f9b992a;
  DAT_043c7d20 = "pane_L_list_shop_02_T_price_01";
  DAT_043c7d70 = 0;
  DAT_043c7d38 = 0xe4904f8da132ffbc;
  DAT_043c7d40 = "anime_L_list_shop_02_switch_price";
  DAT_043c7d68 = 0;
  DAT_043c7d98 = 0x253e4d50140a4354;
  DAT_043c7da0 = "pane_L_list_shop_03_T_name_w_00";
  DAT_043c7d88 = 0;
  DAT_043c7dd8 = 0x75815dfaa394448b;
  DAT_043c7de0 = "pane_L_list_shop_03_P_icon_type_text_00";
  DAT_043c7d90 = 0;
  DAT_043c7e18 = 0x60a0d40cf2bdd29f;
  DAT_043c7e20 = "pane_L_list_shop_03_N_icon_check_00";
  DAT_043c7db0 = 0;
  DAT_043c7e38 = 0x8a53fd92a719b650;
  DAT_043c7e40 = "pane_L_list_shop_03_T_price_00";
  DAT_043c7dc8 = 0;
  DAT_043c7e58 = 0x8a53fe92a719b803;
  DAT_043c7e60 = "pane_L_list_shop_03_T_price_01";
  DAT_043c7dd0 = 0;
  DAT_043c7e78 = 0xc67522a20554c7ed;
  DAT_043c7e80 = "anime_L_list_shop_03_switch_price";
  DAT_043c7df0 = 0;
  DAT_043c7ed8 = 0x43ff9a39be3a211d;
  DAT_043c7ee0 = "pane_L_list_shop_04_T_name_w_00";
  DAT_043c7e10 = 0;
  DAT_043c7f18 = 0xa2d84f58efa73826;
  DAT_043c7f20 = "pane_L_list_shop_04_P_icon_type_text_00";
  DAT_043c7e08 = 0;
  DAT_043c7f58 = 0x15f0f5ba21684716;
  DAT_043c7f60 = "pane_L_list_shop_04_N_icon_check_00";
  DAT_043c7e30 = 0;
  DAT_043c7f78 = 0x448e606c15da6d83;
  DAT_043c7f80 = "pane_L_list_shop_04_T_price_00";
  DAT_043c7e50 = 0;
  DAT_043c7f98 = 0x448e5f6c15da6bd0;
  DAT_043c7fa0 = "pane_L_list_shop_04_T_price_01";
  DAT_043c7e70 = 0;
  DAT_043c7fb8 = 0xe32fa5977c14622a;
  DAT_043c7fc0 = "anime_L_list_shop_04_switch_price";
  DAT_043c7e90 = 0;
  DAT_043c8018 = 0xf55a8fcea39bf2e2;
  DAT_043c8020 = "pane_L_list_shop_05_T_name_w_00";
  DAT_043c7eb0 = 0;
  DAT_043c8058 = 0x15c9428017530f29;
  DAT_043c8060 = "pane_L_list_shop_05_P_icon_type_text_00";
  DAT_043c7ea8 = 0;
  DAT_043c8098 = 0xcb1f7d4c6c6396e1;
  DAT_043c80a0 = "pane_L_list_shop_05_N_icon_check_00";
  DAT_043c7ec8 = 0;
  DAT_043c80b8 = 0x39812e48c4ef1ae6;
  DAT_043c80c0 = "pane_L_list_shop_05_T_price_00";
  DAT_043c7ed0 = 0;
  DAT_043c80d8 = 0x39812f48c4ef1c99;
  DAT_043c80e0 = "pane_L_list_shop_05_T_price_01";
  DAT_043c7ef0 = 0;
  DAT_043c80f8 = 0x306fcba748d2e1fb;
  DAT_043c8100 = "anime_L_list_shop_05_switch_price";
  DAT_043c7f08 = 0;
  DAT_043c8158 = 0xf96f6d32c21e987b;
  DAT_043c8160 = "pane_L_list_shop_06_T_name_w_00";
  DAT_043c7f10 = 0;
  DAT_043c8198 = 0x5fa8f51d42947c64;
  DAT_043c81a0 = "pane_L_list_shop_06_P_icon_type_text_00";
  DAT_043c7f30 = 0;
  DAT_043c79e8 = 0x1f;
  DAT_043c79f0 = 0;
  DAT_043c7b28 = 0x1f;
  DAT_043c7b30 = 0;
  DAT_043c7c68 = 0x1f;
  DAT_043c7da8 = 0x1f;
  DAT_043c7ee8 = 0x1f;
  DAT_043c8028 = 0x1f;
  DAT_043c8168 = 0x1f;
  DAT_043c81d8 = 0x391c8f966e460aa0;
  DAT_043c82a8 = 0x1f;
  DAT_043c81e0 = "pane_L_list_shop_06_N_icon_check_00";
  DAT_043c82d8 = 0xb4754cd420396507;
  DAT_043c81f8 = 0x661f0cfe745668c9;
  DAT_043c82e0 = "pane_L_list_shop_07_P_icon_type_text_00";
  DAT_043c8200 = "pane_L_list_shop_06_T_price_00";
  DAT_043c7be8 = 0x1e;
  DAT_043c7ca8 = 0x27;
  DAT_043c8318 = 0x7db0ae22c19123bb;
  DAT_043c8218 = 0x661f0bfe74566716;
  DAT_043c7d08 = 0x1e;
  DAT_043c8220 = "pane_L_list_shop_06_T_price_01";
  DAT_043c8338 = 0xa4b9801c6a50fa3c;
  DAT_043c7d28 = 0x1e;
  DAT_043c8340 = "pane_L_list_shop_07_T_price_00";
  DAT_043c8238 = 0x8628d33fc5168ae0;
  DAT_043c7de8 = 0x27;
  DAT_043c8240 = "anime_L_list_shop_06_switch_price";
  DAT_043c8358 = 0xa4b9811c6a50fbef;
  DAT_043c7e48 = 0x1e;
  DAT_043c8360 = "pane_L_list_shop_07_T_price_01";
  DAT_043c7e68 = 0x1e;
  DAT_043c7f28 = 0x27;
  DAT_043c7a28 = 0x27;
  DAT_043c7a30 = 0;
  DAT_043c7f88 = 0x1e;
  DAT_043c7fa8 = 0x1e;
  DAT_043c8068 = 0x27;
  DAT_043c80c8 = 0x1e;
  DAT_043c80e8 = 0x1e;
  DAT_043c81a8 = 0x27;
  DAT_043c8208 = 0x1e;
  DAT_043c8228 = 0x1e;
  DAT_043c8298 = 0x7731c4b2dfdc81e8;
  DAT_043c82e8 = 0x27;
  DAT_043c8348 = 0x1e;
  DAT_043c8368 = 0x1e;
  DAT_043c7c08 = 0x21;
  DAT_043c7c18 = &DAT_cbf29ce484222645;
  DAT_043c7c20 = &DAT_03996322;
  DAT_043c7c38 = &DAT_cbf29ce484222645;
  DAT_043c7c40 = &DAT_03996322;
  DAT_043c7c78 = &DAT_cbf29ce484222645;
  DAT_043c7c80 = &DAT_03996322;
  DAT_043c7cb8 = &DAT_cbf29ce484222645;
  DAT_043c7cc0 = &DAT_03996322;
  DAT_043c7ce8 = 0x23;
  DAT_043c7d48 = 0x21;
  DAT_043c7d58 = &DAT_cbf29ce484222645;
  DAT_043c7d60 = &DAT_03996322;
  DAT_043c7d78 = &DAT_cbf29ce484222645;
  DAT_043c7d80 = &DAT_03996322;
  DAT_043c7db8 = &DAT_cbf29ce484222645;
  DAT_043c7dc0 = &DAT_03996322;
  DAT_043c7df8 = &DAT_cbf29ce484222645;
  DAT_043c7e00 = &DAT_03996322;
  DAT_043c7e28 = 0x23;
  DAT_043c7e88 = 0x21;
  DAT_043c7e98 = &DAT_cbf29ce484222645;
  DAT_043c7ea0 = &DAT_03996322;
  DAT_043c7eb8 = &DAT_cbf29ce484222645;
  DAT_043c7ec0 = &DAT_03996322;
  DAT_043c7ef8 = &DAT_cbf29ce484222645;
  DAT_043c7f00 = &DAT_03996322;
  DAT_043c7f38 = &DAT_cbf29ce484222645;
  DAT_043c7f40 = &DAT_03996322;
  DAT_043c7f50 = 0;
  DAT_043c7f48 = 0;
  DAT_043c7f68 = 0x23;
  DAT_043c7f70 = 0;
  DAT_043c7f90 = 0;
  DAT_043c7fb0 = 0;
  DAT_043c7fc8 = 0x21;
  DAT_043c7fd0 = 0;
  DAT_043c7fd8 = &DAT_cbf29ce484222645;
  DAT_043c7fe0 = &DAT_03996322;
  DAT_043c7ff0 = 0;
  DAT_043c7fe8 = 0;
  DAT_043c7ff8 = &DAT_cbf29ce484222645;
  DAT_043c8000 = &DAT_03996322;
  DAT_043c8008 = 0;
  DAT_043c8010 = 0;
  DAT_043c8030 = 0;
  DAT_043c8038 = &DAT_cbf29ce484222645;
  DAT_043c8040 = &DAT_03996322;
  DAT_043c8048 = 0;
  DAT_043c8050 = 0;
  DAT_043c8070 = 0;
  DAT_043c8078 = &DAT_cbf29ce484222645;
  DAT_043c8080 = &DAT_03996322;
  DAT_043c8090 = 0;
  DAT_043c8088 = 0;
  DAT_043c80a8 = 0x23;
  DAT_043c80b0 = 0;
  DAT_043c80d0 = 0;
  DAT_043c80f0 = 0;
  DAT_043c8108 = 0x21;
  DAT_043c8110 = 0;
  DAT_043c8118 = &DAT_cbf29ce484222645;
  DAT_043c8120 = &DAT_03996322;
  DAT_043c8130 = 0;
  DAT_043c8128 = 0;
  DAT_043c8138 = &DAT_cbf29ce484222645;
  DAT_043c8140 = &DAT_03996322;
  DAT_043c8148 = 0;
  DAT_043c8150 = 0;
  DAT_043c8170 = 0;
  DAT_043c8178 = &DAT_cbf29ce484222645;
  DAT_043c8180 = &DAT_03996322;
  DAT_043c8188 = 0;
  DAT_043c8190 = 0;
  DAT_043c81b0 = 0;
  DAT_043c81b8 = &DAT_cbf29ce484222645;
  DAT_043c81c0 = &DAT_03996322;
  DAT_043c81d0 = 0;
  DAT_043c81c8 = 0;
  DAT_043c81e8 = 0x23;
  DAT_043c81f0 = 0;
  DAT_043c8210 = 0;
  DAT_043c8230 = 0;
  DAT_043c8248 = 0x21;
  DAT_043c8250 = 0;
  DAT_043c8258 = &DAT_cbf29ce484222645;
  DAT_043c8260 = &DAT_03996322;
  DAT_043c8270 = 0;
  DAT_043c8268 = 0;
  DAT_043c8278 = &DAT_cbf29ce484222645;
  DAT_043c8280 = &DAT_03996322;
  DAT_043c8288 = 0;
  DAT_043c8290 = 0;
  DAT_043c82a0 = "pane_L_list_shop_07_T_name_w_00";
  DAT_043c82b0 = 0;
  DAT_043c82b8 = &DAT_cbf29ce484222645;
  DAT_043c82c0 = &DAT_03996322;
  DAT_043c82c8 = 0;
  DAT_043c82d0 = 0;
  DAT_043c82f0 = 0;
  DAT_043c82f8 = &DAT_cbf29ce484222645;
  DAT_043c8300 = &DAT_03996322;
  DAT_043c8310 = 0;
  DAT_043c8308 = 0;
  DAT_043c8328 = 0x23;
  DAT_043c8330 = 0;
  DAT_043c8350 = 0;
  DAT_043c8370 = 0;
  DAT_043c8378 = 0x4965f04502520c31;
  DAT_043c8388 = 0x21;
  DAT_043c8390 = 0;
  DAT_043c8398 = &DAT_cbf29ce484222645;
  DAT_043c83a0 = &DAT_03996322;
  DAT_043c83b0 = 0;
  DAT_043c83a8 = 0;
  DAT_043c83b8 = &DAT_cbf29ce484222645;
  DAT_043c83c0 = &DAT_03996322;
  DAT_043c83c8 = 0;
  DAT_043c83d0 = 0;
  DAT_043c7a88 = 0x1e;
  DAT_043c7a90 = 0;
  DAT_043c7aa8 = 0x1e;
  DAT_043c7ab0 = 0;
  DAT_043c7b68 = 0x27;
  DAT_043c7b70 = 0;
  DAT_043c8320 = "pane_L_list_shop_07_N_icon_check_00";
  DAT_043c7bc8 = 0x1e;
  DAT_043c7bd0 = 0;
  DAT_043c8380 = "anime_L_list_shop_07_switch_price";
  DAT_043c79f8 = &DAT_cbf29ce484222645;
  DAT_043c7a00 = &DAT_03996322;
  DAT_043c7a38 = &DAT_cbf29ce484222645;
  DAT_043c7a40 = &DAT_03996322;
  DAT_043c7a48 = 0;
  DAT_043c7a50 = 0;
  DAT_043c7a68 = 0x23;
  DAT_043c7a70 = 0;
  DAT_043c7ac8 = 0x21;
  DAT_043c7ad0 = 0;
  DAT_043c7ad8 = &DAT_cbf29ce484222645;
  DAT_043c7ae0 = &DAT_03996322;
  DAT_043c7ae8 = 0;
  DAT_043c7af0 = 0;
  DAT_043c7af8 = &DAT_cbf29ce484222645;
  DAT_043c7b00 = &DAT_03996322;
  DAT_043c7b08 = 0;
  DAT_043c7b10 = 0;
  DAT_043c7b38 = &DAT_cbf29ce484222645;
  DAT_043c7b40 = &DAT_03996322;
  DAT_043c7b48 = 0;
  DAT_043c7b50 = 0;
  DAT_043c7b78 = &DAT_cbf29ce484222645;
  DAT_043c7b80 = &DAT_03996322;
  DAT_043c7b88 = 0;
  DAT_043c7b90 = 0;
  DAT_043c7ba8 = 0x23;
  DAT_043c7bb0 = 0;
  FUN_00100250(&LAB_01502090,0,&PTR_LOOP_0411a000);
  DAT_043c83f8 = &DAT_cbf29ce484222645;
  DAT_043c8400 = &DAT_03996322;
  DAT_043c85d8 = &DAT_cbf29ce484222645;
  DAT_043c85e0 = &DAT_03996322;
  DAT_043c85f0 = 0;
  DAT_043c83d8 = 0x297323ca92d7197b;
  DAT_043c83e0 = "pane_L_list_w_immovable_00_T_name_w_00";
  DAT_043c8418 = 0xc591fb4eeea71d64;
  DAT_043c8420 = "pane_L_list_w_immovable_00_P_icon_type_text_00";
  DAT_043c85e8 = 0;
  DAT_043c8438 = 0xbdcc05e68c63090;
  DAT_043c8440 = "pane_L_list_w_immovable_00_N_icon_kdw_00";
  DAT_043c8610 = 0;
  DAT_043c8458 = 0x694ab263da831ba0;
  DAT_043c8460 = "pane_L_list_w_immovable_00_N_icon_check_00";
  DAT_043c8630 = 0;
  DAT_043c84b8 = 0x2d31d28b7f731908;
  DAT_043c84c0 = "anime_L_list_w_immovable_00_switch_default";
  DAT_043c8638 = &DAT_cbf29ce484222645;
  DAT_043c8640 = &DAT_03996322;
  DAT_043c84d8 = 0xe93d18048424b7e0;
  DAT_043c84e0 = "anime_L_list_w_immovable_00_switch_notset";
  DAT_043c8518 = 0xa7357b4ab09502e8;
  DAT_043c8520 = "pane_L_list_w_immovable_01_T_name_w_00";
  DAT_043c8650 = 0;
  DAT_043c8558 = 0x1a5e5305cc4c0607;
  DAT_043c8560 = "pane_L_list_w_immovable_01_P_icon_type_text_00";
  DAT_043c8648 = 0;
  DAT_043c8578 = 0x765a9dc9e407dbaf;
  DAT_043c8580 = "pane_L_list_w_immovable_01_N_icon_kdw_00";
  DAT_043c8670 = 0;
  DAT_043c8598 = 0xadded0f02dce34bb;
  DAT_043c85a0 = "pane_L_list_w_immovable_01_N_icon_check_00";
  DAT_043c85f8 = 0x7f1c7a0b8a965671;
  DAT_043c8600 = "anime_L_list_w_immovable_01_switch_default";
  DAT_043c8618 = 0x7a3c441c1ea9d8ab;
  DAT_043c8620 = "anime_L_list_w_immovable_01_switch_notset";
  DAT_043c8678 = &DAT_cbf29ce484222645;
  DAT_043c8658 = 0x740350d18ef2a21d;
  DAT_043c8660 = "pane_L_list_w_immovable_02_T_name_w_00";
  DAT_043c8680 = &DAT_03996322;
  DAT_043c8698 = 0x8c1558a9bb9d926;
  DAT_043c86a0 = "pane_L_list_w_immovable_02_P_icon_type_text_00";
  DAT_043c8690 = 0;
  DAT_043c86b8 = 0xd105d149cfb7dc6a;
  DAT_043c86c0 = "pane_L_list_
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 01483e40 — _INIT_236

- Signature: undefined _INIT_236(void)
- Body bytes: 2656
- String xrefs: 39 (39 unique strings)
- Candidate score: 213
- Sample strings: anime_L_item_00_in | anime_L_item_00_out | anime_L_item_00_reset | anime_L_item_00_slide | anime_L_item_00_wait | anime_L_item_01_in | anime_L_item_01_out | anime_L_item_01_reset | anime_L_item_01_slide | anime_L_item_01_wait | anime_L_item_02_in | anime_L_item_02_out
- Direct callers: []
- Direct callees: [{"entry": "00100250", "name": "FUN_00100250", "call_count": 9}]
- Pseudocode truncated: false

----- C PSEUDOCODE START -----

void _INIT_236(void)

{
  DAT_043c3728 = 0;
  DAT_043c3748 = 0;
  DAT_043c3768 = 0;
  DAT_043c3788 = 0;
  DAT_043c3510 = 0xec5ba41785da4b2b;
  DAT_043c3518 = "pane_L_item_00";
  DAT_043c37a8 = 0;
  DAT_043c3530 = 0xc9df91e9175c3fe;
  DAT_043c3538 = "pane_L_item_00_T_itemname_00";
  DAT_043c37c8 = 0;
  DAT_043c3550 = 0xdf12af04d05c8839;
  DAT_043c3558 = "pane_L_item_00_T_count_00";
  DAT_043c37e8 = 0;
  DAT_043c3570 = 0xdf12ae04d05c8686;
  DAT_043c3578 = "pane_L_item_00_T_count_01";
  DAT_043c3808 = 0;
  DAT_043c3590 = 0x5670adf62250c377;
  DAT_043c3598 = "pane_L_item_00_P_item_00";
  DAT_043c3828 = 0;
  DAT_043c35b0 = 0x956c6127fef7bd92;
  DAT_043c35b8 = "pane_L_item_00_L_new_00";
  DAT_043c3848 = 0;
  DAT_043c35d0 = 0x3de12c509e507367;
  DAT_043c35d8 = "anime_L_item_00_in";
  DAT_043c3868 = 0;
  DAT_043c35f0 = 0xb5a99de57d883859;
  DAT_043c35f8 = "anime_L_item_00_wait";
  DAT_043c3888 = 0;
  DAT_043c3610 = 0xa85b4ffd1eb5ed6c;
  DAT_043c3618 = "anime_L_item_00_out";
  DAT_043c38a8 = 0;
  DAT_043c3630 = 0x9547d087e61a7fad;
  DAT_043c3638 = "anime_L_item_00_slide";
  DAT_043c38c8 = 0;
  DAT_043c3650 = 0x92ceb00c45379097;
  DAT_043c3658 = "anime_L_item_00_reset";
  DAT_043c38e8 = 0;
  DAT_043c3670 = 0xec5ba31785da4978;
  DAT_043c3678 = "pane_L_item_01";
  DAT_043c3908 = 0;
  DAT_043c3690 = 0x40118687948351e5;
  DAT_043c3698 = "pane_L_item_01_T_itemname_00";
  DAT_043c3928 = 0;
  DAT_043c36b0 = 0xf853d2677949a59c;
  DAT_043c36b8 = "pane_L_item_01_T_count_00";
  DAT_043c36d0 = 0xf853d3677949a74f;
  DAT_043c36d8 = "pane_L_item_01_T_count_01";
  DAT_043c3820 = 0x19;
  DAT_043c36f0 = 0x12fe33f6ed990180;
  DAT_043c36f8 = "pane_L_item_01_P_item_00";
  DAT_043c3710 = 0xf80efe3437834df7;
  DAT_043c3718 = "pane_L_item_01_L_new_00";
  DAT_043c3730 = 0x10c30a4a3bf8e312;
  DAT_043c3738 = "anime_L_item_01_in";
  DAT_043c3840 = 0x19;
  DAT_043c3750 = 0x8f83136e4c4543bc;
  DAT_043c3758 = "anime_L_item_01_wait";
  DAT_043c3770 = 0xa74de624048643cb;
  DAT_043c3778 = "anime_L_item_01_out";
  DAT_043c3560 = 0x19;
  DAT_043c3568 = 0;
  DAT_043c3580 = 0x19;
  DAT_043c3588 = 0;
  DAT_043c36c0 = 0x19;
  DAT_043c36c8 = 0;
  DAT_043c36e0 = 0x19;
  DAT_043c36e8 = 0;
  DAT_043c3790 = 0x639b3cabe87c7fd2;
  DAT_043c3798 = "anime_L_item_01_slide";
  DAT_043c3850 = 0xb092082fb91a1b49;
  DAT_043c3858 = "pane_L_item_02_P_item_00";
  DAT_043c37b0 = 0xec37c3110db68ddc;
  DAT_043c37b8 = "anime_L_item_01_reset";
  DAT_043c3870 = 0x2b6b343f0feb3f18;
  DAT_043c37e0 = 0xe;
  DAT_043c37d0 = 0xec5ba61785da4e91;
  DAT_043c3890 = 0x6bb14c6384c0e699;
  DAT_043c37d8 = "pane_L_item_02";
  DAT_043c3898 = "anime_L_item_02_in";
  DAT_043c3520 = 0xe;
  DAT_043c3528 = 0;
  DAT_043c37f0 = 0x9905292a88cded4c;
  DAT_043c38b0 = 0x2e8e662f2f9b7e5b;
  DAT_043c37f8 = "pane_L_item_02_T_itemname_00";
  DAT_043c38b8 = "anime_L_item_02_wait";
  DAT_043c3680 = 0xe;
  DAT_043c3688 = 0;
  DAT_043c3810 = 0x34709a62ccc4c873;
  DAT_043c38d0 = 0x8cdbc61a77c18e1a;
  DAT_043c3818 = "pane_L_item_02_T_count_00";
  DAT_043c38f0 = 0x6c9630a6e956f36b;
  DAT_043c3830 = 0x34709962ccc4c6c0;
  DAT_043c38f8 = "anime_L_item_02_slide";
  DAT_043c3838 = "pane_L_item_02_T_count_01";
  DAT_043c3878 = "pane_L_item_02_L_new_00";
  DAT_043c3910 = 0x3cffc2d9be93e699;
  DAT_043c3540 = 0x1c;
  DAT_043c3548 = 0;
  DAT_043c3800 = 0x1c;
  DAT_043c35a0 = 0x18;
  DAT_043c35a8 = 0;
  DAT_043c3720 = 0x17;
  DAT_043c3740 = 0x12;
  DAT_043c3760 = 0x14;
  DAT_043c3780 = 0x13;
  DAT_043c35c0 = 0x17;
  DAT_043c35c8 = 0;
  DAT_043c35e0 = 0x12;
  DAT_043c35e8 = 0;
  DAT_043c37a0 = 0x15;
  DAT_043c37c0 = 0x15;
  DAT_043c3860 = 0x18;
  DAT_043c3880 = 0x17;
  DAT_043c38a0 = 0x12;
  DAT_043c38c0 = 0x14;
  DAT_043c38d8 = "anime_L_item_02_out";
  DAT_043c38e0 = 0x13;
  DAT_043c3900 = 0x15;
  DAT_043c3918 = "anime_L_item_02_reset";
  DAT_043c3920 = 0x15;
  DAT_043c3600 = 0x14;
  DAT_043c3608 = 0;
  DAT_043c3620 = 0x13;
  DAT_043c3628 = 0;
  DAT_043c3640 = 0x15;
  DAT_043c3648 = 0;
  DAT_043c3660 = 0x15;
  DAT_043c3668 = 0;
  DAT_043c36a0 = 0x1c;
  DAT_043c36a8 = 0;
  DAT_043c3700 = 0x18;
  DAT_043c3708 = 0;
  FUN_00100250(&LAB_014839c0,0,&PTR_LOOP_0411a000);
  DAT_043c3940 = 0xe;
  DAT_043c3948 = 0;
  DAT_043c3930 = 0x59ee533072e36b31;
  DAT_043c3938 = "pane_N_item_00";
  DAT_043c39c0 = 0xe;
  DAT_043c39c8 = 0;
  DAT_043c3950 = 0x276067463209b51d;
  DAT_043c3958 = "pane_N_command_00";
  DAT_043c3960 = 0x11;
  DAT_043c3968 = 0;
  DAT_043c3970 = 0x2324aee2e3c6ac7f;
  DAT_043c3978 = "pane_N_item_pokemon_00";
  DAT_043c3990 = 0x29288174277c5656;
  DAT_043c3998 = "pane_N_guage_nspoke_00";
  DAT_043c3980 = 0x16;
  DAT_043c3988 = 0;
  DAT_043c39b0 = 0xcd03e789b5c50747;
  DAT_043c39b8 = "pane_N_mssn_00";
  DAT_043c39a0 = 0x16;
  DAT_043c39a8 = 0;
  DAT_043c39d0 = 0x11223a61eb91bac4;
  DAT_043c39d8 = "pane_N_zninfo_00";
  DAT_043c39e0 = 0x10;
  DAT_043c39e8 = 0;
  DAT_043c3a00 = 0x10;
  DAT_043c3a08 = 0;
  DAT_043c39f0 = 0x146a047c4947d3fe;
  DAT_043c39f8 = "pane_N_nstime_00";
  DAT_043c3a10 = 0xbbd7c62e83b953b8;
  DAT_043c3a18 = "pane_N_as_00";
  DAT_043c3a20 = 0xc;
  DAT_043c3a28 = 0;
  DAT_043c3a30 = 0xfbe09f2e2dde0606;
  DAT_043c3a38 = "pane_L_command_00_N_command_01";
  DAT_043c3a40 = 0x1e;
  DAT_043c3a48 = 0;
  DAT_043c3a60 = 0x1e;
  DAT_043c3a68 = 0;
  DAT_043c3a50 = 0xfbe09e2e2dde0453;
  DAT_043c3a58 = "pane_L_command_00_N_command_02";
  DAT_043c3a70 = 0x24dc04ed500838df;
  DAT_043c3a78 = "pane_N_wnhd_00";
  DAT_043c3a80 = 0xe;
  DAT_043c3a88 = 0;
  FUN_00100250(&LAB_01483a00,0,&PTR_LOOP_0411a000);
  DAT_043c3aa0 = 0x15;
  DAT_043c3aa8 = 0;
  DAT_043c3a90 = 0x321a9666187a7633;
  DAT_043c3a98 = "anime_L_command_00_in";
  DAT_043c3ac0 = 0x17;
  DAT_043c3ac8 = 0;
  DAT_043c3ab0 = 0xadbcba158288c30d;
  DAT_043c3ab8 = "anime_L_command_00_keep";
  DAT_043c3ae0 = 0x16;
  DAT_043c3ae8 = 0;
  DAT_043c3ad0 = 0x8f4d7e7b90d096c0;
  DAT_043c3ad8 = "anime_L_command_00_out";
  FUN_00100250(0x1483b20,0,&PTR_LOOP_0411a000);
  DAT_043c3b00 = 0x1c;
  DAT_043c3b08 = 0;
  DAT_043c3af0 = 0x222572c808ba75a;
  DAT_043c3af8 = "anime_L_item_pokemon_00_wake";
  DAT_043c3b20 = 0x1c;
  DAT_043c3b28 = 0;
  DAT_043c3b10 = 0x2560b33f778d1aaf;
  DAT_043c3b18 = "anime_L_item_pokemon_00_keep";
  DAT_043c3b30 = 0x934164360bdf33d6;
  DAT_043c3b38 = "anime_L_item_pokemon_00_close";
  DAT_043c3b40 = 0x1d;
  DAT_043c3b48 = 0;
  DAT_043c3b50 = 0x15899a0eb31de2bb;
  DAT_043c3b58 = "anime_L_item_pokemon_00_wake_first";
  DAT_043c3b60 = 0x22;
  DAT_043c3b68 = 0;
  FUN_00100250(0x1483b80,0,&PTR_LOOP_0411a000);
  DAT_043c3b80 = 0x14;
  DAT_043c3b88 = 0;
  DAT_043c3b70 = 0x18272dad07b1e402;
  DAT_043c3b78 = "anime_L_mssn_00_wake";
  DAT_043c3ba0 = 0x14;
  DAT_043c3ba8 = 0;
  DAT_043c3b90 = 0x397e8a4cbe3a4397;
  DAT_043c3b98 = "anime_L_mssn_00_keep";
  DAT_043c3bc0 = 0x15;
  DAT_043c3bc8 = 0;
  DAT_043c3bb0 = 0xf6e2491fd965907e;
  DAT_043c3bb8 = "anime_L_mssn_00_close";
  FUN_00100250(&LAB_01483c00,0,&PTR_LOOP_0411a000);
  DAT_043c3be0 = 0x16;
  DAT_043c3be8 = 0;
  DAT_043c3bd0 = 0xf38f374b518dfecb;
  DAT_043c3bd8 = "anime_L_zninfo_00_wake";
  DAT_043c3c00 = 0x16;
  DAT_043c3c08 = 0;
  DAT_043c3bf0 = 0x952c8961f5ee7e9a;
  DAT_043c3bf8 = "anime_L_zninfo_00_keep";
  DAT_043c3c20 = 0x17;
  DAT_043c3c28 = 0;
  DAT_043c3c10 = 0xb56af7db28247b1;
  DAT_043c3c18 = "anime_L_zninfo_00_close";
  FUN_00100250(0x1483c60,0,&PTR_LOOP_0411a000);
  DAT_043c3c40 = 0x17;
  DAT_043c3c48 = 0;
  DAT_043c3c30 = 0xf1803e204b3f72dc;
  DAT_043c3c38 = "anime_L_ns_time_00_wake";
  DAT_043c3c60 = 0x17;
  DAT_043c3c68 = 0;
  DAT_043c3c50 = 0x4f30ea797b5c231d;
  DAT_043c3c58 = "anime_L_ns_time_00_keep";
  DAT_043c3c80 = 0x18;
  DAT_043c3c88 = 0;
  DAT_043c3c70 = 0x93526782906f1a50;
  DAT_043c3c78 = "anime_L_ns_time_00_close";
  FUN_00100250(0x1483cc0,0,&PTR_LOOP_0411a000);
  DAT_043c3ca0 = 0x12;
  DAT_043c3ca8 = 0;
  DAT_043c3c90 = 0x4d78b0e869bb3e27;
  DAT_043c3c98 = "anime_L_as_00_wake";
  DAT_043c3cc0 = 0x12;
  DAT_043c3cc8 = 0;
  DAT_043c3cb0 = 0x562413c4893fb4d6;
  DAT_043c3cb8 = "anime_L_as_00_keep";
  DAT_043c3ce0 = 0x13;
  DAT_043c3ce8 = 0;
  DAT_043c3cd0 = 0xa97e18699765cddd;
  DAT_043c3cd8 = "anime_L_as_00_close";
  FUN_00100250(0x1483d20,0,&PTR_LOOP_0411a000);
  DAT_043c3d00 = 0x14;
  DAT_043c3d08 = 0;
  DAT_043c3cf0 = 0x29c282096c4231ce;
  DAT_043c3cf8 = "anime_L_wnhd_00_wake";
  DAT_043c3d20 = 0x14;
  DAT_043c3d28 = 0;
  DAT_043c3d10 = 0x879afe629c7fe293;
  DAT_043c3d18 = "anime_L_wnhd_00_keep";
  DAT_043c3d30 = 0xfec1a515f3180ada;
  DAT_043c3d38 = "anime_L_wnhd_00_close";
  DAT_043c3d40 = 0x15;
  DAT_043c3d48 = 0;
  DAT_043c3d50 = 0xa1975032f5aaf92b;
  DAT_043c3d58 = "anime_L_wnhd_00_end";
  DAT_043c3d60 = 0x13;
  DAT_043c3d68 = 0;
  FUN_00100250(0x1483d80,0,&PTR_LOOP_0411a000);
  return;
}
----- C PSEUDOCODE END -----

### 010c87c4 — FUN_010c87c4

- Signature: undefined FUN_010c87c4(void)
- Body bytes: 6732
- String xrefs: 14 (14 unique strings)
- Candidate score: 146
- Sample strings: common/bag_pocket.dat | common/bag_pocket.tbl | common/itemname.dat | common/itemname.tbl | common/itemname_acc.dat | common/itemname_acc.tbl | common/itemname_acc_classified.dat | common/itemname_acc_classified.tbl | common/itemname_classified.dat | common/itemname_classified.tbl | common/itemname_plural.dat | common/itemname_plural.tbl
- Direct callers: [{"entry": "00d157e0", "name": "FUN_00d157e0", "call_count": 1}, {"entry": "0287c530", "name": "FUN_0287c530", "call_count": 1}]
- Direct callees: [{"entry": "010c4b50", "name": "FUN_010c4b50", "call_count": 17}, {"entry": "010c4d00", "name": "FUN_010c4d00", "call_count": 17}, {"entry": "010ca210", "name": "FUN_010ca210", "call_count": 1}, {"entry": "010ca2cc", "name": "FUN_010ca2cc", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

void FUN_010c87c4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = FUN_010ca210(*(undefined8 *)PTR_DAT_0437e408);
  *(undefined8 *)(param_1 + 0xb20) = uVar1;
  local_70 = 0xb4cc9d0257902b6e;
  pcStack_68 = "common/itemname.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xb28);
  *(undefined8 *)(param_1 + 0xb28) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xb28) = plVar2;
  *(undefined8 *)(param_1 + 0xb30) = local_48;
  *(undefined8 *)(param_1 + 0xb38) = local_40;
  plVar2 = *(long **)(param_1 + 0xb48);
  *(undefined8 *)(param_1 + 0xb48) = 0;
  *(undefined8 *)(param_1 + 0xb40) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xb48) = uVar1;
  *(undefined4 *)(param_1 + 0xb50) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x2b0af70209c60ca5;
  pcStack_68 = "common/itemname.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xb58);
  *(undefined8 *)(param_1 + 0xb58) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xb58) = plVar2;
  *(undefined8 *)(param_1 + 0xb60) = local_48;
  *(undefined8 *)(param_1 + 0xb68) = local_40;
  plVar2 = *(long **)(param_1 + 0xb78);
  *(undefined8 *)(param_1 + 0xb78) = 0;
  *(undefined8 *)(param_1 + 0xb70) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xb78) = uVar1;
  *(undefined4 *)(param_1 + 0xb80) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x41655414cfbef75c;
  pcStack_68 = "common/wazaname.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xb88);
  *(undefined8 *)(param_1 + 0xb88) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xb88) = plVar2;
  *(undefined8 *)(param_1 + 0xb90) = local_48;
  *(undefined8 *)(param_1 + 0xb98) = local_40;
  plVar2 = *(long **)(param_1 + 0xba8);
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xba8) = uVar1;
  *(undefined4 *)(param_1 + 0xbb0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xb524be147fd5f8df;
  pcStack_68 = "common/wazaname.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 3000);
  *(undefined8 *)(param_1 + 3000) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 3000) = plVar2;
  *(undefined8 *)(param_1 + 0xbc0) = local_48;
  *(undefined8 *)(param_1 + 0xbc8) = local_40;
  plVar2 = *(long **)(param_1 + 0xbd8);
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  *(undefined8 *)(param_1 + 0xbd0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xbd8) = uVar1;
  *(undefined4 *)(param_1 + 0xbe0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x6db944fd9c30dde5;
  pcStack_68 = "common/typename.dat";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xbe8);
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xbe8) = plVar2;
  *(undefined8 *)(param_1 + 0xbf0) = local_48;
  *(undefined8 *)(param_1 + 0xbf8) = local_40;
  plVar2 = *(long **)(param_1 + 0xc08);
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc00) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc08) = uVar1;
  *(undefined4 *)(param_1 + 0xc10) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xf77aeafde9fafcae;
  pcStack_68 = "common/typename.tbl";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xc18);
  *(undefined8 *)(param_1 + 0xc18) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xc18) = plVar2;
  *(undefined8 *)(param_1 + 0xc20) = local_48;
  *(undefined8 *)(param_1 + 0xc28) = local_40;
  plVar2 = *(long **)(param_1 + 0xc38);
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xc30) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc38) = uVar1;
  *(undefined4 *)(param_1 + 0xc40) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x1d4603fdfbcbfc24;
  pcStack_68 = "common/tokusei.dat";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xc48);
  *(undefined8 *)(param_1 + 0xc48) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xc48) = plVar2;
  *(undefined8 *)(param_1 + 0xc50) = local_48;
  *(undefined8 *)(param_1 + 0xc58) = local_40;
  plVar2 = *(long **)(param_1 + 0xc68);
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xc60) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc68) = uVar1;
  *(undefined4 *)(param_1 + 0xc70) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x91055dfdabe2e277;
  pcStack_68 = "common/tokusei.tbl";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xc78);
  *(undefined8 *)(param_1 + 0xc78) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xc78) = plVar2;
  *(undefined8 *)(param_1 + 0xc80) = local_48;
  *(undefined8 *)(param_1 + 0xc88) = local_40;
  plVar2 = *(long **)(param_1 + 0xc98);
  *(undefined8 *)(param_1 + 0xc98) = 0;
  *(undefined8 *)(param_1 + 0xc90) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xc98) = uVar1;
  *(undefined4 *)(param_1 + 0xca0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xad357db753d6f73;
  pcStack_68 = "common/seikaku.dat";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xca8);
  *(undefined8 *)(param_1 + 0xca8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xca8) = plVar2;
  *(undefined8 *)(param_1 + 0xcb0) = local_48;
  *(undefined8 *)(param_1 + 0xcb8) = local_40;
  plVar2 = *(long **)(param_1 + 0xcc8);
  *(undefined8 *)(param_1 + 0xcc8) = 0;
  *(undefined8 *)(param_1 + 0xcc0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xcc8) = uVar1;
  *(undefined4 *)(param_1 + 0xcd0) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x7da4bddb248a1d60;
  pcStack_68 = "common/seikaku.tbl";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xcd8);
  *(undefined8 *)(param_1 + 0xcd8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xcd8) = plVar2;
  *(undefined8 *)(param_1 + 0xce0) = local_48;
  *(undefined8 *)(param_1 + 0xce8) = local_40;
  plVar2 = *(long **)(param_1 + 0xcf8);
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  *(undefined8 *)(param_1 + 0xcf0) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xcf8) = uVar1;
  *(undefined4 *)(param_1 + 0xd00) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xb059dd7e20c2c317;
  pcStack_68 = "script/place_name.dat";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  FUN_010c4b50(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xd08);
  *(undefined8 *)(param_1 + 0xd08) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xd08) = plVar2;
  *(undefined8 *)(param_1 + 0xd10) = local_48;
  *(undefined8 *)(param_1 + 0xd18) = local_40;
  plVar2 = *(long **)(param_1 + 0xd28);
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined8 *)(param_1 + 0xd20) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xd28) = uVar1;
  *(undefined4 *)(param_1 + 0xd30) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x276b537dd3ac58f4;
  pcStack_68 = "script/place_name.tbl";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  FUN_010c4d00(&local_50,&local_70,10);
  plVar2 = *(long **)(param_1 + 0xd38);
  *(undefined8 *)(param_1 + 0xd38) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *(long **)(param_1 + 0xd38) = plVar2;
  *(undefined8 *)(param_1 + 0xd40) = local_48;
  *(undefined8 *)(param_1 + 0xd48) = local_40;
  plVar2 = *(long **)(param_1 + 0xd58);
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd50) = local_38;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0xd58) = uVar1;
  *(undefined4 *)(param_1 + 0xd60) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(cod
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

## wild_encounter

### 01c60590 — FUN_01c60590

- Signature: undefined FUN_01c60590(void)
- Body bytes: 3804
- String xrefs: 7 (7 unique strings)
- Candidate score: 139
- Sample strings: PLAY_STDISTORTION_CRACK_REALIZE | PLAY_STDISTORTION_CRACK_SPARK_RND | PLAY_STDISTORTION_EDGENOISE_REALIZE_LP | PLAY_STDISTORTION_REALIZE | STOP_STDISTORTION_CRACK_SPARK_PRE_RND | STOP_STDISTORTION_EDGENOISE_PRE_LP | STOP_STDISTORTION_LFE_PRE_REALIZE_LOOP
- Direct callers: [{"entry": "01c5b36c", "name": "FUN_01c5b36c", "call_count": 1}, {"entry": "025a670c", "name": "FUN_025a670c", "call_count": 1}]
- Direct callees: [{"entry": "033a2e00", "name": "__cxa_guard_acquire", "call_count": 15}, {"entry": "033a2e10", "name": "__cxa_guard_release", "call_count": 15}, {"entry": "00100250", "name": "FUN_00100250", "call_count": 12}, {"entry": "00ad3750", "name": "FUN_00ad3750", "call_count": 3}, {"entry": "00aeb228", "name": "FUN_00aeb228", "call_count": 3}, {"entry": "01c5e5a0", "name": "FUN_01c5e5a0", "call_count": 3}, {"entry": "02913338", "name": "FUN_02913338", "call_count": 3}, {"entry": "0291356c", "name": "FUN_0291356c", "call_count": 3}, {"entry": "02a44274", "name": "FUN_02a44274", "call_count": 3}, {"entry": "02c90b50", "name": "FUN_02c90b50", "call_count": 3}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c60590(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined1 in_q3 [16];
  undefined8 uVar16;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  code *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar16 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x488) == 1) {
      FUN_01c601f8(param_1,3,1);
    }
    *(undefined4 *)(param_1 + 0x29c) = 3;
    return;
  }
  FUN_016c24d0(&local_e0,param_1 + 0x490);
  if ((local_e0 != (long *)0x0) && (FUN_015916d0(local_e0,0,8,0), local_e0 != (long *)0x0)) {
    lVar14 = local_e0[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined1 *)(param_1 + 0x4a5) = 1;
  FUN_01c6146c(param_1);
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar14 = *(long *)(param_1 + 0x3e0);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c60620;
        if (plVar15 == (long *)puVar7) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c611f4;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar15,1);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
          lVar14 = *(long *)(param_1 + 0x3f0);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c61288;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c611f4:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c60620:
  lVar14 = *(long *)(param_1 + 0x3f0);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c61288:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c60628;
        if (plVar15 == puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c612d4;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar15,1);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
          lVar14 = *(long *)(param_1 + 0x420);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c61368;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c612d4:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c60628:
  lVar14 = *(long *)(param_1 + 0x420);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c61368:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c60630;
        if (plVar15 == puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + -0x50);
            FUN_02c90b50(plVar15,1);
            lVar14 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c60630:
  puVar6 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar8 = PTR_DAT_04379c38;
  puVar7 = PTR_DAT_04379c30;
  local_70 = 0;
  uStack_68 = 0;
  uVar12 = *(undefined8 *)PTR_DAT_04379c30;
  local_f0 = 0x26;
  local_e8 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_100 = (long *)0xa9b920afe574069a;
  pcStack_f8 = "STOP_STDISTORTION_LFE_PRE_REALIZE_LOOP";
  *(undefined8 *)PTR_DAT_04379c38 = uVar12;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_02913338(uVar12,&local_100,&local_e0,0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar12 = *(undefined8 *)puVar7;
  local_f0 = 0x25;
  local_e8 = (long *)0x0;
  *(undefined8 *)puVar8 = uVar12;
  local_100 = (long *)0xf7234cb593848c90;
  pcStack_f8 = "STOP_STDISTORTION_CRACK_SPARK_PRE_RND";
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_02913338(uVar12,&local_100,&local_e0,0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  FUN_009c69bc(&local_e0,param_1);
  (**(code **)(*local_e0 + 0x40))();
  local_110 = uVar13;
  uStack_108 = uVar16;
  if (local_e0 != (long *)0x0) {
    lVar14 = local_e0[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  local_120 = CONCAT44((float)((ulong)local_110 >> 0x20) + (float)((ulong)_DAT_03889bf0 >> 0x20),
                       (float)local_110 + (float)_DAT_03889bf0);
  uStack_118 = CONCAT44((float)((ulong)uStack_108 >> 0x20) + (float)((ulong)_UNK_03889bf8 >> 0x20),
                        (float)uStack_108 + (float)_UNK_03889bf8);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_f0 = 0x21;
  local_e8 = (long *)0x0;
  local_100 = (long *)0xcd219c3c9e0f5788;
  pcStack_f8 = "PLAY_STDISTORTION_CRACK_SPARK_RND";
  *(undefined8 *)puVar8 = uVar13;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_0291356c(uVar13,&local_100,&local_120,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_e0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 01c5ea60 — FUN_01c5ea60

- Signature: undefined FUN_01c5ea60(void)
- Body bytes: 2792
- String xrefs: 5 (5 unique strings)
- Candidate score: 127
- Sample strings: PLAY_STDISTORTION_CRACK_DISAPPEAR | PLAY_STDISTORTION_DISAPPEAR | STOP_STDISTORTION_CRACK_SPARK_RND | STOP_STDISTORTION_EDGENOISE_REALIZE_LP | STOP_STDISTORTION_LFE_PRE_REALIZE_LOOP
- Direct callers: [{"entry": "025a6678", "name": "FUN_025a6678", "call_count": 1}]
- Direct callees: [{"entry": "033a2e00", "name": "__cxa_guard_acquire", "call_count": 10}, {"entry": "033a2e10", "name": "__cxa_guard_release", "call_count": 10}, {"entry": "00100250", "name": "FUN_00100250", "call_count": 7}, {"entry": "00ad3750", "name": "FUN_00ad3750", "call_count": 3}, {"entry": "00aeb228", "name": "FUN_00aeb228", "call_count": 3}, {"entry": "01c5e5a0", "name": "FUN_01c5e5a0", "call_count": 3}, {"entry": "02a44274", "name": "FUN_02a44274", "call_count": 3}, {"entry": "02c90b50", "name": "FUN_02c90b50", "call_count": 3}, {"entry": "02913338", "name": "FUN_02913338", "call_count": 2}, {"entry": "0291356c", "name": "FUN_0291356c", "call_count": 2}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c5ea60(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined1 in_q3 [16];
  undefined8 uVar17;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long *local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  code *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar17 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x29c) = 1;
    return;
  }
  FUN_01c5f548(param_1);
  FUN_01c5f898(param_1,0);
  *(undefined4 *)(param_1 + 0x294) = 6;
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_00aeb228(&local_e0,param_1 + 0x3e0);
  FUN_01c5e5a0(param_1,&local_e0);
  puVar5 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e0 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d0 = (long *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_d0);
    }
  }
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  FUN_00aeb228(&local_f0,param_1 + 0x3f0);
  FUN_01c5e5a0(param_1,&local_f0);
  puVar5 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d0 = (long *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_d0);
    }
  }
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_00aeb228(&local_100,param_1 + 0x420);
  FUN_01c5e5a0(param_1,&local_100);
  puVar5 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_100 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d0 = (long *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_d0);
    }
  }
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar14 = *(long *)(param_1 + 0x400);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c5ec1c;
        if (plVar16 == (long *)puVar7) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5f2d0;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar16,1);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
          lVar14 = *(long *)(param_1 + 0x410);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5f364;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5f2d0:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ec1c:
  lVar14 = *(long *)(param_1 + 0x410);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5f364:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c5ec24;
        if (plVar16 == puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5f3b0;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar16,1);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
          lVar14 = *(long *)(param_1 + 0x430);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5f444;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5f3b0:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ec24:
  lVar14 = *(long *)(param_1 + 0x430);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5f444:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c5ec2c;
        if (plVar16 == puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar16 = (long *)(lVar14 + -0x50);
            FUN_02c90b50(plVar16,1);
            lVar14 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ec2c:
  puVar6 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar8 = PTR_DAT_04379c38;
  puVar7 = PTR_DAT_04379c30;
  local_60 = 0;
  uStack_58 = 0;
  uVar12 = *(undefined8 *)PTR_DAT_04379c30;
  local_110 = 0x26;
  local_108 = (long *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_120 = (long *)0xa9b920afe574069a;
  pcStack_118 = "STOP_STDISTORTION_LFE_PRE_REALIZE_LOOP";
  *(undefined8 *)PTR_DAT_04379c38 = uVar12;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (code *)0x0;
  FUN_02913338(uVar12,&local_120,&local_d0,0,0,0);
  pcVar9 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
  }
  else {
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(&local_b0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar12 = *(undefined8 *)puVar7;
  local_110 = 0x21;
  local_108 = (long *)0x0;
  *(undefined8 *)puVar8 = uVar12;
  local_120 = (long *)0x779eac461217e642;
  pcStack_118 = "STOP_STDISTORTION_CRACK_SPARK_RND";
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (code *)0x0;
  FUN_02913338(uVar12,&local_120,&local_d0,0,0,0);
  pcVar9 = local_c8;
  if (local_
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----

### 022cbe30 — FUN_022cbe30

- Signature: undefined FUN_022cbe30(void)
- Body bytes: 11004
- String xrefs: 12 (3 unique strings)
- Candidate score: 126
- Sample strings: IsCreatedSpawnHidePokemon | IsEndSpawnHidePokemonMove | SwapAiSpawnHidePokemon
- Direct callers: [{"entry": "01044920", "name": "FUN_01044920", "call_count": 1}]
- Direct callees: [{"entry": "033a2520", "name": "strlen", "call_count": 23}, {"entry": "02bcc824", "name": "FUN_02bcc824", "call_count": 19}, {"entry": "033a4530", "name": "__cxa_thread_atexit", "call_count": 19}, {"entry": "008f2c60", "name": "FUN_008f2c60", "call_count": 15}, {"entry": "033a23b0", "name": "memcpy", "call_count": 8}, {"entry": "033a3190", "name": "__throw_length_error", "call_count": 8}, {"entry": "033a28b0", "name": "memcmp", "call_count": 2}, {"entry": "0014fef0", "name": "FUN_0014fef0", "call_count": 1}, {"entry": "001522a0", "name": "FUN_001522a0", "call_count": 1}, {"entry": "008cca50", "name": "FUN_008cca50", "call_count": 1}]
- Pseudocode truncated: true

----- C PSEUDOCODE START -----

/* WARNING: Type propagation algorithm not settling */

void FUN_022cbe30(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  size_t sVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  long lVar32;
  string *psVar33;
  long lVar34;
  string *psVar35;
  undefined8 uVar36;
  string *psVar37;
  long *plVar38;
  char *pcVar39;
  void *pvVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  byte local_4c0;
  undefined7 uStack_4bf;
  char cStack_4b8;
  char acStack_4b7 [5];
  undefined2 uStack_4b2;
  char local_4b0;
  char acStack_4af [5];
  undefined1 uStack_4aa;
  undefined1 uStack_4a9;
  byte local_4a8;
  undefined7 uStack_4a7;
  undefined1 local_4a0;
  undefined7 uStack_49f;
  void *local_498;
  undefined7 local_490;
  undefined1 uStack_489;
  undefined7 uStack_488;
  byte local_480;
  undefined7 uStack_47f;
  undefined1 local_478;
  undefined7 uStack_477;
  void *local_470;
  undefined7 local_468;
  undefined1 uStack_461;
  undefined7 uStack_460;
  byte local_458;
  undefined7 uStack_457;
  undefined1 local_450;
  undefined7 uStack_44f;
  void *local_448;
  undefined7 local_440;
  undefined1 uStack_439;
  undefined7 uStack_438;
  byte local_430;
  undefined7 uStack_42f;
  undefined1 local_428;
  undefined7 uStack_427;
  void *local_420;
  undefined7 local_418;
  undefined1 uStack_411;
  undefined7 uStack_410;
  byte local_408;
  undefined7 uStack_407;
  undefined1 local_400;
  undefined7 uStack_3ff;
  void *local_3f8;
  undefined7 local_3f0;
  undefined1 uStack_3e9;
  undefined7 uStack_3e8;
  byte local_3e0;
  undefined7 uStack_3df;
  undefined1 local_3d8;
  undefined7 uStack_3d7;
  void *local_3d0;
  undefined7 local_3c8;
  undefined1 uStack_3c1;
  undefined7 uStack_3c0;
  byte local_3b8;
  undefined7 uStack_3b7;
  undefined1 local_3b0;
  undefined7 uStack_3af;
  void *local_3a8;
  undefined7 local_3a0;
  undefined1 uStack_399;
  undefined7 uStack_398;
  undefined7 local_390;
  undefined1 uStack_389;
  undefined7 uStack_388;
  string local_380;
  char local_37f [8];
  undefined2 local_377;
  undefined1 local_375;
  undefined4 local_374;
  long local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined4 local_358;
  byte local_350;
  char local_34f [7];
  char cStack_348;
  char acStack_347 [7];
  long local_340;
  undefined1 *local_338;
  undefined1 *puStack_330;
  undefined4 local_328;
  byte local_320;
  char local_31f [7];
  char cStack_318;
  char acStack_317 [7];
  long local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  string local_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  void *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  undefined7 local_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  void *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  void *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  void *local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  void *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  void *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  void *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined8 local_168;
  char *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar1 = DAT_043f1798;
  local_4c0 = 0x2a;
  uStack_4a9 = 0;
  acStack_4b7 = (char  [5])s_LandmarkItemComponent_038ebfc3._8_5_;
  uStack_4bf = s_LandmarkItemComponent_038ebfc3._0_7_;
  cStack_4b8 = s_LandmarkItemComponent_038ebfc3[7];
  uStack_4b2 = s_LandmarkItemComponent_038ebfc3._13_2_;
  local_4b0 = s_LandmarkItemComponent_038ebfc3[0xf];
  acStack_4af = (char  [5])s_LandmarkItemComponent_038ebfc3._16_5_;
  uStack_4aa = 0;
  lVar6 = tpidr_el0;
  plVar25 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  plVar25 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x208,8);
  plVar25[4] = 0;
  plVar38 = plVar25 + 1;
  *plVar38 = 0;
  *(undefined4 *)(plVar25 + 5) = 0x3f800000;
  plVar25[10] = 0;
  plVar25[6] = (long)FUN_022ce950;
  plVar25[7] = (long)FUN_022cea00;
  plVar25[0xc] = (long)"TryActionReservation";
  plVar25[0xd] = (long)FUN_01bb7f9c;
  plVar25[0x10] = (long)FUN_01bb8044;
  plVar25[0x11] = 0;
  plVar25[0x12] = (long)"EndAction";
  plVar25[0x13] = (long)FUN_01bb80b4;
  plVar25[0x14] = 0;
  plVar25[0x15] = (long)&DAT_038cdfda;
  plVar25[0x18] = (long)"IsHitDone";
  plVar25[0x19] = (long)&LAB_022ce92c;
  plVar25[0x1a] = 0;
  plVar25[0x1b] = (long)"GetBallOutBaseDistance";
  *plVar25 = (long)&PTR_FUN_0425bab0;
  *(undefined1 *)(plVar25 + 0xb) = 0;
  plVar25[0x40] = 0;
  plVar25[0x3e] = 0;
  *(undefined1 *)(plVar25 + 0x3f) = 0;
  plVar25[0x16] = (long)&LAB_01bb86d0;
  plVar25[0x17] = 0;
  plVar25[0x1c] = (long)FUN_01bb9954;
  plVar25[0x1d] = 0;
  plVar25[0x1e] = (long)"GetHitResultExp";
  plVar25[0x1f] = (long)FUN_01bba68c;
  plVar25[0x22] = (long)&LAB_01bbac14;
  plVar25[0x23] = 0;
  plVar25[0x24] = (long)"IsHidePokemon";
  plVar25[0x25] = (long)&LAB_01bbafb8;
  plVar25[0x20] = 0;
  plVar25[0x21] = (long)"GetCategory";
  plVar25[0x26] = 0;
  plVar25[0x27] = (long)"__haxe_export_GetTransform";
  plVar25[0x2a] = (long)"IsCreatedSpawnHidePokemon";
  plVar25[0x2b] = (long)&LAB_01bbb128;
  plVar25[0x2c] = 0;
  plVar25[0x2d] = (long)"SwapAiSpawnHidePokemon";
  plVar25[0x2e] = (long)FUN_01bb839c;
  plVar25[0x2f] = 0;
  plVar25[0x30] = (long)"IsEndSpawnHidePokemonMove";
  plVar25[0x31] = (long)&LAB_01bbe010;
  plVar25[0x28] = (long)&LAB_01bbafd8;
  plVar25[0x29] = 0;
  plVar25[0x34] = (long)FUN_01bbd20c;
  plVar25[0x35] = 0;
  plVar25[0x32] = 0;
  plVar25[0x33] = (long)"PostEventLandmarkBattle";
  plVar25[0x36] = (long)&DAT_0392da3c;
  plVar25[0x37] = 0;
  plVar25[0x38] = 0;
  plVar25[0x39] = (long)FUN_022ceb90;
  plVar25[0x3c] = (long)&LAB_022cf160;
  plVar25[0x3d] = 0;
  plVar25[2] = 0;
  plVar25[3] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  plVar25[0xe] = 0;
  plVar25[0xf] = (long)"ClearActionReservation";
  plVar25[0x3a] = (long)&LAB_022cee70;
  plVar25[0x3b] = (long)&LAB_022cf150;
  local_380 = (string)0x14;
  local_377 = 0x7473;
  local_37f[0] = s_class_cast_038dd4e7[0];
  local_37f[1] = s_class_cast_038dd4e7[1];
  local_37f[2] = s_class_cast_038dd4e7[2];
  local_37f[3] = s_class_cast_038dd4e7[3];
  local_37f[4] = s_class_cast_038dd4e7[4];
  local_37f[5] = s_class_cast_038dd4e7[5];
  local_37f[6] = s_class_cast_038dd4e7[6];
  local_37f[7] = s_class_cast_038dd4e7[7];
  local_360 = &LAB_022cf1ac;
  uVar42 = 0xffffffff;
  local_375 = 0;
  local_374 = 0;
  local_358 = 0xffffffff;
  local_370 = 0;
  local_368 = &LAB_022cf164;
  local_350 = 0x28;
  local_34f[0] = s_TryActionReservation_038b095d[0];
  local_34f[1] = s_TryActionReservation_038b095d[1];
  local_34f[2] = s_TryActionReservation_038b095d[2];
  local_34f[3] = s_TryActionReservation_038b095d[3];
  local_34f[4] = s_TryActionReservation_038b095d[4];
  local_34f[5] = s_TryActionReservation_038b095d[5];
  local_34f[6] = s_TryActionReservation_038b095d[6];
  local_328 = 0xffffffff;
  cStack_348 = s_TryActionReservation_038b095d[7];
  acStack_347[0] = s_TryActionReservation_038b095d[8];
  acStack_347[1] = s_TryActionReservation_038b095d[9];
  acStack_347[2] = s_TryActionReservation_038b095d[10];
  acStack_347[3] = s_TryActionReservation_038b095d[0xb];
  acStack_347[4] = s_TryActionReservation_038b095d[0xc];
  acStack_347[5] = s_TryActionReservation_038b095d[0xd];
  acStack_347[6] = s_TryActionReservation_038b095d[0xe];
  local_340 = 0x6e6f697461;
  local_338 = &LAB_022cf1f4;
  puStack_330 = &LAB_022cf23c;
  local_320 = 0x2c;
  local_31f[0] = s_ClearActionReservation_0399cd4a[0];
  local_31f[1] = s_ClearActionReservation_0399cd4a[1];
  local_31f[2] = s_ClearActionReservation_0399cd4a[2];
  local_31f[3] = s_ClearActionReservation_0399cd4a[3];
  local_31f[4] = s_ClearActionReservation_0399cd4a[4];
  local_31f[5] = s_ClearActionReservation_0399cd4a[5];
  local_31f[6] = s_ClearActionReservation_0399cd4a[6];
  local_2f8 = 0xffffffff;
  cStack_318 = s_ClearActionReservation_0399cd4a[7];
  acStack_317[0] = s_ClearActionReservation_0399cd4a[8];
  acStack_317[1] = s_ClearActionReservation_0399cd4a[9];
  acStack_317[2] = s_ClearActionReservation_0399cd4a[10];
  acStack_317[3] = s_ClearActionReservation_0399cd4a[0xb];
  acStack_317[4] = s_ClearActionReservation_0399cd4a[0xc];
  acStack_317[5] = s_ClearActionReservation_0399cd4a[0xd];
  acStack_317[6] = s_ClearActionReservation_0399cd4a[0xe];
  local_310 = 0x6e6f6974617672;
  local_308 = &LAB_022cf284;
  puStack_300 = &LAB_022cf2cc;
  pcVar39 = (char *)plVar25[0x12];
  sVar26 = strlen(pcVar39);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar26) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar26 < 0x17) {
    local_80 = SUB41((int)sVar26 << 1,0);
    pvVar40 = (void *)((ulong)&local_80 | 1);
    if (sVar26 != 0) goto LAB_022cc1a0;
  }
  else {
    uVar27 = sVar26 + 0x10 & 0xfffffffffffffff0;
    plVar31 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar31 = plVar1;
    }
    pvVar40 = (void *)(**(code **)(*plVar31 + 0x10))(plVar31,uVar27,8);
    local_80 = (string)((byte)uVar27 | 1);
    uStack_7f = (undefined7)(uVar27 >> 8);
    local_78 = (undefined1)sVar26;
    uStack_77 = (undefined7)(sVar26 >> 8);
    local_70 = pvVar40;
LAB_022cc1a0:
    memcpy(pvVar40,pcVar39,sVar26);
  }
  local_2e0 = local_70;
  uStack_2e7 = uStack_77;
  uStack_2e8 = local_78;
  local_2ef = uStack_7f;
  local_2f0 = local_80;
  *(undefined1 *)((long)pvVar40 + sVar26) = 0;
  local_
/* ... truncated for review bundle ... */
----- C PSEUDOCODE END -----
