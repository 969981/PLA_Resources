/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9691c; name: FUN_01f9691c
 */


uint FUN_01f9691c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar7 = PTR_DAT_043796e8;
  puVar6 = PTR_DAT_043796e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0xa8);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_01f96944:
    uVar8 = 0;
  }
  else {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_01f96944;
      while (puVar15 != (undefined8 *)puVar7) {
        puVar15 = (undefined8 *)*puVar15;
        uVar8 = 0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_01f96948;
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
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar13 = (long *)(lVar14 + -0x50);
          uVar8 = 0;
          if (lVar14 != 0) {
            FUN_0199ce28(local_70,plVar13);
            puVar15 = local_70[0];
            puVar7 = PTR_DAT_0437a668;
            puVar6 = PTR_DAT_0437a660;
            if (local_70[0] == (undefined8 *)0x0) goto LAB_01f96a0c;
            if (*(int *)((long)local_70[0] + 0xc) == 0) goto LAB_01f96c18;
            piVar1 = (int *)((long)local_70[0] + 0xc);
            iVar10 = *(int *)((long)local_70[0] + 0xc);
            goto LAB_01f96ad0;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar8 = 0;
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  goto LAB_01f96948;
LAB_01f96ad0:
  do {
    plVar16 = (long *)puVar15[2];
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar11;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar6 = puVar5;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_01f96c18;
      if (plVar16 == (long *)puVar6) break;
      plVar16 = (long *)*plVar16;
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
        lVar12 = puVar15[3];
        plVar16 = (long *)0x0;
        puVar15 = local_70[0];
        if (lVar12 != 0) {
          plVar16 = (long *)(lVar12 + -0x50);
        }
        goto joined_r0x01f96b14;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01f96c18:
  plVar16 = (long *)0x0;
  puVar15 = local_70[0];
joined_r0x01f96b14:
  if (puVar15 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar15 + 1);
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
      puVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar15;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  if (plVar16 == (long *)0x0) {
LAB_01f96a0c:
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_01e48210();
    uVar8 = FUN_01e434f4(plVar16,param_2,param_3,uVar8 | 0x26000,param_4);
    lVar12 = plVar16[0xb];
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
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
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
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
LAB_01f96948:
  return uVar8 & 1;
}


