/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00994130; name: FUN_00994130
 */


void FUN_00994130(long *param_1,long param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_2 + 0xd8);
  iVar2 = *param_3;
  uVar6 = (ulong)iVar2;
  if ((uVar8 & uVar8 - 1) == 0) {
    plVar9 = *(long **)(*(long *)(param_2 + 0xd0) + (uVar8 - 1 & uVar6) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar6);
    } while (*(int *)(plVar9 + 2) != iVar2);
  }
  else {
    uVar10 = uVar6;
    if (uVar8 <= uVar6) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar6 / uVar8;
      }
      uVar10 = uVar6 - uVar10 * uVar8;
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0xd0) + uVar10 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar6);
    } while (*(int *)(plVar9 + 2) != iVar2);
  }
  lVar7 = *(long *)((long)plVar9 + 0x18);
  *param_1 = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


