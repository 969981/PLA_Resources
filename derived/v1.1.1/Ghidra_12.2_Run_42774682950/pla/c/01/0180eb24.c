/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0180eb24; name: FUN_0180eb24
 */


void FUN_0180eb24(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  
  iVar2 = (int)param_1[0xd];
  if (iVar2 == 3) {
LAB_0180eb44:
                    /* WARNING: Could not recover jumptable at 0x0180eb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1);
    return;
  }
  if (iVar2 == 2) {
    uVar5 = (*(code *)param_1[0x14])(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      pcVar8 = (code *)param_1[0x15];
      if (pcVar8 != (code *)0x0) {
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        (*pcVar8)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0xd) = 3;
      goto LAB_0180eb44;
    }
LAB_0180eb84:
    iVar2 = (int)param_1[0xd];
  }
  else if (iVar2 == 1) {
    uVar5 = (*(code *)param_1[0x14])(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      pcVar8 = (code *)param_1[0x15];
      if (pcVar8 != (code *)0x0) {
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        (*pcVar8)(param_1 + 0x18);
      }
      param_1[0x14] = (long)&LAB_0180f7e8;
      param_1[0x15] = (long)&LAB_0180f81c;
      param_1[0x16] = (long)&LAB_0180f820;
      puVar9 = &LAB_0180f82c;
      uVar7 = 2;
      goto LAB_0180ebf4;
    }
    goto LAB_0180eb84;
  }
  if (iVar2 != 0) {
    return;
  }
  uVar5 = FUN_00938764(param_1 + 0xe,1,param_2,0,param_1[1],0);
  if (((uVar5 & 1) == 0) || (plVar10 = (long *)param_1[0x13], plVar10 == (long *)0x0)) {
LAB_0180ebac:
    pcVar8 = (code *)param_1[0x15];
  }
  else {
    lVar11 = plVar10[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = plVar10[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0180ebac;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
    pcVar8 = (code *)param_1[0x15];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar8)(param_1 + 0x18);
  }
  param_1[0x14] = (long)FUN_0180f78c;
  param_1[0x15] = (long)&LAB_0180f7cc;
  param_1[0x16] = (long)&LAB_0180f7d0;
  puVar9 = &LAB_0180f7dc;
  uVar7 = 1;
LAB_0180ebf4:
  param_1[0x17] = (long)puVar9;
  param_1[0x18] = (long)param_1;
  *(undefined4 *)(param_1 + 0xd) = uVar7;
  return;
}


