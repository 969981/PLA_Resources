/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0358; name: FUN_010e0358
 */


undefined8 FUN_010e0358(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_4;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_2 < 0x20) && (param_3 < 0x1e)) {
    (**(code **)(*plVar8 + 0x28))
              (plVar8,param_1 + (ulong)param_2 * 0x2a30 + (ulong)param_3 * 0x168 + 0x68);
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  uVar5 = FUN_02c6849c(*(undefined8 *)(*param_4 + 0x98));
  if ((int)uVar5 != 0) {
    if ((param_5 & 1) == 0) {
      lVar7 = *param_4;
      uVar6 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) != 0) {
        return 0;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


