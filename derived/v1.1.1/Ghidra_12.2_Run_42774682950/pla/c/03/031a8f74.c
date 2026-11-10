/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a8f74; name: FUN_031a8f74
 */


void FUN_031a8f74(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_04301770;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined4 *)((long)param_1 + 0x1c) = param_5;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar1 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  return;
}


