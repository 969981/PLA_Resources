/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00927d84; name: FUN_00927d84
 */


void FUN_00927d84(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  lVar5 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if (lVar5 == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x70) + 0x60);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar5 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar5;
  plVar7 = *(long **)(lVar5 + 0x298);
  if (plVar7 != (long *)0x0) {
    lVar5 = plVar7[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  switch(param_3) {
  case 0:
    FUN_011351f4(plVar7,uVar8);
    break;
  case 1:
    FUN_01135590(plVar7,uVar8);
  default:
    goto joined_r0x00927eac;
  case 4:
    FUN_01135328(plVar7,uVar8);
    break;
  case 5:
    FUN_0113545c(plVar7,uVar8);
    break;
  case 6:
    FUN_011356c4(plVar7,uVar8);
joined_r0x00927eac:
    if (plVar7 == (long *)0x0) {
      return;
    }
    goto LAB_00927e4c;
  }
  if (plVar7 != (long *)0x0) {
LAB_00927e4c:
    lVar5 = plVar7[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00927ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x20))(plVar7);
      return;
    }
  }
  return;
}


