/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00994018; name: FUN_00994018
 */


void FUN_00994018(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_28 [4];
  int local_24;
  
  if (param_2 != 0) {
    uVar8 = *(ulong *)(param_1 + 0xd8);
    uVar7 = (ulong)param_2;
    if ((uVar8 & uVar8 - 1) == 0) {
      plVar9 = *(long **)(*(long *)(param_1 + 0xd0) + (uVar8 - 1 & uVar7) * 8);
      do {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9[1] != uVar7);
      } while (*(int *)(plVar9 + 2) != param_2);
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
      plVar9 = *(long **)(*(long *)(param_1 + 0xd0) + uVar8 * 8);
      do {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9[1] != uVar7);
      } while (*(int *)(plVar9 + 2) != param_2);
    }
    plVar9 = *(long **)((long)plVar9 + 0x18);
    if (plVar9 != (long *)0x0) {
      FUN_02a439f4(plVar9[0xb]);
    }
    lVar6 = FUN_009aff90(plVar9 + 0x1e,auStack_28);
    if (lVar6 != 0) {
      FUN_01836814(lVar6,0);
    }
    if (plVar9 != (long *)0x0) {
      lVar6 = plVar9[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  local_24 = param_2;
  FUN_009b038c(param_1 + 0xd0,&local_24);
  return;
}


