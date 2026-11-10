/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177b4dc; name: FUN_0177b4dc
 */


undefined8
FUN_0177b4dc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],undefined8 *param_5,undefined1 *param_6,
            undefined1 (*param_7) [16])

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *local_78 [2];
  long *local_68;
  
  uVar22 = param_4._8_8_;
  uVar21 = param_4._0_8_;
  uVar20 = param_3._8_8_;
  uVar19 = param_3._0_8_;
  uVar18 = param_2._8_8_;
  uVar14 = param_2._0_8_;
  FUN_0199c220(local_78,*(undefined8 *)*param_5);
  plVar5 = local_78[0];
  puVar9 = PTR_DAT_0437a0f0;
  puVar8 = PTR_DAT_0437a0e8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_78[0] == (long *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_78[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_78[0] + 0xc);
    iVar10 = *(int *)((long)local_78[0] + 0xc);
    do {
      plVar15 = (long *)plVar5[2];
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_0177b880;
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = plVar5[3];
          plVar5 = (long *)0x0;
          plVar15 = local_78[0];
          if (lVar13 != 0) {
            plVar5 = (long *)(lVar13 + -0x50);
          }
          goto joined_r0x0177b5d0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_0177b880:
  plVar5 = (long *)0x0;
  plVar15 = local_78[0];
joined_r0x0177b5d0:
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
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = (long *)*plVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  if (param_6 == &DAT_cbf29ce484222645) {
LAB_0177b7fc:
    uVar14 = 0;
  }
  else {
    if (param_6 == (undefined1 *)0xffb8277c2a59fc57) {
      FUN_0199c138(local_78,*(undefined8 *)*param_5);
      puVar9 = PTR_DAT_043794c8;
      puVar8 = PTR_DAT_043794c0;
      puVar7 = PTR_DAT_043794b8;
      puVar6 = PTR_DAT_043794b0;
      lVar13 = local_78[0][0x35];
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
LAB_0177b67c:
        plVar15 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar13 + 0xc);
        iVar10 = *(int *)(lVar13 + 0xc);
        do {
          puVar16 = *(undefined8 **)(lVar13 + 0x10);
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar9 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar7 = puVar9;
            __cxa_guard_release(puVar6);
          }
          if (puVar16 == (undefined8 *)0x0) goto LAB_0177b67c;
          while (puVar16 != (undefined8 *)puVar7) {
            puVar16 = (undefined8 *)*puVar16;
            plVar15 = (long *)0x0;
            if (puVar16 == (undefined8 *)0x0) goto LAB_0177b680;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar15 = (long *)0x0;
              if (*(long *)(lVar13 + 0x18) != 0) {
                plVar15 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar15 = (long *)0x0;
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
LAB_0177b680:
      auVar17 = (**(code **)(*plVar15 + 0x40))(plVar15);
      *param_7 = auVar17;
      *(undefined8 *)(param_7[1] + 8) = uVar18;
      *(undefined8 *)param_7[1] = uVar14;
      *(undefined8 *)(param_7[2] + 8) = uVar20;
      *(undefined8 *)param_7[2] = uVar19;
      *(undefined8 *)(param_7[3] + 8) = uVar22;
      *(undefined8 *)param_7[3] = uVar21;
      if (plVar15 != (long *)0x0) {
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
      if (local_78[0] != (long *)0x0) {
        lVar13 = local_78[0][0xb];
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
LAB_0177b794:
        if (iVar10 == 1) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_78[0] + 0x20))();
          uVar14 = 1;
          goto LAB_0177b7a0;
        }
      }
    }
    else {
      FUN_01847290(local_78,plVar5);
      FUN_0177bb60(&local_68,local_78[0],3,param_6);
      puVar9 = PTR_DAT_043794d0;
      puVar8 = PTR_DAT_043794c0;
      puVar7 = PTR_DAT_043794b8;
      puVar6 = PTR_DAT_043794b0;
      if (local_68 == (long *)0x0) {
        if (local_78[0] != (long *)0x0) {
          lVar13 = local_78[0][0xb];
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
          if (iVar10 == 1) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_78[0] + 0x20))();
          }
        }
        goto LAB_0177b7fc;
      }
      lVar13 = local_68[0x35];
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
LAB_0177b710:
        plVar15 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar13 + 0xc);
        iVar10 = *(int *)(lVar13 + 0xc);
        do {
          puVar16 = *(undefined8 **)(lVar13 + 0x10);
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar7 = PTR_DAT_043794c8;
            __cxa_guard_release(puVar6);
          }
          if (puVar16 == (undefined8 *)0x0) goto LAB_0177b710;
          while (puVar16 != (undefined8 *)puVar7) {
            puVar16 = (undefined8 *)*puVar16;
            plVar15 = (long *)0x0;
            if (puVar16 == (undefined8 *)0x0) goto LAB_0177b714;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar15 = (long *)0x0;
              if (*(long *)(lVar13 + 0x18) != 0) {
                plVar15 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar15 = (long *)0x0;
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
LAB_0177b714:
      auVar17 = (**(code **)(*plVar15 + 0x40))(plVar15);
      *param_7 = auVar17;
      *(undefined8 *)(param_7[1] + 8) = uVar18;
      *(undefined8 *)param_7[1] = uVar14;
      *(undefined8 *)(param_7[2] + 8) = uVar20;
      *(undefined8 *)param_7[2] = uVar19;
      *(undefined8 *)(param_7[3] + 8) = uVar22;
      *(undefined8 *)param_7[3] = uVar21;
      if (plVar15 != (long *)0x0) {
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
      if (local_68 != (long *)0x0) {
        lVar13 = local_68[0xb];
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
          (**(code **)(*local_68 + 0x20))();
        }
      }
      if (local_78[0] != (long *)0x0) {
        lVar13 = local_78[0][0xb];
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
        goto LAB_0177b794;
      }
    }
    uVar14 = 1;
  }
LAB_0177b7a0:
  lVar13 = plVar5[0xb];
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
    (**(code **)(*plVar5 + 0x20))(plVar5);
    return uVar14;
  }
  return uVar14;
}


