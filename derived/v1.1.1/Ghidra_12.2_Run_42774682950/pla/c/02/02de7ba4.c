/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de7ba4; name: FUN_02de7ba4
 */


void FUN_02de7ba4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long *local_60 [4];
  long *local_40;
  long *local_28;
  
  cVar3 = **(char **)(param_3 + 8);
  if (cVar3 == '\0') {
    return;
  }
  if ((cVar3 == '.' && 2 < *(ulong *)(param_3 + 0x10)) && ((*(char **)(param_3 + 8))[1] == '.')) {
    FUN_010c4f0c(local_60,param_2,param_3,&DAT_03996322);
    FUN_01232ed4(&local_28,param_1,local_60);
    if (local_28 == (long *)0x0) goto joined_r0x02de7c98;
    lVar7 = local_28[0xb];
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
    if (iVar2 + -1 != 0) goto joined_r0x02de7c98;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    pcVar8 = *(code **)(*local_28 + 0x20);
    plVar9 = local_28;
  }
  else {
    FUN_010c4f0c(local_60,param_2,param_3,&DAT_03996322);
    uVar5 = FUN_00938764(param_1,1,local_60,0,param_4,param_5);
    if (((uVar5 & 1) == 0) || (plVar9 = *(long **)(param_1 + 0x28), plVar9 == (long *)0x0))
    goto joined_r0x02de7c98;
    lVar7 = plVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = plVar9[0xb];
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
    if (iVar2 + -1 != 0) goto joined_r0x02de7c98;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    pcVar8 = *(code **)(*plVar9 + 0x20);
  }
  (*pcVar8)(plVar9);
joined_r0x02de7c98:
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return;
}


