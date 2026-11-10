/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00941ee0; name: FUN_00941ee0
 */


void FUN_00941ee0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_150 [8];
  long local_148 [30];
  uint local_58;
  undefined8 local_50;
  long *local_48;
  
  FUN_00928010(*(undefined8 *)(*(long *)(param_1 + 8) + 0x178),1);
  local_50 = 0x2000000;
  FUN_009346d8(auStack_150,*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),&local_50);
  if (local_58 != 0) {
    plVar7 = local_148;
    do {
      lVar6 = *plVar7;
      FUN_00928240(&local_48,*(undefined8 *)(*(long *)(param_1 + 8) + 0x178),
                   *(undefined1 *)(*(long *)(lVar6 + 0x70) + 0x7d));
      plVar5 = local_48;
      lVar6 = *(long *)(lVar6 + 0x70);
      FUN_02c5d784(local_48,*(undefined4 *)(lVar6 + 0x3a8));
      FUN_02c5d81c(plVar5,*(undefined4 *)(lVar6 + 0x3b0));
      if (*(short *)(lVar6 + 0x74) == 0) {
        FUN_02c5d648(plVar5,0);
      }
      else {
        FUN_02c5d6b0(plVar5,*(undefined4 *)(lVar6 + 0x3b4));
      }
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 10;
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != local_148 + local_58);
  }
  return;
}


