/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a6b70; name: FUN_031a6b70
 */


void FUN_031a6b70(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  int local_3c;
  
  if ((((*(int *)(param_1 + 0xf4) < 0) || (*(int *)(param_1 + 0xf8) != param_3)) ||
      (*(int *)(param_1 + 0xf0) != (int)param_2)) ||
     (*(int *)(param_1 + 0xf4) != (int)((ulong)param_2 >> 0x20))) {
    local_48 = *(undefined4 *)(param_1 + 0x23c);
    local_50 = 0x8000020;
    local_4c = 0x2c;
    local_44 = param_2;
    local_3c = param_3;
    FUN_031aa380(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_50);
    plVar4 = *(long **)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0xf0) = param_2;
    *(int *)(param_1 + 0xf8) = param_3;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
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
    *(undefined1 *)(param_1 + 0x199) = 1;
    *(undefined1 *)(param_1 + 0xba) = 0;
    if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_031a7148(param_1);
    }
  }
  return;
}


