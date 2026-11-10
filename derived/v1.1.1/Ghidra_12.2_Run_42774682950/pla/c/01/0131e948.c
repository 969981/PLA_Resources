/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131e948; name: FUN_0131e948
 */


uint FUN_0131e948(void)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint unaff_w22;
  long *plVar21;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  plVar18 = *(long **)(lVar17 + 0xc0);
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0131ed98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = plVar18[0x18];
  local_70 = (long *)(local_68 + plVar18[0x19] * 8);
  FUN_0131fce0(&local_80,&local_68,&local_70);
  if (local_80 != (long *)(plVar18[0x18] + plVar18[0x19] * 8)) {
    plVar20 = (long *)*local_80;
    puVar15 = (undefined8 *)(**(code **)plVar20[10])(plVar20 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar13 != 0)) {
      uVar14 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar14;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    unaff_w22 = 0;
    if (puVar15 != (undefined8 *)0x0) {
LAB_0131ea38:
      if (puVar15 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0131eb44;
      lVar17 = plVar20[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar17 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          *(undefined8 *)(lVar17 + 0x10) = uVar14;
        }
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar19 = plVar20;
        } while (cVar4 != '\0');
        goto LAB_0131ea7c;
      }
      goto LAB_0131ed98;
    }
  }
  plVar19 = (long *)0x0;
  goto LAB_0131eaa0;
LAB_0131eb44:
  puVar15 = (undefined8 *)*puVar15;
  plVar19 = (long *)0x0;
  if (puVar15 == (undefined8 *)0x0) goto code_r0x0131eb50;
  goto LAB_0131ea38;
code_r0x0131eb50:
  lVar17 = 0;
LAB_0131ea7c:
  unaff_w22 = (uint)lVar17;
  if (plVar19 != (long *)0x0) {
    if (plVar19[0x1a] == 0) {
      local_80 = (long *)0x0;
      uStack_78 = 0;
    }
    else {
      local_80 = (long *)0x0;
      uStack_78 = 0;
      FUN_019d08dc(&local_80,plVar19[0x1a] + 0x1c0);
      plVar20 = local_80;
      puVar11 = PTR_DAT_0437c670;
      puVar10 = PTR_DAT_0437c668;
      puVar9 = PTR_DAT_043794d8;
      puVar8 = PTR_DAT_043794d0;
      if (local_80 != (long *)0x0) {
        if (*(int *)((long)local_80 + 0xc) != 0) {
          piVar1 = (int *)((long)local_80 + 0xc);
          iVar13 = *(int *)((long)local_80 + 0xc);
          do {
            plVar21 = (long *)plVar20[2];
            if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
              if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar9 = uVar14;
                __cxa_guard_release(puVar8);
              }
              *(undefined **)puVar11 = puVar9;
              __cxa_guard_release(puVar10);
            }
            while( true ) {
              if (plVar21 == (long *)0x0) goto LAB_0131ee34;
              if (plVar21 == (long *)puVar11) break;
              plVar21 = (long *)*plVar21;
            }
            iVar12 = *piVar1;
            if (iVar12 == iVar13) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar17 = plVar20[3];
                plVar20 = (long *)0x0;
                plVar21 = local_80;
                if (lVar17 != 0) {
                  plVar20 = (long *)(lVar17 + -0x50);
                }
                goto joined_r0x0131ec58;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar13 = iVar12;
          } while (iVar12 != 0);
        }
LAB_0131ee34:
        plVar20 = (long *)0x0;
        plVar21 = local_80;
joined_r0x0131ec58:
        local_80 = plVar21;
        if (plVar21 != (long *)0x0) {
          plVar2 = plVar21 + 1;
          do {
            iVar13 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            plVar21[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_68 = *plVar21;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
          }
        }
        unaff_w22 = (uint)plVar21;
        if (plVar20 != (long *)0x0) {
          plVar21 = (long *)plVar20[0xe];
          if (plVar21 != (long *)0x0) {
            lVar17 = plVar21[0xb];
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0131ed98;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_019a0184(&local_80,plVar21);
          if (local_80 == (long *)0x0) {
            local_70 = (long *)0x0;
LAB_0131ed10:
            if (plVar21 == (long *)0x0) goto LAB_0131ed30;
LAB_0131ed14:
            lVar17 = plVar21[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 != 0) goto LAB_0131ed30;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar21 + 0x20))(plVar21);
            if (local_70 == (long *)0x0) goto LAB_0131ede8;
LAB_0131ed38:
            uVar16 = FUN_01e80e78();
            plVar21 = (long *)(uVar16 & 0xffffffff);
            if (local_70 != (long *)0x0) {
              lVar17 = local_70[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 == 1) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
            bVar5 = true;
          }
          else {
            FUN_0131ff2c(&local_70);
            plVar2 = local_80;
            if (local_80 == (long *)0x0) goto LAB_0131ed10;
            plVar3 = local_80 + 1;
            do {
              iVar13 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 != 0) goto LAB_0131ed10;
            local_80[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_68 = *plVar2;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
            if (plVar21 != (long *)0x0) goto LAB_0131ed14;
LAB_0131ed30:
            if (local_70 != (long *)0x0) goto LAB_0131ed38;
LAB_0131ede8:
            bVar5 = false;
          }
          unaff_w22 = (uint)plVar21;
          lVar17 = plVar20[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
          if (bVar5) {
            bVar7 = 1;
            goto joined_r0x0131ed90;
          }
        }
      }
    }
  }
LAB_0131eaa0:
  bVar7 = 0;
joined_r0x0131ed90:
  if (plVar19 != (long *)0x0) {
    lVar17 = plVar19[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return unaff_w22 & bVar7;
}


