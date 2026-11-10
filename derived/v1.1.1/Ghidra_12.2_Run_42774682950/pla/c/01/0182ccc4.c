/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0182ccc4; name: FUN_0182ccc4
 */


void FUN_0182ccc4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_04379e90;
  puVar8 = PTR_DAT_04379e88;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d0;
  lVar16 = *(long *)(param_2 + 0x1f0);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar11 = *(int *)(lVar16 + 0xc);
    do {
      plVar17 = *(long **)(lVar16 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_0182ccec;
        if (plVar17 == (long *)puVar9) break;
        plVar17 = (long *)*plVar17;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            FUN_01a2bf84(&local_78,lVar16 + 0x578);
            puVar4 = local_78;
            puVar8 = PTR_DAT_0437a3d0;
            if (local_78 == (undefined8 *)0x0) {
              plVar17 = (long *)0x0;
              *param_1 = 0;
              goto joined_r0x0182cfbc;
            }
            if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_0182d04c;
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar11 = *(int *)((long)local_78 + 0xc);
            goto LAB_0182cedc;
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
LAB_0182ccec:
  *param_1 = 0;
  return;
LAB_0182cedc:
  do {
    plVar17 = (long *)puVar4[2];
    if (((*PTR_DAT_0437a3c8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a3c8), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437a3c8);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_0182d04c;
      if (plVar17 == (long *)puVar8) break;
      plVar17 = (long *)*plVar17;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar14 = puVar4[3];
        plVar17 = (long *)0x0;
        puVar4 = local_78;
        if (lVar14 != 0) {
          plVar17 = (long *)(lVar14 + -0x50);
        }
        goto joined_r0x0182cf34;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while (iVar10 != 0);
LAB_0182d04c:
  plVar17 = (long *)0x0;
  puVar4 = local_78;
joined_r0x0182cf34:
  local_78 = puVar4;
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
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if ((plVar17 == (long *)0x0) ||
     (((uVar12 = FUN_01a5785c(plVar17), (uVar12 & 1) == 0 &&
       (uVar12 = FUN_01a57b48(plVar17), (uVar12 & 1) != 0)) ||
      (FUN_01a5581c(&local_78,plVar17), puVar4 = local_78, puVar6 = PTR_DAT_04381a40,
      puVar5 = PTR_DAT_04381a38, local_78 == (undefined8 *)0x0)))) {
    *param_1 = 0;
  }
  else {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar11 = *(int *)((long)local_78 + 0xc);
      do {
        plVar18 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar13 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_0182d11c;
          if (plVar18 == (long *)puVar6) break;
          plVar18 = (long *)*plVar18;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = puVar4[3];
            lVar14 = 0;
            if (lVar15 != 0) {
              lVar14 = lVar15 + -0x50;
            }
            *param_1 = lVar14;
            puVar4 = local_78;
            goto joined_r0x0182d144;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_0182d11c:
    *param_1 = 0;
    puVar4 = local_78;
joined_r0x0182d144:
    local_78 = puVar4;
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
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar4;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
  }
joined_r0x0182cfbc:
  if (plVar17 != (long *)0x0) {
    lVar14 = plVar17[0xb];
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
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  lVar14 = *(long *)(lVar16 + 8);
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
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))((long *)(lVar16 + -0x50));
  }
  return;
}


