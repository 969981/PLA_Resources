/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122cd5c; name: FUN_0122cd5c
 */


void FUN_0122cd5c(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long *local_48;
  ulong local_40;
  undefined1 local_38;
  byte local_37;
  undefined1 local_36;
  long *local_28;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar6 = FUN_0122a984();
    if (lVar6 != 0) {
      local_36 = 0;
      local_38 = 0;
      local_48 = (long *)0x0;
      local_40 = 0;
      bVar5 = FUN_0122bda0();
      local_37 = ~bVar5 & 1;
      local_40 = local_40 & 0xffffffff00000000;
      FUN_01230c58(&local_28,*(undefined8 *)(param_1 + 0x90),param_2);
      local_48 = local_28;
      if (local_28 != (long *)0x0) {
        plVar1 = local_28 + 10;
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
          (**(code **)(*local_28 + 0x10))();
        }
      }
      FUN_00d67ea8(*(undefined8 *)(param_1 + 0x98),&local_48);
      FUN_0122bd94(lVar6,1);
    }
  }
  return;
}


