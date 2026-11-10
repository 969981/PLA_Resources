/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b56ed8; name: FUN_00b56ed8
 */


void FUN_00b56ed8(long *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_40;
  long *plStack_38;
  
  if (((*PTR_DAT_04379d48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d48);
  }
  uVar5 = *(undefined8 *)PTR_DAT_04379d50;
  *(undefined8 *)PTR_DAT_04379d58 = uVar5;
  FUN_00b57040(param_1,uVar5,*(undefined8 *)(param_3 + 8));
  local_40 = *param_2;
  plVar6 = (long *)*param_1;
  plStack_38 = plVar6;
  if (plVar6 == (long *)0x0) {
    FUN_00b571f0(param_3,&local_40,0);
  }
  else {
    lVar7 = plVar6[0xb];
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
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + 0x70;
    }
    FUN_00b571f0(param_3,&local_40,lVar7);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


