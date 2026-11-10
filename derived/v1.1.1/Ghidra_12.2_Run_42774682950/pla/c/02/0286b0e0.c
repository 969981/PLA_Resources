/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286b0e0; name: FUN_0286b0e0
 */


void FUN_0286b0e0(long param_1,ulong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + 0x50);
  plVar7 = (long *)*param_3;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
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
  param_2 = param_2 & 0xff;
  lVar10 = lVar9 + param_2 * 0x120;
  plVar6 = *(long **)(lVar10 + 0x108);
  if (*(int *)(lVar10 + 0x100) == 0) {
    *(undefined4 *)(lVar10 + 0x100) = 1;
    lVar9 = lVar9 + param_2 * 0x120;
    puVar8 = (undefined8 *)(lVar9 + 0x108);
    *(undefined8 *)(lVar9 + 0x108) = 0;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
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
        (**(code **)(*plVar6 + 0x20))();
      }
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = plVar7[0xb];
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
                    /* WARNING: Could not recover jumptable at 0x0286b1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x20))(plVar7);
        return;
      }
      return;
    }
    *(undefined4 *)(lVar10 + 0x100) = 1;
    lVar9 = lVar9 + param_2 * 0x120;
    puVar8 = (undefined8 *)(lVar9 + 0x108);
    *(undefined8 *)(lVar9 + 0x108) = 0;
  }
  *puVar8 = plVar7;
  return;
}


