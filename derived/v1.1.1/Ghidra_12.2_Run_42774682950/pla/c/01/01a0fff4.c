/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0fff4; name: FUN_01a0fff4
 */


void FUN_01a0fff4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60 [2];
  long local_48;
  
  if ((*param_1 == 0) || (FUN_01a10814(local_60), plVar15 = local_60[0], local_60[0] == (long *)0x0)
     ) {
    bVar4 = false;
    plVar15 = (long *)0x0;
    local_68 = (long *)0x0;
  }
  else {
    FUN_009c69bc(&local_68,local_60[0]);
    bVar4 = true;
  }
  plVar16 = (long *)*param_2;
  plVar10 = (long *)(**(code **)plVar16[10])(plVar16 + 10);
  puVar5 = PTR_DAT_043794b8;
  if (((*PTR_DAT_043794b0 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar6 = PTR_DAT_043794c8, iVar9 != 0)) {
    if (((*PTR_DAT_043794c0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar13;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar6 = puVar7;
      __cxa_guard_release(PTR_DAT_043794c0);
    }
    *(undefined **)puVar5 = puVar6;
    __cxa_guard_release(PTR_DAT_043794b0);
  }
  while( true ) {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (plVar10 == (long *)puVar5) break;
    plVar10 = (long *)*plVar10;
  }
  plVar10 = plVar16 + 0x1e;
  lVar11 = FUN_00c899a8(plVar10,local_60);
  lVar12 = FUN_00b13c20(plVar10,local_60);
  if ((bVar4 && lVar11 != 0) && (lVar12 != 0)) {
    (**(code **)(*local_68 + 0x18))(local_60);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_0087f944(&local_78,local_60);
    plVar10 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar1 = local_60[0] + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_88 = (undefined8 *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
    }
    (**(code **)(*plVar16 + 0x18))(local_60,plVar16);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_0087f944(&local_88,local_60);
    plVar10 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar16 = local_60[0] + 1;
      do {
        iVar9 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_48 = *plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_48);
      }
    }
    FUN_0087fcf0(plVar15 + 0xf2,&local_88);
    puVar8 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_88 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_60[0] = (long *)*puVar8;
        FUN_02a44274(lVar14 + 0xd8,local_60);
      }
    }
    FUN_01a10734(local_60,lVar11);
    FUN_01a10bbc(plVar15 + 0xf4,local_60);
    plVar10 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar16 = local_60[0] + 1;
      do {
        iVar9 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_88 = (undefined8 *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
    }
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_008c4b3c(&local_98,&local_78);
    FUN_00d804f8(lVar12,&local_98,1);
    puVar8 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_98 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60[0] = (long *)*puVar8;
        FUN_02a44274(lVar12 + 0xd8,local_60);
      }
    }
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    FUN_008c4b3c(&local_a8,&local_78);
    FUN_01b51b6c(lVar11,&local_a8);
    puVar8 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a8 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_a8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60[0] = (long *)*puVar8;
        FUN_02a44274(lVar12 + 0xd8,local_60);
      }
    }
    FUN_01b510c0(lVar11);
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_78 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_60[0] = (long *)*puVar8;
        FUN_02a44274(lVar11 + 0xd8,local_60);
      }
    }
  }
  else {
    lVar11 = FUN_009aff90(plVar10,local_60);
    if (lVar11 != 0) {
      FUN_01836814(lVar11,0);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar11 = plVar15[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


