/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03000e28; name: FUN_03000e28
 */


undefined8 FUN_03000e28(long *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  
  if (((int)param_1[1] <= (int)param_2) ||
     (lVar5 = *param_1, (*(byte *)(lVar5 + (long)(int)param_2 * 0xc0 + 0x54) & 0xf) != 0)) {
    return 0x80040200;
  }
  uVar7 = *(uint *)((long)param_1 + 0x1c) & 0xffffff;
  if (uVar7 == param_2) {
    *(uint *)((long)param_1 + 0x1c) =
         *(uint *)((long)param_1 + 0x1c) + 0x1000000 & 0xff000000 |
         *(uint *)(lVar5 + (long)(int)param_2 * 0xc0) & 0xffffff;
  }
  else {
    do {
      puVar6 = (uint *)(lVar5 + (long)(int)uVar7 * 0xc0);
      uVar7 = *puVar6;
    } while (uVar7 != 0xffffffff && uVar7 != param_2);
    if (uVar7 == 0xffffffff) {
      return 0x80040200;
    }
    *puVar6 = *(uint *)(lVar5 + (long)(int)uVar7 * 0xc0);
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
  *(undefined8 *)(*param_1 + (long)(int)param_2 * 0xc0 + 0x78) = 0;
  return 0;
}


