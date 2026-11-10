/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026bbf1c; name: FUN_026bbf1c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_026bbf1c(long param_1,int *param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  char *pcVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  long *plVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  float fVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  long *local_2b0;
  undefined8 uStack_2a8;
  char local_2a0;
  long *local_298;
  long *local_290;
  long *local_288;
  long *local_280;
  long *local_278;
  long *local_270;
  long *local_268;
  long *local_260;
  long *local_258;
  long *local_250;
  long *local_248;
  undefined8 local_240;
  ulong local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  char local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  char local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  char local_170;
  undefined8 local_160;
  undefined8 local_158;
  long *local_150;
  undefined1 local_144 [4];
  long *local_140;
  long *local_138;
  long *local_130;
  code *local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_78;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    local_138 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_138);
  }
  lVar22 = (long)*param_2;
  if (*(long *)(param_1 + lVar22 * 0x10 + 0x88) == 0) {
    local_140 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_140);
    lVar22 = (long)*param_2;
  }
  puVar10 = PTR_DAT_04379fd0;
  puVar9 = PTR_DAT_04379fc8;
  puVar8 = PTR_DAT_043794d0;
  local_144 = (undefined1  [4])(&DAT_03a7dd14)[lVar22];
  lVar22 = *(long *)(param_1 + 0xe8);
  if (lVar22 == 0) {
LAB_026bbf88:
    plVar31 = (long *)0x0;
    if (local_138 == (long *)0x0) goto joined_r0x026be250;
LAB_026bbf90:
    if (local_140 == (long *)0x0) goto joined_r0x026be250;
    if (plVar31 == (long *)0x0) goto joined_r0x026be190;
    local_240 = (undefined8 *)0x0;
    local_238 = 0;
    FUN_00ac3fa4(&local_240,local_138 + 0x49);
    FUN_0099c748(&local_150,&local_240);
    puVar34 = local_240;
    if (local_240 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_240 + 1);
      do {
        iVar15 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        local_240[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_130 = (long *)*puVar34;
        FUN_02a44274(lVar22 + 0xd8,&local_130);
      }
    }
    if (local_150 == (long *)0x0) goto joined_r0x026be250;
    local_238 = local_238 & 0xffffffffffffff00;
    local_240 = (undefined8 *)0x0;
    local_190 = '\0';
    local_170 = '\0';
    local_220 = 0;
    local_1e0 = '\0';
    local_230 = 0;
    uStack_228 = 0;
    local_200 = (undefined8 *)0x0;
    uStack_1f8 = 0;
    local_1f0 = (undefined8 *)0x0;
    uStack_1e8 = 0;
    (**(code **)(*local_138 + 0x10))(&local_130);
    local_a8 = (long *)0x0;
    pcStack_a0 = (char *)0x0;
    FUN_00d07698(&local_a8,&local_130);
    plVar35 = local_130;
    if (local_130 != (long *)0x0) {
      plVar32 = local_130 + 1;
      do {
        iVar15 = (int)*plVar32 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar6) {
          *(int *)plVar32 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_2b0 = (long *)*plVar35;
        FUN_02a44274(lVar22 + 0xd8,&local_2b0);
      }
    }
    FUN_00d07998(&local_200,&local_a8);
    plVar35 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar32 = local_a8 + 1;
      do {
        iVar15 = (int)*plVar32 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar6) {
          *(int *)plVar32 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_a8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_130 = (long *)*plVar35;
        FUN_02a44274(lVar22 + 0xd8,&local_130);
      }
    }
    if (local_170 == '\0') {
      if ((char)param_2[0x18] != '\0') {
        local_158 = *(undefined8 *)(param_2 + 0x1e);
        local_160 = *(undefined8 *)(param_2 + 0x1c);
        local_170 = '\x01';
      }
    }
    else if ((char)param_2[0x18] == '\0') {
      local_170 = '\0';
    }
    else {
      local_158 = *(undefined8 *)(param_2 + 0x1e);
      local_160 = *(undefined8 *)(param_2 + 0x1c);
    }
    local_180 = *(undefined8 *)(param_2 + 0x14);
    uStack_178 = *(undefined8 *)(param_2 + 0x16);
    if (local_190 == '\0') {
      local_190 = '\x01';
    }
    local_240 = (undefined8 *)
                CONCAT17(*(undefined1 *)((long)param_2 + 7),
                         CONCAT16(*(undefined1 *)((long)param_2 + 6),
                                  CONCAT15((char)local_138[0x11d],(uint5)local_240)));
    local_238 = CONCAT71(local_238._1_7_,*(undefined1 *)((long)param_2 + 0x81));
    local_230 = *(undefined8 *)(param_2 + 0x24);
    uStack_228 = *(undefined8 *)(param_2 + 0x26);
    lVar22 = *(long *)PTR_DAT_0437b4f0;
    uVar43 = *(undefined4 *)(lVar22 + 0xd8);
    uVar40 = *(uint *)(lVar22 + 0xe8);
    auVar37._4_4_ = 0;
    auVar37._0_4_ = uVar40;
    uVar42 = 0;
    uVar39 = *(undefined4 *)(lVar22 + 0x1c8);
    uVar3 = *(undefined4 *)(lVar22 + 0x1c0);
    uVar36 = *(undefined4 *)(lVar22 + 0xd0);
    iVar15 = *(int *)(lVar22 + 0xd4);
    iVar4 = *(int *)(lVar22 + 0x1c4);
    uVar38 = *(undefined4 *)(lVar22 + 0xe0);
    iVar16 = *(int *)(lVar22 + 0xe4);
    local_130 = (long *)0x0;
    local_128 = (code *)0x0;
    FUN_01901218(&local_130,plVar31 + 0x18);
    if (local_130 == (long *)0x0) {
      local_2b0 = (long *)0x0;
LAB_026bc1d8:
      if (local_2b0 == (long *)0x0) goto LAB_026bd454;
LAB_026bc1e0:
      FUN_01a48464();
      if (*param_2 != 2) {
        FUN_01a45e78(local_2b0);
        plVar35 = local_2b0;
        switch(*param_2) {
        case 0:
          cVar5 = *(char *)((long)param_2 + 0x81);
          if ((char)local_2b0[0x6e] == '\0') {
            uVar18 = (ulong)*(uint *)(local_2b0 + 0x6c);
            if (cVar5 == '\0') goto LAB_026bccc4;
LAB_026bc260:
            FUN_01a3a980(uVar18,uVar39,plVar35,local_144);
          }
          else {
            uVar18 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),4) -
                                           (float)((ulong)local_2b0[0x68] >> 0x20),
                                           SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),0) -
                                           (float)local_2b0[0x68]));
            if (cVar5 != '\0') goto LAB_026bc260;
LAB_026bccc4:
            if (local_144 != (undefined1  [4])(int)plVar35[0x1baa]) {
              FUN_01a3a62c(uVar18,1.0 / (float)iVar4,uVar39,plVar35,local_144,uVar3);
            }
          }
          plVar35 = local_140;
          FUN_009c69bc(&local_248,local_2b0);
          FUN_026708f4(plVar35,&local_248);
          if (local_248 != (long *)0x0) {
            lVar22 = local_248[0xb];
            piVar2 = (int *)(lVar22 + 0xc);
            do {
              iVar15 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar22 + 0x18) = 0;
              (**(code **)(*local_248 + 0x20))();
            }
          }
          plVar35 = local_2b0;
          FUN_009c69bc(&local_250,local_140);
          FUN_01a4ad9c(plVar35,&local_250);
          if (local_250 == (long *)0x0) break;
          lVar22 = local_250[0xb];
          piVar2 = (int *)(lVar22 + 0xc);
          do {
            bVar12 = *piVar2 + -1 == 0;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            local_270 = local_250;
          } while (cVar5 != '\0');
          goto LAB_026bd41c;
        case 1:
          if ((*(byte *)(param_2 + 2) & 1) != 0) {
            uVar18 = FUN_01009820(-(float)param_2[0xc]);
            plVar35 = local_2b0;
            puVar10 = PTR_DAT_04379670;
            puVar9 = PTR_DAT_04379668;
            puVar8 = PTR_DAT_04379660;
            if (*(char *)((long)param_2 + 0x81) == '\0') {
              local_78 = (long *)CONCAT44(local_78._4_4_,5);
              local_130 = (long *)0x6a437d1436c47a27;
              local_128 = (code *)0x3901691;
              local_120 = 6;
              local_118 = (long *)0x0;
              local_a8 = (long *)0xa9684845485e93c9;
              pcStack_a0 = "first_climbing_start_cam_change_ease_func";
              local_98 = 0x29;
              local_90 = (long *)0x0;
              uVar36 = FUN_00ea3f80(&local_130,&local_a8);
              if (((*puVar8 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              lVar22 = *(long *)puVar9;
              *(long *)puVar10 = lVar22;
              uVar24 = *(ulong *)(lVar22 + 0x60);
              fVar41 = 0.0;
              if (uVar24 != 0) {
                uVar27 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
                uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
                uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar27 < 2) {
                  uVar28 = uVar24 - 1 & 0x6a437d1436c47a27;
                }
                else {
                  uVar28 = 0x6a437d1436c47a27;
                  if (uVar24 < 0x6a437d1436c47a28) {
                    uVar28 = 0;
                    if (uVar24 != 0) {
                      uVar28 = 0x6a437d1436c47a27 / uVar24;
                    }
                    uVar28 = 0x6a437d1436c47a27 - uVar28 * uVar24;
                  }
                }
                plVar32 = *(long **)(*(long *)(lVar22 + 0x58) + uVar28 * 8);
                if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)
                   ) {
                  if (uVar27 < 2) {
                    do {
                      if (plVar32[1] == 0x6a437d1436c47a27) {
                        if (plVar32[2] == 0x6a437d1436c47a27) goto LAB_026bcf20;
                      }
                      else if ((plVar32[1] & uVar24 - 1) != uVar28) break;
                      plVar32 = (long *)*plVar32;
                    } while (plVar32 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar27 = plVar32[1];
                      if (uVar27 == 0x6a437d1436c47a27) {
                        if (plVar32[2] == 0x6a437d1436c47a27) goto LAB_026bcf20;
                      }
                      else {
                        if (uVar24 <= uVar27) {
                          uVar7 = 0;
                          if (uVar24 != 0) {
                            uVar7 = uVar27 / uVar24;
                          }
                          uVar27 = uVar27 - uVar7 * uVar24;
                        }
                        if (uVar27 != uVar28) break;
                      }
                      plVar32 = (long *)*plVar32;
                    } while (plVar32 != (long *)0x0);
                  }
                }
              }
              goto LAB_026bd058;
            }
            local_130 = (long *)CONCAT44(local_130._4_4_,5);
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar22 = *(long *)puVar9;
            *(long *)puVar10 = lVar22;
            uVar24 = *(ulong *)(lVar22 + 0x60);
            auVar37 = ZEXT816(0);
            if (uVar24 != 0) {
              uVar27 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
              uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
              uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar27 < 2) {
                uVar28 = uVar24 - 1 & 0x6a437d1436c47a27;
              }
              else if (uVar24 < 0x6a437d1436c47a28) {
                uVar28 = 0;
                if (uVar24 != 0) {
                  uVar28 = 0x6a437d1436c47a27 / uVar24;
                }
                uVar28 = 0x6a437d1436c47a27 - uVar28 * uVar24;
              }
              else {
                uVar28 = 0x6a437d1436c47a27;
              }
              plVar32 = *(long **)(*(long *)(lVar22 + 0x58) + uVar28 * 8);
              if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0))
              {
                if (uVar27 < 2) {
                  do {
                    if (plVar32[1] == 0x6a437d1436c47a27) {
                      if (plVar32[2] == 0x6a437d1436c47a27) goto LAB_026bc92c;
                    }
                    else if ((plVar32[1] & uVar24 - 1) != uVar28) break;
                    plVar32 = (long *)*plVar32;
                  } while (plVar32 != (long *)0x0);
                }
                else {
                  do {
                    uVar27 = plVar32[1];
                    if (uVar27 == 0x6a437d1436c47a27) {
                      if (plVar32[2] == 0x6a437d1436c47a27) goto LAB_026bc92c;
                    }
                    else {
                      if (uVar24 <= uVar27) {
                        uVar7 = 0;
                        if (uVar24 != 0) {
                          uVar7 = uVar27 / uVar24;
                        }
                        uVar27 = uVar27 - uVar7 * uVar24;
                      }
                      if (uVar27 != uVar28) break;
                    }
                    plVar32 = (long *)*plVar32;
                  } while (plVar32 != (long *)0x0);
                }
              }
            }
            goto LAB_026bca64;
          }
          cVar5 = *(char *)((long)param_2 + 0x81);
          if ((char)local_2b0[0x6e] == '\0') {
            uVar18 = (ulong)*(uint *)(local_2b0 + 0x6c);
            if (cVar5 == '\0') goto LAB_026bd36c;
LAB_026bc2c0:
            auVar37._8_8_ = uVar42;
            pplVar20 = (long **)local_144;
            goto LAB_026bca6c;
          }
          uVar18 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),4) -
                                         (float)((ulong)local_2b0[0x68] >> 0x20),
                                         SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),0) -
                                         (float)local_2b0[0x68]));
          if (cVar5 != '\0') goto LAB_026bc2c0;
LAB_026bd36c:
          if (local_144 != (undefined1  [4])(int)plVar35[0x1baa]) {
            FUN_01a3a62c(uVar18,1.0 / (float)iVar16,uVar40,plVar35,local_144,uVar38);
          }
          goto LAB_026bd3a0;
        default:
          goto switchD_026bc244_caseD_2;
        case 3:
          cVar5 = *(char *)((long)param_2 + 0x81);
          if ((char)local_2b0[0x6e] == '\0') {
            uVar18 = (ulong)*(uint *)(local_2b0 + 0x6c);
            if (cVar5 == '\0') goto LAB_026bcaa0;
LAB_026bc28c:
            FUN_01a3a980(uVar18,uVar43,plVar35,local_144);
          }
          else {
            uVar18 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),4) -
                                           (float)((ulong)local_2b0[0x68] >> 0x20),
                                           SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),0) -
                                           (float)local_2b0[0x68]));
            if (cVar5 != '\0') goto LAB_026bc28c;
LAB_026bcaa0:
            if (local_144 != (undefined1  [4])(int)plVar35[0x1baa]) {
              FUN_01a3a62c(uVar18,1.0 / (float)iVar15,uVar43,plVar35,local_144,uVar36);
            }
          }
          plVar35 = local_140;
          FUN_009c69bc(&local_258,local_2b0);
          FUN_026708f4(plVar35,&local_258);
          if (local_258 != (long *)0x0) {
            lVar22 = local_258[0xb];
            piVar2 = (int *)(lVar22 + 0xc);
            do {
              iVar15 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar22 + 0x18) = 0;
              (**(code **)(*local_258 + 0x20))();
            }
          }
          local_130 = (long *)0x0;
          local_128 = (code *)0x0;
          FUN_00ac3fa4(&local_130,local_140 + 0x49);
          if (local_130 == (long *)0x0) {
            local_78 = (long *)0x0;
            plVar35 = local_2b0;
          }
          else {
            FUN_02645470(&local_78);
            plVar32 = local_130;
            plVar35 = local_2b0;
            if (local_130 != (long *)0x0) {
              plVar25 = local_130 + 1;
              do {
                iVar15 = (int)*plVar25 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar6) {
                  *(int *)plVar25 = iVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 == 0) {
                local_130[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar22 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar22;
                local_a8 = (long *)*plVar32;
                FUN_02a44274(lVar22 + 0xd8,&local_a8);
                plVar35 = local_2b0;
              }
            }
          }
          local_2b0 = plVar35;
          if (local_78 != (long *)0x0) {
            local_130 = (long *)0x0;
            local_128 = (code *)0x0;
            FUN_008c4b3c(&local_130,local_78 + 0x198);
            plVar32 = local_130;
            puVar9 = PTR_DAT_043794b8;
            puVar8 = PTR_DAT_043794b0;
            if ((local_130 != (long *)0x0) && (*(int *)((long)local_130 + 0xc) != 0)) {
              piVar2 = (int *)((long)local_130 + 0xc);
              iVar15 = *(int *)((long)local_130 + 0xc);
              do {
                plVar25 = (long *)plVar32[2];
                if (((*puVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar8), iVar16 != 0)) {
                  if (((*PTR_DAT_043794c0 & 1) == 0) &&
                     (iVar16 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar16 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
                      uVar42 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar42;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_043794c0);
                  }
                  *(undefined **)puVar9 = PTR_DAT_043794c8;
                  __cxa_guard_release(puVar8);
                }
                while( true ) {
                  if (plVar25 == (long *)0x0) goto LAB_026bcb58;
                  if (plVar25 == (long *)puVar9) break;
                  plVar25 = (long *)*plVar25;
                }
                iVar16 = *piVar2;
                if (iVar16 == iVar15) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar15 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar22 = plVar32[3];
                    local_260 = (long *)0x0;
                    if (lVar22 != 0) {
                      local_260 = (long *)(lVar22 + -0x50);
                    }
                    goto LAB_026bcb5c;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar15 = iVar16;
              } while (iVar16 != 0);
            }
LAB_026bcb58:
            local_260 = (long *)0x0;
LAB_026bcb5c:
            FUN_01a4ad9c(plVar35,&local_260);
            plVar35 = local_130;
            if (local_260 != (long *)0x0) {
              lVar22 = local_260[0xb];
              piVar2 = (int *)(lVar22 + 0xc);
              do {
                iVar15 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar22 + 0x18) = 0;
                (**(code **)(*local_260 + 0x20))();
                plVar35 = local_130;
              }
            }
            local_130 = plVar35;
            if (plVar35 != (long *)0x0) {
              plVar32 = plVar35 + 1;
              do {
                iVar15 = (int)*plVar32 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar6) {
                  *(int *)plVar32 = iVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 == 0) {
                plVar35[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar22 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar22;
                local_a8 = (long *)*plVar35;
                FUN_02a44274(lVar22 + 0xd8,&local_a8);
              }
            }
            if (local_78 != (long *)0x0) {
              lVar22 = local_78[0xb];
              piVar2 = (int *)(lVar22 + 0xc);
              do {
                bVar12 = *piVar2 + -1 == 0;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = *piVar2 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                local_270 = local_78;
              } while (cVar5 != '\0');
              goto LAB_026bd41c;
            }
          }
          break;
        case 4:
          cVar5 = *(char *)((long)param_2 + 0x81);
          if ((char)local_2b0[0x6e] == '\0') {
            uVar18 = (ulong)*(uint *)(local_2b0 + 0x6c);
            if (cVar5 == '\0') goto LAB_026bcd9c;
LAB_026bc2e4:
            FUN_01a3a980(uVar18,uVar39,plVar35,local_144);
          }
          else {
            uVar18 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),4) -
                                           (float)((ulong)local_2b0[0x68] >> 0x20),
                                           SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),0) -
                                           (float)local_2b0[0x68]));
            if (cVar5 != '\0') goto LAB_026bc2e4;
LAB_026bcd9c:
            if (local_144 != (undefined1  [4])(int)plVar35[0x1baa]) {
              FUN_01a3a62c(uVar18,1.0 / (float)iVar4,uVar39,plVar35,local_144,uVar3);
            }
          }
          plVar35 = local_140;
          FUN_009c69bc(&local_278,local_2b0);
          FUN_026708f4(plVar35,&local_278);
          if (local_278 != (long *)0x0) {
            lVar22 = local_278[0xb];
            piVar2 = (int *)(lVar22 + 0xc);
            do {
              iVar15 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar22 + 0x18) = 0;
              (**(code **)(*local_278 + 0x20))();
            }
          }
          plVar35 = local_2b0;
          FUN_009c69bc(&local_280,local_140);
          FUN_01a4ad9c(plVar35,&local_280);
          if (local_280 != (long *)0x0) {
            lVar22 = local_280[0xb];
            piVar2 = (int *)(lVar22 + 0xc);
            do {
              bVar12 = *piVar2 + -1 == 0;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              local_270 = local_280;
            } while (cVar5 != '\0');
            goto LAB_026bd41c;
          }
        }
        goto LAB_026bd420;
      }
switchD_026bc244_caseD_2:
      plVar35 = local_2b0;
      cVar5 = *(char *)((long)param_2 + 0x81);
      if ((char)local_2b0[0x6e] == '\0') {
        uVar18 = (ulong)*(uint *)(local_2b0 + 0x6c);
        if (cVar5 == '\0') goto LAB_026bc73c;
LAB_026bc208:
        FUN_01a3a980(uVar18,uVar39,plVar35,local_144);
      }
      else {
        uVar18 = FUN_01832b18(CONCAT44(SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),4) -
                                       (float)((ulong)local_2b0[0x68] >> 0x20),
                                       SUB164(*(undefined1 (*) [16])(local_2b0 + 0x6a),0) -
                                       (float)local_2b0[0x68]));
        if (cVar5 != '\0') goto LAB_026bc208;
LAB_026bc73c:
        if (local_144 != (undefined1  [4])(int)plVar35[0x1baa]) {
          FUN_01a3a62c(uVar18,1.0 / (float)iVar4,uVar39,plVar35,local_144,uVar3);
        }
      }
      plVar35 = local_140;
      FUN_009c69bc(&local_288,local_2b0);
      FUN_026708f4(plVar35,&local_288);
      if (local_288 != (long *)0x0) {
        lVar22 = local_288[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        do {
          iVar15 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_288 + 0x20))();
        }
      }
      plVar35 = local_2b0;
      FUN_009c69bc(&local_290,local_140);
      FUN_01a4ad9c(plVar35,&local_290);
      if (local_290 != (long *)0x0) {
        lVar22 = local_290[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        do {
          iVar15 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_290 + 0x20))();
        }
      }
      if (*(char *)((long)local_2b0 + 0x3ea) == '\0') goto LAB_026be170;
      *(undefined1 *)((long)local_2b0 + 0x3ea) = 0;
      *(undefined4 *)((long)local_2b0 + 0x3ec) = 0;
      *(undefined1 *)(local_2b0 + 0x7e) = 0;
      *(undefined4 *)((long)local_2b0 + 0x3f4) = 0;
      goto LAB_026bd438;
    }
    FUN_009b8630(&local_2b0);
    plVar35 = local_130;
    if (local_130 == (long *)0x0) goto LAB_026bc1d8;
    plVar32 = local_130 + 1;
    do {
      iVar17 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar17 != 0) goto LAB_026bc1d8;
    local_130[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar22 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar22;
    local_a8 = (long *)*plVar35;
    FUN_02a44274(lVar22 + 0xd8,&local_a8);
    if (local_2b0 != (long *)0x0) goto LAB_026bc1e0;
    goto LAB_026bd454;
  }
  if (*(int *)(lVar22 + 0xc) != 0) {
    piVar2 = (int *)(lVar22 + 0xc);
    iVar15 = *(int *)(lVar22 + 0xc);
    do {
      puVar34 = *(undefined8 **)(lVar22 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar9), iVar16 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar8), iVar16 != 0)) {
          uVar42 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar42;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar10 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar9);
      }
      if (puVar34 == (undefined8 *)0x0) goto LAB_026bf0a0;
      while (puVar34 != (undefined8 *)puVar10) {
        puVar34 = (undefined8 *)*puVar34;
        if (puVar34 == (undefined8 *)0x0) goto LAB_026bbf88;
      }
      iVar16 = *piVar2;
      if (iVar16 == iVar15) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          plVar31 = (long *)0x0;
          if (*(long *)(lVar22 + 0x18) != 0) {
            plVar31 = (long *)(*(long *)(lVar22 + 0x18) + -0x50);
          }
          goto joined_r0x026bc708;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar16;
    } while (iVar16 != 0);
    goto LAB_026bbf88;
  }
LAB_026bf0a0:
  plVar31 = (long *)0x0;
joined_r0x026bc708:
  if (local_138 != (long *)0x0) goto LAB_026bbf90;
  goto joined_r0x026be250;
LAB_026bcf20:
  plVar32 = (long *)plVar32[3];
  if (plVar32 != (long *)0x0) {
    plVar25 = plVar32 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar24 = plVar32[0x21];
    fVar41 = 0.0;
    if (uVar24 != 0) {
      uVar27 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
      uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar27 < 2) {
        uVar28 = uVar24 - 1 & 0xa59f9e3d7e8a4441;
      }
      else if (uVar24 < 0xa59f9e3d7e8a4442) {
        uVar28 = 0;
        if (uVar24 != 0) {
          uVar28 = 0xa59f9e3d7e8a4441 / uVar24;
        }
        uVar28 = 0xa59f9e3d7e8a4441 - uVar28 * uVar24;
      }
      else {
        uVar28 = 0xa59f9e3d7e8a4441;
      }
      plVar30 = *(long **)(plVar32[0x20] + uVar28 * 8);
      if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
        if (uVar27 < 2) {
          do {
            if (plVar30[1] == 0xa59f9e3d7e8a4441) {
              if (plVar30[2] == -0x5a6061c28175bbbf) goto LAB_026bd040;
            }
            else if ((plVar30[1] & uVar24 - 1) != uVar28) break;
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        else {
          do {
            uVar27 = plVar30[1];
            if (uVar27 == 0xa59f9e3d7e8a4441) {
              if (plVar30[2] == -0x5a6061c28175bbbf) goto LAB_026bd040;
            }
            else {
              if (uVar24 <= uVar27) {
                uVar7 = 0;
                if (uVar24 != 0) {
                  uVar7 = uVar27 / uVar24;
                }
                uVar27 = uVar27 - uVar7 * uVar24;
              }
              if (uVar27 != uVar28) break;
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
      }
    }
    goto LAB_026bd044;
  }
LAB_026bd058:
  bVar14 = *puVar8;
  goto joined_r0x026bd12c;
LAB_026bd040:
  fVar41 = *(float *)(plVar30 + 6);
LAB_026bd044:
  do {
    iVar15 = (int)*plVar25 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *(int *)plVar25 = iVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 != 0) goto LAB_026bd058;
  (**(code **)(*plVar32 + 0x10))();
  bVar14 = *puVar8;
joined_r0x026bd12c:
  if (((bVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar22 = *(long *)puVar9;
  *(long *)puVar10 = lVar22;
  uVar24 = *(ulong *)(lVar22 + 0x60);
  uVar38 = 0;
  if (uVar24 != 0) {
    uVar27 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
    uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar27 < 2) {
      uVar28 = uVar24 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar28 = 0x6a437d1436c47a27;
      if (uVar24 < 0x6a437d1436c47a28) {
        uVar28 = 0;
        if (uVar24 != 0) {
          uVar28 = 0x6a437d1436c47a27 / uVar24;
        }
        uVar28 = 0x6a437d1436c47a27 - uVar28 * uVar24;
      }
    }
    plVar32 = *(long **)(*(long *)(lVar22 + 0x58) + uVar28 * 8);
    if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
      if (uVar27 < 2) {
        do {
          if (plVar32[1] == 0x6a437d1436c47a27) {
            if (plVar32[2] == 0x6a437d1436c47a27) goto LAB_026bd1b0;
          }
          else if ((plVar32[1] & uVar24 - 1) != uVar28) break;
          plVar32 = (long *)*plVar32;
        } while (plVar32 != (long *)0x0);
      }
      else {
        do {
          uVar27 = plVar32[1];
          if (uVar27 == 0x6a437d1436c47a27) {
            if (plVar32[2] == 0x6a437d1436c47a27) goto LAB_026bd1b0;
          }
          else {
            if (uVar24 <= uVar27) {
              uVar7 = 0;
              if (uVar24 != 0) {
                uVar7 = uVar27 / uVar24;
              }
              uVar27 = uVar27 - uVar7 * uVar24;
            }
            if (uVar27 != uVar28) break;
          }
          plVar32 = (long *)*plVar32;
        } while (plVar32 != (long *)0x0);
      }
    }
  }
  goto LAB_026bd2e8;
LAB_026bd1b0:
  plVar32 = (long *)plVar32[3];
  if (plVar32 != (long *)0x0) {
    plVar25 = plVar32 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar24 = plVar32[0x21];
    uVar38 = 0;
    if (uVar24 != 0) {
      uVar27 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
      uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar27 < 2) {
        uVar28 = uVar24 - 1 & 0x56b211dc1fa80139;
      }
      else if (uVar24 < 0x56b211dc1fa8013a) {
        uVar28 = 0;
        if (uVar24 != 0) {
          uVar28 = 0x56b211dc1fa80139 / uVar24;
        }
        uVar28 = 0x56b211dc1fa80139 - uVar28 * uVar24;
      }
      else {
        uVar28 = 0x56b211dc1fa80139;
      }
      plVar30 = *(long **)(plVar32[0x20] + uVar28 * 8);
      if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
        if (uVar27 < 2) {
          do {
            if (plVar30[1] == 0x56b211dc1fa80139) {
              if (plVar30[2] == 0x56b211dc1fa80139) goto LAB_026bd2d0;
            }
            else if ((plVar30[1] & uVar24 - 1) != uVar28) break;
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        else {
          do {
            uVar27 = plVar30[1];
            if (uVar27 == 0x56b211dc1fa80139) {
              if (plVar30[2] == 0x56b211dc1fa80139) goto LAB_026bd2d0;
            }
            else {
              if (uVar24 <= uVar27) {
                uVar7 = 0;
                if (uVar24 != 0) {
                  uVar7 = uVar27 / uVar24;
                }
                uVar27 = uVar27 - uVar7 * uVar24;
              }
              if (uVar27 != uVar28) break;
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
      }
    }
    goto LAB_026bd2d4;
  }
  goto LAB_026bd2e8;
LAB_026bc92c:
  plVar32 = (long *)plVar32[3];
  if (plVar32 != (long *)0x0) {
    plVar25 = plVar32 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar24 = plVar32[0x21];
    auVar37 = ZEXT816(0);
    if (uVar24 != 0) {
      uVar27 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
      uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar27 < 2) {
        uVar28 = uVar24 - 1 & 0x56b211dc1fa80139;
      }
      else if (uVar24 < 0x56b211dc1fa8013a) {
        uVar28 = 0;
        if (uVar24 != 0) {
          uVar28 = 0x56b211dc1fa80139 / uVar24;
        }
        uVar28 = 0x56b211dc1fa80139 - uVar28 * uVar24;
      }
      else {
        uVar28 = 0x56b211dc1fa80139;
      }
      plVar30 = *(long **)(plVar32[0x20] + uVar28 * 8);
      if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
        if (uVar27 < 2) {
          do {
            if (plVar30[1] == 0x56b211dc1fa80139) {
              if (plVar30[2] == 0x56b211dc1fa80139) goto LAB_026bca4c;
            }
            else if ((plVar30[1] & uVar24 - 1) != uVar28) break;
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        else {
          do {
            uVar27 = plVar30[1];
            if (uVar27 == 0x56b211dc1fa80139) {
              if (plVar30[2] == 0x56b211dc1fa80139) goto LAB_026bca4c;
            }
            else {
              if (uVar24 <= uVar27) {
                uVar7 = 0;
                if (uVar24 != 0) {
                  uVar7 = uVar27 / uVar24;
                }
                uVar27 = uVar27 - uVar7 * uVar24;
              }
              if (uVar27 != uVar28) break;
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
      }
    }
    goto LAB_026bca50;
  }
  goto LAB_026bca64;
LAB_026bca4c:
  auVar37 = ZEXT416(*(uint *)(plVar30 + 6));
LAB_026bca50:
  do {
    iVar15 = (int)*plVar25 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *(int *)plVar25 = iVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 == 0) {
    uVar42 = auVar37._8_8_;
    (**(code **)(*plVar32 + 0x10))();
    auVar37._8_8_ = uVar42;
  }
LAB_026bca64:
  pplVar20 = &local_130;
LAB_026bca6c:
  FUN_01a3a980(uVar18,auVar37,plVar35,pplVar20);
  goto LAB_026bd3a0;
LAB_026bd2d0:
  uVar38 = (undefined4)plVar30[6];
LAB_026bd2d4:
  do {
    iVar15 = (int)*plVar25 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar6) {
      *(int *)plVar25 = iVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar32 + 0x10))();
  }
LAB_026bd2e8:
  if ((int)local_78 != (int)plVar35[0x1baa]) {
    FUN_01a3a62c(uVar18,1.0 / fVar41,uVar38,plVar35,&local_78,uVar36);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
LAB_026bd3a0:
  plVar35 = local_140;
  FUN_009c69bc(&local_268,local_2b0);
  FUN_026708f4(plVar35,&local_268);
  if (local_268 != (long *)0x0) {
    lVar22 = local_268[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_268 + 0x20))();
    }
  }
  plVar35 = local_2b0;
  FUN_009c69bc(&local_270,local_140);
  FUN_01a4ad9c(plVar35,&local_270);
  if (local_270 != (long *)0x0) {
    lVar22 = local_270[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      bVar12 = *piVar2 + -1 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_026bd41c:
    if (bVar12) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_270 + 0x20))();
    }
  }
LAB_026bd420:
  if (*(char *)((long)local_2b0 + 0x3ea) == '\x01') {
LAB_026be170:
    if (local_2b0 != (long *)0x0) goto LAB_026bd438;
  }
  else {
    *(undefined1 *)((long)local_2b0 + 0x3ea) = 1;
LAB_026bd438:
    lVar22 = local_2b0[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_2b0 + 0x20))();
    }
  }
LAB_026bd454:
  plVar35 = (long *)PTR_DAT_04379c38;
  puVar8 = PTR_DAT_04379c30;
  pbVar33 = PTR_DAT_04379c28;
  if (*(char *)(param_1 + 0x80) == '\0') {
    plVar32 = local_150 + 0x15a;
    FUN_01839c8c(&local_a8,plVar32);
    if (local_a8 == (long *)0x0) {
      uVar36 = 0;
      uVar38 = 0;
      uVar18 = 0;
    }
    else {
      FUN_01839c8c(&local_130,plVar32);
      if (local_130 == (long *)0x0) {
joined_r0x026be238:
        uVar38 = 0;
        uVar36 = 0;
        uVar18 = 0;
      }
      else {
        lVar22 = local_130[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        iVar15 = *(int *)((long)local_130 + 0x7c);
        do {
          iVar16 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_130 + 0x20))();
        }
        if ((iVar15 != 2) || (local_a8[0x1a] == 0)) goto joined_r0x026be238;
        pauVar1 = (undefined1 (*) [16])(local_a8[0x1a] + 0xc0);
        uVar36 = (undefined4)*(undefined8 *)*pauVar1;
        uVar38 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar37 = NEON_ext(*pauVar1,*pauVar1,8,1);
        uVar18 = (ulong)auVar37._0_4_;
      }
      if (local_a8 != (long *)0x0) {
        lVar22 = local_a8[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        do {
          iVar15 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_a8 + 0x20))();
        }
      }
    }
    local_210 = CONCAT44(uVar38,uVar36);
    uStack_208 = uVar18;
    uVar18 = (**(code **)(*local_150 + 0x1b0))();
    if (((uVar18 & 1) == 0) || (uVar18 = (**(code **)(*local_150 + 0x218))(), (uVar18 & 1) != 0)) {
      bVar14 = 0;
    }
    else {
      bVar14 = (**(code **)(*local_150 + 0x228))();
      bVar14 = bVar14 ^ 1;
    }
    local_240 = (undefined8 *)
                (CONCAT35(local_240._5_3_,CONCAT14(bVar14,(uint)local_240)) & 0xffffff01ffffffff);
    local_220 = CONCAT44(*(undefined4 *)(local_150[0xb8] + 0x68),(undefined4)local_220);
    local_130 = (long *)0x0;
    local_128 = (code *)0x0;
    FUN_01a2bf84(&local_130,local_150 + 0xb9);
    plVar32 = local_130;
    puVar10 = PTR_DAT_0437a3d0;
    puVar9 = PTR_DAT_0437a3c8;
    if (local_130 == (long *)0x0) {
LAB_026bda88:
      cVar5 = *(char *)((long)param_2 + 0x81);
      uVar18 = (ulong)local_240;
    }
    else {
      if (*(int *)((long)local_130 + 0xc) != 0) {
        piVar2 = (int *)((long)local_130 + 0xc);
        iVar15 = *(int *)((long)local_130 + 0xc);
        do {
          plVar35 = (long *)plVar32[2];
          if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar9), iVar16 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar16 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
                uVar42 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar42;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar35 == (long *)0x0) goto LAB_026bf29c;
            if (plVar35 == (long *)puVar10) break;
            plVar35 = (long *)*plVar35;
          }
          iVar16 = *piVar2;
          if (iVar16 == iVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar22 = plVar32[3];
              plVar32 = (long *)0x0;
              plVar35 = local_130;
              if (lVar22 != 0) {
                plVar32 = (long *)(lVar22 + -0x50);
              }
              goto joined_r0x026bed70;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar15 = iVar16;
        } while (iVar16 != 0);
      }
LAB_026bf29c:
      plVar32 = (long *)0x0;
      plVar35 = local_130;
joined_r0x026bed70:
      local_130 = plVar35;
      if (plVar35 != (long *)0x0) {
        plVar25 = plVar35 + 1;
        do {
          iVar15 = (int)*plVar25 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *(int *)plVar25 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          plVar35[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar22 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar22;
          local_a8 = (long *)*plVar35;
          FUN_02a44274(lVar22 + 0xd8,&local_a8);
        }
      }
      plVar35 = (long *)PTR_DAT_04379c38;
      pbVar33 = PTR_DAT_04379c28;
      if (plVar32 == (long *)0x0) goto LAB_026bda88;
      uVar36 = (**(code **)(*plVar32 + 0x160))(plVar32);
      local_220 = CONCAT44(local_220._4_4_,uVar36);
      lVar22 = plVar32[0xb];
      piVar2 = (int *)(lVar22 + 0xc);
      do {
        iVar15 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar35 = (long *)PTR_DAT_04379c38;
        pbVar33 = PTR_DAT_04379c28;
      } while (cVar5 != '\0');
      if (iVar15 + -1 != 0) goto LAB_026bda88;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar32 + 0x20))(plVar32);
      cVar5 = *(char *)((long)param_2 + 0x81);
      uVar18 = (ulong)local_240;
    }
    if (cVar5 == '\0') {
      local_240 = (undefined8 *)uVar18;
      if (((*pbVar33 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar22 = *(long *)puVar8;
      local_98 = 0x17;
      local_90 = (long *)0x0;
      local_b8 = 0;
      *plVar35 = lVar22;
      local_130 = (long *)0x0;
      local_a8 = (long *)0x44a2b4f60aa82472;
      pcStack_a0 = "PLAY_SE_HA_SYS_FUE_RIDE";
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = (long *)0x0;
      uStack_110 = 0;
      local_128 = (code *)0x0;
      local_120 = 0;
      FUN_02913338(lVar22,&local_a8,&local_130,0,0,0);
      pcVar11 = local_128;
      if (local_128 == (code *)0x0) {
        local_128 = (code *)0x0;
        plVar32 = local_90;
      }
      else {
        local_120 = 0;
        local_118 = (long *)0x0;
        local_130 = (long *)0x0;
        local_128 = (code *)0x0;
        (*pcVar11)(&uStack_110);
        plVar32 = local_90;
      }
      local_90 = plVar32;
      if (plVar32 != (long *)0x0) goto LAB_026beec0;
      goto LAB_026bd918;
    }
    local_240._4_4_ = (undefined4)(uVar18 >> 0x20);
    local_240._0_3_ = (undefined3)uVar18;
    local_240._0_4_ = CONCAT13(*(undefined1 *)((long)param_2 + 5),(undefined3)local_240);
  }
  else {
    if (*(long *)(param_1 + (long)*(int *)(param_1 + 0x84) * 0x10 + 0x88) == 0) {
      local_78 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_78);
    }
    local_130 = (long *)0x0;
    local_128 = (code *)0x0;
    FUN_00ac3fa4(&local_130,local_78 + 0x49);
    FUN_0099c748(&local_2b0,&local_130);
    plVar32 = local_130;
    if (local_130 != (long *)0x0) {
      plVar25 = local_130 + 1;
      do {
        iVar15 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_a8 = (long *)*plVar32;
        FUN_02a44274(lVar22 + 0xd8,&local_a8);
      }
    }
    if (local_2b0 != (long *)0x0) {
      plVar32 = local_2b0 + 0x15a;
      FUN_01839c8c(&local_a8,plVar32);
      if (local_a8 == (long *)0x0) {
        uVar36 = 0;
        uVar38 = 0;
        uVar18 = 0;
      }
      else {
        FUN_01839c8c(&local_130,plVar32);
        if (local_130 == (long *)0x0) {
joined_r0x026be210:
          uVar38 = 0;
          uVar36 = 0;
          uVar18 = 0;
        }
        else {
          lVar22 = local_130[0xb];
          piVar2 = (int *)(lVar22 + 0xc);
          iVar15 = *(int *)((long)local_130 + 0x7c);
          do {
            iVar16 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar22 + 0x18) = 0;
            (**(code **)(*local_130 + 0x20))();
          }
          if ((iVar15 != 2) || (local_a8[0x1a] == 0)) goto joined_r0x026be210;
          pauVar1 = (undefined1 (*) [16])(local_a8[0x1a] + 0xc0);
          uVar36 = (undefined4)*(undefined8 *)*pauVar1;
          uVar38 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          auVar37 = NEON_ext(*pauVar1,*pauVar1,8,1);
          uVar18 = (ulong)auVar37._0_4_;
        }
        if (local_a8 != (long *)0x0) {
          lVar22 = local_a8[0xb];
          piVar2 = (int *)(lVar22 + 0xc);
          do {
            iVar15 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar22 + 0x18) = 0;
            (**(code **)(*local_a8 + 0x20))();
          }
        }
      }
      local_210 = CONCAT44(uVar38,uVar36);
      uStack_208 = uVar18;
      uVar13 = (**(code **)(*local_2b0 + 0x1b0))();
      local_240 = (undefined8 *)
                  (CONCAT35(local_240._5_3_,CONCAT14(uVar13,(uint)local_240)) & 0xffffff01ffffffff);
      local_130 = (long *)0x0;
      local_128 = (code *)0x0;
      local_220 = CONCAT44(*(undefined4 *)(local_2b0[0xb8] + 0x68),(undefined4)local_220);
      FUN_01a2bf84(&local_130,local_2b0 + 0xb9);
      plVar32 = local_130;
      puVar10 = PTR_DAT_0437a3d0;
      puVar9 = PTR_DAT_0437a3c8;
      if (local_130 != (long *)0x0) {
        if (*(int *)((long)local_130 + 0xc) != 0) {
          piVar2 = (int *)((long)local_130 + 0xc);
          iVar15 = *(int *)((long)local_130 + 0xc);
          do {
            plVar35 = (long *)plVar32[2];
            if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar9), iVar16 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar16 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
                  uVar42 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar42;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar10 = PTR_DAT_043795e0;
              __cxa_guard_release(puVar9);
            }
            while( true ) {
              if (plVar35 == (long *)0x0) goto LAB_026bf28c;
              if (plVar35 == (long *)puVar10) break;
              plVar35 = (long *)*plVar35;
            }
            iVar16 = *piVar2;
            if (iVar16 == iVar15) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar22 = plVar32[3];
                plVar32 = (long *)0x0;
                plVar35 = local_130;
                if (lVar22 != 0) {
                  plVar32 = (long *)(lVar22 + -0x50);
                }
                goto joined_r0x026beb74;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar15 = iVar16;
          } while (iVar16 != 0);
        }
LAB_026bf28c:
        plVar32 = (long *)0x0;
        plVar35 = local_130;
joined_r0x026beb74:
        local_130 = plVar35;
        if (plVar35 != (long *)0x0) {
          plVar25 = plVar35 + 1;
          do {
            iVar15 = (int)*plVar25 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *(int *)plVar25 = iVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 == 0) {
            plVar35[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar22 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar22;
            local_a8 = (long *)*plVar35;
            FUN_02a44274(lVar22 + 0xd8,&local_a8);
          }
        }
        pbVar33 = PTR_DAT_04379c28;
        plVar35 = (long *)PTR_DAT_04379c38;
        if (plVar32 != (long *)0x0) {
          uVar36 = (**(code **)(*plVar32 + 0x160))(plVar32);
          local_220 = CONCAT44(local_220._4_4_,uVar36);
          lVar22 = plVar32[0xb];
          piVar2 = (int *)(lVar22 + 0xc);
          do {
            iVar15 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            plVar35 = (long *)PTR_DAT_04379c38;
            pbVar33 = PTR_DAT_04379c28;
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar22 + 0x18) = 0;
            (**(code **)(*plVar32 + 0x20))(plVar32);
          }
        }
      }
      if (local_2b0 != (long *)0x0) {
        lVar22 = local_2b0[0xb];
        piVar2 = (int *)(lVar22 + 0xc);
        do {
          iVar15 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_2b0 + 0x20))();
        }
      }
    }
    uVar18 = (**(code **)(*local_78 + 0x140))();
    if ((uVar18 & 1) == 0) goto LAB_026bf0b8;
    local_240 = (undefined8 *)CONCAT71(local_240._1_7_,1);
    (**(code **)(*local_78 + 0x10))(&local_130);
    local_a8 = (long *)0x0;
    pcStack_a0 = (char *)0x0;
    FUN_019926fc(&local_a8,&local_130);
    plVar32 = local_130;
    if (local_130 != (long *)0x0) {
      plVar25 = local_130 + 1;
      do {
        iVar15 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_2b0 = (long *)*plVar32;
        FUN_02a44274(lVar22 + 0xd8,&local_2b0);
      }
    }
    FUN_0260845c(&local_1f0,&local_a8);
    plVar32 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar25 = local_a8 + 1;
      do {
        iVar15 = (int)*plVar25 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 == 0) {
        local_a8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_130 = (long *)*plVar32;
        FUN_02a44274(lVar22 + 0xd8,&local_130);
      }
    }
    if (*(char *)((long)param_2 + 7) == '\0' && *(char *)((long)param_2 + 0x81) == '\0') {
      FUN_01460a04(*param_2);
    }
    FUN_009c69bc(&local_298,local_78);
    if (local_298 == (long *)0x0) {
LAB_026bd8f4:
      if (local_78 == (long *)0x0) goto LAB_026bd918;
LAB_026bd8fc:
      lVar22 = local_78[0xb];
      piVar2 = (int *)(lVar22 + 0xc);
      do {
        iVar15 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 != 0) goto LAB_026bd918;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      plVar32 = local_78;
LAB_026beec0:
      (**(code **)(*plVar32 + 0x20))();
    }
    else {
      (**(code **)(*local_298 + 0x10))(&local_130);
      local_a8 = (long *)0x0;
      pcStack_a0 = (char *)0x0;
      FUN_0087f944(&local_a8,&local_130);
      plVar32 = local_130;
      if (local_130 != (long *)0x0) {
        plVar25 = local_130 + 1;
        do {
          iVar15 = (int)*plVar25 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *(int *)plVar25 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar22 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar22;
          local_2b0 = (long *)*plVar32;
          FUN_02a44274(lVar22 + 0xd8,&local_2b0);
        }
      }
      if (local_a8 == (long *)0x0) {
        lVar22 = 0;
      }
      else {
        lVar22 = *local_a8;
      }
      FUN_018fcbb8(plVar31,lVar22);
      plVar32 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar25 = local_a8 + 1;
        do {
          iVar15 = (int)*plVar25 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *(int *)plVar25 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          local_a8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar22 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar22;
          local_130 = (long *)*plVar32;
          FUN_02a44274(lVar22 + 0xd8,&local_130);
        }
      }
      if (local_298 == (long *)0x0) goto LAB_026bd8f4;
      lVar22 = local_298[0xb];
      piVar2 = (int *)(lVar22 + 0xc);
      do {
        iVar15 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 != 0) goto LAB_026bd8f4;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_298 + 0x20))();
      if (local_78 != (long *)0x0) goto LAB_026bd8fc;
    }
LAB_026bd918:
    local_240._0_4_ = CONCAT13(*(undefined1 *)((long)param_2 + 5),(undefined3)local_240);
    if (*(char *)((long)param_2 + 0x81) == '\0') {
      if (((*PTR_DAT_043796b8 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043796b8);
      }
      lVar22 = *(long *)PTR_DAT_043796c0;
      *(long *)PTR_DAT_043796c8 = lVar22;
      iVar15 = *(int *)(lVar22 + 0x438);
      if (0 < iVar15) {
        plVar25 = *(long **)(lVar22 + 0x488);
        lVar29 = 0;
        lVar21 = 0;
        plVar32 = plVar25;
        do {
          if (*plVar32 == -0x6c84795a92c9d34a) {
            if ((-1 < (int)lVar21) && ((int)lVar21 < iVar15)) {
              if ((plVar25[(lVar29 >> 0x20) * 0xe + 9] != 0) &&
                 (*(char *)(plVar25[(lVar29 >> 0x20) * 0xe + 9] + 0x1e1) != '\0')) {
                FUN_00da32a8(0x3f800000,lVar22 + 0x3c0,plVar25 + (lVar29 >> 0x20) * 0xe,lVar21,
                             lVar22 + 0x428,0);
              }
            }
            break;
          }
          lVar21 = lVar21 + 1;
          lVar29 = lVar29 + 0x100000000;
          plVar32 = plVar32 + 0xe;
        } while (iVar15 != lVar21);
      }
    }
  }
  puVar34 = local_240;
  if (*param_2 == 2) {
    local_240._0_5_ = (uint5)(uint)local_240;
  }
  else if (*param_2 == 1) {
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      local_240._0_3_ = CONCAT12((char)param_2[4],(undefined2)local_240);
      puVar26 = local_240;
      local_240._1_1_ = SUB81(puVar34,1);
      bVar6 = local_240._1_1_ != '\0';
      local_240 = puVar26;
      if (bVar6 || (char)param_2[4] != '\0') goto LAB_026bdae0;
    }
    else {
      local_240._0_2_ = CONCAT11(1,(undefined1)local_240);
LAB_026bdae0:
      local_220 = local_220 & 0xffffffff;
    }
    local_1d0 = *(undefined8 *)(param_2 + 4);
    uStack_1c8 = *(undefined8 *)(param_2 + 6);
    local_1c0 = *(undefined8 *)(param_2 + 8);
    uStack_1b8 = *(undefined8 *)(param_2 + 10);
    local_1b0 = *(undefined8 *)(param_2 + 0xc);
    uStack_1a8 = *(undefined8 *)(param_2 + 0xe);
    local_1a0 = *(undefined8 *)(param_2 + 0x10);
    uStack_198 = *(undefined8 *)(param_2 + 0x12);
    if (local_1e0 == '\0') {
      local_1e0 = '\x01';
    }
  }
  local_2a0 = 0;
  local_2b0 = (long *)0x0;
  uStack_2a8 = 0;
  (**(code **)(*local_140 + 0x10))(&local_130);
  local_a8 = (long *)0x0;
  pcStack_a0 = (char *)0x0;
  FUN_019926fc(&local_a8,&local_130);
  plVar32 = local_130;
  if (local_130 != (long *)0x0) {
    plVar25 = local_130 + 1;
    do {
      iVar15 = (int)*plVar25 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_78 = (long *)*plVar32;
      FUN_02a44274(lVar22 + 0xd8,&local_78);
    }
  }
  FUN_0260845c(&local_2b0,&local_a8);
  plVar32 = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar25 = local_a8 + 1;
    do {
      iVar15 = (int)*plVar25 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_130 = (long *)*plVar32;
      FUN_02a44274(lVar22 + 0xd8,&local_130);
    }
  }
  local_2a0 = *(char *)((long)param_2 + 0x81);
  uVar18 = FUN_01aefa5c(local_138,&local_2b0);
  if ((uVar18 & 1) == 0) goto LAB_026bf0b8;
  if (local_220._4_4_ == 3) {
    local_220 = CONCAT44(2,(undefined4)local_220);
  }
  uVar18 = (**(code **)(*local_140 + 0x138))(local_140,&local_240);
  if ((uVar18 & 1) == 0) goto LAB_026bf0b8;
  (**(code **)(*local_140 + 0xf0))(local_140,*(undefined1 *)((long)param_2 + 0x81));
  if (local_1f0 == (undefined8 *)0x0) {
    local_130 = (long *)0x0;
LAB_026bdc70:
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_026bdc78;
LAB_026be6ac:
    FUN_00959d38(&local_130);
    plVar32 = local_130;
    if (local_130 == (long *)0x0) goto LAB_026bdc7c;
    switch(*param_2) {
    case 0:
      if ((int)local_130[0xe] != 0) {
        lVar21 = local_130[0x21];
        uVar18 = *(ulong *)(lVar21 + 0xa8);
        lVar22 = *(long *)(lVar21 + 0x70);
        if (*(long *)(lVar21 + 0x78) != lVar22) {
          uVar24 = *(long *)(lVar21 + 0xb0) + uVar18;
          puVar34 = (undefined8 *)(*(long *)(lVar22 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48)
          ;
          puVar26 = (undefined8 *)(*(long *)(lVar22 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48)
          ;
          if (puVar26 != puVar34) {
            plVar35 = (long *)(lVar22 + (uVar18 / 0x38) * 8);
            do {
              puVar34[7] = 0;
              puVar34[8] = 0;
              puVar34[5] = 0;
              puVar34[6] = 0;
              puVar34[3] = 0;
              puVar34[4] = 0;
              puVar34[1] = 0;
              puVar34[2] = 0;
              puVar23 = puVar34 + 9;
              *puVar34 = 0;
              if ((long)puVar23 - *plVar35 == 0xfc0) {
                plVar35 = plVar35 + 1;
                puVar23 = (undefined8 *)*plVar35;
              }
              puVar34 = puVar23;
            } while (puVar26 != puVar23);
          }
        }
        FUN_02604e3c(local_130,1);
        *(undefined4 *)(plVar32 + 0x2f) = 0;
        plVar32[0x30] = plVar32[0x30] & 0xfffffffffffffff8;
      }
      *(undefined4 *)(plVar32 + 0xe) = 0;
      goto LAB_026bf02c;
    case 1:
      if ((int)local_130[0xe] != 1) {
        lVar21 = local_130[0x21];
        uVar18 = *(ulong *)(lVar21 + 0xa8);
        lVar22 = *(long *)(lVar21 + 0x70);
        if (*(long *)(lVar21 + 0x78) != lVar22) {
          uVar24 = *(long *)(lVar21 + 0xb0) + uVar18;
          puVar34 = (undefined8 *)(*(long *)(lVar22 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48)
          ;
          puVar26 = (undefined8 *)(*(long *)(lVar22 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48)
          ;
          if (puVar26 != puVar34) {
            plVar35 = (long *)(lVar22 + (uVar18 / 0x38) * 8);
            do {
              puVar34[7] = 0;
              puVar34[8] = 0;
              puVar34[5] = 0;
              puVar34[6] = 0;
              puVar34[3] = 0;
              puVar34[4] = 0;
              puVar34[1] = 0;
              puVar34[2] = 0;
              puVar23 = puVar34 + 9;
              *puVar34 = 0;
              if ((long)puVar23 - *plVar35 == 0xfc0) {
                plVar35 = plVar35 + 1;
                puVar23 = (undefined8 *)*plVar35;
              }
              puVar34 = puVar23;
            } while (puVar26 != puVar23);
          }
        }
        FUN_02604e3c(local_130,1);
        *(undefined4 *)(plVar32 + 0x2f) = 0;
        plVar32[0x30] = plVar32[0x30] & 0xfffffffffffffff8;
      }
      uVar36 = 1;
      break;
    case 2:
      if ((int)local_130[0xe] != 2) {
        lVar21 = local_130[0x21];
        uVar18 = *(ulong *)(lVar21 + 0xa8);
        lVar22 = *(long *)(lVar21 + 0x70);
        if (*(long *)(lVar21 + 0x78) != lVar22) {
          uVar24 = *(long *)(lVar21 + 0xb0) + uVar18;
          puVar34 = (undefined8 *)(*(long *)(lVar22 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48)
          ;
          puVar26 = (undefined8 *)(*(long *)(lVar22 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48)
          ;
          if (puVar26 != puVar34) {
            plVar35 = (long *)(lVar22 + (uVar18 / 0x38) * 8);
            do {
              puVar34[7] = 0;
              puVar34[8] = 0;
              puVar34[5] = 0;
              puVar34[6] = 0;
              puVar34[3] = 0;
              puVar34[4] = 0;
              puVar34[1] = 0;
              puVar34[2] = 0;
              puVar23 = puVar34 + 9;
              *puVar34 = 0;
              if ((long)puVar23 - *plVar35 == 0xfc0) {
                plVar35 = plVar35 + 1;
                puVar23 = (undefined8 *)*plVar35;
              }
              puVar34 = puVar23;
            } while (puVar26 != puVar23);
          }
        }
        FUN_02604e3c(local_130,1);
        *(undefined4 *)(plVar32 + 0x2f) = 0;
        plVar32[0x30] = plVar32[0x30] & 0xfffffffffffffff8;
      }
      uVar36 = 2;
      break;
    case 3:
      if ((int)local_130[0xe] != 4) {
        lVar21 = local_130[0x21];
        uVar18 = *(ulong *)(lVar21 + 0xa8);
        lVar22 = *(long *)(lVar21 + 0x70);
        if (*(long *)(lVar21 + 0x78) != lVar22) {
          uVar24 = *(long *)(lVar21 + 0xb0) + uVar18;
          puVar34 = (undefined8 *)(*(long *)(lVar22 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48)
          ;
          puVar26 = (undefined8 *)(*(long *)(lVar22 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48)
          ;
          if (puVar26 != puVar34) {
            plVar35 = (long *)(lVar22 + (uVar18 / 0x38) * 8);
            do {
              puVar34[7] = 0;
              puVar34[8] = 0;
              puVar34[5] = 0;
              puVar34[6] = 0;
              puVar34[3] = 0;
              puVar34[4] = 0;
              puVar34[1] = 0;
              puVar34[2] = 0;
              puVar23 = puVar34 + 9;
              *puVar34 = 0;
              if ((long)puVar23 - *plVar35 == 0xfc0) {
                plVar35 = plVar35 + 1;
                puVar23 = (undefined8 *)*plVar35;
              }
              puVar34 = puVar23;
            } while (puVar26 != puVar23);
          }
        }
        FUN_02604e3c(local_130,1);
        *(undefined4 *)(plVar32 + 0x2f) = 0;
        plVar32[0x30] = plVar32[0x30] & 0xfffffffffffffff8;
      }
      uVar36 = 4;
      break;
    case 4:
      if ((int)local_130[0xe] != 3) {
        lVar21 = local_130[0x21];
        uVar18 = *(ulong *)(lVar21 + 0xa8);
        lVar22 = *(long *)(lVar21 + 0x70);
        if (*(long *)(lVar21 + 0x78) != lVar22) {
          uVar24 = *(long *)(lVar21 + 0xb0) + uVar18;
          puVar34 = (undefined8 *)(*(long *)(lVar22 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48)
          ;
          puVar26 = (undefined8 *)(*(long *)(lVar22 + (uVar24 / 0x38) * 8) + (uVar24 % 0x38) * 0x48)
          ;
          if (puVar26 != puVar34) {
            plVar35 = (long *)(lVar22 + (uVar18 / 0x38) * 8);
            do {
              puVar34[7] = 0;
              puVar34[8] = 0;
              puVar34[5] = 0;
              puVar34[6] = 0;
              puVar34[3] = 0;
              puVar34[4] = 0;
              puVar34[1] = 0;
              puVar34[2] = 0;
              puVar23 = puVar34 + 9;
              *puVar34 = 0;
              if ((long)puVar23 - *plVar35 == 0xfc0) {
                plVar35 = plVar35 + 1;
                puVar23 = (undefined8 *)*plVar35;
              }
              puVar34 = puVar23;
            } while (puVar26 != puVar23);
          }
        }
        FUN_02604e3c(local_130,1);
        *(undefined4 *)(plVar32 + 0x2f) = 0;
        plVar32[0x30] = plVar32[0x30] & 0xfffffffffffffff8;
      }
      uVar36 = 3;
      break;
    default:
      goto switchD_026be6dc_default;
    }
    *(undefined4 *)(plVar32 + 0xe) = uVar36;
LAB_026bf02c:
    plVar35 = (long *)PTR_DAT_04379c38;
    pbVar33 = PTR_DAT_04379c28;
    if (local_130 != (long *)0x0) {
switchD_026be6dc_default:
      lVar22 = local_130[0xb];
      piVar2 = (int *)(lVar22 + 0xc);
      do {
        iVar15 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar35 = (long *)PTR_DAT_04379c38;
        pbVar33 = PTR_DAT_04379c28;
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))(local_130);
      }
    }
  }
  else {
    FUN_00959eac(&local_130);
    if ((local_130 == (long *)0x0) ||
       ((**(code **)(*local_130 + 0x148))(), local_130 == (long *)0x0)) goto LAB_026bdc70;
    lVar22 = local_130[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 != 0) goto LAB_026bdc70;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*local_130 + 0x20))();
    if (*(long *)(param_1 + 0xf8) != 0) goto LAB_026be6ac;
LAB_026bdc78:
    local_130 = (long *)0x0;
  }
LAB_026bdc7c:
  *(int *)(param_1 + 0x84) = *param_2;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379690), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar22 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar22;
  plVar32 = *(long **)(*(long *)(lVar22 + 0x50) + 0x30);
  if (plVar32 != (long *)0x0) {
    lVar22 = plVar32[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_026bf0b8;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar42 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar42;
    }
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  cVar5 = (&DAT_03a7dd03)[*param_2];
  lVar22 = FUN_01467b34(plVar32[0x99],"View_Top");
  if (cVar5 == '\0') {
    if (lVar22 == 0) goto LAB_026bf0b8;
    lVar22 = *(long *)(lVar22 + 0x3f30);
    if (lVar22 != 0) {
      *(ulong *)(lVar22 + 0x28) = *(ulong *)(lVar22 + 0x28) | 4;
    }
    iVar15 = *param_2;
    lVar22 = FUN_01467b34(plVar32[0x99],"View_Top");
    if (lVar22 == 0) goto LAB_026bf0b8;
    if (*(long *)(lVar22 + 0x3f30) != 0) {
      FUN_0145fea4(*(long *)(lVar22 + 0x3f30),iVar15,0,0);
    }
    uVar42 = 3;
  }
  else {
    if (lVar22 == 0) goto LAB_026bf0b8;
    lVar22 = *(long *)(lVar22 + 0x3f30);
    if (lVar22 != 0) {
      *(ulong *)(lVar22 + 0x28) = *(ulong *)(lVar22 + 0x28) & 0xfffffffffffffffb;
    }
    iVar15 = *param_2;
    lVar22 = FUN_01467b34(plVar32[0x99],"View_Top");
    if (lVar22 == 0) goto LAB_026bf0b8;
    if (*(long *)(lVar22 + 0x3f30) == 0) {
      uVar42 = 2;
    }
    else {
      FUN_0145fb70(*(long *)(lVar22 + 0x3f30),iVar15,0,0);
      uVar42 = 2;
    }
  }
  FUN_026bf32c(uVar42);
  lVar22 = FUN_01467b34(plVar32[0x99],"View_Top");
  if (lVar22 == 0) {
LAB_026bf0b8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar22 = *(long *)(lVar22 + 0x3f30);
  if (lVar22 != 0) {
    *(ulong *)(lVar22 + 0x28) = *(ulong *)(lVar22 + 0x28) | 8;
  }
  lVar22 = FUN_01467f18(plVar32[0x99],"ItemChangeView");
  if (lVar22 == 0) goto LAB_026bf0b8;
  uVar18 = *(ulong *)(lVar22 + 0x708) & 0xfffffffffffffffe;
  if (*param_2 != 2) {
    uVar18 = *(ulong *)(lVar22 + 0x708) | 1;
  }
  *(ulong *)(lVar22 + 0x708) = uVar18;
  FUN_0257a184();
  FUN_0257a418(lVar22);
  if (*(int *)(lVar22 + 0x5ac) == 0) {
    FUN_02577d38(lVar22);
  }
  else {
    FUN_02578a10(lVar22);
  }
  uVar42 = FUN_02579328(lVar22);
  FUN_026bf4e0(uVar42,*param_2,param_2[2]);
  if (local_2a0 == '\0') {
    switch(*param_2) {
    case 0:
      pcVar19 = "ride_run";
      break;
    case 1:
      pcVar19 = "ride_crime";
      break;
    case 2:
      pcVar19 = "ride_swim";
      break;
    case 3:
      pcVar19 = "ride_fly";
      break;
    case 4:
      pcVar19 = "ride_dig";
      break;
    default:
      goto switchD_026bde7c_default;
    }
    FUN_00db0d34(pcVar19,1);
  }
switchD_026bde7c_default:
  if (((*pbVar33 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar22 = *(long *)puVar8;
  *plVar35 = lVar22;
  if (lVar22 != 0) {
    lVar21 = (long)*param_2 * 0x18;
    local_c8 = 0;
    uStack_c0 = 0;
    local_130 = (long *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_98 = *(undefined8 *)(&DAT_04268bf8 + lVar21);
    local_a8 = *(long **)(&DAT_04268be8 + lVar21);
    pcStack_a0 = (&PTR_s_SET_STATE_RDE_ODOSHISHI_04268bf0)[(long)*param_2 * 3];
    local_b8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = (long *)0x0;
    uStack_110 = 0;
    local_128 = (code *)0x0;
    local_120 = 0;
    local_90 = (long *)0x0;
    FUN_02913338(lVar22,&local_a8,&local_130,0,0,0);
    pcVar11 = local_128;
    if (local_128 == (code *)0x0) {
      local_128 = (code *)0x0;
    }
    else {
      local_120 = 0;
      local_118 = (long *)0x0;
      local_130 = (long *)0x0;
      local_128 = (code *)0x0;
      (*pcVar11)(&uStack_110);
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
  }
  lVar22 = plVar32[0xb];
  piVar2 = (int *)(lVar22 + 0xc);
  do {
    iVar15 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar35 = local_2b0;
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*plVar32 + 0x20))(plVar32);
    plVar35 = local_2b0;
  }
  local_2b0 = plVar35;
  if (plVar35 != (long *)0x0) {
    plVar32 = plVar35 + 1;
    do {
      iVar15 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 == 0) {
      plVar35[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_130 = (long *)*plVar35;
      FUN_02a44274(lVar22 + 0xd8,&local_130);
    }
  }
  puVar34 = local_1f0;
  local_170 = 0;
  if (local_190 != '\0') {
    local_190 = '\0';
  }
  local_1e0 = 0;
  if (local_1f0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_1f0 + 1);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      local_1f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_130 = (long *)*puVar34;
      FUN_02a44274(lVar22 + 0xd8,&local_130);
    }
  }
  puVar34 = local_200;
  if (local_200 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_200 + 1);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      local_200[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_130 = (long *)*puVar34;
      FUN_02a44274(lVar22 + 0xd8,&local_130);
    }
  }
  if (local_150 != (long *)0x0) {
    lVar22 = local_150[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_150 + 0x20))();
    }
  }
joined_r0x026be250:
  if (plVar31 != (long *)0x0) {
    lVar22 = *(long *)((long)plVar31 + 0x58);
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
joined_r0x026be190:
  if (local_140 != (long *)0x0) {
    lVar22 = local_140[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  if (local_138 != (long *)0x0) {
    lVar22 = local_138[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  return;
}


