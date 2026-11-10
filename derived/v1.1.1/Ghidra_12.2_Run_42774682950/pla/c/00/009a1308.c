/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a1308; name: FUN_009a1308
 */


void FUN_009a1308(long *param_1,long param_2,byte param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_38 [8];
  
  uVar8 = *(ulong *)(param_2 + 0x70);
  uVar7 = (ulong)param_3;
  if ((uVar8 & uVar8 - 1) == 0) {
    plVar9 = *(long **)(*(long *)(param_2 + 0x68) + ((int)uVar8 - 1 & uVar7) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar7);
    } while (*(byte *)(plVar9 + 2) != param_3);
  }
  else {
    if (uVar7 < uVar8) {
      uVar8 = uVar7;
    }
    else {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar7 / uVar8;
      }
      uVar8 = uVar7 - uVar5 * uVar8;
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x68) + uVar8 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar7);
    } while (*(byte *)(plVar9 + 2) != param_3);
  }
  plVar9 = *(long **)((long)plVar9 + 0x18);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_009a14a4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar10 = FUN_009ab5b8(plVar9 + 0x1e,auStack_48);
  if (lVar10 != 0) {
    *(undefined1 *)(lVar10 + 0x461) = param_4;
  }
  local_50 = 0;
  lVar10 = FUN_009bb5dc(auStack_38,*(undefined8 *)(param_2 + 8),&local_50);
  *param_1 = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_009a14a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return;
}


