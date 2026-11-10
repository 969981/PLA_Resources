/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bd01c0; name: FUN_01bd01c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd01c0(long param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  undefined1 auVar25 [16];
  undefined1 in_q3 [16];
  long *local_80 [3];
  long *local_68;
  long *local_58;
  
  puVar11 = PTR_DAT_04379d88;
  puVar10 = PTR_DAT_04379d80;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  uVar23 = in_q3._8_8_;
  uVar16 = in_q3._0_8_;
  if (*(long *)(param_1 + 0x200) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x200) + 0xc) == 0) {
    return;
  }
  lVar17 = *(long *)(param_1 + 0x210);
  iVar12 = 0;
  if (lVar17 != 0) {
    if (*(int *)(lVar17 + 0xc) == 0) {
LAB_01bd05f4:
      iVar12 = 0;
    }
    else {
      piVar2 = (int *)(lVar17 + 0xc);
      iVar13 = *(int *)(lVar17 + 0xc);
      do {
        puVar19 = *(undefined8 **)(lVar17 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar15;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_01bd05f4;
        while (puVar19 != (undefined8 *)puVar11) {
          puVar19 = (undefined8 *)*puVar19;
          iVar12 = 0;
          if (puVar19 == (undefined8 *)0x0) goto LAB_01bd0200;
        }
        iVar3 = *piVar2;
        if (iVar3 == iVar13) {
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar1) {
            *piVar2 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01bd0540;
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar18 = (long *)(lVar17 + -0x50);
            iVar12 = FUN_025acbdc(plVar18);
            lVar17 = *(long *)(lVar17 + 8);
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar2;
              cVar4 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar1) {
                *piVar2 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            break;
          }
          goto LAB_01bd05f4;
        }
        ClearExclusiveLocal();
LAB_01bd0540:
        iVar12 = 0;
        iVar13 = iVar3;
      } while (iVar3 != 0);
    }
  }
LAB_01bd0200:
  if (*(long *)(param_1 + 0x200) == 0) {
    local_80[0] = (long *)0x0;
    auVar25 = ZEXT816(0);
    uVar16 = _DAT_0388a3e0;
    uVar23 = _UNK_0388a3e8;
  }
  else {
    FUN_00cfac20(local_80);
    if (local_80[0] == (long *)0x0) {
      auVar25 = ZEXT816(0);
      uVar16 = _DAT_0388a3e0;
      uVar23 = _UNK_0388a3e8;
    }
    else {
      FUN_009c69bc(&local_58);
      (**(code **)(*local_58 + 0x40))();
      if (local_58 != (long *)0x0) {
        lVar17 = local_58[0xb];
        piVar2 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar2;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar1) {
            *piVar2 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      FUN_009c69bc(&local_58,param_1);
      auVar25 = *(undefined1 (*) [16])(local_58 + 0x1a);
      if (local_58 != (long *)0x0) {
        lVar17 = local_58[0xb];
        piVar2 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar2;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar1) {
            *piVar2 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (local_80[0] != (long *)0x0) {
        lVar17 = local_80[0][0xb];
        piVar2 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar2;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar1) {
            *piVar2 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
    }
  }
  fVar20 = (float)uVar16 - auVar25._0_4_;
  fVar21 = (float)((ulong)uVar16 >> 0x20) - auVar25._4_4_;
  fVar22 = (float)uVar23 - auVar25._8_4_;
  fVar24 = (float)((ulong)uVar23 >> 0x20) - auVar25._12_4_;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  fVar24 = fVar24 * fVar24;
  if (iVar12 == 3) {
    bVar1 = true;
    if (*(char *)(param_1 + 0x278) != '\0') goto LAB_01bd027c;
LAB_01bd024c:
    if (!bVar1) {
      return;
    }
    uVar14 = FUN_01bd144c(param_1,0);
    puVar9 = PTR_DAT_0437a6e0;
    puVar8 = PTR_DAT_0437a6d8;
    if ((((uVar14 & 1) == 0) && (lVar17 = *(long *)(param_1 + 0x220), lVar17 != 0)) &&
       (*(int *)(lVar17 + 0xc) != 0)) {
      piVar2 = (int *)(lVar17 + 0xc);
      iVar12 = *(int *)(lVar17 + 0xc);
      do {
        plVar18 = *(long **)(lVar17 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          uVar16 = FUN_00ad3750();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_01bd02e4;
          if (plVar18 == (long *)puVar9) break;
          plVar18 = (long *)*plVar18;
        }
        iVar13 = *piVar2;
        if (iVar13 == iVar12) {
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar1) {
            *piVar2 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar17 = *(long *)(lVar17 + 0x18);
            if (lVar17 != 0) {
              plVar18 = (long *)(lVar17 + -0x50);
              uVar14 = FUN_02c90b50(plVar18,1);
              if ((uVar14 & 1) != 0) {
                *(undefined1 *)(param_1 + 0x278) = 1;
                *(undefined4 *)(param_1 + 0x27c) = 0x42;
              }
              lVar17 = *(long *)(lVar17 + 8);
              piVar2 = (int *)(lVar17 + 0xc);
              do {
                iVar12 = *piVar2 + -1;
                cVar4 = '\x01';
                bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar1) {
                  *piVar2 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_01bd06bc:
              if (iVar12 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
  }
  else {
    auVar25._4_4_ = fVar21;
    auVar25._0_4_ = fVar20;
    auVar25._8_4_ = fVar22;
    auVar25._12_4_ = fVar24;
    auVar5._4_4_ = fVar21;
    auVar5._0_4_ = fVar20;
    auVar5._8_4_ = fVar22;
    auVar5._12_4_ = fVar24;
    auVar25 = NEON_ext(auVar25,auVar5,8,1);
    bVar1 = auVar25._0_4_ + fVar20 + auVar25._4_4_ + fVar21 <=
            *(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x26c);
    if (*(char *)(param_1 + 0x278) == '\0') goto LAB_01bd024c;
LAB_01bd027c:
    if (bVar1) goto LAB_01bd0280;
    uVar14 = FUN_01bd144c(param_1,0);
    puVar9 = PTR_DAT_0437a6e0;
    puVar8 = PTR_DAT_0437a6d8;
    if ((((uVar14 & 1) != 0) && (lVar17 = *(long *)(param_1 + 0x220), lVar17 != 0)) &&
       (*(int *)(lVar17 + 0xc) != 0)) {
      piVar2 = (int *)(lVar17 + 0xc);
      iVar12 = *(int *)(lVar17 + 0xc);
      do {
        plVar18 = *(long **)(lVar17 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          uVar16 = FUN_00ad3750();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_01bd02e4;
          if (plVar18 == (long *)puVar9) break;
          plVar18 = (long *)*plVar18;
        }
        iVar13 = *piVar2;
        if (iVar13 == iVar12) {
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar1) {
            *piVar2 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01bd0700;
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar18 = (long *)(lVar17 + -0x50);
            FUN_02c91f14(plVar18);
            *(undefined1 *)(param_1 + 0x278) = 0;
            lVar17 = *(long *)(lVar17 + 8);
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar2 + -1;
              cVar4 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar1) {
                *piVar2 = iVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            goto LAB_01bd06bc;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01bd0700:
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
  }
LAB_01bd02e4:
  if (*(char *)(param_1 + 0x278) == '\0') {
    return;
  }
LAB_01bd0280:
  auVar6._4_4_ = fVar21;
  auVar6._0_4_ = fVar20;
  auVar6._8_4_ = fVar22;
  auVar6._12_4_ = fVar24;
  auVar7._4_4_ = fVar21;
  auVar7._0_4_ = fVar20;
  auVar7._8_4_ = fVar22;
  auVar7._12_4_ = fVar24;
  auVar25 = NEON_ext(auVar6,auVar7,8,1);
  if ((((auVar25._0_4_ + fVar20 + auVar25._4_4_ + fVar21 <=
         *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x270)) &&
       (iVar12 = *(int *)(param_1 + 0x27c), *(int *)(param_1 + 0x27c) = iVar12 + 1, 0x40 < iVar12))
      && (lVar17 = *(long *)(param_1 + 0x240), lVar17 != 0)) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar2 = (int *)(lVar17 + 0xc);
    iVar12 = *(int *)(lVar17 + 0xc);
    do {
      uVar14 = FUN_01bd1cd8(*(undefined8 *)(lVar17 + 0x10));
      if ((uVar14 & 1) == 0) {
        return;
      }
      iVar13 = *piVar2;
      if (iVar13 == iVar12) {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar1) {
          *piVar2 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 == 0) {
            return;
          }
          plVar18 = (long *)(lVar17 + -0x50);
          FUN_02a4754c(local_80,&DAT_04245730);
          FUN_0290b66c(plVar18,local_80,0);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          *(undefined4 *)(param_1 + 0x27c) = 0;
          lVar17 = *(long *)(lVar17 + 8);
          piVar2 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar2;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar1) {
              *piVar2 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
  return;
}


