/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a67a4; name: FUN_025a67a4
 */


void FUN_025a67a4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 in_q3 [16];
  undefined8 uVar22;
  long *local_58;
  
  uVar22 = in_q3._8_8_;
  uVar21 = in_q3._0_8_;
  *param_1 = 0x4248000000000000;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(long *)(param_2 + 0xe8) != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x78);
    puVar12 = *(undefined1 **)(param_2 + 0x80);
    if ((puVar12 != &DAT_cbf29ce484222645) &&
       (puVar13 = *(undefined1 **)(param_2 + 0x98), puVar13 != (undefined1 *)0x0)) {
      uVar16 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        puVar17 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar12);
      }
      else if (puVar12 < puVar13) {
        puVar17 = puVar12;
      }
      else {
        uVar4 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar12 / (ulong)puVar13;
        }
        puVar17 = puVar12 + -(uVar4 * (long)puVar13);
      }
      plVar18 = *(long **)(*(long *)(param_2 + 0x90) + (long)puVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if ((undefined1 *)plVar18[1] == puVar12) {
              if ((undefined1 *)plVar18[2] == puVar12) goto LAB_025a6910;
            }
            else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar13 + -1)) != puVar17) {
              return;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar18[1];
            if (puVar19 == puVar12) {
              if ((undefined1 *)plVar18[2] == puVar12) {
LAB_025a6910:
                if (plVar18[3] == 0) {
                  return;
                }
                FUN_025a8344(&local_58,plVar18[3]);
                puVar8 = PTR_DAT_043794d8;
                puVar7 = PTR_DAT_043794d0;
                puVar6 = PTR_DAT_043794c8;
                puVar5 = PTR_DAT_043794c0;
                if (local_58 == (long *)0x0) {
                  return;
                }
                lVar20 = local_58[0x35];
                piVar1 = (int *)(lVar20 + 0xc);
                pbVar11 = PTR_DAT_043794b0;
                puVar14 = PTR_DAT_043794b8;
                iVar15 = *(int *)(lVar20 + 0xc);
                do {
                  while( true ) {
                    plVar18 = *(long **)(lVar20 + 0x10);
                    if (((*pbVar11 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794b0), pbVar11 = PTR_DAT_043794b0,
                       puVar14 = PTR_DAT_043794b8, iVar9 != 0)) {
                      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0))
                      {
                        if (((*puVar7 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                          uVar10 = FUN_0087f8f0();
                          *(undefined8 *)puVar8 = uVar10;
                          __cxa_guard_release(puVar7);
                        }
                        *(undefined **)puVar6 = puVar8;
                        __cxa_guard_release(puVar5);
                      }
                      puVar14 = PTR_DAT_043794b8;
                      *(undefined **)PTR_DAT_043794b8 = puVar6;
                      pbVar11 = PTR_DAT_043794b0;
                      __cxa_guard_release(PTR_DAT_043794b0);
                    }
                    for (; plVar18 != (long *)puVar14; plVar18 = (long *)*plVar18) {
                    }
                    iVar9 = *piVar1;
                    if (iVar9 == iVar15) break;
                    ClearExclusiveLocal();
                    iVar15 = iVar9;
                  }
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar15 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  iVar15 = iVar9;
                } while (cVar2 != '\0');
                lVar20 = *(long *)(lVar20 + 0x18);
                plVar18 = (long *)0x0;
                if (lVar20 != 0) {
                  plVar18 = (long *)(lVar20 + -0x50);
                }
                (**(code **)(*plVar18 + 0x40))(plVar18);
                param_1[3] = uVar22;
                param_1[2] = uVar21;
                *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x70);
                if (lVar20 != 0) {
                  lVar20 = plVar18[0xb];
                  piVar1 = (int *)(lVar20 + 0xc);
                  do {
                    iVar15 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar15 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar15 + -1 == 0) {
                    *(undefined8 *)(lVar20 + 0x18) = 0;
                    (**(code **)(*plVar18 + 0x20))(plVar18);
                  }
                }
                if (local_58 == (long *)0x0) {
                  return;
                }
                lVar20 = local_58[0xb];
                piVar1 = (int *)(lVar20 + 0xc);
                do {
                  iVar15 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar15 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                  (**(code **)(*local_58 + 0x20))();
                  return;
                }
                return;
              }
            }
            else {
              if (puVar13 <= puVar19) {
                uVar16 = 0;
                if (puVar13 != (undefined1 *)0x0) {
                  uVar16 = (ulong)puVar19 / (ulong)puVar13;
                }
                puVar19 = puVar19 + -(uVar16 * (long)puVar13);
              }
              if (puVar19 != puVar17) {
                return;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
  }
  return;
}


