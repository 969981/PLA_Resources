/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a74bb8; name: FUN_01a74bb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01a74bb8(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *extraout_x11;
  float fVar15;
  undefined8 uVar13;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_q3 [16];
  long *local_38;
  
  uVar17 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  if (param_1[0x8e] != 0) {
    lVar6 = nn::os::GetCurrentThread();
    plVar12 = param_1 + 0x9e;
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x4e4));
          while (*plVar12 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01a74c20;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01a74c20:
    puVar7 = (ulong *)(**(code **)(*param_1 + 0x108))(param_1);
    uVar9 = param_1[0xa0];
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar8 = *puVar7;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & uVar8;
      }
      else if (uVar8 < uVar9) {
        uVar11 = uVar8;
      }
      else {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
      plVar12 = *(long **)(param_1[0x9f] + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar12[1] == uVar8) {
              if (plVar12[2] == uVar8) goto LAB_01a74d20;
            }
            else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar12[1];
            if (uVar10 == uVar8) {
              if (plVar12[2] == uVar8) goto LAB_01a74d20;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar5 = 0;
                if (uVar9 != 0) {
                  uVar5 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar5 * uVar9;
              }
              if (uVar10 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_01a74d78;
  }
  goto LAB_01a74fb8;
LAB_01a74d20:
  if ((char)plVar12[6] != '\0') {
    lVar6 = param_1[0x8e];
    fVar22 = (float)plVar12[0xe];
    fVar15 = (float)((ulong)plVar12[0xe] >> 0x20);
    fVar16 = (float)plVar12[0xf];
    fVar18 = (float)((ulong)plVar12[0xf] >> 0x20);
    fVar19 = (float)*(undefined8 *)(lVar6 + 0x410) * fVar22 +
             (float)*(undefined8 *)(lVar6 + 0x420) * fVar15 +
             (float)*(undefined8 *)(lVar6 + 0x430) * fVar16 +
             (float)*(undefined8 *)(lVar6 + 0x440) * fVar18;
    fVar20 = (float)((ulong)*(undefined8 *)(lVar6 + 0x410) >> 0x20) * fVar22 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x420) >> 0x20) * fVar15 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x430) >> 0x20) * fVar16 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x440) >> 0x20) * fVar18;
    fVar21 = (float)*(undefined8 *)(lVar6 + 0x418) * fVar22 +
             (float)*(undefined8 *)(lVar6 + 0x428) * fVar15 +
             (float)*(undefined8 *)(lVar6 + 0x438) * fVar16 +
             (float)*(undefined8 *)(lVar6 + 0x448) * fVar18;
    fVar22 = (float)((ulong)*(undefined8 *)(lVar6 + 0x418) >> 0x20) * fVar22 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x428) >> 0x20) * fVar15 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x438) >> 0x20) * fVar16 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x448) >> 0x20) * fVar18;
    uVar13 = CONCAT17((byte)((uint)fVar20 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar20 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar20,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                          (byte)((ulong)_DAT_038897c0 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                   (byte)((ulong)_DAT_038897c0 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar19 >> 8
                                                                                  ) & (byte)((ulong)
                                                  _DAT_038897c0 >> 8),
                                                  SUB41(fVar19,0) & (byte)_DAT_038897c0)))))));
    uVar17 = CONCAT17((byte)((uint)fVar22 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                      CONCAT16((byte)((uint)fVar22 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30),
                               CONCAT15((byte)((uint)fVar22 >> 8) &
                                        (byte)((ulong)_UNK_038897c8 >> 0x28),
                                        CONCAT14(SUB41(fVar22,0) &
                                                 (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                                          (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                                                   (byte)((ulong)_UNK_038897c8 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar21 >> 8
                                                                                  ) & (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar21,0) & (byte)_UNK_038897c8)))))));
    param_1[0x9e] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x4e4));
    goto LAB_01a74ffc;
  }
LAB_01a74d78:
  param_1[0x9e] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x4e4));
  puVar7 = (ulong *)(**(code **)(*param_1 + 0x108))(param_1);
  uVar9 = param_1[0x90];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar8 = *puVar7;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      uVar11 = uVar8;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar8 / uVar9;
      }
      uVar11 = uVar8 - uVar11 * uVar9;
    }
    plVar12 = *(long **)(param_1[0x8f] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_01a74e8c;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_01a74e8c;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_01a74fb8;
LAB_01a74e8c:
  puVar7 = (ulong *)(**(code **)(*param_1 + 0x108))(param_1);
  uVar9 = param_1[0x90];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar8 = *puVar7;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      uVar11 = uVar8;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar8 / uVar9;
      }
      uVar11 = uVar8 - uVar11 * uVar9;
    }
    plVar12 = *(long **)(param_1[0x8f] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_01a74f90;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_01a74f90;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  FUN_01a7a7a0();
  plVar12 = extraout_x11;
LAB_01a74f90:
  if ((short)plVar12[6] != -1) {
    FUN_02b6a9fc(param_1[0x8e]);
    uVar13 = CONCAT17((byte)((ulong)uVar13 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((ulong)uVar13 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((ulong)uVar13 >> 0x28) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar13 >> 0x20) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar13 >> 0x18) &
                                                          (byte)((ulong)_DAT_038897c0 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar13 >> 0x10) &
                                                                   (byte)((ulong)_DAT_038897c0 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((ulong)uVar13 >>
                                                                                  8) &
                                                                            (byte)((ulong)
                                                  _DAT_038897c0 >> 8),
                                                  (byte)uVar13 & (byte)_DAT_038897c0)))))));
    uVar17 = CONCAT17((byte)((ulong)uVar17 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                      CONCAT16((byte)((ulong)uVar17 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30),
                               CONCAT15((byte)((ulong)uVar17 >> 0x28) &
                                        (byte)((ulong)_UNK_038897c8 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                 (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar17 >> 0x18) &
                                                          (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                                                   (byte)((ulong)_UNK_038897c8 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((ulong)uVar17 >>
                                                                                  8) &
                                                                            (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  (byte)uVar17 & (byte)_UNK_038897c8)))))));
    goto LAB_01a74ffc;
  }
LAB_01a74fb8:
  FUN_009c69bc(&local_38,param_1);
  (**(code **)(*local_38 + 0x40))();
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
LAB_01a74ffc:
  auVar14._8_8_ = uVar17;
  auVar14._0_8_ = uVar13;
  return auVar14;
}


