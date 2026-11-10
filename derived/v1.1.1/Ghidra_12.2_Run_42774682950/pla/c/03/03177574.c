/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03177574; name: FUN_03177574
 */


void FUN_03177574(long param_1,int *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int local_38 [2];
  
  FUN_03184c20(*(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0 + 0x10),param_1);
  local_38[0] = *param_2;
  FUN_031778ac(param_1,local_38);
  lVar5 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0;
  plVar4 = *(long **)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar5 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0;
  *(byte *)(lVar5 + 0xe0) = *(byte *)(lVar5 + 0xe0) | 4;
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0 + 0x1c) = 0xffffffff;
  }
  return;
}


