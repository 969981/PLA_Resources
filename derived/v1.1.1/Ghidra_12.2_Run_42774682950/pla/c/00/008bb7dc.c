/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bb7dc; name: FUN_008bb7dc
 */


undefined8 FUN_008bb7dc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *local_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    local_40 = *(long **)(param_1 + 0x88);
    if (local_40 != (long *)0x0) {
      lVar11 = local_40[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar8;
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
    }
    uVar9 = FUN_008b2884(param_1,&local_40);
    if (local_40 != (long *)0x0) {
      lVar11 = local_40[0xb];
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
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if ((uVar9 & 1) != 0) {
      return 2;
    }
  }
  else if (*(int *)(param_1 + 0x80) == 0) {
    uVar5 = *(int *)(param_1 + 0x7c) - 1;
    if (2 < uVar5) {
      uVar5 = 1;
    }
    FUN_008b2878(param_1);
    uVar8 = FUN_00923c00();
    uVar6 = FUN_00934624(uVar8,0,0);
    FUN_008b2878(param_1);
    uVar8 = FUN_00923c00();
    uVar7 = FUN_00934624(uVar8,1,0);
    FUN_008b2878(param_1);
    uVar8 = FUN_00923bc4();
    FUN_009a27ac(&local_38,uVar8,uVar5,uVar6,uVar7);
    plVar10 = *(long **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (plVar10 != (long *)0x0) {
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
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x88) = local_38;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  return 0;
}


