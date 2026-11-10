/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012258; name: FUN_03012258
 */


void FUN_03012258(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *local_18;
  
  param_1[2] = 1;
  *param_1 = &DAT_042c39e8;
  param_1[1] = 0xffffffff;
  uVar1 = *(undefined2 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 4) = uVar1;
  *param_1 = &PTR_LAB_042c3930;
  plVar5 = param_1 + 5;
  *plVar5 = 0;
  lVar4 = *(long *)(param_2 + 0x28);
  if ((lVar4 != 0) && (lVar4 = lVar4 + param_2 + 0x28, lVar4 != 0)) {
    (**(code **)(DAT_0442d408 + (ulong)*(byte *)(lVar4 + 0x20) * 0x80 + 0x28))
              (&local_18,lVar4,param_3,param_4);
    lVar4 = 0;
    if (local_18 != (long *)0x0) {
      lVar4 = (long)local_18 - (long)plVar5;
    }
    *plVar5 = lVar4;
    FUN_032d645c();
    if ((local_18 != (long *)0x0) && (local_18[1] != 0)) {
      plVar5 = local_18 + 2;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_18 + 0x18))();
      }
    }
  }
  return;
}


