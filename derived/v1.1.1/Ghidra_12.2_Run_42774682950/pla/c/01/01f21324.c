/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f21324; name: FUN_01f21324
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f21324(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar15 = *(long **)(lVar13 + 0xc0);
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01f217b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = plVar15[0x18];
  local_70 = local_68 + plVar15[0x19] * 8;
  FUN_01f23690(&local_80,&local_68,&local_70);
  if (local_80 != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
    plVar17 = (long *)*local_80;
    puVar12 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
      uVar11 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar11;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar12 != (undefined8 *)0x0) {
LAB_01f21414:
      if (puVar12 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01f2150c;
      lVar13 = plVar17[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f217b4;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar16 = plVar17;
      } while (cVar3 != '\0');
LAB_01f21458:
      if (plVar16 == (long *)0x0) goto LAB_01f21498;
      if (plVar16[0x1a] == 0) {
        local_80 = (long *)0x0;
        uStack_78 = 0;
      }
      else {
        local_80 = (long *)0x0;
        uStack_78 = 0;
        FUN_019d08dc(&local_80,plVar16[0x1a] + 0x1c0);
        plVar17 = local_80;
        puVar8 = PTR_DAT_0437c670;
        puVar7 = PTR_DAT_0437c668;
        puVar6 = PTR_DAT_043794d8;
        puVar5 = PTR_DAT_043794d0;
        if (local_80 != (long *)0x0) {
          if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_01f21850:
            plVar17 = (long *)0x0;
            plVar18 = local_80;
          }
          else {
            piVar1 = (int *)((long)local_80 + 0xc);
            iVar10 = *(int *)((long)local_80 + 0xc);
            while( true ) {
              plVar18 = (long *)plVar17[2];
              if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)puVar6 = uVar11;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)puVar8 = puVar6;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                if (plVar18 == (long *)0x0) goto LAB_01f21850;
                if (plVar18 == (long *)puVar8) break;
                plVar18 = (long *)*plVar18;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) break;
              ClearExclusiveLocal();
LAB_01f215d4:
              iVar10 = iVar9;
              if (iVar9 == 0) goto LAB_01f21850;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01f215d4;
            lVar13 = plVar17[3];
            plVar17 = (long *)0x0;
            plVar18 = local_80;
            if (lVar13 != 0) {
              plVar17 = (long *)(lVar13 + -0x50);
            }
          }
          local_80 = plVar18;
          if (plVar18 != (long *)0x0) {
            plVar2 = plVar18 + 1;
            do {
              iVar10 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              plVar18[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_68 = *plVar18;
              FUN_02a44274(lVar13 + 0xd8,&local_68);
            }
          }
          if (plVar17 != (long *)0x0) {
            plVar18 = (long *)plVar17[0xe];
            if (plVar18 == (long *)0x0) {
              if (_DAT_00000210 == 2) {
LAB_01f218ac:
                FUN_0199c694(&local_80,0);
joined_r0x01f218bc:
                if (local_80 != (long *)0x0) {
LAB_01f21758:
                  local_80[0x1e] = local_80[0x1e] | 1;
                  lVar13 = local_80[0xb];
                  piVar1 = (int *)(lVar13 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar10 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*local_80 + 0x20))();
                  }
                }
              }
            }
            else {
              lVar13 = plVar18[0xb];
              if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f217b4;
              if (*(long *)(lVar13 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                *(undefined8 *)(lVar13 + 0x10) = uVar11;
              }
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar14 = plVar18[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              lVar13 = plVar18[0x42];
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
              }
              if ((int)lVar13 == 2) {
                plVar18 = (long *)plVar17[0xe];
                if (plVar18 == (long *)0x0) goto LAB_01f218ac;
                lVar13 = plVar18[0xb];
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01f217b4;
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar11;
                }
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                FUN_0199c694(&local_80,plVar18);
                lVar13 = plVar18[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 != 0) goto joined_r0x01f218bc;
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
                if (local_80 == (long *)0x0) goto LAB_01f21780;
                goto LAB_01f21758;
              }
            }
LAB_01f21780:
            lVar13 = plVar17[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
        }
      }
      lVar13 = plVar16[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 != 0) goto LAB_01f21498;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
      if (plVar15 == (long *)0x0) {
        return;
      }
      goto LAB_01f2149c;
    }
  }
LAB_01f21498:
  if (plVar15 != (long *)0x0) {
LAB_01f2149c:
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
LAB_01f2150c:
  puVar12 = (undefined8 *)*puVar12;
  plVar16 = (long *)0x0;
  if (puVar12 == (undefined8 *)0x0) goto LAB_01f21458;
  goto LAB_01f21414;
}


