/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ec708; name: FUN_030ec708
 */


void FUN_030ec708(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x100);
      if (0 < iVar2) {
        lVar9 = (long)iVar2 + -1;
        lVar8 = *(long *)(param_1 + 0x18) + lVar7 * 0x40;
        plVar5 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
        (**(code **)(*plVar5 + 0x30))(plVar5,param_1,lVar8);
        if (0 < lVar9) {
          lVar9 = (long)iVar2 + -2;
          do {
            plVar5 = *(long **)(*(long *)(param_1 + 0xf8) + lVar9 * 8);
            (**(code **)(*plVar5 + 0x30))(plVar5,param_1,lVar8);
            bVar4 = 0 < lVar9;
            lVar9 = lVar9 + -1;
          } while (bVar4);
        }
        iVar6 = *(int *)(param_1 + 0x20);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  plVar5 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *(long *)(param_1 + 0x28) = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0x38) != -1) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x110))
              (*(long **)(param_1 + 0x50),*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
               0);
  }
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1 + 0x28) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_1 + 0x28),&DAT_03aae430,param_1 + 0xa0);
  lVar7 = (long)*(int *)(param_1 + 0x100);
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      lVar8 = lVar7 + -1;
      plVar5 = *(long **)(*(long *)(param_1 + 0xf8) + lVar7 * 8 + -8);
      (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
      lVar7 = lVar8;
    } while (0 < lVar8);
  }
  return;
}


