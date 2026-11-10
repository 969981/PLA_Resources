/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3a748; name: FUN_02b3a748
 */


void FUN_02b3a748(long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = (long *)*param_2;
  plVar8 = (long *)(param_1 + 0x60);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar5 = (long *)*plVar8;
  *plVar8 = (long)plVar10;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x68) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = param_2[2];
  *(undefined8 *)(param_1 + 0x78) = param_2[3];
  plVar10 = (long *)param_2[4];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar5 = *(long **)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar10;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 5);
  if ((param_3 & 1) == 0) {
    FUN_009882cc(param_1 + 0xb0,0,plVar8,0,param_4,param_5);
    return;
  }
  uVar6 = FUN_009882cc(param_1 + 0xb0,1,plVar8,0,param_4,param_5);
  if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xd8), plVar8 != (long *)0x0)) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02b3a8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8);
      return;
    }
  }
  return;
}


