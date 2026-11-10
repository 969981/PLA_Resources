/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128bac8; name: FUN_0128bac8
 */


void FUN_0128bac8(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  
  iVar2 = *(int *)(param_1 + 0x6d8);
  iVar7 = 0;
  if (iVar2 != 2) {
    iVar7 = iVar2;
  }
  puVar8 = (undefined8 *)FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar7 * 0x28);
  lVar11 = puVar8[0x116];
  piVar1 = (int *)(lVar11 + 0x20);
  if (*(int *)(lVar11 + 0x28) != 0) {
    piVar1 = (int *)(lVar11 + 0x24);
  }
  if (*(char *)(param_1 + 0x6f8) != '\0') {
    FUN_0128eecc(param_1,&DAT_03a7a510,2);
    return;
  }
  uVar3 = *(int *)(lVar11 + 0x14) + *piVar1 * *(int *)(lVar11 + 0x10);
  if (iVar2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (puVar8 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      puVar8 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar12 = *(long **)(lVar11 + 0x280);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      puVar8 = *(undefined8 **)(lVar11 + 0x18);
      if (puVar8 == (undefined8 *)0x0) {
LAB_0128bd9c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        puVar8 = (undefined8 *)(**(code **)*puVar8)();
        *(undefined8 **)(lVar11 + 0x10) = puVar8;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar6 = FUN_010dac08(puVar8,0);
    if (((uVar3 < uVar6) &&
        (uVar3 = *(uint *)((long)plVar12 + (ulong)uVar3 * 4 + 0x68), 0xffff < uVar3)) &&
       ((uVar3 & 0xffff) != 0)) {
      FUN_0128eecc(param_1,&DAT_03a7a450,4);
    }
    else {
      FUN_0128eecc(param_1,&DAT_03a7a4d0,2);
    }
    if (plVar12 == (long *)0x0) {
      return;
    }
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar12 = *(long **)(lVar11 + 0x238);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0128bd9c;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar3 = *(uint *)((long)plVar12 + (ulong)(uVar3 + (int)plVar12[0xa6] * 0x1e) * 4 + 0x68);
    if (uVar3 < 0x10000 || (uVar3 & 0xffff) == 0) {
      puVar10 = &DAT_03a7a4f0;
      uVar9 = 2;
    }
    else {
      puVar10 = &DAT_03a7a490;
      uVar9 = 4;
    }
    FUN_0128eecc(param_1,puVar10,uVar9);
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar7 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0128bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x20))(plVar12);
    return;
  }
  return;
}


