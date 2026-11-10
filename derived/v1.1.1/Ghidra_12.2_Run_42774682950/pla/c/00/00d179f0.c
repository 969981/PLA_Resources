/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d179f0; name: FUN_00d179f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d179f0(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04379558;
  uVar10 = 1;
  if ((param_2 & 1) != 0) {
    uVar10 = 2;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558,uVar10), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar5 = PTR_DAT_04379568;
  puVar4 = PTR_DAT_04379560;
  uVar9 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar9;
  uVar7 = FUN_011487a4(uVar9,uVar10);
  *(uint *)(param_1 + 8) = uVar7;
  if (uVar7 == 4) {
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    uVar9 = *(undefined8 *)puVar4;
    local_34 = 0;
    *(undefined8 *)puVar5 = uVar9;
    FUN_0114877c(uVar9,&local_34);
    uVar7 = *(uint *)(param_1 + 8);
  }
  bVar6 = (uVar7 | 1) == 3;
  uVar7 = (uint)bVar6;
  if ((bVar6) && ((param_2 & 1) == 0)) {
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)puVar4;
    *(long *)puVar5 = lVar11;
    plVar12 = *(long **)(lVar11 + 0x268);
    if (plVar12 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = _DAT_00000078;
    }
    else {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(int *)(param_1 + 0x10) = (int)plVar12[0xf];
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    uVar7 = 1;
  }
  *(uint *)(param_1 + 0xc) = uVar7;
  return;
}


