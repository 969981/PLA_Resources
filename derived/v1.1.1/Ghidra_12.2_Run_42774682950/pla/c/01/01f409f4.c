/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f409f4; name: FUN_01f409f4
 */


void FUN_01f409f4(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_1 + 0x70);
  if (lVar13 == 0) {
    return;
  }
  if (*(int *)(lVar13 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar10 = *(int *)(lVar13 + 0xc);
  do {
    plVar14 = *(long **)(lVar13 + 0x10);
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
      if (plVar14 == (long *)0x0) {
        return;
      }
      if (plVar14 == (long *)puVar8) break;
      plVar14 = (long *)*plVar14;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) {
          return;
        }
        plVar14 = (long *)(lVar13 + -0x50);
        FUN_0199c220(local_78,plVar14);
        puVar4 = local_78[0];
        puVar7 = PTR_DAT_0437a0e8;
        if (local_78[0] == (undefined8 *)0x0) goto LAB_01f40ad0;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01f40ccc;
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
LAB_01f40b7c:
  plVar15 = (long *)puVar4[2];
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
    if (plVar15 == (long *)0x0) goto LAB_01f40ccc;
    if (plVar15 == (long *)PTR_DAT_0437a0f0) break;
    plVar15 = (long *)*plVar15;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar10) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar12 = puVar4[3];
      plVar15 = (long *)0x0;
      puVar4 = local_78[0];
      if (lVar12 != 0) {
        plVar15 = (long *)(lVar12 + -0x50);
      }
      goto joined_r0x01f40bc8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar10 = iVar9;
  if (iVar9 == 0) {
LAB_01f40ccc:
    plVar15 = (long *)0x0;
    puVar4 = local_78[0];
joined_r0x01f40bc8:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if (plVar15 != (long *)0x0) {
      FUN_01f40d18(plVar15,param_2 & 1);
      FUN_01f40ed8(plVar15,param_2 & 1);
      lVar12 = plVar15[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
LAB_01f40ad0:
    lVar13 = *(long *)(lVar13 + 8);
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    return;
  }
  goto LAB_01f40b7c;
}


