/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131ef4c; name: FUN_0131ef4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0131ef4c(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long *unaff_x23;
  long *plVar22;
  long *plVar23;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar16 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar16;
  plVar18 = *(long **)(lVar16 + 0xc0);
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0131f3fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = plVar18[0x18];
  local_70 = local_68 + plVar18[0x19] * 8;
  FUN_0131fce0(&local_80,&local_68,&local_70);
  if (local_80 != (long *)(plVar18[0x18] + plVar18[0x19] * 8)) {
    plVar20 = (long *)*local_80;
    puVar14 = (undefined8 *)(**(code **)plVar20[10])(plVar20 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar12 != 0)) {
      uVar13 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar13;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar14 != (undefined8 *)0x0) {
LAB_0131f03c:
      if (puVar14 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0131f148;
      lVar16 = plVar20[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0131f3fc;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar19 = plVar20;
      } while (cVar3 != '\0');
LAB_0131f080:
      if (plVar19 == (long *)0x0) goto LAB_0131f0a4;
      if (plVar19[0x1a] == 0) {
        local_80 = (long *)0x0;
        uStack_78 = 0;
        goto LAB_0131f0a4;
      }
      local_80 = (long *)0x0;
      uStack_78 = 0;
      FUN_019d08dc(&local_80,plVar19[0x1a] + 0x1c0);
      plVar20 = local_80;
      puVar10 = PTR_DAT_0437c670;
      puVar9 = PTR_DAT_0437c668;
      puVar8 = PTR_DAT_043794d8;
      puVar7 = PTR_DAT_043794d0;
      unaff_x23 = local_80;
      if (local_80 == (long *)0x0) goto LAB_0131f0a4;
      if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_0131f4b8:
        plVar20 = (long *)0x0;
        unaff_x23 = local_80;
      }
      else {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar12 = *(int *)((long)local_80 + 0xc);
        while( true ) {
          plVar22 = (long *)plVar20[2];
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar13;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar22 == (long *)0x0) goto LAB_0131f4b8;
            if (plVar22 == (long *)puVar10) break;
            plVar22 = (long *)*plVar22;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar12) break;
          ClearExclusiveLocal();
LAB_0131f20c:
          iVar12 = iVar11;
          if (iVar11 == 0) goto LAB_0131f4b8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0131f20c;
        lVar16 = plVar20[3];
        plVar20 = (long *)0x0;
        unaff_x23 = local_80;
        if (lVar16 != 0) {
          plVar20 = (long *)(lVar16 + -0x50);
        }
      }
      local_80 = unaff_x23;
      if (unaff_x23 != (long *)0x0) {
        plVar22 = unaff_x23 + 1;
        do {
          iVar12 = (int)*plVar22 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          unaff_x23[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_68 = *unaff_x23;
          FUN_02a44274(lVar16 + 0xd8,&local_68);
        }
      }
      if (plVar20 == (long *)0x0) goto LAB_0131f0a4;
      unaff_x23 = (long *)plVar20[0xe];
      if (unaff_x23 == (long *)0x0) {
        if (_DAT_00000210 != 2) goto LAB_0131f44c;
        unaff_x23 = (long *)0x0;
        bVar4 = true;
LAB_0131f364:
        FUN_0199d068(&local_80,unaff_x23);
        plVar22 = local_80;
        if (local_80 == (long *)0x0) {
          plVar22 = (long *)0x0;
        }
        else {
          if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_0131f684:
            plVar22 = (long *)0x0;
            plVar23 = local_80;
          }
          else {
            piVar1 = (int *)((long)local_80 + 0xc);
            iVar12 = *(int *)((long)local_80 + 0xc);
            while( true ) {
              plVar23 = (long *)plVar22[2];
              if (((*PTR_DAT_04379f78 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379f78), iVar11 != 0)) {
                if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                  uVar13 = FUN_0087f8f0();
                  *(undefined8 *)puVar8 = uVar13;
                  __cxa_guard_release(puVar7);
                }
                *(undefined **)PTR_DAT_04379f80 = puVar8;
                __cxa_guard_release(PTR_DAT_04379f78);
              }
              while( true ) {
                if (plVar23 == (long *)0x0) goto LAB_0131f684;
                if (plVar23 == (long *)PTR_DAT_04379f80) break;
                plVar23 = (long *)*plVar23;
              }
              iVar11 = *piVar1;
              if (iVar11 == iVar12) break;
              ClearExclusiveLocal();
LAB_0131f560:
              iVar12 = iVar11;
              if (iVar11 == 0) goto LAB_0131f684;
            }
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0131f560;
            lVar16 = plVar22[3];
            plVar22 = (long *)0x0;
            plVar23 = local_80;
            if (lVar16 != 0) {
              plVar22 = (long *)(lVar16 + -0x50);
            }
          }
          local_80 = plVar23;
          if (plVar23 != (long *)0x0) {
            plVar2 = plVar23 + 1;
            do {
              iVar12 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 == 0) {
              plVar23[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_68 = *plVar23;
              FUN_02a44274(lVar16 + 0xd8,&local_68);
            }
          }
        }
        if (!bVar4) {
          lVar16 = unaff_x23[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*unaff_x23 + 0x20))(unaff_x23);
          }
        }
        if (plVar22 == (long *)0x0) {
          bVar4 = false;
        }
        else {
          uVar15 = FUN_01f634f0(plVar22);
          lVar16 = plVar22[0xb];
          unaff_x23 = (long *)(uVar15 & 0xffffffff);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 == 1) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22);
          }
          bVar4 = true;
        }
      }
      else {
        lVar16 = unaff_x23[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0131f3fc;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar13;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar17 = unaff_x23[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        lVar16 = unaff_x23[0x42];
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23);
        }
        if ((int)lVar16 == 2) {
          unaff_x23 = (long *)plVar20[0xe];
          if (unaff_x23 == (long *)0x0) {
            bVar4 = true;
          }
          else {
            lVar16 = unaff_x23[0xb];
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0131f3fc;
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar13;
            }
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            bVar4 = false;
          }
          goto LAB_0131f364;
        }
LAB_0131f44c:
        bVar4 = false;
      }
      uVar21 = (uint)unaff_x23;
      lVar16 = plVar20[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
        if (bVar4) goto LAB_0131f3f0;
        goto LAB_0131f0a4;
      }
      if (!bVar4) goto LAB_0131f0a4;
LAB_0131f3f0:
      bVar6 = 1;
      if (plVar19 == (long *)0x0) goto LAB_0131f0c8;
      goto LAB_0131f0ac;
    }
  }
  plVar19 = (long *)0x0;
LAB_0131f0a4:
  uVar21 = (uint)unaff_x23;
  bVar6 = 0;
  if (plVar19 != (long *)0x0) {
LAB_0131f0ac:
    lVar16 = plVar19[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
LAB_0131f0c8:
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return uVar21 & bVar6;
LAB_0131f148:
  puVar14 = (undefined8 *)*puVar14;
  plVar19 = (long *)0x0;
  if (puVar14 == (undefined8 *)0x0) goto LAB_0131f080;
  goto LAB_0131f03c;
}


