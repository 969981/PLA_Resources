/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004e6c; name: FUN_03004e6c
 */


undefined8 FUN_03004e6c(long *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar5 = 0x80040200;
  if (((int)param_2 < (int)param_1[1]) &&
     (lVar6 = *param_1, *(int *)(lVar6 + (long)(int)param_2 * 0x68 + 0x30) == 0x7fffffff)) {
    uVar8 = *(uint *)((long)param_1 + 0x1c) & 0xffffff;
    if (uVar8 == param_2) {
      *(uint *)((long)param_1 + 0x1c) =
           *(uint *)((long)param_1 + 0x1c) + 0x1000000 & 0xff000000 |
           *(uint *)(lVar6 + (long)(int)param_2 * 0x68 + 0x34) & 0xffffff;
    }
    else {
      do {
        puVar7 = (uint *)(lVar6 + (long)(int)uVar8 * 0x68 + 0x34);
        uVar8 = *puVar7;
      } while (uVar8 != 0xffffffff && uVar8 != param_2);
      if (uVar8 == 0xffffffff) {
        return 0x80040200;
      }
      *puVar7 = *(uint *)(lVar6 + (long)(int)uVar8 * 0x68 + 0x34);
    }
    iVar1 = param_2 + 1;
    if (iVar1 <= *(int *)((long)param_1 + 0x24) + 1) {
      iVar1 = *(int *)((long)param_1 + 0x24) + 1;
    }
    *(int *)((long)param_1 + 0x24) = iVar1 + -1;
    plVar2 = param_1 + 4;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *param_1 + (long)(int)param_2 * 0x68;
    uVar5 = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x56) = 0;
    *(undefined8 *)(lVar6 + 0x5e) = 0;
    *(undefined2 *)(lVar6 + 0x66) = 0;
  }
  return uVar5;
}


