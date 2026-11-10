/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03005d9c; name: FUN_03005d9c
 */


void FUN_03005d9c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_70 [4];
  short local_6c;
  char local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  
  if ((param_6 != 0) && (*(long *)(param_6 + 8) != 0)) {
    plVar4 = (long *)(param_6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[4];
  param_1[4] = param_6;
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
  *(undefined4 *)((long)param_1 + 0x34) = 0x7fffffff;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  local_54 = 0;
  (**(code **)(DAT_0442d408 + (ulong)*(byte *)(param_6 + 0x20) * 0x80 + 0x18))(param_6,auStack_70);
  param_1[9] = local_60;
  *(undefined2 *)(param_1 + 10) = local_58;
  *(short *)((long)param_1 + 0x52) = (short)local_54 + local_6c + 0x10;
  *(char *)((long)param_1 + 0x55) = local_64;
  if (*(char *)(param_6 + 0x21) != '\0') {
    *(char *)((long)param_1 + 0x55) = local_64 + *(char *)(param_6 + 0x21) * ' ';
  }
  *(undefined4 *)(param_1 + 6) = 0x7fffffff;
  *(undefined4 *)(param_1 + 8) = 0x6ffff;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined2 *)((long)param_1 + 0x56) = 0;
  param_1[0xb] = 0;
  return;
}


