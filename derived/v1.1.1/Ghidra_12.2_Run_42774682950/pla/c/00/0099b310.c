/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099b310; name: FUN_0099b310
 */


void FUN_0099b310(long param_1)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_98;
  long *local_90 [2];
  undefined8 local_78;
  
  uVar11 = *(ulong *)(param_1 + 0x770);
  if ((uVar11 & 0x1f) != 0) {
    uVar13 = 0;
    do {
      uVar15 = 1L << (uVar13 & 0x3f);
      if ((uVar15 & uVar11) != 0) {
        lVar12 = param_1 + uVar13 * 0x10;
        iVar8 = *(int *)(lVar12 + 0x778);
        if (iVar8 == 0) goto LAB_0099b700;
        piVar1 = (int *)(lVar12 + 0x778);
        switch(uVar13 & 0xffffffff) {
        case 0:
          if (((*PTR_DAT_04379578 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379578);
          }
          lVar14 = *(long *)PTR_DAT_04379580;
          *(long *)PTR_DAT_04379588 = lVar14;
          FUN_0098f80c(local_90,lVar14 + 0xd8);
          if (local_90[0] != (long *)0x0) {
            FUN_0199f634(&local_120);
            if (local_120 == (undefined8 *)0x0) {
              local_98 = (long *)0x0;
            }
            else {
              FUN_009bd898(&local_98);
              puVar16 = local_120;
              if (local_120 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_120 + 1);
                do {
                  iVar8 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar8 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 + -1 == 0) {
                  local_120[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar14;
                  local_78 = *puVar16;
                  FUN_02a44274(lVar14 + 0xd8,&local_78);
                }
              }
              if (local_98 != (long *)0x0) {
                if (*(char *)(lVar12 + 0x77c) != '\0') {
                  uVar18 = FUN_025a84fc();
                  *(undefined4 *)(lVar12 + 0x784) = uVar18;
                }
                FUN_025a8668(*(undefined4 *)(lVar12 + 0x780),local_98);
                if (local_98 != (long *)0x0) {
                  lVar12 = local_98[0xb];
                  piVar2 = (int *)(lVar12 + 0xc);
                  do {
                    iVar8 = *piVar2;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                      *piVar2 = iVar8 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar8 + -1 == 0) {
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*local_98 + 0x20))();
                  }
                }
              }
            }
            if (local_90[0] != (long *)0x0) {
              lVar12 = local_90[0][0xb];
              piVar2 = (int *)(lVar12 + 0xc);
              do {
                iVar8 = *piVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_0099b6bc:
              if (iVar8 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_90[0] + 0x20))();
              }
            }
          }
          break;
        case 1:
          if (((*PTR_DAT_04379578 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379578);
          }
          lVar14 = *(long *)PTR_DAT_04379580;
          *(long *)PTR_DAT_04379588 = lVar14;
          FUN_0098f80c(local_90,lVar14 + 0xd8);
          if (local_90[0] != (long *)0x0) {
            FUN_0199f634(&local_120);
            if (local_120 == (undefined8 *)0x0) {
              local_98 = (long *)0x0;
            }
            else {
              FUN_009bd898(&local_98);
              puVar16 = local_120;
              if (local_120 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_120 + 1);
                do {
                  iVar8 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar8 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 + -1 == 0) {
                  local_120[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar14;
                  local_78 = *puVar16;
                  FUN_02a44274(lVar14 + 0xd8,&local_78);
                }
              }
              if (local_98 != (long *)0x0) {
                if (*(char *)(lVar12 + 0x77c) != '\0') {
                  uVar18 = FUN_025a87d4();
                  *(undefined4 *)(lVar12 + 0x784) = uVar18;
                }
                FUN_025a8a54(*(undefined4 *)(lVar12 + 0x780),local_98);
                if (local_98 != (long *)0x0) {
                  lVar12 = local_98[0xb];
                  piVar2 = (int *)(lVar12 + 0xc);
                  do {
                    iVar8 = *piVar2;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                      *piVar2 = iVar8 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar8 + -1 == 0) {
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*local_98 + 0x20))();
                  }
                }
              }
            }
            if (local_90[0] != (long *)0x0) {
              lVar12 = local_90[0][0xb];
              piVar2 = (int *)(lVar12 + 0xc);
              do {
                iVar8 = *piVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_0099b6bc;
            }
          }
          break;
        case 2:
          plVar17 = *(long **)(param_1 + 0x580);
          if (plVar17 != (long *)0x0) {
            lVar14 = plVar17[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar10;
            }
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (*(char *)(lVar12 + 0x77c) != '\0') {
            uVar18 = FUN_02c8f6f4(plVar17);
            *(undefined4 *)(lVar12 + 0x784) = uVar18;
          }
          *(undefined4 *)(plVar17 + 0xe) = *(undefined4 *)(lVar12 + 0x780);
          if (plVar17 != (long *)0x0) {
            lVar12 = plVar17[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
          break;
        case 3:
          local_100 = *(undefined8 *)piVar1;
          uStack_f8 = *(undefined8 *)(lVar12 + 0x780);
          local_118 = FUN_009bda9c;
          local_120 = (undefined8 *)&LAB_009bda0c;
          local_108 = &LAB_009bdaac;
          local_110 = &LAB_009bdaa0;
          FUN_0099cf6c(param_1,&local_120);
          pcVar7 = local_118;
          if (local_118 != (code *)0x0) {
            local_110 = (undefined1 *)0x0;
            local_108 = (undefined1 *)0x0;
            local_120 = (undefined8 *)0x0;
            local_118 = (code *)0x0;
            (*pcVar7)(&local_100);
          }
          break;
        case 4:
          plVar17 = *(long **)(param_1 + 0x4a0);
          uVar18 = 0x3f800000;
          if (plVar17 != *(long **)(param_1 + 0x4a8)) {
            uVar18 = 0x3f800000;
            do {
              plVar9 = (long *)FUN_0099d310(*plVar17 + 0x50);
              if (plVar9 != (long *)0x0) {
                uVar18 = (**(code **)(*plVar9 + 0xa0))();
                uVar19 = *(undefined4 *)(lVar12 + 0x780);
                *(undefined4 *)(plVar9 + 0x1e) = uVar19;
                plVar3 = (long *)plVar9[0x10];
                for (plVar9 = (long *)plVar9[0xf]; plVar9 != plVar3; plVar9 = plVar9 + 1) {
                  puVar16 = *(undefined8 **)(*plVar9 + 0xe0);
                  puVar4 = *(undefined8 **)(*plVar9 + 0xe8);
                  if ((puVar16 != puVar4) &&
                     ((**(code **)(*(long *)*puVar16 + 0x90))(uVar19), puVar16 + 1 != puVar4)) {
                    (**(code **)(*(long *)puVar16[1] + 0x90))(uVar19);
                    for (puVar16 = puVar16 + 2; puVar16 != puVar4; puVar16 = puVar16 + 1) {
                      (**(code **)(*(long *)*puVar16 + 0x90))(uVar19);
                    }
                  }
                }
              }
              plVar17 = plVar17 + 1;
            } while (plVar17 != *(long **)(param_1 + 0x4a8));
          }
          plVar17 = *(long **)(param_1 + 0x4d8);
          if (plVar17 != *(long **)(param_1 + 0x4e0)) {
            do {
              plVar9 = (long *)FUN_0099d310(*plVar17 + 0x50);
              if (plVar9 != (long *)0x0) {
                uVar18 = (**(code **)(*plVar9 + 0xa0))();
                uVar19 = *(undefined4 *)(lVar12 + 0x780);
                *(undefined4 *)(plVar9 + 0x1e) = uVar19;
                plVar3 = (long *)plVar9[0x10];
                for (plVar9 = (long *)plVar9[0xf]; plVar9 != plVar3; plVar9 = plVar9 + 1) {
                  puVar16 = *(undefined8 **)(*plVar9 + 0xe0);
                  puVar4 = *(undefined8 **)(*plVar9 + 0xe8);
                  if ((puVar16 != puVar4) &&
                     ((**(code **)(*(long *)*puVar16 + 0x90))(uVar19), puVar16 + 1 != puVar4)) {
                    (**(code **)(*(long *)puVar16[1] + 0x90))(uVar19);
                    for (puVar16 = puVar16 + 2; puVar16 != puVar4; puVar16 = puVar16 + 1) {
                      (**(code **)(*(long *)*puVar16 + 0x90))(uVar19);
                    }
                  }
                }
              }
              plVar17 = plVar17 + 1;
            } while (plVar17 != *(long **)(param_1 + 0x4e0));
          }
          if (*(char *)(lVar12 + 0x77c) != '\0') {
            *(undefined4 *)(lVar12 + 0x784) = uVar18;
          }
          break;
        default:
          goto switchD_0099b3c4_default;
        }
        iVar8 = *piVar1;
        uVar11 = *(ulong *)(param_1 + 0x770);
switchD_0099b3c4_default:
        uVar11 = uVar11 & (uVar15 ^ 0xffffffffffffffff);
        *(ulong *)(param_1 + 0x770) = uVar11;
        if (iVar8 == 1) {
          *(ulong *)(param_1 + 0x768) = *(ulong *)(param_1 + 0x768) | uVar15;
          iVar8 = *piVar1;
        }
        if (iVar8 == 2) {
          *(ulong *)(param_1 + 0x768) = *(ulong *)(param_1 + 0x768) & ~uVar15;
        }
      }
LAB_0099b700:
      uVar13 = uVar13 + 1;
    } while (uVar13 != 5);
  }
  return;
}


