/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d5a58; name: FUN_014d5a58
 */


ulong FUN_014d5a58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char local_40 [16];
  long *local_28;
  
  if ((((*(long *)(param_1 + 0xa8) == 0) || (lVar7 = FUN_014d4b64(), lVar7 == 0)) ||
      (*(long *)(param_1 + 0x78) == 0)) || (lVar8 = FUN_014d472c(), lVar8 == 0)) {
    uVar9 = 0x900000000;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xa4);
    if (iVar5 != 0x14) {
      if (iVar5 == 0x13) {
        uVar9 = FUN_014de850(lVar7,6);
        if ((uVar9 & 1) == 0) goto LAB_014d5b14;
        uVar6 = 0x14;
      }
      else {
        if (iVar5 != 0x12) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        uVar9 = FUN_014de744(lVar7,6);
        if ((uVar9 & 1) == 0) {
LAB_014d5b14:
          uVar11 = 0;
          uVar9 = 0;
          goto LAB_014d5ad8;
        }
        uVar6 = 0x13;
      }
      uVar11 = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xa4) = uVar6;
      goto LAB_014d5ad8;
    }
    FUN_02c3041c(*(undefined8 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 200) = 0;
    uVar10 = FUN_014db8b8(lVar8);
    local_28 = *(long **)(param_1 + 0xc0);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    iVar5 = FUN_00d75720(uVar10,&local_28);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (iVar5 == 0) {
      local_40[8] = 0;
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      uVar10 = FUN_02c2f268(*(undefined8 *)(param_1 + 0xc0));
      uVar6 = FUN_02c30040(*(undefined8 *)(param_1 + 0xc0));
      FUN_02c30960(local_40,9,uVar10,uVar6);
      iVar5 = atoi(local_40);
      *(int *)(param_1 + 200) = iVar5;
      uVar9 = 0x700000000;
    }
    else {
      uVar9 = 0;
    }
  }
  uVar11 = 1;
LAB_014d5ad8:
  return uVar9 | uVar11;
}


