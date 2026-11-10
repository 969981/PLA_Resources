/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117bce0; name: FUN_0117bce0
 */


undefined8 FUN_0117bce0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar5 = FUN_0117b878();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN_0117ad84(param_1,0);
  FUN_0117a33c(param_1);
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_40 = 0x8a4920ee3f3bfb33;
  pcStack_38 = "anime_shift_list_poke_reset";
  local_30 = 0x1b;
  uStack_28 = 0;
  FUN_0283b1e8(plVar7,&local_40);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = *(long *)(param_1 + 0x440);
      goto joined_r0x0117bd7c;
    }
  }
  lVar6 = *(long *)(param_1 + 0x440);
joined_r0x0117bd7c:
  if (lVar6 != 0) {
    FUN_02831440();
  }
  return 1;
}


