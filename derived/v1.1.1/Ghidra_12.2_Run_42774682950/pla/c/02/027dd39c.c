/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dd39c; name: FUN_027dd39c
 */


void FUN_027dd39c(undefined8 *param_1,undefined2 param_2,undefined2 param_3,byte param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  FUN_027db9ac(param_1,3);
  local_50 = param_1[1];
  *param_1 = &PTR_LAB_0426c918;
  param_1[9] = &PTR_LAB_0426c988;
  param_1[10] = &PTR_LAB_0426c9d0;
  *(undefined2 *)(param_1 + 0x13) = param_2;
  *(undefined2 *)((long)param_1 + 0x9a) = param_3;
  *(byte *)((long)param_1 + 0x9c) = param_4 & 1;
  lVar4 = FUN_0161a7bc(auStack_48,local_50,&local_50,*param_5);
  param_1[0x14] = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = param_1[1];
  lVar4 = FUN_0161a7bc(auStack_48,local_50,&local_50,*param_6);
  param_1[0x15] = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  return;
}


