/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a0870; name: FUN_010a0870
 */


void FUN_010a0870(undefined8 param_1,undefined8 *param_2,uint param_3,undefined2 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar9 = *(long **)(lVar8 + 0x268);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
  }
  if (param_3 < 2) {
    uVar6 = *param_2;
    uVar4 = FUN_010a0a80();
    FUN_0108fec0(uVar6,plVar9,uVar4,param_1);
switchD_010a0970_caseD_5:
    goto joined_r0x010a0a00;
  }
  switch(param_3) {
  case 2:
    uVar7 = FUN_010a16cc();
    FUN_01090830(*param_2,param_4,(uint)uVar7 & 0xffff,(uint)uVar7 >> 0x10 & 0xff,
                 uVar7 >> 0x18 & 0xff);
    goto joined_r0x010a097c;
  case 3:
  case 0xc:
    FUN_010904a0(*param_2);
joined_r0x010a097c:
    if (plVar9 == (long *)0x0) {
      return;
    }
    goto LAB_010a0924;
  case 4:
  case 0xd:
    FUN_010902e0(*param_2);
    break;
  default:
    goto switchD_010a0970_caseD_5;
  case 8:
    uVar6 = *param_2;
    uVar4 = FUN_010a0a80();
    FUN_010905e0(uVar6,plVar9,uVar4,param_1);
    break;
  case 9:
    uVar6 = *param_2;
    param_4 = 0xea62;
    goto LAB_010a09f4;
  case 0xb:
    uVar6 = *param_2;
LAB_010a09f4:
    FUN_01090960(uVar6,plVar9,param_4,param_1);
  }
joined_r0x010a0a00:
  if (plVar9 != (long *)0x0) {
LAB_010a0924:
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x010a0a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x20))(plVar9);
      return;
    }
  }
  return;
}


