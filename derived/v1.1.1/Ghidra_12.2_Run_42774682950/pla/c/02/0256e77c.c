/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256e77c; name: FUN_0256e77c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256e77c(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined **ppuVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined **ppuVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined *puVar23;
  char *pcVar24;
  undefined8 uVar25;
  long lVar26;
  undefined1 *puVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  long *plVar33;
  undefined8 *puVar34;
  long *plVar35;
  long lVar36;
  undefined1 *puVar37;
  long *plVar38;
  long lVar39;
  long *plVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long *plVar45;
  float fVar46;
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  long *local_168;
  undefined **local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 *local_108 [3];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 *local_d8 [2];
  undefined8 local_c8;
  long *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long *local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80 [2];
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x4f0) == '\0') {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar20 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
    FUN_01e654fc(&local_160);
    if (local_160 == (undefined **)0x0) {
      local_80[0] = (long *)0x0;
      uVar10 = _DAT_03888d10;
      uVar11 = _UNK_03888d18;
      uVar12 = _DAT_038897c0;
      uVar13 = _UNK_038897c8;
      uVar14 = _DAT_0388a130;
      uVar15 = _UNK_0388a138;
      uVar16 = DAT_0388a140;
      uVar17 = DAT_0388a148;
      plVar18 = local_80[0];
    }
    else {
      FUN_01523304(local_80);
      ppuVar19 = local_160;
      uVar10 = _DAT_03888d10;
      uVar11 = _UNK_03888d18;
      uVar12 = _DAT_038897c0;
      uVar13 = _UNK_038897c8;
      uVar14 = _DAT_0388a130;
      uVar15 = _UNK_0388a138;
      uVar16 = DAT_0388a140;
      uVar17 = DAT_0388a148;
      plVar18 = local_80[0];
      if (local_160 != (undefined **)0x0) {
        ppuVar3 = local_160 + 1;
        do {
          iVar20 = *(int *)ppuVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar6) {
            *(int *)ppuVar3 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar10 = _DAT_03888d10;
        uVar11 = _UNK_03888d18;
        uVar12 = _DAT_038897c0;
        uVar13 = _UNK_038897c8;
        uVar14 = _DAT_0388a130;
        uVar15 = _UNK_0388a138;
        uVar16 = DAT_0388a140;
        uVar17 = DAT_0388a148;
        if (iVar20 + -1 == 0) {
          local_160[2] = (undefined *)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar26 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar26;
          local_b8 = *ppuVar19;
          FUN_02a44274(lVar26 + 0xd8,&local_b8);
          uVar10 = _DAT_03888d10;
          uVar11 = _UNK_03888d18;
          uVar12 = _DAT_038897c0;
          uVar13 = _UNK_038897c8;
          uVar14 = _DAT_0388a130;
          uVar15 = _UNK_0388a138;
          uVar16 = DAT_0388a140;
          uVar17 = DAT_0388a148;
          plVar18 = local_80[0];
        }
      }
    }
    _DAT_03888d10 = uVar10;
    _UNK_03888d18 = uVar11;
    _DAT_038897c0 = uVar12;
    _UNK_038897c8 = uVar13;
    _DAT_0388a130 = uVar14;
    _UNK_0388a138 = uVar15;
    DAT_0388a140 = uVar16;
    DAT_0388a148 = uVar17;
    if (plVar18 != (long *)0x0) {
      auVar9._8_8_ = _UNK_03889a88;
      auVar9._0_8_ = _DAT_03889a80;
      auVar8._8_8_ = _UNK_03889a88;
      auVar8._0_8_ = _DAT_03889a80;
      plVar38 = *(long **)(param_1 + 0x2d0);
      local_80[0] = plVar18;
      if (plVar38 != (long *)0x0) {
        lVar26 = tpidr_el0;
        do {
          lVar43 = plVar38[6];
          lVar39 = *(long *)(lVar43 + 0x248);
          lVar41 = *(long *)(lVar43 + 0x240);
          local_b0 = (undefined *)0x0;
          local_a8 = (undefined *)0x0;
          local_b8 = (undefined *)0x0;
          local_a0[0] = *(long **)(lVar43 + 0x290);
          uVar28 = *(ulong *)(lVar43 + 0x298);
          local_90 = *(undefined8 *)(lVar43 + 0x2a0);
          uStack_88 = *(undefined8 *)(lVar43 + 0x2a8);
          lVar36 = *(long *)(lVar43 + 0x280) - *(long *)(lVar43 + 0x278);
          if (lVar36 != 0) {
            if (0x7ffffffffffffffe < uVar28) {
              uVar28 = 0x7fffffffffffffff;
            }
            if (uVar28 < (ulong)(lVar36 >> 3)) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            puVar23 = (undefined *)(**(code **)(*local_a0[0] + 0x10))(local_a0[0],lVar36,8);
            if (puVar23 == (undefined *)0x0) {
              (**(code **)(*local_a0[0] + 0xb8))();
            }
            local_a8 = puVar23 + (lVar36 >> 3) * 8;
            lVar44 = *(long *)(lVar43 + 0x280);
            local_b0 = puVar23;
            local_b8 = puVar23;
            for (lVar36 = *(long *)(lVar43 + 0x278); lVar36 != lVar44; lVar36 = lVar36 + 8) {
              FUN_02564e08(local_a0,local_b0,lVar36);
              local_b0 = local_b0 + 8;
            }
          }
          lVar39 = lVar39 - lVar41;
          if (lVar39 != 0) {
            uVar28 = 0;
LAB_0256e9ac:
            lVar36 = plVar38[6];
            uVar42 = uVar28 & 0xffffffff;
            if (uVar42 < (ulong)(*(long *)(lVar36 + 0x2b8) - *(long *)(lVar36 + 0x2b0) >> 3)) {
              puVar34 = (undefined8 *)(*(long *)(lVar36 + 0x538) + uVar42 * 0x60);
              plVar45 = (long *)*puVar34;
              if (plVar45 == (long *)0x0) goto LAB_0256ea08;
LAB_0256e9dc:
              (**(code **)(*plVar45 + 0x18))(plVar45);
              plVar35 = (long *)puVar34[4];
            }
            else {
              puVar34 = (undefined8 *)FUN_00b779ac();
              plVar45 = (long *)*puVar34;
              if (plVar45 != (long *)0x0) goto LAB_0256e9dc;
LAB_0256ea08:
              plVar35 = (long *)puVar34[4];
            }
            if (plVar35 != (long *)0x0) {
              (**(code **)(*plVar35 + 0x18))(plVar35);
            }
            plVar33 = (long *)PTR_PTR_04379d00;
            if (plVar45 != (long *)0x0) {
              plVar33 = plVar45 + 0xc;
            }
            pcVar24 = strrchr((char *)*plVar33,0x2f);
            if (pcVar24 == (char *)0x0) {
              pbVar29 = (byte *)0x0;
            }
            else {
              pbVar29 = (byte *)(pcVar24 + 1);
            }
            bVar4 = *pbVar29;
            puVar37 = &DAT_cbf29ce484222645;
            if (bVar4 != 0) {
              puVar37 = &DAT_cbf29ce484222645;
              do {
                pbVar29 = pbVar29 + 1;
                puVar37 = (undefined1 *)(((ulong)puVar37 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar29;
              } while (bVar4 != 0);
            }
            puVar27 = (undefined1 *)plVar18[0x93];
            if (puVar27 != (undefined1 *)0x0) {
              uVar30 = (long)puVar27 - ((ulong)puVar27 >> 1 & 0x5555555555555555);
              uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
              uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar30 < 2) {
                puVar31 = (undefined1 *)((ulong)(puVar27 + -1) & (ulong)puVar37);
              }
              else {
                puVar31 = puVar37;
                if (puVar27 <= puVar37) {
                  uVar7 = 0;
                  if (puVar27 != (undefined1 *)0x0) {
                    uVar7 = (ulong)puVar37 / (ulong)puVar27;
                  }
                  puVar31 = puVar37 + -(uVar7 * (long)puVar27);
                }
              }
              plVar33 = *(long **)(plVar18[0x92] + (long)puVar31 * 8);
              if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0))
              {
                if (uVar30 < 2) {
                  do {
                    if ((undefined1 *)plVar33[1] == puVar37) {
                      if ((undefined1 *)plVar33[2] == puVar37) goto LAB_0256eb80;
                    }
                    else if ((undefined1 *)((ulong)plVar33[1] & (ulong)(puVar27 + -1)) != puVar31)
                    break;
                    plVar33 = (long *)*plVar33;
                  } while (plVar33 != (long *)0x0);
                }
                else {
                  do {
                    puVar32 = (undefined1 *)plVar33[1];
                    if (puVar32 == puVar37) {
                      if ((undefined1 *)plVar33[2] == puVar37) goto LAB_0256eb80;
                    }
                    else {
                      if (puVar27 <= puVar32) {
                        uVar30 = 0;
                        if (puVar27 != (undefined1 *)0x0) {
                          uVar30 = (ulong)puVar32 / (ulong)puVar27;
                        }
                        puVar32 = puVar32 + -(uVar30 * (long)puVar27);
                      }
                      if (puVar32 != puVar31) break;
                    }
                    plVar33 = (long *)*plVar33;
                  } while (plVar33 != (long *)0x0);
                }
              }
            }
            goto joined_r0x0256f234;
          }
LAB_0256f17c:
          puVar23 = local_b8;
          if (local_b8 != (undefined *)0x0) {
            local_b0 = local_b8;
            lVar36 = (long)local_a8 - (long)local_b8;
            uVar28 = (**(code **)(*local_a0[0] + 0xc0))(local_a0[0]);
            if ((uVar28 & 1) != 0) {
              if (*(char *)(lVar26 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar26 + 0x38d488) = 1;
                *(undefined8 *)(lVar26 + 0x38d478) = 0;
                *(undefined8 *)(lVar26 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar26 + 0x38d480)) {
                FUN_02bcc824(local_a0[0],puVar23,lVar36,8);
                goto LAB_0256f20c;
              }
            }
            (**(code **)(*local_a0[0] + 0x18))(local_a0[0],puVar23,lVar36,8);
          }
LAB_0256f20c:
          plVar38 = (long *)*plVar38;
        } while (plVar38 != (long *)0x0);
        if (local_80[0] == (long *)0x0) goto LAB_0256e81c;
      }
      lVar26 = local_80[0][0xb];
      piVar1 = (int *)(lVar26 + 0xc);
      do {
        iVar20 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar20 + -1 == 0) {
        *(undefined8 *)(lVar26 + 0x18) = 0;
        (**(code **)(*local_80[0] + 0x20))();
      }
    }
  }
LAB_0256e81c:
  *(undefined1 *)(param_1 + 0x230) = 1;
  return;
LAB_0256eb80:
  lVar36 = *(long *)(plVar38[6] + 0x2b0);
  if ((uVar42 < (ulong)(*(long *)(plVar38[6] + 0x2b8) - lVar36 >> 3)) &&
     (lVar36 = *(long *)(lVar36 + uVar42 * 8), *(int *)(lVar36 + 0x1f8) == 4)) {
    plVar40 = *(long **)(*(long *)(lVar36 + 0x208) + 0x88);
    if (plVar40 != (long *)0x0) {
      plVar2 = plVar40 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    iVar20 = (**(code **)(plVar40[0xb] + 0x18))();
    if (plVar40 != (long *)0x0) {
      plVar2 = plVar40 + 10;
      do {
        iVar22 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar22 == 0) {
        (**(code **)(*plVar40 + 0x10))(plVar40);
      }
    }
    if (iVar20 != 0) {
      FUN_00956dac(&local_c0,*(long *)(local_b8 + uVar28 * 8) + 0x1a8);
      plVar40 = (long *)FUN_019005f0(local_c0,local_c0[1]);
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar22 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar22 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar36 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar36;
      local_c8 = *(undefined8 *)(lVar36 + 0x230);
      FUN_02bea704(local_d8,plVar40,&local_c8);
      FUN_00ab5ae0(&local_e0,local_d8);
      if (local_e0 != (long *)0x0) {
        *(undefined4 *)((long)local_e0 + 0xe4) = 0;
        FUN_02bdb08c(local_e0,0x11);
        *(undefined4 *)((long)local_e0 + 0xfc) = 6;
        uStack_12c = (undefined4)plVar33[3];
        local_130 = *(undefined4 *)((long)plVar33 + 0x1c);
        local_160 = &PTR_FUN_04287c30;
        local_150 = 0;
        local_148 = (undefined8 *)0x0;
        local_140 = *(undefined8 *)PTR_DAT_04379570;
        iVar22 = 0;
        do {
          lVar36 = *(long *)(plVar38[6] + 0x2b0);
          uVar25 = uVar16;
          uVar52 = uVar17;
          uVar53 = uVar10;
          uVar54 = uVar11;
          uVar55 = uVar14;
          uVar56 = uVar15;
          auVar47 = auVar8;
          if ((uVar42 < (ulong)(*(long *)(plVar38[6] + 0x2b8) - lVar36 >> 3)) &&
             (lVar36 = *(long *)(lVar36 + uVar42 * 8), auVar47 = auVar9,
             *(int *)(lVar36 + 0x1f8) == 4)) {
            plVar33 = *(long **)(*(long *)(lVar36 + 0x208) + 0x88);
            if (plVar33 != (long *)0x0) {
              plVar2 = plVar33 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            auVar47 = (**(code **)(plVar33[0xb] + 0x28))(plVar33 + 0xb,iVar22);
            if (plVar33 != (long *)0x0) {
              plVar2 = plVar33 + 10;
              do {
                iVar21 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = iVar21;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar21 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
              }
            }
          }
          fVar50 = (float)((ulong)uVar56 >> 0x20) +
                   auVar47._12_4_ * 0.0 + (float)((ulong)uVar52 >> 0x20) * 0.0 +
                   (float)((ulong)uVar54 >> 0x20) * 0.0;
          fVar51 = 1.0 / fVar50;
          fVar46 = ((float)uVar55 + auVar47._0_4_ * 0.0 + (float)uVar25 * 0.0 + (float)uVar53 * 0.0)
                   * fVar51;
          fVar48 = ((float)((ulong)uVar55 >> 0x20) +
                   auVar47._4_4_ * 0.0 + (float)((ulong)uVar25 >> 0x20) * 0.0 +
                   (float)((ulong)uVar53 >> 0x20) * 0.0) * fVar51;
          fVar49 = ((float)uVar56 + auVar47._8_4_ * 0.0 + (float)uVar52 * 0.0 + (float)uVar54 * 0.0)
                   * fVar51;
          fVar50 = fVar50 * fVar51;
          local_f0 = CONCAT17((byte)((uint)fVar48 >> 0x18) & (byte)((ulong)uVar12 >> 0x38),
                              CONCAT16((byte)((uint)fVar48 >> 0x10) & (byte)((ulong)uVar12 >> 0x30),
                                       CONCAT15((byte)((uint)fVar48 >> 8) &
                                                (byte)((ulong)uVar12 >> 0x28),
                                                CONCAT14(SUB41(fVar48,0) &
                                                         (byte)((ulong)uVar12 >> 0x20),
                                                         CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                                                  (byte)((ulong)uVar12 >> 0x18),
                                                                  CONCAT12((byte)((uint)fVar46 >>
                                                                                 0x10) &
                                                                           (byte)((ulong)uVar12 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  fVar46 >> 8) & (byte)((ulong)uVar12 >> 8),
                                                  SUB41(fVar46,0) & (byte)uVar12)))))));
          uStack_e8 = CONCAT17((byte)((uint)fVar50 >> 0x18) & (byte)((ulong)uVar13 >> 0x38),
                               CONCAT16((byte)((uint)fVar50 >> 0x10) & (byte)((ulong)uVar13 >> 0x30)
                                        ,CONCAT15((byte)((uint)fVar50 >> 8) &
                                                  (byte)((ulong)uVar13 >> 0x28),
                                                  CONCAT14(SUB41(fVar50,0) &
                                                           (byte)((ulong)uVar13 >> 0x20),
                                                           CONCAT13((byte)((uint)fVar49 >> 0x18) &
                                                                    (byte)((ulong)uVar13 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar49 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar13 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar49 >> 8) & (byte)((ulong)uVar13 >> 8),
                                                  SUB41(fVar49,0) & (byte)uVar13)))))));
          FUN_02bd60e0(local_108,local_e0,&local_160,puVar37,&local_f0,PTR_DAT_0437a120,
                       PTR_DAT_04379570);
          puVar34 = local_108[0];
          if (local_108[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_108[0] + 1);
            do {
              iVar21 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar21 + -1 == 0) {
              local_108[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar36 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar36;
              local_68 = *puVar34;
              FUN_02a44274(lVar36 + 0xd8,&local_68);
            }
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 != iVar20);
        if (*(int *)((long)local_e0 + 0x7c) == 0) {
          *(undefined4 *)((long)local_e0 + 0x7c) = 1;
        }
        *(undefined1 *)(local_e0 + 0x50) = 0;
        FUN_0256c14c(param_1 + 0x4f8,local_d8);
        if (local_e0 != (long *)0x0) {
          lVar36 = local_e0[0xb];
          piVar1 = (int *)(lVar36 + 0xc);
          do {
            iVar20 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar20 + -1 == 0) {
            *(undefined8 *)(lVar36 + 0x18) = 0;
            (**(code **)(*local_e0 + 0x20))();
          }
        }
      }
      local_110 = 0;
      local_158 = (undefined8 *)0x0;
      local_120 = (undefined8 *)0x0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      local_140 = 0;
      local_138 = (undefined8 *)0x0;
      local_150 = 0;
      local_148 = (undefined8 *)0x0;
      local_160 = (undefined **)CONCAT44(local_160._4_4_,0x23);
      local_168 = plVar40;
      if (plVar40 != (long *)0x0) {
        lVar36 = plVar40[0xb];
        if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar36 + 0x10) == 0) {
          uVar25 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
          *(undefined8 *)(lVar36 + 0x10) = uVar25;
        }
        piVar1 = (int *)(lVar36 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_01e4b6a0(&local_168,&local_160);
      puVar34 = local_120;
      if (local_168 != (long *)0x0) {
        lVar36 = local_168[0xb];
        piVar1 = (int *)(lVar36 + 0xc);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          *(undefined8 *)(lVar36 + 0x18) = 0;
          (**(code **)(*local_168 + 0x20))();
          puVar34 = local_120;
        }
      }
      if (puVar34 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar34 + 1);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          puVar34[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar36 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar36;
          local_f0 = *puVar34;
          FUN_02a44274(lVar36 + 0xd8,&local_f0);
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_138 + 1);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar36 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar36;
          local_f0 = *local_138;
          FUN_02a44274(lVar36 + 0xd8,&local_f0);
        }
      }
      puVar34 = local_148;
      if (local_148 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_148 + 1);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          local_148[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar36 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar36;
          local_f0 = *puVar34;
          FUN_02a44274(lVar36 + 0xd8,&local_f0);
        }
      }
      if (local_158 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_158 + 1);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          local_158[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar36 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar36;
          local_f0 = *local_158;
          FUN_02a44274(lVar36 + 0xd8,&local_f0);
        }
      }
      puVar34 = local_d8[0];
      if (local_d8[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_d8[0] + 1);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          local_d8[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar36 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar36;
          local_160 = (undefined **)*puVar34;
          FUN_02a44274(lVar36 + 0xd8,&local_160);
        }
      }
      if (local_c0 != (long *)0x0) {
        lVar36 = local_c0[0xb];
        piVar1 = (int *)(lVar36 + 0xc);
        do {
          iVar20 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar20 + -1 == 0) {
          *(undefined8 *)(lVar36 + 0x18) = 0;
          (**(code **)(*local_c0 + 0x20))();
        }
      }
    }
  }
joined_r0x0256f234:
  if (plVar35 != (long *)0x0) {
    (**(code **)(*plVar35 + 0x20))(plVar35);
  }
  if (plVar45 != (long *)0x0) {
    (**(code **)(*plVar45 + 0x20))(plVar45);
  }
  uVar28 = uVar28 + 1;
  if (uVar28 == lVar39 >> 3) goto LAB_0256f17c;
  goto LAB_0256e9ac;
}


