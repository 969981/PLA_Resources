/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e477e8; name: FUN_01e477e8
 */


void FUN_01e477e8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01e47ea8(&local_88);
  puVar5 = local_88;
  puVar7 = PTR_DAT_0437a598;
  puVar6 = PTR_DAT_0437a588;
  puVar10 = PTR_DAT_043794d8;
  puVar9 = PTR_DAT_043794d0;
  if (local_88 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = local_88;
  if (*(int *)((long)local_88 + 0xc) != 0) {
    piVar1 = (int *)((long)local_88 + 0xc);
    iVar11 = *(int *)((long)local_88 + 0xc);
    do {
      plVar17 = (long *)puVar5[2];
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar10 = uVar13;
          __cxa_guard_release(puVar9);
        }
        *(undefined **)puVar6 = puVar10;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        puVar4 = local_88;
        if (plVar17 == (long *)0x0) goto joined_r0x01e4796c;
        if (plVar17 == (long *)puVar6) break;
        plVar17 = (long *)*plVar17;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar15 = puVar5[3];
          if (lVar15 != 0) {
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            FUN_008c4b3c(&local_78,lVar15 + 0x18);
            puVar5 = local_78;
            puVar8 = PTR_DAT_043794c0;
            puVar7 = PTR_DAT_043794b8;
            puVar6 = PTR_DAT_043794b0;
            if (local_78 == (undefined8 *)0x0) goto LAB_01e478d4;
            if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_01e47dbc;
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar11 = *(int *)((long)local_78 + 0xc);
            goto LAB_01e47a2c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
  goto joined_r0x01e4796c;
LAB_01e47a2c:
  do {
    plVar17 = (long *)puVar5[2];
    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar10 = uVar13;
          __cxa_guard_release(puVar9);
        }
        *(undefined **)PTR_DAT_043794c8 = puVar10;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)puVar7 = PTR_DAT_043794c8;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_01e47dbc;
      if (plVar17 == (long *)puVar7) break;
      plVar17 = (long *)*plVar17;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar16 = puVar5[3];
        lVar14 = 0;
        puVar5 = local_78;
        if (lVar16 != 0) {
          lVar14 = lVar16 + -0x50;
        }
        goto joined_r0x01e47a70;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
  } while (iVar12 != 0);
LAB_01e47dbc:
  lVar14 = 0;
  puVar5 = local_78;
joined_r0x01e47a70:
  local_78 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if (lVar14 != 0) {
    plVar17 = *(long **)(lVar14 + 8);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar11 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    lVar15 = (**(code **)(*plVar17 + 0x10))(plVar17,0x250,0x10);
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0xb8))(plVar17);
                    /* WARNING: Subroutine does not return */
      FUN_02a4c0f4(0,7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02a4c0f4(lVar15,7);
  }
LAB_01e478d4:
  lVar14 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar4 = local_88;
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
    puVar4 = local_88;
  }
joined_r0x01e4796c:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar4[2] = 0;
      local_88 = puVar4;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  return;
}


