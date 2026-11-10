/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a952a4; name: FUN_01a952a4
 */


/* WARNING: Removing unreachable block (ram,0x01a96864) */
/* WARNING: Removing unreachable block (ram,0x01a96b7c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a952a4(long *param_1,long *param_2,undefined1 (*param_3) [16])

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 uVar36;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar37;
  undefined1 extraout_var;
  undefined1 uVar38;
  undefined1 extraout_var_00;
  byte bVar39;
  undefined1 extraout_var_01;
  undefined1 uVar40;
  undefined1 extraout_var_02;
  byte bVar41;
  undefined1 extraout_var_03;
  undefined1 uVar42;
  undefined1 extraout_var_04;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  float fVar68;
  float fVar70;
  undefined1 auVar71 [12];
  float fVar83;
  float fVar87;
  float fVar90;
  undefined1 auVar74 [16];
  int iVar69;
  undefined1 auVar75 [16];
  int iVar84;
  int iVar88;
  int iVar91;
  undefined1 auVar76 [16];
  undefined1 auVar72 [12];
  undefined1 auVar77 [16];
  float fVar85;
  float fVar89;
  float fVar92;
  undefined1 auVar78 [16];
  float fVar86;
  undefined1 auVar79 [16];
  undefined1 auVar73 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float local_240;
  float fStack_23c;
  long *local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  float *local_210;
  undefined8 *puStack_208;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long local_1d8;
  ulong local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined **local_110 [2];
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  long *local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long lStack_98;
  long *local_78;
  
  puVar11 = PTR_DAT_0437a668;
  puVar10 = PTR_DAT_0437a660;
  lVar19 = *(long *)(*param_3 + 8);
  lVar20 = *(long *)*param_3;
  lVar29 = param_2[0x4c];
  if ((lVar29 == 0) || (*(int *)(lVar29 + 0xc) == 0)) {
LAB_01a952e8:
    plVar27 = (long *)0x0;
  }
  else {
    piVar2 = (int *)(lVar29 + 0xc);
    iVar69 = *(int *)(lVar29 + 0xc);
    do {
      puVar28 = *(undefined8 **)(lVar29 + 0x10);
      if (((*puVar11 & 1) == 0) && (iVar84 = __cxa_guard_acquire(puVar11), iVar84 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar84 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar84 != 0)) {
          uVar17 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar17;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar10 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar11);
      }
      if (puVar28 == (undefined8 *)0x0) goto LAB_01a952e8;
      while (puVar28 != (undefined8 *)puVar10) {
        puVar28 = (undefined8 *)*puVar28;
        plVar27 = (long *)0x0;
        if (puVar28 == (undefined8 *)0x0) goto LAB_01a952ec;
      }
      iVar84 = *piVar2;
      if (iVar84 == iVar69) {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = iVar69 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar27 = (long *)0x0;
          if (*(long *)(lVar29 + 0x18) != 0) {
            plVar27 = (long *)(*(long *)(lVar29 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar27 = (long *)0x0;
      iVar69 = iVar84;
    } while (iVar84 != 0);
  }
LAB_01a952ec:
  FUN_01839c8c(&local_c8,param_2 + 0x15a);
  if ((plVar27 == (long *)0x0) || (local_c8 == (long *)0x0)) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = lVar19;
    *param_1 = lVar20;
    goto joined_r0x01a96e20;
  }
  local_110[0] = &PTR_FUN_04287c30;
  local_f0 = *(undefined8 *)PTR_DAT_04379570;
  uStack_e8 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  if ((int)local_c8[0x50] == 1) {
    local_e0 = *(float *)(local_c8 + 0x56);
    fStack_dc = 0.0001;
  }
  else {
    local_e0 = *(float *)(local_c8 + 0x5e);
    fStack_dc = *(float *)((long)local_c8 + 0x2f4);
  }
  local_100 = (ulong)(uint)(fStack_dc * 0.5 + local_e0) << 0x20;
  uStack_f8 = 0;
  auVar93._4_12_ = SUB1612(ZEXT816(0),4);
  auVar93._0_4_ = (int)*(undefined8 *)*param_3;
  auVar98._4_12_ = auVar93._4_12_;
  auVar98._0_4_ = (int)*(undefined8 *)(*param_3 + 8);
  local_120 = auVar93._0_8_;
  uStack_118 = auVar98._0_8_;
  lVar29 = param_2[0xb8];
  fVar104 = *(float *)((long)local_c8 + 0x324);
  local_240 = *(float *)(lVar29 + 0x94);
  uVar16 = (**(code **)(*param_2 + 600))(param_2);
  puVar10 = PTR_DAT_04379660;
  if ((uVar16 & 1) != 0) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar69 = __cxa_guard_acquire(PTR_DAT_04379660), iVar69 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar12 = PTR_DAT_04379670;
    puVar11 = PTR_DAT_04379668;
    lVar24 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar24;
    uVar16 = *(ulong *)(lVar24 + 0x60);
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
      }
      else {
        uVar23 = 0x6c43119d71eecde9;
        if (uVar16 < 0x6c43119d71eecdea) {
          uVar23 = 0;
          if (uVar16 != 0) {
            uVar23 = 0x6c43119d71eecde9 / uVar16;
          }
          uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
        }
      }
      plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95710;
            }
            else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95710;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01a95848;
  }
  uVar16 = (**(code **)(*param_2 + 0x250))(param_2);
  puVar10 = PTR_DAT_04379660;
  if ((uVar16 & 1) != 0) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar69 = __cxa_guard_acquire(PTR_DAT_04379660), iVar69 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar12 = PTR_DAT_04379670;
    puVar11 = PTR_DAT_04379668;
    lVar24 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar24;
    uVar16 = *(ulong *)(lVar24 + 0x60);
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
      }
      else {
        uVar23 = 0x6c43119d71eecde9;
        if (uVar16 < 0x6c43119d71eecdea) {
          uVar23 = 0;
          if (uVar16 != 0) {
            uVar23 = 0x6c43119d71eecde9 / uVar16;
          }
          uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
        }
      }
      plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95b64;
            }
            else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95b64;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01a95c9c;
  }
  if ((char)param_2[0x122] != '\0') {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar69 = __cxa_guard_acquire(PTR_DAT_04379660), iVar69 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar12 = PTR_DAT_04379670;
    puVar11 = PTR_DAT_04379668;
    lVar24 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar24;
    uVar16 = *(ulong *)(lVar24 + 0x60);
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
      }
      else {
        uVar23 = 0x6c43119d71eecde9;
        if (uVar16 < 0x6c43119d71eecdea) {
          uVar23 = 0;
          if (uVar16 != 0) {
            uVar23 = 0x6c43119d71eecde9 / uVar16;
          }
          uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
        }
      }
      plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95fb8;
            }
            else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95fb8;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01a960f0;
  }
LAB_01a9638c:
  FUN_009c69bc(&local_200,param_2);
  plVar25 = (long *)CONCAT44(fStack_1fc,local_200);
  auVar93 = *(undefined1 (*) [16])(plVar25 + 0x1a);
  local_260 = auVar93._0_4_;
  fStack_25c = auVar93._4_4_;
  fStack_258 = auVar93._8_4_;
  fStack_254 = auVar93._12_4_;
  if (plVar25 != (long *)0x0) {
    lVar24 = plVar25[0xb];
    piVar2 = (int *)(lVar24 + 0xc);
    do {
      iVar69 = *piVar2;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar14) {
        *piVar2 = iVar69 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar69 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))();
    }
  }
  fVar34 = (float)DAT_0388a140;
  fVar35 = (float)((ulong)DAT_0388a140 >> 0x20);
  fVar87 = (float)DAT_0388a148;
  fVar90 = (float)((ulong)DAT_0388a148 >> 0x20);
  local_260 = fVar34 * local_240 + local_260;
  fStack_25c = fVar35 * local_240 + fStack_25c;
  fStack_258 = fVar87 * local_240 + fStack_258;
  fStack_254 = fVar90 * local_240 + fStack_254;
  uStack_128 = CONCAT17((char)((uint)fStack_254 >> 0x18),
                        CONCAT16((char)((uint)fStack_254 >> 0x10),
                                 CONCAT15((char)((uint)fStack_254 >> 8),
                                          CONCAT14(SUB41(fStack_254,0),fStack_258))));
  local_130 = CONCAT17((char)((uint)fStack_25c >> 0x18),
                       CONCAT16((char)((uint)fStack_25c >> 0x10),
                                CONCAT15((char)((uint)fStack_25c >> 8),
                                         CONCAT14(SUB41(fStack_25c,0),local_260))));
  auVar93 = *param_3;
  local_1a0 = 0x7f7fffee;
  local_1e0 = 0;
  local_198 = 0xffffffffffffffff;
  local_260 = local_260 + auVar93._0_4_;
  fStack_25c = fStack_25c + auVar93._4_4_;
  uVar36 = (undefined1)((uint)fStack_25c >> 8);
  uVar38 = (undefined1)((uint)fStack_25c >> 0x10);
  uVar40 = (undefined1)((uint)fStack_25c >> 0x18);
  fStack_258 = fStack_258 + auVar93._8_4_;
  fStack_254 = fStack_254 + auVar93._12_4_;
  uVar42 = (undefined1)((uint)fStack_254 >> 8);
  uVar45 = (undefined1)((uint)fStack_254 >> 0x10);
  uVar47 = (undefined1)((uint)fStack_254 >> 0x18);
  local_178 = 0;
  local_170 = 0xffffffffffffffff;
  puStack_208 = &local_120;
  local_1d8 = 0;
  local_1d0 = 0;
  local_180 = 0xffff;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_168 = 0xffffff;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_190 = 0xffffff;
  local_188 = 0xfffffffff;
  local_160 = 0xfffffffff;
  local_158 = 0xffff;
  local_148 = 0;
  local_150 = 0;
  uStack_138 = CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar42,CONCAT14(SUB41(fStack_254,0),
                                                                        fStack_258))));
  local_140 = CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(SUB41(fStack_25c,0),local_260
                                                                      ))));
  fStack_254 = (float)(CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar42,CONCAT14(SUB41(fStack_254,0),
                                                                                fStack_258)))) >>
                      0x20);
  fStack_25c = (float)(CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(SUB41(fStack_25c,0),
                                                                                local_260)))) >>
                      0x20);
  local_210 = &local_200;
  uVar15 = (**(code **)(*param_2 + 0x240))(param_2);
  puVar10 = PTR_DAT_0437a648;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar69 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar69 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  puVar12 = PTR_DAT_0437a658;
  puVar11 = PTR_DAT_0437a650;
  lVar24 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar24;
  uVar16 = FUN_02bf711c(*(undefined8 *)(lVar24 + 0x230),local_110,&local_130,&local_140,uVar15,
                        &local_200,1);
  fVar32 = local_e0;
  if ((uVar16 & 1) == 0) {
LAB_01a96a80:
    fVar32 = fStack_25c + (float)((ulong)_DAT_0388a1b0 >> 0x20);
    fVar31 = fStack_254 + (float)((ulong)_UNK_0388a1b8 >> 0x20);
    uStack_218 = CONCAT17((char)((uint)fVar31 >> 0x18),
                          CONCAT16((char)((uint)fVar31 >> 0x10),
                                   CONCAT15((char)((uint)fVar31 >> 8),
                                            CONCAT14(SUB41(fVar31,0),
                                                     fStack_258 + (float)_UNK_0388a1b8))));
    local_220 = CONCAT17((char)((uint)fVar32 >> 0x18),
                         CONCAT16((char)((uint)fVar32 >> 0x10),
                                  CONCAT15((char)((uint)fVar32 >> 8),
                                           CONCAT14(SUB41(fVar32,0),local_260 + (float)_DAT_0388a1b0
                                                   ))));
    fVar32 = local_240 + *(float *)(lVar29 + 0x94) + 0.01;
    fVar31 = (float)_DAT_03889960;
    fVar85 = (float)((ulong)_DAT_03889960 >> 0x20);
    fVar89 = (float)_UNK_03889968;
    fVar92 = (float)((ulong)_UNK_03889968 >> 0x20);
    fStack_25c = fStack_25c + fVar85 * fVar32;
    fStack_254 = fStack_254 + fVar92 * fVar32;
    uStack_228 = CONCAT17((char)((uint)fStack_254 >> 0x18),
                          CONCAT16((char)((uint)fStack_254 >> 0x10),
                                   CONCAT15((char)((uint)fStack_254 >> 8),
                                            CONCAT14(SUB41(fStack_254,0),
                                                     fStack_258 + fVar89 * fVar32))));
    local_230 = (long *)CONCAT17((char)((uint)fStack_25c >> 0x18),
                                 CONCAT16((char)((uint)fStack_25c >> 0x10),
                                          CONCAT15((char)((uint)fStack_25c >> 8),
                                                   CONCAT14(SUB41(fStack_25c,0),
                                                            local_260 + fVar31 * fVar32))));
    uVar15 = (**(code **)(*param_2 + 0x240))(param_2);
    if (((*puVar10 & 1) == 0) && (iVar69 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar69 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar29 = *(long *)puVar11;
    *(long *)puVar12 = lVar29;
    uVar16 = FUN_02bf711c(*(undefined8 *)(lVar29 + 0x230),local_110,&local_220,&local_230,uVar15,
                          &local_200,1);
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x16d) = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[1] = lVar19;
      *param_1 = lVar20;
      uVar16 = local_1d0;
    }
    else {
      fVar32 = (float)local_1f0;
      auVar78._0_4_ = fVar32 * fVar32;
      fVar30 = (float)((ulong)local_1f0 >> 0x20);
      auVar78._4_4_ = fVar30 * fVar30;
      fVar68 = (float)uStack_1e8;
      auVar78._8_4_ = fVar68 * fVar68;
      fVar83 = (float)((ulong)uStack_1e8 >> 0x20);
      auVar78._12_4_ = fVar83 * fVar83;
      auVar93 = NEON_ext(auVar78,auVar78,8,1);
      fVar70 = auVar93._0_4_ + auVar78._0_4_;
      fVar86 = auVar93._4_4_ + auVar78._4_4_;
      fVar33 = fVar70 + fVar86;
      fVar70 = fVar70 + fVar86;
      auVar79._8_8_ = CONCAT44(fVar70,fVar33);
      auVar79._0_8_ = CONCAT44(fVar70,fVar33);
      auVar93 = NEON_frsqrte(auVar79,4);
      auVar100._0_4_ = auVar93._0_4_ * fVar33;
      auVar100._4_4_ = auVar93._4_4_ * fVar70;
      auVar100._8_4_ = auVar93._8_4_ * fVar33;
      auVar100._12_4_ = auVar93._12_4_ * fVar70;
      auVar98 = NEON_frsqrts(auVar93,auVar100,4);
      auVar95._0_4_ = auVar93._0_4_ * auVar98._0_4_;
      auVar95._4_4_ = auVar93._4_4_ * auVar98._4_4_;
      auVar95._8_4_ = auVar93._8_4_ * auVar98._8_4_;
      auVar95._12_4_ = auVar93._12_4_ * auVar98._12_4_;
      auVar101._0_4_ = fVar33 * auVar95._0_4_;
      auVar101._4_4_ = fVar70 * auVar95._4_4_;
      auVar101._8_4_ = fVar33 * auVar95._8_4_;
      auVar101._12_4_ = fVar70 * auVar95._12_4_;
      iVar69 = -(uint)(fVar33 == 0.0);
      iVar84 = -(uint)(fVar70 == 0.0);
      iVar88 = -(uint)(fVar33 == 0.0);
      iVar91 = -(uint)(fVar70 == 0.0);
      auVar93 = NEON_frsqrts(auVar95,auVar101,4);
      fVar32 = fVar32 * auVar95._0_4_ * auVar93._0_4_;
      fVar30 = fVar30 * auVar95._4_4_ * auVar93._4_4_;
      fVar68 = fVar68 * auVar95._8_4_ * auVar93._8_4_;
      fVar83 = fVar83 * auVar95._12_4_ * auVar93._12_4_;
      fVar32 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                               CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar32 >> 8) &
                                                  ~(byte)((uint)iVar69 >> 8),
                                                  SUB41(fVar32,0) & ~(byte)iVar69)));
      auVar73._0_8_ =
           CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18),
                    CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10),
                             CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar84 >> 8),
                                      CONCAT14(SUB41(fVar30,0) & ~(byte)iVar84,fVar32))));
      auVar73[8] = SUB41(fVar68,0) & ~(byte)iVar88;
      auVar73[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar88 >> 8);
      auVar73[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar88 >> 0x10);
      auVar73[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18);
      auVar80[0xc] = SUB41(fVar83,0) & ~(byte)iVar91;
      auVar80._0_12_ = auVar73;
      auVar80[0xd] = (byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar91 >> 8);
      auVar80[0xe] = (byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
      auVar80[0xf] = (byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
      fVar34 = fVar32 * fVar34;
      fVar30 = (float)((ulong)auVar73._0_8_ >> 0x20);
      fVar35 = fVar30 * fVar35;
      uVar36 = (undefined1)((uint)fVar35 >> 8);
      uVar38 = (undefined1)((uint)fVar35 >> 0x10);
      uVar40 = (undefined1)((uint)fVar35 >> 0x18);
      fVar87 = auVar73._8_4_ * fVar87;
      uVar42 = (undefined1)((uint)fVar87 >> 8);
      uVar45 = (undefined1)((uint)fVar87 >> 0x10);
      uVar47 = (undefined1)((uint)fVar87 >> 0x18);
      fVar90 = auVar80._12_4_ * fVar90;
      uVar49 = (undefined1)((uint)fVar90 >> 8);
      uVar51 = (undefined1)((uint)fVar90 >> 0x10);
      uVar53 = (undefined1)((uint)fVar90 >> 0x18);
      auVar8[4] = SUB41(fVar35,0);
      auVar8._0_4_ = fVar34;
      auVar8[5] = uVar36;
      auVar8[6] = uVar38;
      auVar8[7] = uVar40;
      auVar8[8] = SUB41(fVar87,0);
      auVar8[9] = uVar42;
      auVar8[10] = uVar45;
      auVar8[0xb] = uVar47;
      auVar8[0xc] = SUB41(fVar90,0);
      auVar8[0xd] = uVar49;
      auVar8[0xe] = uVar51;
      auVar8[0xf] = uVar53;
      auVar9[4] = SUB41(fVar35,0);
      auVar9._0_4_ = fVar34;
      auVar9[5] = uVar36;
      auVar9[6] = uVar38;
      auVar9[7] = uVar40;
      auVar9[8] = SUB41(fVar87,0);
      auVar9[9] = uVar42;
      auVar9[10] = uVar45;
      auVar9[0xb] = uVar47;
      auVar9[0xc] = SUB41(fVar90,0);
      auVar9[0xd] = uVar49;
      auVar9[0xe] = uVar51;
      auVar9[0xf] = uVar53;
      auVar93 = NEON_ext(auVar8,auVar9,8,1);
      fVar34 = auVar93._0_4_ + fVar34 + auVar93._4_4_ + fVar35;
      uVar36 = 0;
      if (-1.0 <= fVar34) {
        uVar36 = SUB41(fVar34,0);
      }
      FUN_0095d8f0(uVar36);
      fVar34 = local_200 + fVar32 * local_e0 + fVar31 * local_e0;
      fVar35 = fStack_1fc + fVar30 * local_e0 + fVar85 * local_e0;
      fVar87 = fStack_1f8 + auVar73._8_4_ * local_e0 + fVar89 * local_e0;
      fVar90 = fStack_1f4 + auVar80._12_4_ * local_e0 + fVar92 * local_e0;
      lVar29 = CONCAT17((char)((uint)fVar90 >> 0x18),
                        CONCAT16((char)((uint)fVar90 >> 0x10),
                                 CONCAT15((char)((uint)fVar90 >> 8),CONCAT14(SUB41(fVar90,0),fVar87)
                                         )));
      fStack_23c = (float)(CONCAT17((char)((uint)fVar35 >> 0x18),
                                    CONCAT16((char)((uint)fVar35 >> 0x10),
                                             CONCAT15((char)((uint)fVar35 >> 8),
                                                      CONCAT14(SUB41(fVar35,0),fVar34)))) >> 0x20);
      FUN_009c69bc(&local_a0,param_2);
      fStack_258 = (float)local_a0[0x1b];
      fStack_254 = (float)((ulong)local_a0[0x1b] >> 0x20);
      local_260 = (float)local_a0[0x1a];
      fStack_25c = (float)((ulong)local_a0[0x1a] >> 0x20);
      if (local_a0 != (long *)0x0) {
        lVar24 = local_a0[0xb];
        piVar2 = (int *)(lVar24 + 0xc);
        do {
          iVar69 = *piVar2;
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar69 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar69 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*local_a0 + 0x20))();
        }
      }
      if (fVar104 <=
          ABS((float)CONCAT13(extraout_var_04,
                              CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)))))
      {
        FUN_009c69bc(&local_a0,param_2);
        fStack_25c = (float)((ulong)local_a0[0x1a] >> 0x20);
        if (local_a0 != (long *)0x0) {
          lVar24 = local_a0[0xb];
          piVar2 = (int *)(lVar24 + 0xc);
          do {
            iVar69 = *piVar2;
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = iVar69 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar69 + -1 == 0) {
            *(undefined8 *)(lVar24 + 0x18) = 0;
            (**(code **)(*local_a0 + 0x20))();
          }
        }
        if ((fStack_25c < fStack_23c) && (uVar16 = FUN_01a97370(&local_210), (uVar16 & 1) == 0)) {
LAB_01a96d68:
          uVar36 = SUB41((float)local_1f0,0);
          uVar38 = (undefined1)((uint)(float)local_1f0 >> 8);
          uVar40 = (undefined1)((uint)(float)local_1f0 >> 0x10);
          uVar42 = (undefined1)((uint)(float)local_1f0 >> 0x18);
          fVar35 = (float)uStack_1e8 * (float)uStack_1e8 + (float)local_1f0 * (float)local_1f0;
          fVar104 = fVar35 + 0.0;
          uVar17 = CONCAT44(fVar35 + 0.0,fVar104);
          if (fVar104 != 0.0) {
            uVar45 = SUB41((float)uStack_1e8,0);
            uVar47 = (undefined1)((uint)(float)uStack_1e8 >> 8);
            uVar49 = (undefined1)((uint)(float)uStack_1e8 >> 0x10);
            uVar51 = (undefined1)((uint)(float)uStack_1e8 >> 0x18);
            goto LAB_01a96d98;
          }
        }
LAB_01a97028:
        uVar53 = (undefined1)lVar19;
        uVar55 = (undefined1)((ulong)lVar19 >> 8);
        uVar57 = (undefined1)((ulong)lVar19 >> 0x10);
        uVar59 = (undefined1)((ulong)lVar19 >> 0x18);
        uVar61 = (undefined1)((ulong)lVar19 >> 0x20);
        uVar63 = (undefined1)((ulong)lVar19 >> 0x28);
        uVar65 = (undefined1)((ulong)lVar19 >> 0x30);
        uVar67 = (undefined1)((ulong)lVar19 >> 0x38);
        uVar36 = (undefined1)lVar20;
        uVar38 = (undefined1)((ulong)lVar20 >> 8);
        uVar40 = (undefined1)((ulong)lVar20 >> 0x10);
        uVar42 = (undefined1)((ulong)lVar20 >> 0x18);
        uVar45 = (undefined1)((ulong)lVar20 >> 0x20);
        uVar47 = (undefined1)((ulong)lVar20 >> 0x28);
        uVar49 = (undefined1)((ulong)lVar20 >> 0x30);
        uVar51 = (undefined1)((ulong)lVar20 >> 0x38);
        uVar21 = 0;
        bVar14 = true;
      }
      else {
        FUN_009c69bc(&local_a0,param_2);
        lVar24 = local_a0[0x1a];
        if (local_a0 != (long *)0x0) {
          lVar18 = local_a0[0xb];
          piVar2 = (int *)(lVar18 + 0xc);
          do {
            iVar69 = *piVar2;
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = iVar69 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar69 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_a0 + 0x20))();
          }
        }
        if (((float)((ulong)lVar24 >> 0x20) < fStack_23c) && (local_1d8 != 0)) {
          FUN_01e4bad0(&local_a0,local_1d8,&local_1c0);
          FUN_00cf6d78(&local_a8,&local_a0);
          if (local_a8 == (long *)0x0) {
LAB_01a96f54:
            bVar14 = false;
          }
          else {
            local_c0 = (undefined8 *)0x0;
            uStack_b8 = 0;
            FUN_01841110(&local_c0,local_a8 + 0x4b);
            if (local_c0 == (undefined8 *)0x0) {
              local_b0 = (long *)0x0;
            }
            else {
              FUN_018316b8(&local_b0);
              puVar28 = local_c0;
              if (local_c0 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_c0 + 1);
                do {
                  iVar69 = *piVar2;
                  cVar3 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar14) {
                    *piVar2 = iVar69 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar69 + -1 == 0) {
                  local_c0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar69 = __cxa_guard_acquire(PTR_DAT_04379498), iVar69 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar24 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar24;
                  local_78 = (long *)*puVar28;
                  FUN_02a44274(lVar24 + 0xd8,&local_78);
                }
              }
            }
            if (local_b0 == (long *)0x0) goto LAB_01a96f54;
            lVar24 = local_b0[0xb];
            piVar2 = (int *)(lVar24 + 0xc);
            cVar3 = *(char *)((long)local_b0 + 0x202);
            do {
              iVar69 = *piVar2;
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar14) {
                *piVar2 = iVar69 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar69 + -1 == 0) {
              *(undefined8 *)(lVar24 + 0x18) = 0;
              (**(code **)(*local_b0 + 0x20))();
            }
            if (cVar3 == '\0') goto LAB_01a96f54;
            bVar14 = true;
          }
          plVar25 = local_a0;
          if (local_a8 != (long *)0x0) {
            lVar24 = local_a8[0xb];
            piVar2 = (int *)(lVar24 + 0xc);
            do {
              iVar69 = *piVar2;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar13) {
                *piVar2 = iVar69 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar69 + -1 == 0) {
              *(undefined8 *)(lVar24 + 0x18) = 0;
              (**(code **)(*local_a8 + 0x20))();
              plVar25 = local_a0;
            }
          }
          local_a0 = plVar25;
          if (plVar25 != (long *)0x0) {
            plVar1 = plVar25 + 1;
            do {
              iVar69 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar13) {
                *(int *)plVar1 = iVar69;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar69 == 0) {
              plVar25[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar69 = __cxa_guard_acquire(PTR_DAT_04379498), iVar69 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar24 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar24;
              local_c0 = (undefined8 *)*plVar25;
              FUN_02a44274(lVar24 + 0xd8,&local_c0);
            }
          }
          if (bVar14) goto LAB_01a96d68;
        }
        local_260 = fVar34 - local_260;
        uVar36 = SUB41(local_260,0);
        uVar38 = (undefined1)((uint)local_260 >> 8);
        uVar40 = (undefined1)((uint)local_260 >> 0x10);
        uVar42 = (undefined1)((uint)local_260 >> 0x18);
        fStack_25c = fStack_23c - fStack_25c;
        uVar45 = SUB41(fStack_25c,0);
        uVar47 = (undefined1)((uint)fStack_25c >> 8);
        uVar49 = (undefined1)((uint)fStack_25c >> 0x10);
        uVar51 = (undefined1)((uint)fStack_25c >> 0x18);
        fVar87 = fVar87 - fStack_258;
        uVar53 = SUB41(fVar87,0);
        uVar55 = (undefined1)((uint)fVar87 >> 8);
        uVar57 = (undefined1)((uint)fVar87 >> 0x10);
        uVar59 = (undefined1)((uint)fVar87 >> 0x18);
        fStack_254 = (float)((ulong)lVar29 >> 0x20) - fStack_254;
        uVar61 = SUB41(fStack_254,0);
        uVar63 = (undefined1)((uint)fStack_254 >> 8);
        uVar65 = (undefined1)((uint)fStack_254 >> 0x10);
        uVar67 = (undefined1)((uint)fStack_254 >> 0x18);
        if (*(float *)(param_2[0xb8] + 0x90) <= ABS(fStack_25c)) {
          if (*(float *)(param_2[0xb8] + 0x94) <= ABS(fStack_25c)) goto LAB_01a97028;
          bVar14 = false;
          uVar21 = 1;
        }
        else {
          uVar21 = 0;
          bVar14 = false;
        }
      }
      *(undefined4 *)(param_2 + 0x16d) = 0;
      *(undefined1 *)(param_1 + 2) = uVar21;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[1] = CONCAT17(uVar67,CONCAT16(uVar65,CONCAT15(uVar63,CONCAT14(uVar61,CONCAT13(uVar59,
                                                  CONCAT12(uVar57,CONCAT11(uVar55,uVar53)))))));
      *param_1 = CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,CONCAT13(uVar42,
                                                  CONCAT12(uVar40,CONCAT11(uVar38,uVar36)))))));
      uVar16 = local_1d0;
      if (!bVar14) {
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[7] = lVar29;
        param_1[6] = CONCAT44(fStack_23c,fVar34);
      }
    }
  }
  else {
    fVar31 = (float)local_1f0;
    auVar74._0_4_ = fVar31 * fVar31;
    fVar85 = (float)((ulong)local_1f0 >> 0x20);
    auVar74._4_4_ = fVar85 * fVar85;
    fVar89 = (float)uStack_1e8;
    auVar74._8_4_ = fVar89 * fVar89;
    fVar92 = (float)((ulong)uStack_1e8 >> 0x20);
    auVar74._12_4_ = fVar92 * fVar92;
    auVar93 = NEON_ext(auVar74,auVar74,8,1);
    fVar68 = auVar93._0_4_ + auVar74._0_4_;
    fVar83 = auVar93._4_4_ + auVar74._4_4_;
    fVar30 = fVar68 + fVar83;
    fVar68 = fVar68 + fVar83;
    auVar75._8_8_ = CONCAT44(fVar68,fVar30);
    auVar75._0_8_ = CONCAT44(fVar68,fVar30);
    auVar93 = NEON_frsqrte(auVar75,4);
    auVar97._0_4_ = auVar93._0_4_ * fVar30;
    auVar97._4_4_ = auVar93._4_4_ * fVar68;
    auVar97._8_4_ = auVar93._8_4_ * fVar30;
    auVar97._12_4_ = auVar93._12_4_ * fVar68;
    auVar98 = NEON_frsqrts(auVar93,auVar97,4);
    auVar94._0_4_ = auVar93._0_4_ * auVar98._0_4_;
    auVar94._4_4_ = auVar93._4_4_ * auVar98._4_4_;
    auVar94._8_4_ = auVar93._8_4_ * auVar98._8_4_;
    auVar94._12_4_ = auVar93._12_4_ * auVar98._12_4_;
    auVar99._0_4_ = fVar30 * auVar94._0_4_;
    auVar99._4_4_ = fVar68 * auVar94._4_4_;
    auVar99._8_4_ = fVar30 * auVar94._8_4_;
    auVar99._12_4_ = fVar68 * auVar94._12_4_;
    iVar69 = -(uint)(fVar30 == 0.0);
    iVar84 = -(uint)(fVar68 == 0.0);
    iVar88 = -(uint)(fVar30 == 0.0);
    iVar91 = -(uint)(fVar68 == 0.0);
    uVar15 = CONCAT13(~(byte)((uint)iVar69 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar69 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar69 >> 8),~(byte)iVar69)));
    auVar71._0_8_ =
         CONCAT17(~(byte)((uint)iVar84 >> 0x18),
                  CONCAT16(~(byte)((uint)iVar84 >> 0x10),
                           CONCAT15(~(byte)((uint)iVar84 >> 8),CONCAT14(~(byte)iVar84,uVar15))));
    auVar71[8] = ~(byte)iVar88;
    auVar71[9] = ~(byte)((uint)iVar88 >> 8);
    auVar71[10] = ~(byte)((uint)iVar88 >> 0x10);
    auVar71[0xb] = ~(byte)((uint)iVar88 >> 0x18);
    auVar76[0xc] = ~(byte)iVar91;
    auVar76._0_12_ = auVar71;
    auVar76[0xd] = ~(byte)((uint)iVar91 >> 8);
    auVar76[0xe] = ~(byte)((uint)iVar91 >> 0x10);
    auVar76[0xf] = ~(byte)((uint)iVar91 >> 0x18);
    auVar93 = NEON_frsqrts(auVar94,auVar99,4);
    fVar31 = fVar31 * auVar94._0_4_ * auVar93._0_4_;
    fVar85 = fVar85 * auVar94._4_4_ * auVar93._4_4_;
    fVar89 = fVar89 * auVar94._8_4_ * auVar93._8_4_;
    fVar92 = fVar92 * auVar94._12_4_ * auVar93._12_4_;
    if ((*PTR_DAT_04379660 & 1) == 0) {
      fStack_258 = auVar71._8_4_;
      fStack_254 = auVar76._12_4_;
      fStack_25c = (float)((ulong)auVar71._0_8_ >> 0x20);
      iVar69 = __cxa_guard_acquire(PTR_DAT_04379660);
      auVar76._4_4_ = fStack_25c;
      auVar76._0_4_ = uVar15;
      auVar76._8_4_ = fStack_258;
      auVar76._12_4_ = fStack_254;
      if (iVar69 != 0) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
    }
    lVar24 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar24;
    uVar16 = *(ulong *)(lVar24 + 0x60);
    uVar15 = CONCAT13((byte)((uint)fVar31 >> 0x18) & auVar76[3],
                      CONCAT12((byte)((uint)fVar31 >> 0x10) & auVar76[2],
                               CONCAT11((byte)((uint)fVar31 >> 8) & auVar76[1],
                                        SUB41(fVar31,0) & auVar76[0])));
    auVar72._0_8_ =
         CONCAT17((byte)((uint)fVar85 >> 0x18) & auVar76[7],
                  CONCAT16((byte)((uint)fVar85 >> 0x10) & auVar76[6],
                           CONCAT15((byte)((uint)fVar85 >> 8) & auVar76[5],
                                    CONCAT14(SUB41(fVar85,0) & auVar76[4],uVar15))));
    auVar72[8] = SUB41(fVar89,0) & auVar76[8];
    auVar72[9] = (byte)((uint)fVar89 >> 8) & auVar76[9];
    auVar72[10] = (byte)((uint)fVar89 >> 0x10) & auVar76[10];
    auVar72[0xb] = (byte)((uint)fVar89 >> 0x18) & auVar76[0xb];
    auVar77[0xc] = SUB41(fVar92,0) & auVar76[0xc];
    auVar77._0_12_ = auVar72;
    auVar77[0xd] = (byte)((uint)fVar92 >> 8) & auVar76[0xd];
    auVar77[0xe] = (byte)((uint)fVar92 >> 0x10) & auVar76[0xe];
    auVar77[0xf] = (byte)((uint)fVar92 >> 0x18) & auVar76[0xf];
    fVar31 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
      }
      else {
        uVar23 = 0x6c43119d71eecde9;
        if (uVar16 < 0x6c43119d71eecdea) {
          uVar23 = 0;
          if (uVar16 != 0) {
            uVar23 = 0x6c43119d71eecde9 / uVar16;
          }
          uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
        }
      }
      plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a966fc;
            }
            else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x6c43119d71eecde9) {
              if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a966fc;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
LAB_01a96834:
    fVar32 = fVar32 + fVar31;
    fVar31 = (float)local_1f0 * fVar34;
    fVar85 = (float)((ulong)local_1f0 >> 0x20) * fVar35;
    uVar36 = (undefined1)((uint)fVar85 >> 8);
    uVar38 = (undefined1)((uint)fVar85 >> 0x10);
    uVar40 = (undefined1)((uint)fVar85 >> 0x18);
    fVar89 = (float)uStack_1e8 * fVar87;
    uVar42 = (undefined1)((uint)fVar89 >> 8);
    uVar45 = (undefined1)((uint)fVar89 >> 0x10);
    uVar47 = (undefined1)((uint)fVar89 >> 0x18);
    fVar92 = (float)((ulong)uStack_1e8 >> 0x20) * fVar90;
    uVar49 = (undefined1)((uint)fVar92 >> 8);
    uVar51 = (undefined1)((uint)fVar92 >> 0x10);
    uVar53 = (undefined1)((uint)fVar92 >> 0x18);
    auVar6[4] = SUB41(fVar85,0);
    auVar6._0_4_ = fVar31;
    auVar6[5] = uVar36;
    auVar6[6] = uVar38;
    auVar6[7] = uVar40;
    auVar6[8] = SUB41(fVar89,0);
    auVar6[9] = uVar42;
    auVar6[10] = uVar45;
    auVar6[0xb] = uVar47;
    auVar6[0xc] = SUB41(fVar92,0);
    auVar6[0xd] = uVar49;
    auVar6[0xe] = uVar51;
    auVar6[0xf] = uVar53;
    auVar7[4] = SUB41(fVar85,0);
    auVar7._0_4_ = fVar31;
    auVar7[5] = uVar36;
    auVar7[6] = uVar38;
    auVar7[7] = uVar40;
    auVar7[8] = SUB41(fVar89,0);
    auVar7[9] = uVar42;
    auVar7[10] = uVar45;
    auVar7[0xb] = uVar47;
    auVar7[0xc] = SUB41(fVar92,0);
    auVar7[0xd] = uVar49;
    auVar7[0xe] = uVar51;
    auVar7[0xf] = uVar53;
    auVar93 = NEON_ext(auVar6,auVar7,8,1);
    fVar31 = auVar93._0_4_ + fVar31 + auVar93._4_4_ + fVar85;
    uVar36 = 0;
    if (-1.0 <= fVar31) {
      uVar36 = SUB41(fVar31,0);
    }
    local_260 = local_200 + auVar77._0_4_ * fVar32;
    fStack_25c = fStack_1fc + auVar77._4_4_ * fVar32;
    fStack_258 = fStack_1f8 + auVar77._8_4_ * fVar32;
    fStack_254 = fStack_1f4 + auVar77._12_4_ * fVar32;
    FUN_0095d8f0(uVar36);
    if ((float)CONCAT13(extraout_var_03,CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))
                       ) < *(float *)(param_2 + 0xd2)) {
      if (local_1d8 == 0) goto LAB_01a96a80;
      FUN_01e4bad0(&local_a0,local_1d8,&local_1c0);
      FUN_00cf6d78(&local_230,&local_a0);
      if (local_230 == (long *)0x0) {
        bVar14 = false;
        plVar25 = local_a0;
      }
      else {
        local_c0 = (undefined8 *)0x0;
        uStack_b8 = 0;
        FUN_01841110(&local_c0,local_230 + 0x4b);
        if (local_c0 == (undefined8 *)0x0) {
          local_78 = (long *)0x0;
LAB_01a968c4:
          if (local_78 == (long *)0x0) goto LAB_01a969b4;
LAB_01a968cc:
          bVar14 = *(char *)((long)local_78 + 0x202) != '\0';
          lVar24 = local_78[0xb];
          piVar2 = (int *)(lVar24 + 0xc);
          do {
            iVar69 = *piVar2;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = iVar69 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar69 + -1 == 0) {
            *(undefined8 *)(lVar24 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
          }
        }
        else {
          FUN_018316b8(&local_78);
          puVar28 = local_c0;
          if (local_c0 == (undefined8 *)0x0) goto LAB_01a968c4;
          piVar2 = (int *)(local_c0 + 1);
          do {
            iVar69 = *piVar2;
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = iVar69 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar69 + -1 != 0) goto LAB_01a968c4;
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar69 = __cxa_guard_acquire(PTR_DAT_04379498), iVar69 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar24 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar24;
          local_220 = *puVar28;
          FUN_02a44274(lVar24 + 0xd8,&local_220);
          if (local_78 != (long *)0x0) goto LAB_01a968cc;
LAB_01a969b4:
          bVar14 = false;
        }
        plVar25 = local_a0;
        if (local_230 != (long *)0x0) {
          lVar24 = local_230[0xb];
          piVar2 = (int *)(lVar24 + 0xc);
          do {
            iVar69 = *piVar2;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = iVar69 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar69 + -1 == 0) {
            *(undefined8 *)(lVar24 + 0x18) = 0;
            (**(code **)(*local_230 + 0x20))();
            plVar25 = local_a0;
          }
        }
      }
      local_a0 = plVar25;
      if (plVar25 != (long *)0x0) {
        plVar1 = plVar25 + 1;
        do {
          iVar69 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = iVar69;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar69 == 0) {
          plVar25[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar69 = __cxa_guard_acquire(PTR_DAT_04379498), iVar69 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar24 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar24;
          local_c0 = (undefined8 *)*plVar25;
          FUN_02a44274(lVar24 + 0xd8,&local_c0);
        }
      }
      if (!bVar14) goto LAB_01a96a80;
    }
    uVar16 = FUN_01a97370(&local_210);
    if ((uVar16 & 1) != 0) goto LAB_01a96a80;
    uVar36 = (undefined1)local_1f0;
    uVar38 = (undefined1)((ulong)local_1f0 >> 8);
    uVar40 = (undefined1)((ulong)local_1f0 >> 0x10);
    uVar42 = (undefined1)((ulong)local_1f0 >> 0x18);
    fVar31 = (float)uStack_1e8 * (float)uStack_1e8 + (float)local_1f0 * (float)local_1f0;
    fVar32 = fVar31 + 0.0;
    uVar17 = CONCAT44(fVar31 + 0.0,fVar32);
    if (fVar32 == 0.0) goto LAB_01a96a80;
    uVar45 = (undefined1)uStack_1e8;
    uVar47 = (undefined1)((ulong)uStack_1e8 >> 8);
    uVar49 = (undefined1)((ulong)uStack_1e8 >> 0x10);
    uVar51 = (undefined1)((ulong)uStack_1e8 >> 0x18);
LAB_01a96d98:
    auVar81._8_8_ = uVar17;
    auVar81._0_8_ = uVar17;
    auVar93 = NEON_frsqrte(auVar81,4);
    fVar104 = (float)uVar17;
    auVar102._0_4_ = auVar93._0_4_ * fVar104;
    fVar34 = (float)((ulong)uVar17 >> 0x20);
    auVar102._4_4_ = auVar93._4_4_ * fVar34;
    auVar102._8_4_ = auVar93._8_4_ * fVar104;
    auVar102._12_4_ = auVar93._12_4_ * fVar34;
    auVar98 = NEON_frsqrts(auVar93,auVar102,4);
    auVar96._0_4_ = auVar93._0_4_ * auVar98._0_4_;
    auVar96._4_4_ = auVar93._4_4_ * auVar98._4_4_;
    auVar96._8_4_ = auVar93._8_4_ * auVar98._8_4_;
    auVar96._12_4_ = auVar93._12_4_ * auVar98._12_4_;
    auVar103._0_4_ = fVar104 * auVar96._0_4_;
    auVar103._4_4_ = fVar34 * auVar96._4_4_;
    auVar103._8_4_ = fVar104 * auVar96._8_4_;
    auVar103._12_4_ = fVar34 * auVar96._12_4_;
    iVar69 = -(uint)(fVar104 == 0.0);
    iVar84 = -(uint)(fVar34 == 0.0);
    iVar88 = -(uint)(fVar104 == 0.0);
    iVar91 = -(uint)(fVar34 == 0.0);
    auVar93 = NEON_frsqrts(auVar96,auVar103,4);
    fVar104 = (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36))) *
              auVar96._0_4_ * auVar93._0_4_;
    fVar34 = auVar96._4_4_ * auVar93._4_4_ * 0.0;
    fVar35 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45))) *
             auVar96._8_4_ * auVar93._8_4_;
    fVar87 = auVar96._12_4_ * auVar93._12_4_ * 0.0;
    auVar93 = *param_3;
    bVar37 = SUB41(fVar104,0) & ~(byte)iVar69;
    bVar39 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar69 >> 8);
    bVar41 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
    bVar43 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
    bVar44 = SUB41(fVar34,0) & ~(byte)iVar84;
    bVar46 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar84 >> 8);
    bVar48 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
    bVar50 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
    bVar52 = SUB41(fVar35,0) & ~(byte)iVar88;
    bVar54 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar88 >> 8);
    bVar56 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar88 >> 0x10);
    bVar58 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18);
    bVar60 = SUB41(fVar87,0) & ~(byte)iVar91;
    bVar62 = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar91 >> 8);
    bVar64 = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
    bVar66 = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
    auVar82._0_4_ =
         (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) * (0.0 - auVar93._0_4_);
    auVar82._4_4_ =
         (float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44))) * (0.0 - auVar93._4_4_);
    auVar82._8_4_ =
         (float)CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,bVar52))) * (0.0 - auVar93._8_4_);
    auVar82._12_4_ =
         (float)CONCAT13(bVar66,CONCAT12(bVar64,CONCAT11(bVar62,bVar60))) * (0.0 - auVar93._12_4_);
    auVar98 = NEON_ext(auVar82,auVar82,8,1);
    fVar35 = auVar98._0_4_ + auVar82._0_4_ + auVar98._4_4_ + auVar82._4_4_;
    fVar104 = auVar93._4_4_ +
              (float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44))) * fVar35;
    fVar34 = auVar93._12_4_ +
             (float)CONCAT13(bVar66,CONCAT12(bVar64,CONCAT11(bVar62,bVar60))) * fVar35;
    lStack_98 = CONCAT17((char)((uint)fVar34 >> 0x18),
                         CONCAT16((char)((uint)fVar34 >> 0x10),
                                  CONCAT15((char)((uint)fVar34 >> 8),
                                           CONCAT14(SUB41(fVar34,0),
                                                    auVar93._8_4_ +
                                                    (float)CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(
                                                  bVar54,bVar52))) * fVar35))));
    local_a0 = (long *)CONCAT17((char)((uint)fVar104 >> 0x18),
                                CONCAT16((char)((uint)fVar104 >> 0x10),
                                         CONCAT15((char)((uint)fVar104 >> 8),
                                                  CONCAT14(SUB41(fVar104,0),
                                                           auVar93._0_4_ +
                                                           (float)CONCAT13(bVar43,CONCAT12(bVar41,
                                                  CONCAT11(bVar39,bVar37))) * fVar35))));
    if ((int)param_2[0x16d] < 2) {
      *(int *)(param_2 + 0x16d) = (int)param_2[0x16d] + 1;
      FUN_01a952a4(param_1,param_2,&local_a0);
      uVar16 = local_1d0;
    }
    else {
      *(undefined4 *)(param_2 + 0x16d) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = (long)local_a0;
      param_1[1] = lStack_98;
      uVar16 = local_1d0;
    }
  }
  local_1d0 = uVar16;
  if ((uVar16 & 1) != 0) {
    lVar20 = tpidr_el0;
    lVar19 = *(long *)(lVar20 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar19;
    }
    plVar25 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
    *(undefined8 *)(uVar16 - 0x11) = 0;
    (**(code **)(*plVar25 + 0x18))
              (plVar25,(undefined8 *)(uVar16 - 0x11),(long)*(int *)(uVar16 - 9) + 0x10);
  }
joined_r0x01a96e20:
  if (local_c8 != (long *)0x0) {
    lVar20 = local_c8[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar69 = *piVar2;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar14) {
        *piVar2 = iVar69 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar69 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  if (plVar27 != (long *)0x0) {
    lVar20 = plVar27[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar69 = *piVar2;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar14) {
        *piVar2 = iVar69 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar69 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
  }
  return;
LAB_01a95710:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x68f86aa0c21aa887;
      }
      else if (uVar16 < 0x68f86aa0c21aa888) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x68f86aa0c21aa887 / uVar16;
        }
        uVar23 = 0x68f86aa0c21aa887 - uVar23 * uVar16;
      }
      else {
        uVar23 = 0x68f86aa0c21aa887;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0x68f86aa0c21aa887) {
              if (plVar26[2] == 0x68f86aa0c21aa887) goto LAB_01a95830;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0x68f86aa0c21aa887) {
              if (plVar26[2] == 0x68f86aa0c21aa887) goto LAB_01a95830;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a95834;
  }
LAB_01a95848:
  bVar37 = *puVar10;
  goto joined_r0x01a95928;
LAB_01a95830:
  fVar104 = *(float *)(plVar26 + 6);
LAB_01a95834:
  do {
    iVar69 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar69 != 0) goto LAB_01a95848;
  (**(code **)(*plVar25 + 0x10))();
  bVar37 = *puVar10;
joined_r0x01a95928:
  if (((bVar37 & 1) == 0) && (iVar69 = __cxa_guard_acquire(PTR_DAT_04379660), iVar69 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  local_240 = local_240 * fVar104;
  lVar24 = *(long *)puVar11;
  *(long *)puVar12 = lVar24;
  uVar16 = *(ulong *)(lVar24 + 0x60);
  fVar104 = 0.0;
  if (uVar16 != 0) {
    uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
    }
    else {
      uVar23 = 0x6c43119d71eecde9;
      if (uVar16 < 0x6c43119d71eecdea) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x6c43119d71eecde9 / uVar16;
        }
        uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
      }
    }
    plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar25[1] == 0x6c43119d71eecde9) {
            if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a959ac;
          }
          else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar25[1];
          if (uVar22 == 0x6c43119d71eecde9) {
            if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a959ac;
          }
          else {
            if (uVar16 <= uVar22) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar22 / uVar16;
              }
              uVar22 = uVar22 - uVar5 * uVar16;
            }
            if (uVar22 != uVar23) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_01a9638c;
LAB_01a959ac:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0xbbe03b28e30d04a8;
      }
      else if (uVar16 < 0xbbe03b28e30d04a9) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0xbbe03b28e30d04a8 / uVar16;
        }
        uVar23 = 0xbbe03b28e30d04a8 - uVar23 * uVar16;
      }
      else {
        uVar23 = 0xbbe03b28e30d04a8;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xbbe03b28e30d04a8) {
              if (plVar26[2] == -0x441fc4d71cf2fb58) goto LAB_01a95acc;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xbbe03b28e30d04a8) {
              if (plVar26[2] == -0x441fc4d71cf2fb58) goto LAB_01a95acc;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a95ad0;
  }
  goto LAB_01a9638c;
LAB_01a95acc:
  fVar104 = *(float *)(plVar26 + 6);
LAB_01a95ad0:
  do {
    iVar69 = (int)*plVar1 + -1;
    bVar13 = iVar69 == 0;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01a96388;
LAB_01a95b64:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0xc16cdfe2eff80aed;
      }
      else if (uVar16 < 0xc16cdfe2eff80aee) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0xc16cdfe2eff80aed / uVar16;
        }
        uVar23 = 0xc16cdfe2eff80aed - uVar23 * uVar16;
      }
      else {
        uVar23 = 0xc16cdfe2eff80aed;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xc16cdfe2eff80aed) {
              if (plVar26[2] == -0x3e93201d1007f513) goto LAB_01a95c84;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xc16cdfe2eff80aed) {
              if (plVar26[2] == -0x3e93201d1007f513) goto LAB_01a95c84;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a95c88;
  }
LAB_01a95c9c:
  bVar37 = *puVar10;
  goto joined_r0x01a95d7c;
LAB_01a95c84:
  fVar104 = *(float *)(plVar26 + 6);
LAB_01a95c88:
  do {
    iVar69 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar69 != 0) goto LAB_01a95c9c;
  (**(code **)(*plVar25 + 0x10))();
  bVar37 = *puVar10;
joined_r0x01a95d7c:
  if (((bVar37 & 1) == 0) && (iVar69 = __cxa_guard_acquire(PTR_DAT_04379660), iVar69 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  local_240 = local_240 * fVar104;
  lVar24 = *(long *)puVar11;
  *(long *)puVar12 = lVar24;
  uVar16 = *(ulong *)(lVar24 + 0x60);
  fVar104 = 0.0;
  if (uVar16 != 0) {
    uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
    }
    else {
      uVar23 = 0x6c43119d71eecde9;
      if (uVar16 < 0x6c43119d71eecdea) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x6c43119d71eecde9 / uVar16;
        }
        uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
      }
    }
    plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar25[1] == 0x6c43119d71eecde9) {
            if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95e00;
          }
          else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar25[1];
          if (uVar22 == 0x6c43119d71eecde9) {
            if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a95e00;
          }
          else {
            if (uVar16 <= uVar22) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar22 / uVar16;
              }
              uVar22 = uVar22 - uVar5 * uVar16;
            }
            if (uVar22 != uVar23) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_01a9638c;
LAB_01a95e00:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x603d6e415a0a91e6;
      }
      else if (uVar16 < 0x603d6e415a0a91e7) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x603d6e415a0a91e6 / uVar16;
        }
        uVar23 = 0x603d6e415a0a91e6 - uVar23 * uVar16;
      }
      else {
        uVar23 = 0x603d6e415a0a91e6;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0x603d6e415a0a91e6) {
              if (plVar26[2] == 0x603d6e415a0a91e6) goto LAB_01a95f20;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0x603d6e415a0a91e6) {
              if (plVar26[2] == 0x603d6e415a0a91e6) goto LAB_01a95f20;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a95f24;
  }
  goto LAB_01a9638c;
LAB_01a95f20:
  fVar104 = *(float *)(plVar26 + 6);
LAB_01a95f24:
  do {
    iVar69 = (int)*plVar1 + -1;
    bVar13 = iVar69 == 0;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01a96388;
LAB_01a95fb8:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x2734b743489f046a;
      }
      else if (uVar16 < 0x2734b743489f046b) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x2734b743489f046a / uVar16;
        }
        uVar23 = 0x2734b743489f046a - uVar23 * uVar16;
      }
      else {
        uVar23 = 0x2734b743489f046a;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0x2734b743489f046a) {
              if (plVar26[2] == 0x2734b743489f046a) goto LAB_01a960d8;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0x2734b743489f046a) {
              if (plVar26[2] == 0x2734b743489f046a) goto LAB_01a960d8;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a960dc;
  }
LAB_01a960f0:
  bVar37 = *puVar10;
  goto joined_r0x01a961d0;
LAB_01a960d8:
  fVar104 = *(float *)(plVar26 + 6);
LAB_01a960dc:
  do {
    iVar69 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar69 != 0) goto LAB_01a960f0;
  (**(code **)(*plVar25 + 0x10))();
  bVar37 = *puVar10;
joined_r0x01a961d0:
  if (((bVar37 & 1) == 0) && (iVar69 = __cxa_guard_acquire(PTR_DAT_04379660), iVar69 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  local_240 = local_240 * fVar104;
  lVar24 = *(long *)puVar11;
  *(long *)puVar12 = lVar24;
  uVar16 = *(ulong *)(lVar24 + 0x60);
  fVar104 = 0.0;
  if (uVar16 != 0) {
    uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar16 - 1 & 0x6c43119d71eecde9;
    }
    else {
      uVar23 = 0x6c43119d71eecde9;
      if (uVar16 < 0x6c43119d71eecdea) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x6c43119d71eecde9 / uVar16;
        }
        uVar23 = 0x6c43119d71eecde9 - uVar23 * uVar16;
      }
    }
    plVar25 = *(long **)(*(long *)(lVar24 + 0x58) + uVar23 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar25[1] == 0x6c43119d71eecde9) {
            if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a96254;
          }
          else if ((plVar25[1] & uVar16 - 1) != uVar23) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar25[1];
          if (uVar22 == 0x6c43119d71eecde9) {
            if (plVar25[2] == 0x6c43119d71eecde9) goto LAB_01a96254;
          }
          else {
            if (uVar16 <= uVar22) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar22 / uVar16;
              }
              uVar22 = uVar22 - uVar5 * uVar16;
            }
            if (uVar22 != uVar23) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_01a9638c;
LAB_01a96254:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar104 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0xa9b7eb11bf74777;
      }
      else if (uVar16 < 0xa9b7eb11bf74778) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0xa9b7eb11bf74777 / uVar16;
        }
        uVar23 = 0xa9b7eb11bf74777 - uVar23 * uVar16;
      }
      else {
        uVar23 = 0xa9b7eb11bf74777;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xa9b7eb11bf74777) {
              if (plVar26[2] == 0xa9b7eb11bf74777) goto LAB_01a96374;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xa9b7eb11bf74777) {
              if (plVar26[2] == 0xa9b7eb11bf74777) goto LAB_01a96374;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a96378;
  }
  goto LAB_01a9638c;
LAB_01a96374:
  fVar104 = *(float *)(plVar26 + 6);
LAB_01a96378:
  do {
    iVar69 = (int)*plVar1 + -1;
    bVar13 = iVar69 == 0;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01a96388:
  if (bVar13) {
    (**(code **)(*plVar25 + 0x10))();
  }
  goto LAB_01a9638c;
LAB_01a966fc:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar25[0x21];
    fVar31 = 0.0;
    if (uVar16 != 0) {
      uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar16 - 1 & 0x185243ab6515fb89;
      }
      else if (uVar16 < 0x185243ab6515fb8a) {
        uVar23 = 0;
        if (uVar16 != 0) {
          uVar23 = 0x185243ab6515fb89 / uVar16;
        }
        uVar23 = 0x185243ab6515fb89 - uVar23 * uVar16;
      }
      else {
        uVar23 = 0x185243ab6515fb89;
      }
      plVar26 = *(long **)(plVar25[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0x185243ab6515fb89) {
              if (plVar26[2] == 0x185243ab6515fb89) goto LAB_01a9681c;
            }
            else if ((plVar26[1] & uVar16 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0x185243ab6515fb89) {
              if (plVar26[2] == 0x185243ab6515fb89) goto LAB_01a9681c;
            }
            else {
              if (uVar16 <= uVar22) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar22 / uVar16;
                }
                uVar22 = uVar22 - uVar5 * uVar16;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_01a96820;
  }
  goto LAB_01a96834;
LAB_01a9681c:
  fVar31 = *(float *)(plVar26 + 6);
LAB_01a96820:
  do {
    iVar69 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *(int *)plVar1 = iVar69;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar69 == 0) {
    fStack_258 = auVar72._8_4_;
    fStack_254 = auVar77._12_4_;
    fStack_25c = (float)((ulong)auVar72._0_8_ >> 0x20);
    (**(code **)(*plVar25 + 0x10))();
    auVar77._4_4_ = fStack_25c;
    auVar77._0_4_ = uVar15;
    auVar77._8_4_ = fStack_258;
    auVar77._12_4_ = fStack_254;
  }
  goto LAB_01a96834;
}


