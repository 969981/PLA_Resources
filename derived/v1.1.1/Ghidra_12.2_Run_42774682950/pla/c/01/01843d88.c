/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01843d88; name: FUN_01843d88
 */


void FUN_01843d88(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined1 *puVar30;
  long *plVar31;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98 [2];
  long *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_68;
  
  plVar28 = *(long **)(param_1 + 0x1d8);
  if (plVar28 != *(long **)(param_1 + 0x1e0)) {
    plVar29 = plVar28 + 1;
    do {
      plVar18 = *(long **)(*plVar28 + 0x70);
      *(undefined8 *)(*plVar28 + 0x70) = 0;
      if (plVar18 != (long *)0x0) {
        lVar14 = plVar18[0xb];
        piVar13 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))();
        }
      }
      plVar18 = *(long **)(*plVar28 + 0x68);
      *(undefined8 *)(*plVar28 + 0x68) = 0;
      if (plVar18 != (long *)0x0) {
        lVar14 = plVar18[0xb];
        piVar13 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))();
        }
      }
      plVar9 = *(long **)(param_1 + 0x1e0);
      plVar18 = plVar28;
      plVar31 = plVar29;
      if (plVar29 == plVar9) {
LAB_01844830:
        plVar31 = plVar31 + -1;
        plVar9 = (long *)*plVar31;
        if (plVar9 != (long *)0x0) {
          lVar14 = plVar9[0xb];
          piVar13 = (int *)(lVar14 + 0xc);
          do {
            iVar7 = *piVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) goto LAB_01844aa8;
        }
LAB_01844854:
        if (plVar31 != plVar18) {
          while( true ) {
            plVar31 = plVar31 + -1;
            plVar9 = (long *)*plVar31;
            if (plVar9 == (long *)0x0) break;
            lVar14 = plVar9[0xb];
            piVar13 = (int *)(lVar14 + 0xc);
            do {
              iVar7 = *piVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 != 0) break;
LAB_01844aa8:
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar9 + 0x20))();
            if (plVar31 == plVar18) goto LAB_01844884;
          }
          goto LAB_01844854;
        }
      }
      else {
        plVar31 = plVar28;
        plVar27 = plVar29;
        do {
          plVar18 = (long *)*plVar31;
          *plVar31 = 0;
          if (plVar18 != (long *)0x0) {
            lVar14 = plVar18[0xb];
            piVar13 = (int *)(lVar14 + 0xc);
            do {
              iVar7 = *piVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))();
            }
          }
          lVar14 = *plVar27;
          plVar26 = plVar27 + 1;
          *plVar27 = 0;
          plVar18 = plVar31 + 1;
          *plVar31 = lVar14;
          plVar31 = plVar18;
          plVar27 = plVar26;
        } while (plVar26 != plVar9);
        plVar31 = *(long **)(param_1 + 0x1e0);
        if (plVar31 != plVar18) goto LAB_01844830;
      }
LAB_01844884:
      *(long **)(param_1 + 0x1e0) = plVar18;
    } while (plVar28 != plVar18);
  }
  puVar5 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 0x1a0) == (long *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x1f0);
  lVar14 = tpidr_el0;
  plVar28 = *(long **)(param_1 + 0x1a0);
LAB_01843e10:
  do {
    uVar16 = *(ulong *)(param_1 + 0x110);
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar11 = plVar28[2];
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar22 = uVar16 - 1 & uVar11;
      }
      else if (uVar11 < uVar16) {
        uVar22 = uVar11;
      }
      else {
        uVar22 = 0;
        if (uVar16 != 0) {
          uVar22 = uVar11 / uVar16;
        }
        uVar22 = uVar11 - uVar22 * uVar16;
      }
      puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x108) + uVar22 * 8);
      if ((puVar20 != (undefined8 *)0x0) && (plVar29 = (long *)*puVar20, plVar29 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar29[1] == uVar11) {
              if (plVar29[2] == uVar11) goto LAB_01843f10;
            }
            else if ((plVar29[1] & uVar16 - 1) != uVar22) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar29[1];
            if (uVar17 == uVar11) {
              if (plVar29[2] == uVar11) goto LAB_01843f10;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar4 = 0;
                if (uVar16 != 0) {
                  uVar4 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar4 * uVar16;
              }
              if (uVar17 != uVar22) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    plVar29 = (long *)*plVar28;
    FUN_0184b0d8(&local_80,param_1 + 0x170,plVar28);
    puVar20 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar20 != (undefined8 *)0x0) {
      plVar28 = (long *)*local_78;
      uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar16 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar28,puVar20,0x20,8);
          goto LAB_01844cec;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,puVar20,0x20,8);
    }
LAB_01844cec:
    plVar28 = plVar29;
    if (plVar29 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01843f10:
  local_88 = (long *)plVar29[3];
  lVar25 = local_88[0xb];
  if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar25 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
    *(undefined8 *)(lVar25 + 0x10) = uVar10;
  }
  plVar18 = local_88;
  piVar13 = (int *)(lVar25 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
    if (bVar3) {
      *piVar13 = *piVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar16 = FUN_0183ba94(local_88[0xe]);
  if ((uVar16 & 1) == 0) {
    plVar29 = (long *)*plVar28;
    if (plVar18 == (long *)0x0) goto joined_r0x01844d58;
    lVar25 = plVar18[0xb];
    piVar13 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar16 = FUN_0183b96c(plVar18[0xe]);
    if ((uVar16 & 1) != 0) {
      FUN_01836b18(local_98,plVar18[0xe]);
      puVar20 = local_98[0];
      if ((local_98[0] != (undefined8 *)0x0) && (*(int *)((long)local_98[0] + 0xc) != 0)) {
        piVar13 = (int *)((long)local_98[0] + 0xc);
        iVar7 = *(int *)((long)local_98[0] + 0xc);
        do {
          plVar18 = (long *)puVar20[2];
          if (((*PTR_DAT_04381a68 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04381a68), iVar8 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
              uVar10 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar10;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_04381a70 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_04381a68);
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_01843f84;
            if (plVar18 == (long *)PTR_DAT_04381a70) break;
            plVar18 = (long *)*plVar18;
          }
          iVar8 = *piVar13;
          if (iVar8 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar25 = puVar20[3];
              if (lVar25 != 0) {
                plVar18 = (long *)(lVar25 + -0x50);
                FUN_018451e8(plVar18);
                local_80 = (undefined8 *)0x0;
                local_78 = (undefined8 *)0x0;
                FUN_00b5fc1c(lVar25 + 0x20,&local_80);
                puVar20 = local_80;
                if (local_80 != (undefined8 *)0x0) {
                  piVar13 = (int *)(local_80 + 1);
                  do {
                    iVar7 = *piVar13;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                    if (bVar3) {
                      *piVar13 = iVar7 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar7 + -1 == 0) {
                    local_80[2] = 0;
                    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(puVar5);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_a8 = (undefined8 *)*puVar20;
                    FUN_02a44274(lVar15 + 0xd8,&local_a8);
                  }
                }
                lVar25 = *(long *)(lVar25 + 8);
                piVar13 = (int *)(lVar25 + 0xc);
                do {
                  iVar7 = *piVar13;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar3) {
                    *piVar13 = iVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar25 + 0x18) = 0;
                  (**(code **)(*plVar18 + 0x20))(plVar18);
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar8;
        } while (iVar8 != 0);
      }
LAB_01843f84:
      puVar30 = *(undefined1 **)(local_88[0xe] + 0x1f0);
      if ((puVar30 != &DAT_cbf29ce484222645) &&
         (puVar12 = *(undefined1 **)(param_1 + 0xa8), puVar12 != (undefined1 *)0x0)) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = (ulong)puVar30 / (ulong)puVar12;
        }
        uVar17 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar21 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)puVar30);
        }
        else {
          puVar21 = puVar30;
          if (puVar12 <= puVar30) {
            puVar21 = puVar30 + -(uVar16 * (long)puVar12);
          }
        }
        lVar25 = *(long *)(param_1 + 0xa0);
        plVar18 = *(long **)(lVar25 + (long)puVar21 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          puVar19 = puVar12 + -1;
          if (uVar17 < 2) {
            do {
              if ((undefined1 *)plVar18[1] == puVar30) {
                if ((undefined1 *)plVar18[2] == puVar30) goto LAB_01844054;
              }
              else if ((undefined1 *)((ulong)plVar18[1] & (ulong)puVar19) != puVar21) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              puVar23 = (undefined1 *)plVar18[1];
              if (puVar23 == puVar30) {
                if ((undefined1 *)plVar18[2] == puVar30) goto LAB_01844054;
              }
              else {
                if (puVar12 <= puVar23) {
                  uVar11 = 0;
                  if (puVar12 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar23 / (ulong)puVar12;
                  }
                  puVar23 = puVar23 + -(uVar11 * (long)puVar12);
                }
                if (puVar23 != puVar21) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      goto LAB_018440c0;
    }
    if (*(int *)(plVar18[0xe] + 0x354) != 0) {
      FUN_01838ba4();
    }
    lVar25 = plVar18[0xb];
    piVar13 = (int *)(lVar25 + 0xc);
    plVar29 = (long *)*plVar28;
    do {
      iVar7 = *piVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar7 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  goto joined_r0x01844d58;
LAB_01844054:
  if (uVar17 < 2) {
    puVar21 = (undefined1 *)((ulong)puVar19 & (ulong)puVar30);
    puVar20 = *(undefined8 **)(lVar25 + (long)puVar21 * 8);
  }
  else {
    puVar21 = puVar30;
    if (puVar12 <= puVar30) {
      puVar21 = puVar30 + -(uVar16 * (long)puVar12);
    }
    puVar20 = *(undefined8 **)(lVar25 + (long)puVar21 * 8);
  }
  if ((puVar20 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar20, plVar18 != (long *)0x0)) {
    if (uVar17 < 2) {
      do {
        if ((undefined1 *)plVar18[1] == puVar30) {
          if ((undefined1 *)plVar18[2] == puVar30) goto LAB_018445e0;
        }
        else if ((undefined1 *)((ulong)plVar18[1] & (ulong)puVar19) != puVar21) break;
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
    else {
      do {
        puVar23 = (undefined1 *)plVar18[1];
        if (puVar23 == puVar30) {
          if ((undefined1 *)plVar18[2] == puVar30) goto LAB_018445e0;
        }
        else {
          if (puVar12 <= puVar23) {
            uVar11 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar11 = (ulong)puVar23 / (ulong)puVar12;
            }
            puVar23 = puVar23 + -(uVar11 * (long)puVar12);
          }
          if (puVar23 != puVar21) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_018440c0:
  puVar12 = *(undefined1 **)(local_88[0xe] + 0x1f8);
  (**(code **)(*(long *)local_88[0xd] + 0x10))(&local_80);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,&local_80);
  puVar20 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar13 = (int *)(local_80 + 1);
    do {
      iVar7 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_80[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_68 = *puVar20;
      FUN_02a44274(lVar25 + 0xd8,&local_68);
    }
  }
  puVar20 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    piVar13 = (int *)(local_a8 + 1);
    uVar10 = *local_a8;
    do {
      iVar7 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_a8[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_80 = (undefined8 *)*puVar20;
      FUN_02a44274(lVar25 + 0xd8,&local_80);
    }
  }
  lVar25 = *(long *)(param_1 + 0x228);
  for (plVar18 = *(long **)(lVar25 + 0x168); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
    (**(code **)(*(long *)plVar18[3] + 0x40))((long *)plVar18[3],uVar10);
  }
  if ((puVar30 != (undefined1 *)0xae652fb65c121b9b) && (puVar30 != &DAT_cbf29ce484222645)) {
    for (plVar18 = *(long **)(lVar25 + 0x100); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      (**(code **)(*(long *)plVar18[3] + 0x40))((long *)plVar18[3],puVar30);
    }
  }
  if ((puVar12 != (undefined1 *)0xae652fb65c121b9b) && (puVar12 != &DAT_cbf29ce484222645)) {
    for (plVar18 = *(long **)(lVar25 + 0x98); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      (**(code **)(*(long *)plVar18[3] + 0x40))((long *)plVar18[3],puVar12);
    }
  }
  plVar31 = local_88;
  lVar25 = local_88[0xe];
  plVar18 = *(long **)(lVar25 + 0x2c0);
  if (plVar18 != (long *)0x0) {
    *(uint *)(plVar18 + 3) = *(uint *)(plVar18 + 3) | 2;
    FUN_01839500(lVar25);
    for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      *(uint *)(plVar18 + 3) = *(uint *)(plVar18 + 3) | 2;
      FUN_01839500(lVar25);
    }
    lVar25 = plVar31[0xe];
  }
  FUN_01838c14(lVar25,*(uint *)(lVar25 + 0x354) | 0x20,0);
  lVar25 = *(long *)(param_1 + 0x1e0);
  if (lVar25 == *(long *)(param_1 + 0x1e8)) {
    uVar17 = *(ulong *)(param_1 + 0x1f8);
    lVar25 = lVar25 - *(long *)(param_1 + 0x1d8) >> 3;
    uVar16 = lVar25 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = *(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1d8);
    if ((ulong)(lVar15 >> 3) < uVar17 >> 1) {
      uVar11 = lVar15 >> 2;
      uVar17 = uVar16;
      if (uVar16 <= uVar11) {
        uVar17 = uVar11;
      }
    }
    if (uVar17 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar17 << 3,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar24 = lVar15 + lVar25 * 8;
    FUN_0184b24c(puVar1,lVar24,&local_88);
    plVar18 = *(long **)(param_1 + 0x1d8);
    plVar31 = *(long **)(param_1 + 0x1e0);
    lVar25 = lVar24 + 8;
    if (plVar31 == plVar18) {
      plVar31 = plVar18;
    }
    else {
      do {
        lVar24 = lVar24 + -8;
        plVar31 = plVar31 + -1;
        FUN_0184b24c(puVar1,lVar24,plVar31);
      } while (plVar18 != plVar31);
      plVar18 = *(long **)(param_1 + 0x1d8);
      plVar31 = *(long **)(param_1 + 0x1e0);
    }
    *(long *)(param_1 + 0x1d8) = lVar24;
    *(long *)(param_1 + 0x1e0) = lVar25;
    lVar25 = *(long *)(param_1 + 0x1e8);
    *(ulong *)(param_1 + 0x1e8) = lVar15 + uVar17 * 8;
    while (plVar31 != plVar18) {
      plVar31 = plVar31 + -1;
      plVar9 = (long *)*plVar31;
      if (plVar9 != (long *)0x0) {
        lVar15 = plVar9[0xb];
        piVar13 = (int *)(lVar15 + 0xc);
        do {
          iVar7 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))();
        }
      }
    }
    if (plVar18 != (long *)0x0) {
      plVar31 = (long *)*puVar1;
      lVar25 = lVar25 - (long)plVar18;
      uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
      if ((uVar16 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar31,plVar18,lVar25,8);
          goto LAB_01844310;
        }
      }
      (**(code **)(*plVar31 + 0x18))(plVar31,plVar18,lVar25,8);
    }
  }
  else {
    FUN_0184b24c(puVar1,lVar25,&local_88);
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 8;
  }
LAB_01844310:
  uVar11 = *(ulong *)(param_1 + 0x110);
  uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar17 = plVar29[1];
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    uVar17 = uVar11 - 1 & uVar17;
  }
  else if (uVar11 <= uVar17) {
    uVar22 = 0;
    if (uVar11 != 0) {
      uVar22 = uVar17 / uVar11;
    }
    uVar17 = uVar17 - uVar22 * uVar11;
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x108) + uVar17 * 8);
  do {
    plVar31 = plVar18;
    plVar18 = (long *)*plVar31;
  } while ((long *)*plVar31 != plVar29);
  if (plVar31 == (long *)(param_1 + 0x138)) {
LAB_018443a4:
    if (*plVar29 != 0) {
      uVar22 = *(ulong *)(*plVar29 + 8);
      if (uVar16 < 2) {
        uVar22 = uVar22 & uVar11 - 1;
      }
      else if (uVar11 <= uVar22) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar22 / uVar11;
        }
        uVar22 = uVar22 - uVar4 * uVar11;
      }
      if (uVar22 == uVar17) goto LAB_018443d4;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar17 * 8) = 0;
  }
  else {
    uVar22 = plVar31[1];
    if (uVar16 < 2) {
      uVar22 = uVar22 & uVar11 - 1;
    }
    else if (uVar11 <= uVar22) {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar22 / uVar11;
      }
      uVar22 = uVar22 - uVar4 * uVar11;
    }
    if (uVar22 != uVar17) goto LAB_018443a4;
  }
LAB_018443d4:
  lVar25 = *plVar29;
  if (lVar25 != 0) {
    uVar22 = *(ulong *)(lVar25 + 8);
    if (uVar16 < 2) {
      uVar22 = uVar22 & uVar11 - 1;
    }
    else if (uVar11 <= uVar22) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = uVar22 / uVar11;
      }
      uVar22 = uVar22 - uVar16 * uVar11;
    }
    if (uVar22 != uVar17) {
      *(long **)(*(long *)(param_1 + 0x108) + uVar22 * 8) = plVar31;
      lVar25 = *plVar29;
    }
  }
  *plVar31 = lVar25;
  *plVar29 = 0;
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -1;
  plVar18 = (long *)plVar29[3];
  if (plVar18 != (long *)0x0) {
    lVar25 = plVar18[0xb];
    piVar13 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))();
    }
  }
  plVar18 = *(long **)(param_1 + 0x140);
  uVar16 = (**(code **)(*plVar18 + 0xc0))(plVar18);
  if ((uVar16 & 1) == 0) {
LAB_018444a0:
    (**(code **)(*plVar18 + 0x18))(plVar18,plVar29,0x20,8);
  }
  else {
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_018444a0;
    FUN_02bcc824(plVar18,plVar29,0x20,8);
  }
  plVar29 = (long *)*plVar28;
  FUN_0184b0d8(&local_80,param_1 + 0x170,plVar28);
  puVar6 = local_80;
  local_80 = (undefined8 *)0x0;
  puVar20 = local_98[0];
  if (puVar6 != (undefined8 *)0x0) {
    plVar28 = (long *)*local_78;
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar28,puVar6,0x20,8);
        puVar20 = local_98[0];
        goto joined_r0x0184455c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,puVar6,0x20,8);
    puVar20 = local_98[0];
  }
joined_r0x0184455c:
  local_98[0] = puVar20;
  if (puVar20 != (undefined8 *)0x0) {
    piVar13 = (int *)(puVar20 + 1);
    do {
      iVar7 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar20[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_80 = (undefined8 *)*puVar20;
      FUN_02a44274(lVar25 + 0xd8,&local_80);
    }
  }
  if (local_88 != (long *)0x0) {
    lVar25 = local_88[0xb];
    piVar13 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
joined_r0x01844d58:
  plVar28 = plVar29;
  if (plVar29 == (long *)0x0) {
    return;
  }
  goto LAB_01843e10;
LAB_018445e0:
  if (uVar17 < 2) {
    puVar21 = (undefined1 *)((ulong)puVar19 & (ulong)puVar30);
  }
  else {
    puVar21 = puVar30;
    if (puVar12 <= puVar30) {
      puVar21 = puVar30 + -(uVar16 * (long)puVar12);
    }
  }
  plVar31 = *(long **)(lVar25 + (long)puVar21 * 8);
  do {
    plVar9 = plVar31;
    plVar31 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar18);
  if (plVar9 == (long *)(param_1 + 0xd0)) {
LAB_0184463c:
    if (*plVar18 != 0) {
      puVar23 = *(undefined1 **)(*plVar18 + 8);
      if (uVar17 < 2) {
        puVar23 = (undefined1 *)((ulong)puVar23 & (ulong)puVar19);
      }
      else if (puVar12 <= puVar23) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = (ulong)puVar23 / (ulong)puVar12;
        }
        puVar23 = puVar23 + -(uVar16 * (long)puVar12);
      }
      if (puVar23 == puVar21) goto LAB_0184466c;
    }
    *(undefined8 *)(lVar25 + (long)puVar21 * 8) = 0;
  }
  else {
    puVar23 = (undefined1 *)plVar9[1];
    if (uVar17 < 2) {
      puVar23 = (undefined1 *)((ulong)puVar23 & (ulong)puVar19);
    }
    else if (puVar12 <= puVar23) {
      uVar16 = 0;
      if (puVar12 != (undefined1 *)0x0) {
        uVar16 = (ulong)puVar23 / (ulong)puVar12;
      }
      puVar23 = puVar23 + -(uVar16 * (long)puVar12);
    }
    if (puVar23 != puVar21) goto LAB_0184463c;
  }
LAB_0184466c:
  lVar25 = *plVar18;
  if (lVar25 != 0) {
    puVar23 = *(undefined1 **)(lVar25 + 8);
    if (uVar17 < 2) {
      puVar23 = (undefined1 *)((ulong)puVar23 & (ulong)puVar19);
    }
    else if (puVar12 <= puVar23) {
      uVar16 = 0;
      if (puVar12 != (undefined1 *)0x0) {
        uVar16 = (ulong)puVar23 / (ulong)puVar12;
      }
      puVar23 = puVar23 + -(uVar16 * (long)puVar12);
    }
    if (puVar23 != puVar21) {
      *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar23 * 8) = plVar9;
      lVar25 = *plVar18;
    }
  }
  *plVar9 = lVar25;
  *plVar18 = 0;
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -1;
  plVar31 = (long *)plVar18[3];
  if (plVar31 != (long *)0x0) {
    lVar25 = plVar31[0xb];
    piVar13 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))();
    }
  }
  plVar31 = *(long **)(param_1 + 0xd8);
  uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
  if ((uVar16 & 1) != 0) {
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar14 + 0x38d480)) {
      FUN_02bcc824(plVar31,plVar18,0x20,8);
      goto LAB_018440c0;
    }
  }
  (**(code **)(*plVar31 + 0x18))(plVar31,plVar18,0x20,8);
  goto LAB_018440c0;
}


