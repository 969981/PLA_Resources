/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028579d0; name: FUN_028579d0
 */


int FUN_028579d0(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long *local_40;
  long *local_38;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x148) == 0)) {
    iVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
    if (*(long *)(lVar8 + 8) == 0) {
      uVar5 = FUN_02c5e31c();
      uVar5 = uVar5 & 0xffff;
    }
    else {
      uVar5 = FUN_02c66b3c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
    if (*(long *)(lVar8 + 8) == 0) {
      uVar6 = FUN_02c5e31c();
      uVar6 = uVar6 & 0xffff;
    }
    else {
      uVar6 = FUN_02c66e84(lVar8);
    }
    iVar9 = *(int *)(param_1 + 0x150);
    *(uint *)(param_1 + 0x150) = uVar5;
    FUN_0143bf48(&local_38,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x140),iVar9,
                 uVar6,uVar5,param_2);
    uVar10 = *(undefined8 *)(param_1 + 0x148);
    local_40 = local_38;
    if (local_38 != (long *)0x0) {
      lVar8 = local_38[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0115b43c(uVar10,&local_40,0x10);
    if (local_40 != (long *)0x0) {
      lVar8 = local_40[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    iVar9 = uVar5 - iVar9;
    if (local_38 != (long *)0x0) {
      lVar8 = local_38[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return iVar9;
}


