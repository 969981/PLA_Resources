/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00997e84; name: FUN_00997e84
 */


void FUN_00997e84(long param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *local_28;
  
  uVar8 = *(ulong *)(param_1 + 0x70);
  bVar3 = *param_2;
  uVar7 = (ulong)bVar3;
  if ((uVar8 & uVar8 - 1) == 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x68) + ((int)uVar8 - 1 & uVar7) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar7);
    } while (*(byte *)(plVar9 + 2) != bVar3);
  }
  else {
    uVar10 = uVar7;
    if (uVar8 <= uVar7) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar7 / uVar8;
      }
      uVar10 = uVar7 - uVar10 * uVar8;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar7);
    } while (*(byte *)(plVar9 + 2) != bVar3);
  }
  local_28 = *(long **)((long)plVar9 + 0x18);
  if (local_28 != (long *)0x0) {
    lVar11 = local_28[0xb];
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
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00ab044c(&local_28,param_3 & 1);
  if (local_28 != (long *)0x0) {
    lVar11 = local_28[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


