/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01590724; name: FUN_01590724
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01590724(long param_1)

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
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_88;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x5b0);
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  iVar10 = *(int *)(lVar14 + 0xc);
  do {
    plVar16 = *(long **)(lVar14 + 0x10);
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
      if (plVar16 == (long *)0x0) {
        return;
      }
      if (plVar16 == (long *)puVar8) break;
      plVar16 = (long *)*plVar16;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        plVar13 = (long *)(lVar14 + -0x50);
        FUN_0199c220(local_78,plVar13);
        plVar16 = local_78[0];
        puVar7 = PTR_DAT_0437a0e8;
        if (local_78[0] == (long *)0x0) goto LAB_01590800;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01590b18;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar10 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
  do {
    plVar17 = (long *)plVar16[2];
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)PTR_DAT_0437a0f0 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_01590b18;
      if (plVar17 == (long *)PTR_DAT_0437a0f0) break;
      plVar17 = (long *)*plVar17;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar12 = plVar16[3];
        plVar16 = (long *)0x0;
        plVar17 = local_78[0];
        if (lVar12 != 0) {
          plVar16 = (long *)(lVar12 + -0x50);
        }
        goto joined_r0x015908f8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01590b18:
  plVar16 = (long *)0x0;
  plVar17 = local_78[0];
joined_r0x015908f8:
  local_78[0] = plVar17;
  if (plVar17 != (long *)0x0) {
    plVar15 = plVar17 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *plVar17;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  if (plVar16 != (long *)0x0) {
    FUN_01847290(&local_80,plVar16);
    if (local_80 != (long *)0x0) {
      FUN_0199bf58(local_78,plVar13);
      plVar17 = local_78[0];
      if (local_78[0] != (long *)0x0) {
        if (*(int *)((long)local_78[0] + 0xc) != 0) {
          piVar1 = (int *)((long)local_78[0] + 0xc);
          iVar10 = *(int *)((long)local_78[0] + 0xc);
          do {
            plVar15 = (long *)plVar17[2];
            if (((*PTR_DAT_04379fc8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379fc8), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar11;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)PTR_DAT_04379fd0 = puVar6;
              __cxa_guard_release(PTR_DAT_04379fc8);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_01590c20;
              if (plVar15 == (long *)PTR_DAT_04379fd0) break;
              plVar15 = (long *)*plVar15;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar12 = plVar17[3];
                plVar17 = (long *)0x0;
                plVar15 = local_78[0];
                if (lVar12 != 0) {
                  plVar17 = (long *)(lVar12 + -0x50);
                }
                goto joined_r0x01590cf0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01590c20:
        plVar17 = (long *)0x0;
        plVar15 = local_78[0];
joined_r0x01590cf0:
        local_78[0] = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
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
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_68 = *plVar15;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
        if (plVar17 != (long *)0x0) {
          FUN_018fc6ec(plVar17);
          lVar12 = plVar17[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
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
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
        }
      }
      FUN_0199c1ac(local_78,plVar13);
      if ((local_78[0] != (long *)0x0) &&
         (FUN_0256c544(local_78[0],*(undefined1 *)(param_1 + 0x778)), local_78[0] != (long *)0x0)) {
        lVar12 = local_78[0][0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_78[0] + 0x20))();
        }
      }
      FUN_01590dc4(plVar16,param_1 + 0x738,0,0x800,0);
      FUN_0199c5b0(local_78,plVar13);
      if (local_78[0] == (long *)0x0) {
        local_88 = (long *)0x0;
      }
      else {
        FUN_009cd8d4(&local_88);
        if (local_78[0] != (long *)0x0) {
          plVar17 = local_78[0] + 1;
          do {
            iVar10 = (int)*plVar17 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *(int *)plVar17 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_78[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_68 = *local_78[0];
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
      }
      if ((local_88 != (long *)0x0) &&
         (FUN_01f07ef0(local_88,0,*(undefined1 *)(param_1 + 0x770)), local_88 != (long *)0x0)) {
        lVar12 = local_88[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
      if (local_80 != (long *)0x0) {
        lVar12 = local_80[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
    }
    lVar12 = plVar16[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
LAB_01590800:
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
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
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return;
}


