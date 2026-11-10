/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010dbe70; name: FUN_010dbe70
 */


undefined4 FUN_010dbe70(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint local_34;
  
  local_34 = 0;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar9 = *(long **)(lVar7 + 0x238);
  if (plVar9 == (long *)0x0) {
    lVar7 = FUN_0111ebdc(0,param_2,&local_34);
  }
  else {
    lVar7 = plVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = FUN_0111ebdc(plVar9,param_2,&local_34);
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_34 != 0) {
    uVar10 = 0;
    do {
      uVar6 = FUN_010db6a4(param_1,*(undefined4 *)(lVar7 + uVar10 * 4),1,0xffffffff);
      if ((uVar6 & 1) != 0) {
        FUN_010db560(param_1,*(undefined4 *)(lVar7 + uVar10 * 4),1,0xffffffff);
        return *(undefined4 *)(lVar7 + uVar10 * 4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_34);
  }
  return 0;
}


