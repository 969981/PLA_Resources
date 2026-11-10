/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025bdf54; name: FUN_025bdf54
 */


void FUN_025bdf54(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  char *pcVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 *local_1b0 [2];
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float local_17c;
  undefined8 *local_170;
  undefined8 uStack_168;
  long *local_160;
  long *local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90 [2];
  
  FUN_016c24d0(&local_98,param_1 + 0x240);
  if (local_98 == (long *)0x0) goto LAB_025bdfc8;
  if (*(long *)(param_1 + 0x210) == 0) {
    local_a0 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_a0);
    if (local_a0 != (long *)0x0) {
      fVar22 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
      lVar10 = 0;
      pcVar18 = (char *)(param_1 + 600);
LAB_025be070:
      *pcVar18 = '\0';
      FUN_00ab5ae0(&local_a8,pcVar18 + 8);
      if (local_a8 != (long *)0x0) {
        local_148 = (&DAT_043e9770)[lVar10 * 0x14];
        uStack_140 = (&DAT_043e9778)[lVar10 * 0x14];
        local_138 = (&DAT_043e9780)[lVar10 * 0x14];
        local_130 = (long *)(&DAT_043e9788)[lVar10 * 0x14];
        if (local_130 != (long *)0x0) {
          (**(code **)(*local_130 + 0x18))();
        }
        local_128 = (&DAT_043e9790)[lVar10 * 0x14];
        uStack_120 = (&DAT_043e9798)[lVar10 * 0x14];
        local_118 = (&DAT_043e97a0)[lVar10 * 0x14];
        local_110 = (long *)(&DAT_043e97a8)[lVar10 * 0x14];
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x18))();
        }
        local_108 = (&DAT_043e97b0)[lVar10 * 0x14];
        uStack_100 = (&DAT_043e97b8)[lVar10 * 0x14];
        local_f8 = (&DAT_043e97c0)[lVar10 * 0x14];
        local_f0 = (long *)(&DAT_043e97c8)[lVar10 * 0x14];
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x18))();
        }
        local_e8 = (&DAT_043e97d0)[lVar10 * 0x14];
        uStack_e0 = (&DAT_043e97d8)[lVar10 * 0x14];
        local_d8 = (&DAT_043e97e0)[lVar10 * 0x14];
        local_d0 = (long *)(&DAT_043e97e8)[lVar10 * 0x14];
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x18))();
        }
        local_c8 = (&DAT_043e97f0)[lVar10 * 0x14];
        uStack_c0 = (&DAT_043e97f8)[lVar10 * 0x14];
        local_b8 = (&DAT_043e9800)[lVar10 * 0x14];
        local_b0 = (long *)(&DAT_043e9808)[lVar10 * 0x14];
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x18))();
        }
        FUN_00bef9ac(&local_150,&DAT_0425f8c0,&local_148);
        if (((local_150 != (long *)0x0) && (*(char *)local_150[0xc] != '\0')) &&
           (FUN_00956dac(&local_158,pcVar18 + 0x38), local_158 != (long *)0x0)) {
          lVar8 = FUN_00b13c20(local_158 + 0x1e,local_1b0);
          if (lVar8 != 0) {
            FUN_01a9b800(local_1b0,local_a0);
            FUN_00956dac(&local_160,local_1b0);
            puVar6 = local_1b0[0];
            if (local_1b0[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_1b0[0] + 1);
              do {
                iVar7 = *piVar1;
                cVar14 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar7 + -1;
                  cVar14 = ExclusiveMonitorsStatus();
                }
              } while (cVar14 != '\0');
              if (iVar7 + -1 == 0) {
                local_1b0[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_90[0] = *puVar6;
                FUN_02a44274(lVar11 + 0xd8,local_90);
              }
            }
            if (local_160 != (long *)0x0) {
              (**(code **)(*local_160 + 0x18))(local_1b0);
              local_170 = (undefined8 *)0x0;
              uStack_168 = 0;
              FUN_0087f944(&local_170,local_1b0);
              puVar6 = local_1b0[0];
              if (local_1b0[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_1b0[0] + 1);
                do {
                  iVar7 = *piVar1;
                  cVar14 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar14 = ExclusiveMonitorsStatus();
                  }
                } while (cVar14 != '\0');
                if (iVar7 + -1 == 0) {
                  local_1b0[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar11;
                  local_90[0] = *puVar6;
                  FUN_02a44274(lVar11 + 0xd8,local_90);
                }
              }
              FUN_00d81760(lVar8,&local_170,&local_150,0);
              puVar6 = local_170;
              if (local_170 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_170 + 1);
                do {
                  iVar7 = *piVar1;
                  cVar14 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar14 = ExclusiveMonitorsStatus();
                  }
                } while (cVar14 != '\0');
                if (iVar7 + -1 == 0) {
                  local_170[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar8 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar8;
                  local_1b0[0] = (undefined8 *)*puVar6;
                  FUN_02a44274(lVar8 + 0xd8,local_1b0);
                }
              }
              plVar17 = local_158;
              auVar21 = FUN_00aee408(&DAT_0425f8c0,&local_e8);
              *(undefined1 *)(plVar17 + 0x1c) = 1;
              *(undefined1 (*) [16])(plVar17 + 0x1a) = auVar21;
              auVar20 = FUN_00aee408(&DAT_0425f8c0,&local_c8);
              plVar17 = local_158;
              auVar21 = FUN_009a7ff4(fVar22 * auVar20._4_4_,fVar22 * auVar20._0_4_,
                                     fVar22 * auVar20._8_4_);
              *(undefined1 (*) [16])(plVar17 + 0x18) = auVar21;
              *(undefined1 *)(plVar17 + 0x1c) = 1;
              *pcVar18 = '\x01';
              if (local_160 != (long *)0x0) {
                lVar8 = local_160[0xb];
                piVar1 = (int *)(lVar8 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar14 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar14 = ExclusiveMonitorsStatus();
                  }
                } while (cVar14 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar8 + 0x18) = 0;
                  (**(code **)(*local_160 + 0x20))();
                }
              }
            }
          }
          if (local_158 == (long *)0x0) goto LAB_025be354;
          lVar8 = local_158[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar14 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
          if (iVar7 + -1 != 0) goto LAB_025be354;
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_158 + 0x20))();
          if ((param_2 & 1) != 0) goto LAB_025be358;
          goto LAB_025be370;
        }
LAB_025be354:
        if ((param_2 & 1) == 0) goto LAB_025be370;
LAB_025be358:
        if ((*(char *)(param_1 + 0x378) != '\0') || (*(int *)((long)local_a8 + 0x7c) != 2))
        goto LAB_025be370;
        if (*pcVar18 != '\0') {
          FUN_02bd7ca4(local_1b0);
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar8 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar8;
          uVar12 = *(ulong *)(lVar8 + 0x60);
          fVar19 = 0.0;
          if (uVar12 != 0) {
            uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
            uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
            uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar13 < 2) {
              uVar15 = uVar12 - 1 & DAT_0425f8c0;
            }
            else if (DAT_0425f8c0 < uVar12) {
              uVar15 = DAT_0425f8c0;
            }
            else {
              uVar15 = 0;
              if (uVar12 != 0) {
                uVar15 = DAT_0425f8c0 / uVar12;
              }
              uVar15 = DAT_0425f8c0 - uVar15 * uVar12;
            }
            plVar17 = *(long **)(*(long *)(lVar8 + 0x58) + uVar15 * 8);
            fVar19 = 0.0;
            if (plVar17 != (long *)0x0) {
              plVar17 = (long *)*plVar17;
              fVar19 = 0.0;
              if (plVar17 != (long *)0x0) {
                if (uVar13 < 2) {
                  do {
                    if (plVar17[1] == DAT_0425f8c0) {
                      if (plVar17[2] == DAT_0425f8c0) goto LAB_025be6ec;
                    }
                    else if ((plVar17[1] & uVar12 - 1) != uVar15) break;
                    plVar17 = (long *)*plVar17;
                  } while (plVar17 != (long *)0x0);
                }
                else {
                  do {
                    uVar13 = plVar17[1];
                    if (uVar13 == DAT_0425f8c0) {
                      if (plVar17[2] == DAT_0425f8c0) goto LAB_025be6ec;
                    }
                    else {
                      if (uVar12 <= uVar13) {
                        uVar16 = 0;
                        if (uVar12 != 0) {
                          uVar16 = uVar13 / uVar12;
                        }
                        uVar13 = uVar13 - uVar16 * uVar12;
                      }
                      if (uVar13 != uVar15) break;
                    }
                    plVar17 = (long *)*plVar17;
                  } while (plVar17 != (long *)0x0);
                }
                fVar19 = 0.0;
              }
            }
          }
          goto LAB_025be734;
        }
        cVar14 = '\0';
        goto LAB_025be374;
      }
      goto LAB_025be42c;
    }
  }
  goto joined_r0x025be524;
LAB_025be6ec:
  plVar17 = (long *)plVar17[3];
  fVar19 = 0.0;
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    fVar19 = (float)FUN_00d7905c(plVar17,&local_128);
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_025be734:
  local_17c = fVar19;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar8 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar8;
  uVar12 = *(ulong *)(lVar8 + 0x60);
  fVar19 = 0.0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar15 = uVar12 - 1 & DAT_0425f8c0;
    }
    else if (DAT_0425f8c0 < uVar12) {
      uVar15 = DAT_0425f8c0;
    }
    else {
      uVar15 = 0;
      if (uVar12 != 0) {
        uVar15 = DAT_0425f8c0 / uVar12;
      }
      uVar15 = DAT_0425f8c0 - uVar15 * uVar12;
    }
    plVar17 = *(long **)(*(long *)(lVar8 + 0x58) + uVar15 * 8);
    fVar19 = 0.0;
    if (plVar17 != (long *)0x0) {
      plVar17 = (long *)*plVar17;
      fVar19 = 0.0;
      if (plVar17 != (long *)0x0) {
        if (uVar13 < 2) {
          do {
            if (plVar17[1] == DAT_0425f8c0) {
              if (plVar17[2] == DAT_0425f8c0) goto LAB_025be7f8;
            }
            else if ((plVar17[1] & uVar12 - 1) != uVar15) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar17[1];
            if (uVar13 == DAT_0425f8c0) {
              if (plVar17[2] == DAT_0425f8c0) goto LAB_025be7f8;
            }
            else {
              if (uVar12 <= uVar13) {
                uVar16 = 0;
                if (uVar12 != 0) {
                  uVar16 = uVar13 / uVar12;
                }
                uVar13 = uVar13 - uVar16 * uVar12;
              }
              if (uVar13 != uVar15) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        fVar19 = 0.0;
      }
    }
  }
LAB_025be840:
  local_180 = fVar19;
  local_190 = *(undefined8 *)PTR_DAT_04379570;
  local_1a0 = (ulong)(uint)(local_180 + local_17c * 0.5) << 0x20;
  uStack_188 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  uStack_198 = 0;
  FUN_02bd5b40(local_a8,local_1b0);
  FUN_02bdb2ec(local_a8,0);
LAB_025be370:
  cVar14 = *pcVar18;
LAB_025be374:
  uVar12 = 0;
  if (*(ulong **)(pcVar18 + 0x18) != (ulong *)0x0) {
    uVar12 = **(ulong **)(pcVar18 + 0x18);
  }
  uVar13 = local_98[0x53];
  if (cVar14 == '\0') {
    if (uVar13 != 0) {
      uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar13 - 1 & uVar12;
      }
      else {
        uVar16 = uVar12;
        if (uVar13 <= uVar12) {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = uVar12 / uVar13;
          }
          uVar16 = uVar12 - uVar16 * uVar13;
        }
      }
      plVar17 = *(long **)(local_98[0x52] + uVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar17[1] == uVar12) {
              if (plVar17[2] == uVar12) goto LAB_025be610;
            }
            else if ((plVar17[1] & uVar13 - 1) != uVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 == uVar12) {
              if (plVar17[2] == uVar12) goto LAB_025be610;
            }
            else {
              if (uVar13 <= uVar15) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar15 / uVar13;
                }
                uVar15 = uVar15 - uVar5 * uVar13;
              }
              if (uVar15 != uVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
  }
  else if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & uVar12;
    }
    else {
      uVar16 = uVar12;
      if (uVar13 <= uVar12) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = uVar12 / uVar13;
        }
        uVar16 = uVar12 - uVar16 * uVar13;
      }
    }
    plVar17 = *(long **)(local_98[0x52] + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == uVar12) {
            if (plVar17[2] == uVar12) goto LAB_025be4d0;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == uVar12) {
            if (plVar17[2] == uVar12) goto LAB_025be4d0;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  if (local_150 == (long *)0x0) goto LAB_025be3a4;
  goto LAB_025be398;
LAB_025be7f8:
  plVar17 = (long *)plVar17[3];
  fVar19 = 0.0;
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    fVar19 = (float)FUN_00d7905c(plVar17,&local_108);
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  goto LAB_025be840;
LAB_025be610:
  puVar9 = (uint *)(plVar17 + 3);
  uVar3 = *puVar9 | 0x100;
  goto LAB_025be4d8;
LAB_025be4d0:
  puVar9 = (uint *)(plVar17 + 3);
  uVar3 = *puVar9 & 0xfffffeff;
LAB_025be4d8:
  *puVar9 = uVar3;
  FUN_01839500();
  if (local_150 != (long *)0x0) {
LAB_025be398:
    (**(code **)(*local_150 + 0x20))();
  }
LAB_025be3a4:
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    lVar8 = local_a8[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
LAB_025be42c:
  pcVar18 = pcVar18 + 0x48;
  lVar10 = lVar10 + 1;
  if (pcVar18 == (char *)(param_1 + 0x378)) goto LAB_025be4ec;
  goto LAB_025be070;
LAB_025be4ec:
  if (local_a0 != (long *)0x0) {
    lVar10 = local_a0[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
joined_r0x025be524:
  if (local_98 != (long *)0x0) {
    lVar10 = local_98[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar14 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
LAB_025bdfc8:
  *(undefined1 *)(param_1 + 0x378) = 1;
  return;
}


