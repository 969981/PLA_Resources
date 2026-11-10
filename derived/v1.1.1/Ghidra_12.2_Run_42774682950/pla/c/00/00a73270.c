/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a73270; name: FUN_00a73270
 */


void FUN_00a73270(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  long *plVar19;
  ulong *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  ulong local_68;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    pcVar17 = *(code **)(**(long **)(param_1 + 0x68) + 0x10);
  }
  else {
    if (*(int *)(param_1 + 0x8c) != 1) {
      local_70 = (long *)0x0;
      goto LAB_00a732b0;
    }
    pcVar17 = *(code **)(**(long **)(param_1 + 0x68) + 0x18);
  }
  (*pcVar17)(&local_70);
LAB_00a732b0:
  local_78 = local_70;
  if (local_70 != (long *)0x0) {
    lVar18 = local_70[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00aada94(&local_98,&local_78);
  puVar5 = local_98;
  puVar11 = PTR_DAT_0437a130;
  puVar10 = PTR_DAT_0437a128;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_98 == (ulong *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_98 + 0xc) != 0) {
      piVar1 = (int *)((long)local_98 + 0xc);
      iVar13 = *(int *)((long)local_98 + 0xc);
      do {
        plVar19 = (long *)puVar5[2];
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar14;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar9 = puVar7;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_00a73580;
          if (plVar19 == (long *)puVar11) break;
          plVar19 = (long *)*plVar19;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uVar15 = puVar5[3];
            plVar19 = (long *)0x0;
            puVar5 = local_98;
            if (uVar15 != 0) {
              plVar19 = (long *)(uVar15 - 0x50);
            }
            goto joined_r0x00a735a4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_00a73580:
    plVar19 = (long *)0x0;
    puVar5 = local_98;
joined_r0x00a735a4:
    local_98 = puVar5;
    if (puVar5 != (ulong *)0x0) {
      puVar2 = puVar5 + 1;
      do {
        iVar13 = (int)*puVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *(int *)puVar2 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_68 = *puVar5;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
  }
  if (local_78 != (long *)0x0) {
    lVar18 = local_78[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar19 != (long *)0x0) {
    plVar16 = (long *)plVar19[0x4a];
    if (plVar16 == (long *)plVar19[0x4b]) {
      plVar16 = *(long **)(*plVar16 + 0x68);
    }
    else {
      do {
        lVar18 = *plVar16;
        plVar16 = plVar16 + 1;
      } while (*(undefined1 **)(lVar18 + 0x158) != &DAT_afc4d6c05abef19e);
      plVar16 = *(long **)(lVar18 + 0x68);
    }
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    local_98 = (ulong *)0xa54af86f3a0b011d;
    pcStack_90 = "loop_attack_bool";
    local_88 = 0x10;
    local_80 = (long *)0x0;
    uVar15 = (**(code **)(*plVar16 + 0x98))(plVar16,&local_98);
    local_68 = uVar15;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))(local_80);
      uVar15 = local_68 & 0xff;
    }
    if ((uVar15 & 0xff) != 0) {
      (**(code **)(*plVar16 + 0xa8))(plVar16,&local_68,0);
    }
    (**(code **)(*plVar16 + 0x18))(plVar16);
    lVar18 = plVar19[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar18 = local_70[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


