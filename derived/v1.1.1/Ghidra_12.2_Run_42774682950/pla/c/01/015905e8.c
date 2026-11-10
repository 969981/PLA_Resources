/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015905e8; name: FUN_015905e8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_015905e8(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plStack_c8;
  long *plStack_c0;
  long *aplStack_b8 [2];
  long lStack_a8;
  
  if (*param_2 != 0) {
    lVar13 = FUN_015915b0();
    puVar9 = PTR_DAT_043796e8;
    puVar8 = PTR_DAT_043796e0;
    puVar7 = PTR_DAT_043794d8;
    puVar6 = PTR_DAT_043794d0;
    lVar18 = *(long *)(lVar13 + 0x5b0);
    if (lVar18 == 0) {
      return;
    }
    if (*(int *)(lVar18 + 0xc) == 0) {
      return;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    iVar11 = *(int *)(lVar18 + 0xc);
    do {
      plVar17 = *(long **)(lVar18 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        if (plVar17 == (long *)puVar9) break;
        plVar17 = (long *)*plVar17;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 == 0) {
            return;
          }
          plVar16 = (long *)(lVar18 + -0x50);
          FUN_0199c220(aplStack_b8,plVar16);
          plVar17 = aplStack_b8[0];
          puVar8 = PTR_DAT_0437a0e8;
          if (aplStack_b8[0] == (long *)0x0) goto LAB_01590800;
          if (*(int *)((long)aplStack_b8[0] + 0xc) == 0) goto LAB_01590b18;
          piVar1 = (int *)((long)aplStack_b8[0] + 0xc);
          iVar11 = *(int *)((long)aplStack_b8[0] + 0xc);
          goto LAB_015908ac;
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
  }
  (**(code **)**(undefined8 **)(param_1 + 8))();
  *(undefined8 *)(param_1 + 8) = 0;
  plVar17 = *(long **)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = (**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((uVar12 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar17,uVar14,uVar3,8);
      goto LAB_01590698;
    }
  }
  (**(code **)(*plVar17 + 0x18))(plVar17,uVar14,uVar3,8);
LAB_01590698:
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
LAB_015908ac:
  do {
    plVar20 = (long *)plVar17[2];
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar14;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)PTR_DAT_0437a0f0 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar20 == (long *)0x0) goto LAB_01590b18;
      if (plVar20 == (long *)PTR_DAT_0437a0f0) break;
      plVar20 = (long *)*plVar20;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar15 = plVar17[3];
        plVar17 = (long *)0x0;
        plVar20 = aplStack_b8[0];
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + -0x50);
        }
        goto joined_r0x015908f8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while (iVar10 != 0);
LAB_01590b18:
  plVar17 = (long *)0x0;
  plVar20 = aplStack_b8[0];
joined_r0x015908f8:
  aplStack_b8[0] = plVar20;
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 1;
    do {
      iVar11 = (int)*plVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      plVar20[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      lStack_a8 = *plVar20;
      FUN_02a44274(lVar15 + 0xd8,&lStack_a8);
    }
  }
  if (plVar17 != (long *)0x0) {
    FUN_01847290(&plStack_c0,plVar17);
    if (plStack_c0 != (long *)0x0) {
      FUN_0199bf58(aplStack_b8,plVar16);
      plVar20 = aplStack_b8[0];
      if (aplStack_b8[0] != (long *)0x0) {
        if (*(int *)((long)aplStack_b8[0] + 0xc) != 0) {
          piVar1 = (int *)((long)aplStack_b8[0] + 0xc);
          iVar11 = *(int *)((long)aplStack_b8[0] + 0xc);
          do {
            plVar19 = (long *)plVar20[2];
            if (((*PTR_DAT_04379fc8 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379fc8), iVar10 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar14;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)PTR_DAT_04379fd0 = puVar7;
              __cxa_guard_release(PTR_DAT_04379fc8);
            }
            while( true ) {
              if (plVar19 == (long *)0x0) goto LAB_01590c20;
              if (plVar19 == (long *)PTR_DAT_04379fd0) break;
              plVar19 = (long *)*plVar19;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar15 = plVar20[3];
                plVar20 = (long *)0x0;
                plVar19 = aplStack_b8[0];
                if (lVar15 != 0) {
                  plVar20 = (long *)(lVar15 + -0x50);
                }
                goto joined_r0x01590cf0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_01590c20:
        plVar20 = (long *)0x0;
        plVar19 = aplStack_b8[0];
joined_r0x01590cf0:
        aplStack_b8[0] = plVar19;
        if (plVar19 != (long *)0x0) {
          plVar2 = plVar19 + 1;
          do {
            iVar11 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            plVar19[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            lStack_a8 = *plVar19;
            FUN_02a44274(lVar15 + 0xd8,&lStack_a8);
          }
        }
        if (plVar20 != (long *)0x0) {
          FUN_018fc6ec(plVar20);
          lVar15 = plVar20[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
        }
      }
      FUN_0199c1ac(aplStack_b8,plVar16);
      if ((aplStack_b8[0] != (long *)0x0) &&
         (FUN_0256c544(aplStack_b8[0],*(undefined1 *)(lVar13 + 0x778)),
         aplStack_b8[0] != (long *)0x0)) {
        lVar15 = aplStack_b8[0][0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*aplStack_b8[0] + 0x20))();
        }
      }
      FUN_01590dc4(plVar17,lVar13 + 0x738,0,0x800,0);
      FUN_0199c5b0(aplStack_b8,plVar16);
      if (aplStack_b8[0] == (long *)0x0) {
        plStack_c8 = (long *)0x0;
      }
      else {
        FUN_009cd8d4(&plStack_c8);
        if (aplStack_b8[0] != (long *)0x0) {
          plVar20 = aplStack_b8[0] + 1;
          do {
            iVar11 = (int)*plVar20 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *(int *)plVar20 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            aplStack_b8[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            lStack_a8 = *aplStack_b8[0];
            FUN_02a44274(lVar15 + 0xd8,&lStack_a8);
          }
        }
      }
      if ((plStack_c8 != (long *)0x0) &&
         (FUN_01f07ef0(plStack_c8,0,*(undefined1 *)(lVar13 + 0x770)), plStack_c8 != (long *)0x0)) {
        lVar13 = plStack_c8[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plStack_c8 + 0x20))();
        }
      }
      if (plStack_c0 != (long *)0x0) {
        lVar13 = plStack_c0[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plStack_c0 + 0x20))();
        }
      }
    }
    lVar13 = plVar17[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
LAB_01590800:
  lVar13 = *(long *)(lVar18 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return;
}


