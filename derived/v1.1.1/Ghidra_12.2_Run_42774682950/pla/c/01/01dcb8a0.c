/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dcb8a0; name: FUN_01dcb8a0
 */


void FUN_01dcb8a0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_2 + 0x90);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01dcb8c8;
        if (plVar16 == (long *)puVar9) break;
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
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar16 = (long *)(lVar14 + -0x50);
          if (lVar14 != 0) {
            FUN_0199ca7c(local_78,plVar16);
            puVar5 = local_78[0];
            puVar8 = PTR_DAT_0437b100;
            if (local_78[0] == (undefined8 *)0x0) goto LAB_01dcb998;
            if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01dcbbb4;
            piVar1 = (int *)((long)local_78[0] + 0xc);
            iVar11 = *(int *)((long)local_78[0] + 0xc);
            goto LAB_01dcba50;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01dcb8c8:
  *param_1 = 0;
  return;
LAB_01dcba50:
  plVar15 = (long *)puVar5[2];
  if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
      uVar12 = FUN_0087f8f0();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    *(undefined **)PTR_DAT_0437b108 = puVar7;
    __cxa_guard_release(puVar8);
  }
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_01dcbbb4;
    if (plVar15 == (long *)PTR_DAT_0437b108) break;
    plVar15 = (long *)*plVar15;
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
      lVar13 = puVar5[3];
      plVar15 = (long *)0x0;
      puVar5 = local_78[0];
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + -0x50);
      }
      goto joined_r0x01dcba9c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar11 = iVar10;
  if (iVar10 == 0) {
LAB_01dcbbb4:
    plVar15 = (long *)0x0;
    puVar5 = local_78[0];
joined_r0x01dcba9c:
    local_78[0] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
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
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar15 == (long *)0x0) {
LAB_01dcb998:
      *param_1 = 0;
    }
    else {
      lVar13 = *(long *)(param_2 + 0x120);
      plVar2 = (long *)(lVar13 + 0xc0);
      if (*(undefined1 **)(lVar13 + 0x1c8) != &DAT_cbf29ce484222645) {
        plVar2 = (long *)(lVar13 + 0x1c8);
      }
      local_78[0] = (undefined8 *)*plVar2;
      FUN_00ce47e4(&local_68,plVar15,*(undefined8 *)(param_2 + 8),local_78);
      *param_1 = local_68;
      lVar13 = plVar15[0xb];
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
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
    lVar14 = *(long *)(lVar14 + 8);
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    return;
  }
  goto LAB_01dcba50;
}


