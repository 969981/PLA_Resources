/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1b8f4; name: FUN_01c1b8f4
 */


void FUN_01c1b8f4(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04379e80;
  puVar7 = PTR_DAT_04379e78;
  lVar13 = *(long *)(param_2 + 0x280);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar9 = *(int *)(lVar13 + 0xc);
    do {
      plVar16 = *(long **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        uVar12 = FUN_0095a420();
        *(undefined8 *)puVar8 = uVar12;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c1b91c;
        if (plVar16 == (long *)puVar8) break;
        plVar16 = (long *)*plVar16;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar16 = (long *)(lVar13 + -0x50);
            FUN_00aae1c0(local_78,plVar16);
            puVar6 = local_78[0];
            bVar5 = false;
            if (local_78[0] == (undefined8 *)0x0) goto LAB_01c1b9e0;
            if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01c1bac0;
            piVar1 = (int *)((long)local_78[0] + 0xc);
            iVar9 = *(int *)((long)local_78[0] + 0xc);
            goto LAB_01c1ba6c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
  goto LAB_01c1b91c;
LAB_01c1ba6c:
  do {
    plVar15 = (long *)puVar6[2];
    lVar11 = FUN_00a3edb8();
    while( true ) {
      if (plVar15 == (long *)0x0) goto LAB_01c1bac0;
      if (plVar15 == (long *)lVar11) break;
      plVar15 = (long *)*plVar15;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar11 = puVar6[3];
        plVar15 = (long *)0x0;
        puVar6 = local_78[0];
        if (lVar11 != 0) {
          plVar15 = (long *)(lVar11 + -0x50);
        }
        goto joined_r0x01c1bab8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar10;
  } while (iVar10 != 0);
LAB_01c1bac0:
  plVar15 = (long *)0x0;
  puVar6 = local_78[0];
joined_r0x01c1bab8:
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_68 = *puVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_68);
    }
  }
  puVar8 = PTR_DAT_043794b8;
  puVar7 = PTR_DAT_043794b0;
  bVar5 = false;
  if (plVar15 != (long *)0x0) {
    lVar11 = plVar15[0x35];
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar9 = *(int *)(lVar11 + 0xc);
      do {
        plVar14 = *(long **)(lVar11 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar12;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794c8;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01c1bb30;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar2 = 0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              lVar2 = *(long *)(lVar11 + 0x18) + -0x50;
            }
            *param_1 = lVar2;
            goto LAB_01c1bb34;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01c1bb30:
    *param_1 = 0;
LAB_01c1bb34:
    lVar11 = plVar15[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 1) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    bVar5 = true;
  }
LAB_01c1b9e0:
  lVar13 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (bVar5) {
    return;
  }
LAB_01c1b91c:
  *param_1 = 0;
  return;
}


