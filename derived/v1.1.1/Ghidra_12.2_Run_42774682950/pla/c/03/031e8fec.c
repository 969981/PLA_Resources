/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e8fec; name: FUN_031e8fec
 */


void FUN_031e8fec(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  iVar6 = *(int *)(param_1 + 0xa8);
  lVar9 = *(long *)(param_1 + 0xa0);
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)(param_1 + 0xac) & 0x3fffffff) <= iVar6) {
    lVar9 = FUN_031efab8(PTR_PTR_0434a080,iVar1,lVar9);
    iVar6 = *(int *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa0) = lVar9;
  }
  plVar7 = (long *)(lVar9 + (long)iVar6 * 0x60);
  *(int *)(param_1 + 0xa8) = iVar1;
  *plVar7 = 0;
  *(undefined2 *)(plVar7 + 10) = 0;
  *(undefined1 *)((long)plVar7 + 0x52) = 0;
  if ((param_2 == (long *)0x0) || (param_2[1] == 0)) {
    *plVar7 = (long)param_2;
  }
  else {
    plVar5 = param_2 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)*plVar7;
    *plVar7 = (long)param_2;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar2 = plVar5 + 2;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  lStack_58 = param_2[7];
  local_60 = param_2[6];
  lVar9 = lVar9 + (long)iVar6 * 0x60;
  *(long *)(lVar9 + 0x38) = lStack_58;
  *(long *)(lVar9 + 0x30) = local_60;
  lVar8 = param_2[8];
  *(long *)(lVar9 + 0x48) = param_2[9];
  *(long *)(lVar9 + 0x40) = lVar8;
  *(undefined1 *)((long)plVar7 + 0x52) = 1;
  local_50 = 0;
  uStack_48 = 0;
  (**(code **)(*param_2 + 0x48))
            (*(undefined4 *)(param_1 + 0x180),param_2,&local_60,param_1 + 0x150,lVar9 + 0x10);
  local_80 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20),
                      (float)*(undefined8 *)(lVar9 + 0x10) + (float)*(undefined8 *)(lVar9 + 0x40));
  uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20),
                       (float)*(undefined8 *)(lVar9 + 0x18) + (float)*(undefined8 *)(lVar9 + 0x48));
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20),
                      (float)*(undefined8 *)(lVar9 + 0x20) + (float)*(undefined8 *)(lVar9 + 0x40));
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20),
                       (float)*(undefined8 *)(lVar9 + 0x28) + (float)*(undefined8 *)(lVar9 + 0x48));
  local_38 = param_1;
  FUN_031e916c(param_1 + 0x20,&local_80,&local_38);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


