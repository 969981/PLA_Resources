/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00998ea0; name: FUN_00998ea0
 */


uint FUN_00998ea0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *local_28;
  
  if (param_2 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0xd8);
    uVar8 = (ulong)param_2;
    if ((uVar9 & uVar9 - 1) == 0) {
      plVar10 = *(long **)(*(long *)(param_1 + 0xd0) + (uVar9 - 1 & uVar8) * 8);
      do {
        do {
          plVar10 = (long *)*plVar10;
        } while (plVar10[1] != uVar8);
      } while (*(int *)(plVar10 + 2) != param_2);
    }
    else {
      if (uVar8 < uVar9) {
        uVar9 = uVar8;
      }
      else {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar8 / uVar9;
        }
        uVar9 = uVar8 - uVar5 * uVar9;
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0xd0) + uVar9 * 8);
      do {
        do {
          plVar10 = (long *)*plVar10;
        } while (plVar10[1] != uVar8);
      } while (*(int *)(plVar10 + 2) != param_2);
    }
    plVar10 = *(long **)((long)plVar10 + 0x18);
    local_28 = plVar10;
    if (plVar10 == (long *)0x0) {
      uVar6 = FUN_009986ec(&local_28);
    }
    else {
      lVar11 = plVar10[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar7;
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
      uVar6 = FUN_009986ec(&local_28);
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
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  return uVar6 & 1;
}


