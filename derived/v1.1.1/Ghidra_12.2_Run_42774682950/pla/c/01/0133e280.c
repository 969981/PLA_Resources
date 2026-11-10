/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133e280; name: FUN_0133e280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133e280(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar15 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar3 = *(uint *)(lVar15 + 400);
  if (uVar3 != 0) {
    uVar18 = 0;
    piVar16 = (int *)(lVar15 + 0x20);
LAB_0133e2d4:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar16 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar16 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_72837ff1f1cec6a2) || (*piVar16 != 10)) goto LAB_0133e70c;
    if (0xf < (uint)uVar18) {
      plVar21 = (long *)0x0;
      goto LAB_0133e308;
    }
    plVar21 = *(long **)(piVar16 + -2);
    if (plVar21 == (long *)0x0) goto LAB_0133e308;
    lVar15 = plVar21[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar16 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0133e308:
      plVar8 = (long *)plVar21[0xd];
      goto joined_r0x0133e30c;
    }
    goto LAB_0133eb10;
  }
LAB_0133e71c:
  plVar21 = (long *)0x0;
  plVar8 = _DAT_00000068;
joined_r0x0133e30c:
  if (plVar8 != (long *)0x0) {
    plVar23 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar21 == (long *)0x0) {
LAB_0133e344:
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  else {
    lVar15 = plVar21[0xb];
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 != 0) goto LAB_0133e344;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar23 = *(long **)(lVar15 + 0x100);
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar24 = (long *)plVar23[0x20];
  if (plVar24 != (long *)0x0) {
    plVar13 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = (long *)plVar24[0xe];
  if (plVar13 != (long *)0x0) {
    plVar22 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar22 = (long *)plVar13[0xb];
  lVar15 = param_1 + 0x180;
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar1 = plVar13 + 10;
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  plVar13 = plVar24 + 10;
  do {
    iVar12 = (int)*plVar13 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  plVar24 = plVar23 + 10;
  do {
    iVar12 = (int)*plVar24 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  puVar9 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar11 = PTR_DAT_04379568;
  puVar10 = PTR_DAT_04379560;
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar23 = *(long **)(lVar17 + 0x290);
  if (plVar23 == (long *)0x0) {
    local_68 = _DAT_000000d0;
  }
  else {
    lVar17 = plVar23[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0133eb10;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = *piVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar17 = plVar23[0xb];
    piVar16 = (int *)(lVar17 + 0xc);
    local_68 = plVar23[0x1a];
    do {
      iVar12 = *piVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar5) {
        *piVar16 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((local_68 != -0x3f15b8ab654a0c27) &&
     (FUN_016a50f0(&local_88,plVar22,&local_68,*(undefined8 *)(param_1 + 8)), plVar23 = local_88,
     local_88 != (long *)0x0)) {
    plVar24 = local_88 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (local_88 != (long *)0x0) {
      plVar13 = local_88 + 10;
      do {
        iVar12 = (int)*plVar13 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    iVar12 = *(int *)((long)plVar23 + 100);
    FUN_00d2e2f0(0,lVar15,"anime_switch_no_mssn");
    FUN_016a50f0(&local_88,plVar22,&local_68,*(undefined8 *)(param_1 + 8));
    plVar13 = local_88;
    if (local_88 != (long *)0x0) {
      plVar1 = local_88 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      iVar6 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    if (local_88 != (long *)0x0) {
      plVar23 = local_88 + 10;
      do {
        iVar6 = (int)*plVar23 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *(int *)plVar23 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 400);
    local_88 = (long *)0xa7c773a8334b3461;
    pcStack_80 = "pane_P_icon_mssn_00";
    local_78 = 0x13;
    local_70 = (long *)0x0;
    lVar15 = FUN_00d63240(*(undefined8 *)(param_1 + 0x2c8),&local_88);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (lVar15 != 0) {
      uVar25 = 2;
      if (iVar12 != 0) {
        uVar25 = 3;
      }
      FUN_01308270(uVar14,uVar25,lVar15,0,0);
    }
    local_88 = (long *)0x3f803c0f0657bdd5;
    pcStack_80 = "pane_T_header_mssn_00";
    local_78 = 0x15;
    local_70 = (long *)0x0;
    FUN_0283ce7c(plVar21,&local_88,plVar13[0xd],10);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    FUN_0137fc60(*(undefined8 *)(param_1 + 0x5d0),local_68);
    plVar23 = plVar13 + 10;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    goto joined_r0x0133e8a4;
  }
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar17 = *(long *)puVar10;
  *(long *)puVar11 = lVar17;
  plVar23 = *(long **)(lVar17 + 0x228);
  if (plVar23 == (long *)0x0) {
    FUN_00d2e2f0(0x3f800000,lVar15,"anime_switch_no_mssn");
    goto joined_r0x0133e8a4;
  }
  lVar17 = plVar23[0xb];
  if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0133eb10:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar17 + 0x10) == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
    *(undefined8 *)(lVar17 + 0x10) = uVar14;
  }
  piVar16 = (int *)(lVar17 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar5) {
      *piVar16 = *piVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar25 = 0x3f800000;
  uVar18 = ((long *)plVar23[0x37])[1];
  if (uVar18 != 0) {
    uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar18 - 1 & 0x3c20fa092f91efd3;
    }
    else if (uVar18 < 0x3c20fa092f91efd4) {
      uVar20 = 0;
      if (uVar18 != 0) {
        uVar20 = 0x3c20fa092f91efd3 / uVar18;
      }
      uVar20 = 0x3c20fa092f91efd3 - uVar20 * uVar18;
    }
    else {
      uVar20 = 0x3c20fa092f91efd3;
    }
    plVar24 = *(long **)(*(long *)plVar23[0x37] + uVar20 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar24[1] == 0x3c20fa092f91efd3) {
            if (plVar24[2] == 0x3c20fa092f91efd3) goto LAB_0133ea48;
          }
          else if ((plVar24[1] & uVar18 - 1) != uVar20) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar24[1];
          if (uVar19 == 0x3c20fa092f91efd3) {
            if (plVar24[2] == 0x3c20fa092f91efd3) goto LAB_0133ea48;
          }
          else {
            if (uVar18 <= uVar19) {
              uVar7 = 0;
              if (uVar18 != 0) {
                uVar7 = uVar19 / uVar18;
              }
              uVar19 = uVar19 - uVar7 * uVar18;
            }
            if (uVar19 != uVar20) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_0133ea5c:
  FUN_00d2e2f0(uVar25,lVar15,"anime_switch_no_mssn");
  lVar15 = plVar23[0xb];
  piVar16 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar16;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar5) {
      *piVar16 = iVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
joined_r0x0133e8a4:
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 10;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 10;
    do {
      iVar12 = (int)*plVar21 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
LAB_0133e70c:
  uVar18 = uVar18 + 1;
  piVar16 = piVar16 + 6;
  if (uVar3 == uVar18) goto LAB_0133e71c;
  goto LAB_0133e2d4;
LAB_0133ea48:
  uVar25 = 0x3f800000;
  if ((char)plVar24[3] != '\0') {
    uVar25 = 0x40000000;
  }
  goto LAB_0133ea5c;
}


