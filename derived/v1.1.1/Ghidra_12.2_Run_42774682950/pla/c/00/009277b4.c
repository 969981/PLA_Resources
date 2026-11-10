/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009277b4; name: FUN_009277b4
 */


void FUN_009277b4(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  lVar6 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if (lVar6 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar8 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar8;
    plVar9 = *(long **)(lVar8 + 0x298);
    if (plVar9 == (long *)0x0) {
      uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x60);
      uVar4 = FUN_00934f94(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_2);
      FUN_01135c84(0,uVar7,uVar4 & 1);
      return;
    }
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x60);
    uVar4 = FUN_00934f94(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_2);
    FUN_01135c84(plVar9,uVar7,uVar4 & 1);
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x009278c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x20))(plVar9);
      return;
    }
  }
  return;
}


