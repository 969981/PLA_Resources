/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158f5f8; name: FUN_0158f5f8
 */


void FUN_0158f5f8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_88;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x5b0);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar15 + 0xc);
  iVar11 = *(int *)(lVar15 + 0xc);
  do {
    plVar17 = *(long **)(lVar15 + 0x10);
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar12;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return;
      }
      if (plVar17 == (long *)puVar8) break;
      plVar17 = (long *)*plVar17;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 == 0) {
          return;
        }
        plVar14 = (long *)(lVar15 + -0x50);
        FUN_0199c220(local_78,plVar14);
        plVar17 = local_78[0];
        puVar7 = PTR_DAT_0437a0e8;
        if (local_78[0] == (long *)0x0) goto LAB_0158f6d4;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_0158f9fc;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar11 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
  do {
    plVar18 = (long *)plVar17[2];
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar12;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)PTR_DAT_0437a0f0 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_0158f9fc;
      if (plVar18 == (long *)PTR_DAT_0437a0f0) break;
      plVar18 = (long *)*plVar18;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar13 = plVar17[3];
        plVar17 = (long *)0x0;
        plVar18 = local_78[0];
        if (lVar13 != 0) {
          plVar17 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x0158f7cc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while (iVar10 != 0);
LAB_0158f9fc:
  plVar17 = (long *)0x0;
  plVar18 = local_78[0];
joined_r0x0158f7cc:
  local_78[0] = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar16 = plVar18 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      plVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
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
    FUN_01847290(&local_80,plVar17);
    if (local_80 != (long *)0x0) {
      FUN_0199bf58(local_78,plVar14);
      plVar18 = local_78[0];
      if (local_78[0] != (long *)0x0) {
        if (*(int *)((long)local_78[0] + 0xc) != 0) {
          piVar1 = (int *)((long)local_78[0] + 0xc);
          iVar11 = *(int *)((long)local_78[0] + 0xc);
          do {
            plVar16 = (long *)plVar18[2];
            if (((*PTR_DAT_04379fc8 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379fc8), iVar10 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar12;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)PTR_DAT_04379fd0 = puVar6;
              __cxa_guard_release(PTR_DAT_04379fc8);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_0158fb04;
              if (plVar16 == (long *)PTR_DAT_04379fd0) break;
              plVar16 = (long *)*plVar16;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar13 = plVar18[3];
                plVar18 = (long *)0x0;
                plVar16 = local_78[0];
                if (lVar13 != 0) {
                  plVar18 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x0158fbd4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_0158fb04:
        plVar18 = (long *)0x0;
        plVar16 = local_78[0];
joined_r0x0158fbd4:
        local_78[0] = plVar16;
        if (plVar16 != (long *)0x0) {
          plVar2 = plVar16 + 1;
          do {
            iVar11 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            plVar16[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *plVar16;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar18 != (long *)0x0) {
          FUN_018fc680(plVar18);
          lVar13 = plVar18[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
      }
      FUN_0199c5b0(local_78,plVar14);
      if (local_78[0] == (long *)0x0) {
        local_88 = (long *)0x0;
      }
      else {
        FUN_009cd8d4(&local_88);
        plVar18 = local_78[0];
        if (local_78[0] != (long *)0x0) {
          plVar16 = local_78[0] + 1;
          do {
            iVar11 = (int)*plVar16 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *(int *)plVar16 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            local_78[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *plVar18;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
      }
      if (local_88 != (long *)0x0) {
        bVar9 = FUN_01f07f48(local_88,0);
        *(byte *)(param_1 + 0x770) = bVar9 & 1;
        FUN_01f07ef0(local_88,0,0);
        if (local_88 != (long *)0x0) {
          lVar13 = local_88[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
      FUN_0199c1ac(local_78,plVar14);
      if (local_78[0] != (long *)0x0) {
        bVar9 = FUN_0256c53c();
        *(byte *)(param_1 + 0x778) = bVar9 & 1;
        if (local_78[0] != (long *)0x0) {
          lVar13 = local_78[0][0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_78[0] + 0x20))();
          }
        }
      }
      FUN_01590dc4(plVar17,param_1 + 0x738,1,0x800,0);
      if (local_80 != (long *)0x0) {
        lVar13 = local_80[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
    }
    lVar13 = plVar17[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
LAB_0158f6d4:
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return;
}


