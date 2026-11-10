/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b778e0; name: FUN_01b778e0
 */


undefined1  [16] FUN_01b778e0(long param_1)

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
  undefined8 extraout_d0;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 in_q3 [16];
  undefined8 uVar20;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_78 [2];
  long local_68;
  
  puVar8 = PTR_DAT_04379fd0;
  puVar7 = PTR_DAT_04379fc8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  uVar20 = in_q3._8_8_;
  uVar19 = in_q3._0_8_;
  lVar14 = *(long *)(param_1 + 0x2b0);
  local_90 = 0;
  uStack_88 = 0;
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0xc) != 0) {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar10 = *(int *)(lVar14 + 0xc);
      do {
        plVar17 = *(long **)(lVar14 + 0x10);
        if ((*puVar7 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(local_90,puVar7);
          local_90 = extraout_d0;
          if (iVar9 != 0) {
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            local_90 = __cxa_guard_release(puVar7);
          }
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_01b77a24;
          if (plVar17 == (long *)puVar8) break;
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
            lVar14 = *(long *)(lVar14 + 0x18);
            local_90 = 0;
            uStack_88 = 0;
            if (lVar14 == 0) goto LAB_01b7790c;
            plVar13 = (long *)(lVar14 + -0x50);
            FUN_018f8f5c(local_78,0,plVar13);
            plVar17 = local_78[0];
            puVar8 = PTR_DAT_04379fe0;
            puVar7 = PTR_DAT_04379fd8;
            if (local_78[0] == (long *)0x0) goto LAB_01b779bc;
            if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01b77c04;
            piVar1 = (int *)((long)local_78[0] + 0xc);
            iVar10 = *(int *)((long)local_78[0] + 0xc);
            goto LAB_01b77a84;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01b77a24:
    local_90 = 0;
    uStack_88 = 0;
  }
  goto LAB_01b7790c;
LAB_01b77a84:
  do {
    plVar15 = (long *)plVar17[2];
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)PTR_DAT_043795e0 = puVar6;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar8 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) goto LAB_01b77c04;
      if (plVar15 == (long *)puVar8) break;
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
        goto joined_r0x01b77ad4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01b77c04:
  plVar17 = (long *)0x0;
  plVar15 = local_78[0];
joined_r0x01b77ad4:
  local_78[0] = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 1;
    do {
      iVar10 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar10;
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
  if (plVar17 == (long *)0x0) {
LAB_01b779bc:
    uStack_88 = 0;
    local_90 = 0;
  }
  else {
    FUN_01a4b9a4(local_78,plVar17);
    plVar15 = local_78[0];
    puVar7 = PTR_DAT_04379fe8;
    if (local_78[0] == (long *)0x0) {
LAB_01b77b48:
      uStack_88 = 0;
      local_90 = 0;
    }
    else {
      if (*(int *)((long)local_78[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar10 = *(int *)((long)local_78[0] + 0xc);
        do {
          plVar16 = (long *)plVar15[2];
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar11;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)PTR_DAT_043795e0 = puVar6;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_04379ff0 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar16 == (long *)0x0) goto LAB_01b77d44;
            if (plVar16 == (long *)PTR_DAT_04379ff0) break;
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
              lVar12 = plVar15[3];
              plVar15 = (long *)0x0;
              local_90 = uVar19;
              uStack_88 = uVar20;
              plVar16 = local_78[0];
              if (lVar12 != 0) {
                plVar15 = (long *)(lVar12 + -0x50);
              }
              goto joined_r0x01b77d68;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar9;
        } while (iVar9 != 0);
      }
LAB_01b77d44:
      plVar15 = (long *)0x0;
      local_90 = uVar19;
      uStack_88 = uVar20;
      plVar16 = local_78[0];
joined_r0x01b77d68:
      local_78[0] = plVar16;
      if (plVar16 != (long *)0x0) {
        plVar2 = plVar16 + 1;
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
          plVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *plVar16;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      if (plVar15 == (long *)0x0) goto LAB_01b77b48;
      FUN_009c69bc(local_78,plVar15);
      if (local_78[0] == (long *)0x0) {
        uStack_88 = 0;
        local_90 = 0;
      }
      else {
        (**(code **)(*local_78[0] + 0x40))();
        if (local_78[0] != (long *)0x0) {
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
      }
      lVar12 = plVar15[0xb];
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
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
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
LAB_01b7790c:
  auVar18._8_8_ = uStack_88;
  auVar18._0_8_ = local_90;
  return auVar18;
}


