/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b39c3c; name: FUN_01b39c3c
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_01b39c3c(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *local_88 [2];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_04379fd0;
  puVar8 = PTR_DAT_04379fc8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar18 = param_1[0xbe];
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar1 = (int *)(lVar18 + 0xc);
    iVar13 = *(int *)(lVar18 + 0xc);
    do {
      plVar21 = *(long **)(lVar18 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01b39c64;
        if (plVar21 == (long *)puVar9) break;
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
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            FUN_00ac3fa4(&local_78,param_1 + 0x49);
            puVar11 = local_78;
            puVar10 = PTR_DAT_04379e90;
            puVar9 = PTR_DAT_04379e88;
            puVar8 = PTR_DAT_043795d8;
            if (local_78 == (undefined8 *)0x0) {
              plVar21 = (long *)0x0;
              goto LAB_01b39d24;
            }
            if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_01b39ef4;
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar13 = *(int *)((long)local_78 + 0xc);
            goto LAB_01b39e2c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
  goto LAB_01b39c64;
LAB_01b39e2c:
  do {
    plVar21 = (long *)puVar11[2];
    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)PTR_DAT_043795e0 = puVar7;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)puVar10 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar21 == (long *)0x0) goto LAB_01b39ef4;
      if (plVar21 == (long *)puVar10) break;
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
        lVar16 = puVar11[3];
        plVar21 = (long *)0x0;
        param_1 = local_78;
        if (lVar16 != 0) {
          plVar21 = (long *)(lVar16 + -0x50);
        }
        goto joined_r0x01b39e7c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar12;
  } while (iVar12 != 0);
LAB_01b39ef4:
  plVar21 = (long *)0x0;
  param_1 = local_78;
joined_r0x01b39e7c:
  local_78 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    piVar1 = (int *)(param_1 + 1);
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
      param_1[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *param_1;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if ((plVar21 == (long *)0x0) ||
     (FUN_01a8b908(&local_78,plVar21), puVar11 = local_78, puVar7 = PTR_DAT_04379e80,
     puVar6 = PTR_DAT_04379e78, local_78 == (undefined8 *)0x0)) {
LAB_01b39d24:
    uVar17 = (uint)param_1;
    bVar5 = false;
  }
  else {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar13 = *(int *)((long)local_78 + 0xc);
      do {
        plVar20 = (long *)puVar11[2];
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar14 = FUN_0095a420();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto LAB_01b39ffc;
          if (plVar20 == (long *)puVar7) break;
          plVar20 = (long *)*plVar20;
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
            lVar16 = puVar11[3];
            plVar20 = (long *)0x0;
            param_1 = local_78;
            if (lVar16 != 0) {
              plVar20 = (long *)(lVar16 + -0x50);
            }
            goto joined_r0x01b3a05c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01b39ffc:
    plVar20 = (long *)0x0;
    param_1 = local_78;
joined_r0x01b3a05c:
    local_78 = param_1;
    if (param_1 != (undefined8 *)0x0) {
      piVar1 = (int *)(param_1 + 1);
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
        param_1[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_68 = *param_1;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
    if (plVar20 == (long *)0x0) goto LAB_01b39d24;
    FUN_00aae1c0(&local_78,plVar20);
    puVar11 = local_78;
    if (local_78 == (undefined8 *)0x0) {
      bVar5 = false;
      param_1 = local_78;
    }
    else {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar13 = *(int *)((long)local_78 + 0xc);
        do {
          plVar19 = (long *)puVar11[2];
          lVar16 = FUN_00a3edb8();
          while( true ) {
            if (plVar19 == (long *)0x0) goto LAB_01b3a164;
            if (plVar19 == (long *)lVar16) break;
            plVar19 = (long *)*plVar19;
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
              lVar16 = puVar11[3];
              plVar19 = (long *)0x0;
              param_1 = local_78;
              if (lVar16 != 0) {
                plVar19 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x01b3a188;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar12;
        } while (iVar12 != 0);
      }
LAB_01b3a164:
      plVar19 = (long *)0x0;
      param_1 = local_78;
joined_r0x01b3a188:
      local_78 = param_1;
      if (param_1 != (undefined8 *)0x0) {
        piVar1 = (int *)(param_1 + 1);
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
          param_1[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_68 = *param_1;
          FUN_02a44274(lVar16 + 0xd8,&local_68);
        }
      }
      bVar5 = false;
      if (plVar19 != (long *)0x0) {
        FUN_00aae1c0(local_88,plVar20);
        uVar15 = FUN_00ae60c8(local_88,param_2);
        param_1 = (undefined8 *)(uVar15 & 0xffffffff);
        if (local_88[0] != (long *)0x0) {
          plVar2 = local_88[0] + 1;
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
            local_88[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_78 = (undefined8 *)*local_88[0];
            FUN_02a44274(lVar16 + 0xd8,&local_78);
          }
        }
        lVar16 = plVar19[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
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
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        bVar5 = true;
      }
    }
    uVar17 = (uint)param_1;
    lVar16 = plVar20[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (!bVar5) goto LAB_01b39d24;
    bVar5 = true;
  }
  if (plVar21 != (long *)0x0) {
    lVar16 = plVar21[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  lVar16 = *(long *)(lVar18 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))((long *)(lVar18 + -0x50));
  }
  if (bVar5) goto LAB_01b39c68;
LAB_01b39c64:
  uVar17 = 0;
LAB_01b39c68:
  return uVar17 & 1;
}


