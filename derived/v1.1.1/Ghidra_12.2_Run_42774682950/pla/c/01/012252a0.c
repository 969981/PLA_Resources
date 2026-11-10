/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012252a0; name: FUN_012252a0
 */


void FUN_012252a0(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  long *local_68;
  
  iVar11 = FUN_00d5294c();
  puVar10 = PTR_DAT_04379568;
  puVar9 = PTR_DAT_04379560;
  puVar8 = PTR_DAT_04379558;
  if (iVar11 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar15 = *(long *)puVar9;
    *(long *)puVar10 = lVar15;
    plVar13 = *(long **)(lVar15 + 0x248);
    if (plVar13 == (long *)0x0) {
      uVar17 = (ulong)DAT_000004a9;
    }
    else {
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01225bb0;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar19) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar15 = plVar13[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      uVar17 = (ulong)*(byte *)((long)plVar13 + 0x4a9);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar19) {
          *piVar2 = iVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    uVar12 = FUN_00d4bf2c(param_1,0);
    if ((*(uint *)(param_1 + uVar17 * 4 + 0x169c) & 1 << (ulong)(uVar12 & 0x1f)) != 0) {
      FUN_00d4bd5c(param_1,0,0);
    }
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar13 = *(long **)(lVar15 + 0xd0);
  if (plVar13 != (long *)0x0) {
    plVar16 = plVar13 + 10;
    do {
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar19) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar16 = (long *)plVar13[0xb];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar19) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar1 = plVar13 + 10;
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *(int *)plVar1 = iVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar13 + 0x10))();
    uVar12 = *(uint *)(param_1 + 0x171c);
    if ((uVar12 >> 6 & 1) == 0) goto LAB_01225364;
LAB_012259d4:
    *(uint *)(param_1 + 0x171c) = uVar12 ^ 0x40;
    (**(code **)(*plVar16 + 0x38))(plVar16,6);
    bVar19 = true;
    iVar11 = FUN_00d53034(param_1,1,6);
    if (iVar11 == -1) goto LAB_01225368;
    bVar19 = true;
    FUN_00d5437c(param_1,1,6,iVar11);
    uVar12 = *(uint *)(param_1 + 0x171c);
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x171c);
    if ((uVar12 >> 6 & 1) != 0) goto LAB_012259d4;
LAB_01225364:
    bVar19 = false;
LAB_01225368:
    uVar12 = *(uint *)(param_1 + 0x171c);
  }
  if ((uVar12 >> 5 & 1) != 0) {
    *(uint *)(param_1 + 0x171c) = uVar12 ^ 0x20;
    (**(code **)(*plVar16 + 0x38))(plVar16,5);
    bVar19 = true;
    iVar11 = FUN_00d53034(param_1,1,5);
    if (iVar11 != -1) {
      bVar19 = true;
      FUN_00d5437c(param_1,1,5,iVar11);
    }
  }
  if ((*(uint *)(param_1 + 0x171c) >> 4 & 1) != 0) {
    *(uint *)(param_1 + 0x171c) = *(uint *)(param_1 + 0x171c) ^ 0x10;
    (**(code **)(*plVar16 + 0x38))(plVar16,4);
    bVar19 = true;
    iVar11 = FUN_00d53034(param_1,1,4);
    if (iVar11 != -1) {
      bVar19 = true;
      FUN_00d5437c(param_1,1,4,iVar11);
    }
  }
  if ((*(uint *)(param_1 + 0x171c) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x171c) = *(uint *)(param_1 + 0x171c) ^ 8;
    (**(code **)(*plVar16 + 0x38))(plVar16,3);
    bVar19 = true;
    iVar11 = FUN_00d53034(param_1,1,3);
    if (iVar11 != -1) {
      bVar19 = true;
      FUN_00d5437c(param_1,1,3,iVar11);
    }
  }
  if ((*(uint *)(param_1 + 0x171c) >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x171c) = *(uint *)(param_1 + 0x171c) ^ 4;
    (**(code **)(*plVar16 + 0x38))(plVar16,2);
    bVar19 = true;
    iVar11 = FUN_00d53034(param_1,1,2);
    if (iVar11 != -1) {
      bVar19 = true;
      FUN_00d5437c(param_1,1,2,iVar11);
    }
  }
  if ((*(uint *)(param_1 + 0x171c) >> 1 & 1) != 0) {
    *(uint *)(param_1 + 0x171c) = *(uint *)(param_1 + 0x171c) ^ 2;
    bVar19 = true;
    (**(code **)(*plVar16 + 0x38))(plVar16,1);
    iVar11 = FUN_00d53034(param_1,1,1);
    if (iVar11 != -1) {
      bVar19 = true;
      FUN_00d5437c(param_1,1,1,iVar11);
    }
  }
  if ((*(uint *)(param_1 + 0x171c) & 1) == 0) {
    if (bVar19) goto LAB_012258a4;
    if (plVar16 != (long *)0x0) goto LAB_01225534;
LAB_0122554c:
    bVar4 = *puVar8;
  }
  else {
    *(uint *)(param_1 + 0x171c) = *(uint *)(param_1 + 0x171c) ^ 1;
    (**(code **)(*plVar16 + 0x38))(plVar16,0);
    iVar11 = FUN_00d53034(param_1,1,0);
    if (iVar11 != -1) {
      FUN_00d5437c(param_1,1,0,iVar11);
    }
LAB_012258a4:
    uVar17 = (ulong)*(byte *)(plVar16 + 0x11);
    if (*(byte *)(plVar16 + 0x11) < 6) {
      do {
        uVar12 = (int)uVar17 + 1;
        lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + uVar17 * 0x10);
        *(undefined4 *)(lVar15 + 8) = 1;
        *(undefined2 *)(lVar15 + 0xc) = 0;
        *(undefined4 *)(lVar15 + 0x10) = 0;
        *(undefined2 *)(lVar15 + 0x14) = 0;
        *(undefined4 *)(lVar15 + 0x18) = 0;
        *(undefined2 *)(lVar15 + 0x1c) = 0;
        *(undefined8 *)(lVar15 + 0x20) = 0xffffffff00000000;
        *(undefined4 *)(lVar15 + 0x28) = 3;
        uVar17 = (ulong)uVar12;
      } while (uVar12 != 6);
    }
    FUN_00d51e18(param_1,1);
    FUN_0121cd4c(param_1);
    if (plVar16 == (long *)0x0) goto LAB_0122554c;
LAB_01225534:
    plVar13 = plVar16 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar19) {
        *(int *)plVar13 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 != 0) goto LAB_0122554c;
    (**(code **)(*plVar16 + 0x10))(plVar16);
    bVar4 = *puVar8;
  }
  if (((bVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)puVar9;
  *(long *)puVar10 = lVar15;
  plVar13 = *(long **)(lVar15 + 0x248);
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01225bb0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar19) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)puVar9;
  *(long *)puVar10 = lVar15;
  plVar16 = *(long **)(lVar15 + 0x240);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01225bb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar19) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  bVar4 = *(byte *)((long)plVar13 + 0x4a9);
  if ((char)plVar13[0x95] == ' ') {
    iVar11 = FUN_010e630c();
    if (iVar11 == -0x1d) goto LAB_012257e8;
  }
  else if ((char)plVar13[0x95] == '\0') goto LAB_012257e8;
  uVar17 = 0;
  bVar19 = false;
  do {
    while( true ) {
      puVar3 = (uint *)(param_1 + uVar17 * 4 + 0x169c);
      if (uVar17 == bVar4) {
        uVar18 = 0;
        do {
          uVar12 = 1 << (ulong)((uint)uVar18 & 0x1f);
          if ((*puVar3 & uVar12) != 0) {
            *puVar3 = *puVar3 ^ uVar12;
            local_68 = *(long **)(param_1 + 0x1660);
            if (local_68 != (long *)0x0) {
              plVar1 = local_68 + 10;
              do {
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar19) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            FUN_010e2508(plVar16,(ulong)bVar4,uVar18 & 0xffffffff,&local_68);
            if (local_68 != (long *)0x0) {
              plVar1 = local_68 + 10;
              do {
                iVar11 = (int)*plVar1 + -1;
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar19) {
                  *(int *)plVar1 = iVar11;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
            }
            bVar19 = true;
            lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x638) + 0xa8) + uVar18 * 0x10);
            *(undefined4 *)(lVar15 + 8) = 1;
            *(undefined2 *)(lVar15 + 0xc) = 0;
            *(undefined4 *)(lVar15 + 0x10) = 0;
            *(undefined2 *)(lVar15 + 0x14) = 0;
            *(undefined4 *)(lVar15 + 0x18) = 0;
            *(undefined2 *)(lVar15 + 0x1c) = 0;
            *(undefined8 *)(lVar15 + 0x20) = 0xffffffff00000000;
            *(undefined4 *)(lVar15 + 0x28) = 3;
            iVar11 = FUN_00d53034(param_1,0,uVar18 & 0xffffffff);
            if (iVar11 != -1) {
              FUN_00d5437c(param_1,0,uVar18 & 0xffffffff,iVar11);
              bVar19 = true;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x1e);
      }
      else {
        uVar12 = 0;
        do {
          uVar5 = 1 << (ulong)(uVar12 & 0x1f);
          if ((*puVar3 & uVar5) != 0) {
            *puVar3 = *puVar3 ^ uVar5;
            local_68 = *(long **)(param_1 + 0x1660);
            if (local_68 != (long *)0x0) {
              plVar1 = local_68 + 10;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            FUN_010e2508(plVar16,uVar17 & 0xffffffff,uVar12,&local_68);
            if (local_68 != (long *)0x0) {
              plVar1 = local_68 + 10;
              do {
                iVar11 = (int)*plVar1 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *(int *)plVar1 = iVar11;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x1e);
      }
      uVar17 = uVar17 + 1;
      if (*(byte *)(plVar13 + 0x95) == 0x20) break;
      if ((uint)*(byte *)(plVar13 + 0x95) <= uVar17) goto LAB_012257d8;
    }
    iVar11 = FUN_010e630c();
  } while (uVar17 < iVar11 + 0x1d);
LAB_012257d8:
  if (bVar19) {
    FUN_00d51e18(param_1,0);
  }
LAB_012257e8:
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar19) {
        *piVar2 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar15 = plVar13[0xb];
  piVar2 = (int *)(lVar15 + 0xc);
  do {
    iVar11 = *piVar2;
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar19) {
      *piVar2 = iVar11 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))();
  }
  if (*(char *)(param_1 + 0x1641) != '\0') {
    FUN_0121aa4c(param_1);
  }
  return;
}


