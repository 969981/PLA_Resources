/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a26ad8; name: FUN_01a26ad8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a26ad8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 in_q3 [16];
  undefined8 uVar33;
  float fVar34;
  long *local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar33 = in_q3._8_8_;
  uVar24 = in_q3._0_8_;
  plVar21 = (long *)FUN_01a26978();
  if (((plVar21 != (long *)0x0) && (lVar28 = *(long *)(param_1 + 0x80), lVar28 != 0)) &&
     (*(int *)(lVar28 + 0xc) != 0)) {
    piVar1 = (int *)(lVar28 + 0xc);
    iVar19 = *(int *)(lVar28 + 0xc);
    do {
      plVar27 = *(long **)(lVar28 + 0x10);
      if (((*PTR_DAT_0437a550 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a550), iVar20 != 0)) {
        uVar22 = FUN_00aa0310();
        *(undefined8 *)PTR_DAT_0437a558 = uVar22;
        __cxa_guard_release(PTR_DAT_0437a550);
      }
      while( true ) {
        if (plVar27 == (long *)0x0) goto LAB_01a26b1c;
        if (plVar27 == (long *)PTR_DAT_0437a558) break;
        plVar27 = (long *)*plVar27;
      }
      iVar20 = *piVar1;
      if (iVar20 == iVar19) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01a26b58;
        lVar28 = *(long *)(lVar28 + 0x18);
        if (lVar28 != 0) {
          plVar27 = (long *)(lVar28 + -0x50);
          FUN_00a9ecd4(&local_130,plVar27);
          FUN_009983e4(&local_158,&local_130);
          puVar3 = local_130;
          if (local_130 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_130 + 1);
            do {
              iVar19 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar19 + -1 == 0) {
              local_130[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar25 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar25;
              local_140 = *puVar3;
              FUN_02a44274(lVar25 + 0xd8,&local_140);
            }
          }
          if (local_158 == (long *)0x0) {
            bVar6 = false;
          }
          else {
            FUN_028a17c4(&local_160);
            plVar29 = local_160;
            if (((*PTR_DAT_0437a570 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar19 != 0)) {
              FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a570);
            }
            puVar3 = (undefined8 *)PTR_DAT_0437a578;
            if (plVar29[0x19] != 0) {
              puVar3 = (undefined8 *)(plVar29[0x19] + 0x88);
            }
            plVar29 = (long *)*puVar3;
            if (plVar29 != (long *)0x0) {
              plVar2 = plVar29 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            (**(code **)(*plVar21 + 0x48))(plVar21);
            FUN_02b6a984(plVar29);
            fVar30 = (float)CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                     (byte)((ulong)_DAT_038897c0 >> 0x18),
                                     CONCAT12((byte)((ulong)uVar24 >> 0x10) &
                                              (byte)((ulong)_DAT_038897c0 >> 0x10),
                                              CONCAT11((byte)((ulong)uVar24 >> 8) &
                                                       (byte)((ulong)_DAT_038897c0 >> 8),
                                                       (byte)uVar24 & (byte)_DAT_038897c0)));
            uVar23 = (ulong)_DAT_038897c0 >> 0x20;
            uVar14 = (ulong)uVar24 >> 0x20;
            uVar7 = (ulong)_DAT_038897c0 >> 0x28;
            uVar15 = (ulong)uVar24 >> 0x28;
            uVar8 = (ulong)_DAT_038897c0 >> 0x30;
            uVar9 = (ulong)_DAT_038897c0 >> 0x38;
            uVar16 = (ulong)uVar24 >> 0x30;
            uVar17 = (ulong)uVar24 >> 0x38;
            fVar34 = (float)CONCAT13((byte)((ulong)uVar33 >> 0x18) &
                                     (byte)((ulong)_UNK_038897c8 >> 0x18),
                                     CONCAT12((byte)((ulong)uVar33 >> 0x10) &
                                              (byte)((ulong)_UNK_038897c8 >> 0x10),
                                              CONCAT11((byte)((ulong)uVar33 >> 8) &
                                                       (byte)((ulong)_UNK_038897c8 >> 8),
                                                       (byte)uVar33 & (byte)_UNK_038897c8)));
            uVar10 = (ulong)_UNK_038897c8 >> 0x20;
            uVar11 = (ulong)_UNK_038897c8 >> 0x28;
            uVar12 = (ulong)_UNK_038897c8 >> 0x30;
            uVar13 = (ulong)_UNK_038897c8 >> 0x38;
            (**(code **)(*(long *)*param_2 + 0x40))();
            fVar31 = (float)((ulong)uVar24 >> 0x20);
            *param_5 = (float)(CONCAT17((byte)uVar17 & (byte)uVar9,
                                        CONCAT16((byte)uVar16 & (byte)uVar8,
                                                 CONCAT15((byte)uVar15 & (byte)uVar7,
                                                          CONCAT14((byte)uVar14 & (byte)uVar23,
                                                                   fVar30)))) >> 0x20) - fVar31;
            lVar25 = *(long *)(param_1 + 0x60);
            if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01a26ce0:
              param_4 = (undefined8 *)0x0;
            }
            else {
              piVar1 = (int *)(lVar25 + 0xc);
              iVar19 = *(int *)(lVar25 + 0xc);
              while( true ) {
                plVar21 = *(long **)(lVar25 + 0x10);
                if (((*PTR_DAT_0437a668 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar20 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
                    uVar24 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a668);
                  if (plVar21 != (long *)0x0) goto LAB_01a26ed4;
                  goto LAB_01a26ce0;
                }
                while( true ) {
                  if (plVar21 == (long *)0x0) goto LAB_01a26ce0;
LAB_01a26ed4:
                  if (plVar21 == (long *)PTR_DAT_0437a660) break;
                  plVar21 = (long *)*plVar21;
                }
                iVar20 = *piVar1;
                if (iVar20 == iVar19) break;
                ClearExclusiveLocal();
LAB_01a26eb4:
                iVar19 = iVar20;
                if (iVar20 == 0) goto LAB_01a26ce0;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar19 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_01a26eb4;
              lVar25 = *(long *)(lVar25 + 0x18);
              if (lVar25 == 0) goto LAB_01a26ce0;
              local_d0 = 0x7f7fffee;
              local_a8 = 0;
              uStack_a0 = 0xffffffffffffffff;
              local_f0 = 0;
              uStack_e8 = 0;
              local_100[0] = 0;
              local_e0 = 0;
              uStack_d8 = 0;
              local_c8 = 0xffffffffffffffff;
              local_80 = 0;
              uStack_78 = 0;
              local_b8 = 0xffffffff;
              local_c0 = 0xffffff;
              fVar30 = fVar30 + 0.0;
              fVar31 = fVar31 + *(float *)(param_1 + 0x120);
              local_140 = CONCAT44(fVar31,fVar30);
              fVar32 = fVar34 + 0.0;
              fVar34 = (float)(CONCAT17((byte)((ulong)uVar33 >> 0x38) & (byte)uVar13,
                                        CONCAT16((byte)((ulong)uVar33 >> 0x30) & (byte)uVar12,
                                                 CONCAT15((byte)((ulong)uVar33 >> 0x28) &
                                                          (byte)uVar11,
                                                          CONCAT14((byte)((ulong)uVar33 >> 0x20) &
                                                                   (byte)uVar10,fVar34)))) >> 0x20)
                       + 0.0;
              uStack_138 = CONCAT44(fVar34,fVar32);
              local_b4 = 0xf;
              local_150 = CONCAT44(fVar31 + -(*(float *)(param_1 + 0x120) +
                                             *(float *)(param_1 + 0x124)),fVar30 + 0.0);
              uStack_148 = CONCAT44(fVar34 + 0.0,fVar32 + 0.0);
              local_b0 = 0xffff;
              local_ac = 0;
              local_90 = 0xffffffff;
              local_98 = 0xffffff;
              local_8c = 0xf;
              local_88 = 0xffff;
              local_84 = 0;
              plVar21 = (long *)(lVar25 + -0x50);
              uVar23 = FUN_01e434f4(plVar21,&local_140,&local_150,*(undefined4 *)(param_1 + 300),
                                    &local_130);
              puVar18 = PTR_DAT_0437a100;
              if ((uVar23 & 1) == 0) {
                if (*(char *)(param_1 + 0x57) != '\0') {
                  param_3[1] = uStack_148;
                  *param_3 = local_150;
                  uVar24 = *(undefined8 *)(puVar18 + 8);
                  *param_4 = *(undefined8 *)puVar18;
                  param_4[1] = uVar24;
                  goto LAB_01a26fe0;
                }
                bVar6 = false;
              }
              else {
                param_3[1] = local_128;
                *param_3 = local_130;
                param_4[1] = local_118;
                *param_4 = local_120;
LAB_01a26fe0:
                bVar6 = true;
              }
              FUN_032c7b9c(local_100);
              lVar25 = *(long *)(lVar25 + 8);
              piVar1 = (int *)(lVar25 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar5 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar19 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar19 + -1 == 0) {
                *(undefined8 *)(lVar25 + 0x18) = 0;
                (**(code **)(*plVar21 + 0x20))(plVar21);
                if (bVar6) goto LAB_01a27010;
                goto LAB_01a26ce0;
              }
              if (!bVar6) goto LAB_01a26ce0;
LAB_01a27010:
              param_4 = (undefined8 *)0x1;
            }
            if (plVar29 != (long *)0x0) {
              plVar21 = plVar29 + 10;
              do {
                iVar19 = (int)*plVar21 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar6) {
                  *(int *)plVar21 = iVar19;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar19 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
            if (local_160 != (long *)0x0) {
              plVar21 = local_160 + 10;
              do {
                iVar19 = (int)*plVar21 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar6) {
                  *(int *)plVar21 = iVar19;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar19 == 0) {
                (**(code **)(*local_160 + 0x10))();
              }
            }
            if (local_158 != (long *)0x0) {
              lVar25 = local_158[0xb];
              piVar1 = (int *)(lVar25 + 0xc);
              do {
                iVar19 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar19 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar19 == 1) {
                *(undefined8 *)(lVar25 + 0x18) = 0;
                (**(code **)(*local_158 + 0x20))();
              }
            }
            bVar6 = true;
          }
          uVar26 = (uint)param_4;
          lVar28 = *(long *)(lVar28 + 8);
          piVar1 = (int *)(lVar28 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar28 + 0x18) = 0;
            (**(code **)(*plVar27 + 0x20))(plVar27);
          }
          if (bVar6) goto LAB_01a26b20;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a26b58:
      iVar19 = iVar20;
    } while (iVar20 != 0);
  }
LAB_01a26b1c:
  uVar26 = 0;
LAB_01a26b20:
  return uVar26 & 1;
}


