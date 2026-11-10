/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131acc8; name: FUN_0131acc8
 */


undefined4 FUN_0131acc8(undefined8 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  
  *param_4 = 0;
  if (param_3 < 0x15) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (param_1 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)param_1 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      param_1 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar6 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar6;
    plVar8 = *(long **)(lVar6 + 0x2b0);
    if (plVar8 == (long *)0x0) {
      lVar6 = 0x6c;
    }
    else {
      lVar6 = plVar8[0xb];
      param_1 = *(undefined8 **)(lVar6 + 0x18);
      if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        param_1 = (undefined8 *)(**(code **)*param_1)();
        *(undefined8 **)(lVar6 + 0x10) = param_1;
      }
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar7 = plVar8[0xb];
      lVar6 = (long)plVar8 + 0x6c;
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        param_1 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    uVar9 = *(undefined4 *)(lVar6 + (long)param_2 * 0xa8 + (ulong)param_3 * 8 + 0x118);
    uVar5 = FUN_0131afa4(param_1,param_2,(ulong)param_3);
    *param_4 = uVar5;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


