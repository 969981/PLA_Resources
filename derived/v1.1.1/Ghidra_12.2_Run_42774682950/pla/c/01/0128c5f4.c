/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128c5f4; name: FUN_0128c5f4
 */


void FUN_0128c5f4(undefined8 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  
  puVar8 = PTR_DAT_04379558;
  puVar12 = param_1;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar12 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar12 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  puVar10 = PTR_DAT_04379568;
  puVar9 = PTR_DAT_04379560;
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  plVar14 = *(long **)(lVar13 + 0x280);
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    puVar12 = *(undefined8 **)(lVar13 + 0x18);
    if (puVar12 == (undefined8 *)0x0) goto LAB_0128c880;
    if (*(long *)(lVar13 + 0x10) == 0) {
      puVar12 = (undefined8 *)(**(code **)*puVar12)();
      *(undefined8 **)(lVar13 + 0x10) = puVar12;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (((*puVar8 & 1) == 0) &&
     (puVar12 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar12 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar13 = *(long *)puVar9;
  *(long *)puVar10 = lVar13;
  plVar15 = *(long **)(lVar13 + 0x238);
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    puVar12 = *(undefined8 **)(lVar13 + 0x18);
    if (puVar12 == (undefined8 *)0x0) {
LAB_0128c880:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      puVar12 = (undefined8 *)(**(code **)*puVar12)();
      *(undefined8 **)(lVar13 + 0x10) = puVar12;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar11 = FUN_010dac08(puVar12,0);
  if ((uint)param_1 < uVar11) {
    uVar11 = *(uint *)((long)plVar14 + ((ulong)param_1 & 0xffffffff) * 4 + 0x68);
    uVar16 = uVar11 >> 0x10;
  }
  else {
    uVar16 = 0;
    uVar11 = 0;
  }
  FUN_010da7f4(plVar14,0,(ulong)param_1 & 0xffffffff);
  uVar5 = param_3 + param_2 * 0x1e;
  sVar3 = *(short *)((long)plVar15 + (ulong)uVar5 * 4 + 0x68);
  sVar4 = *(short *)((long)plVar15 + (ulong)uVar5 * 4 + 0x6a);
  FUN_0111e970(plVar15,param_2,param_3);
  if (sVar3 != 0 && sVar4 != 0) {
    FUN_010db1d8(plVar14,sVar3,sVar4,(ulong)param_1 & 0xffffffff);
  }
  if ((uVar16 != 0) && ((uVar11 & 0xffff) != 0)) {
    FUN_0111dfe4(plVar15,uVar11 & 0xffff,uVar16,param_2,param_3);
  }
  lVar13 = plVar15[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar2 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0128c804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x20))(plVar14);
      return;
    }
  }
  return;
}


