/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0138dea8; name: FUN_0138dea8
 */


void FUN_0138dea8(undefined8 *param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_04208ab0;
  param_1[9] = &PTR_LAB_04208bb0;
  param_1[10] = &PTR_LAB_04208bf8;
  FUN_0138df1c(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0xd1) = *param_4;
  lVar4 = *(long *)(param_4 + 2);
  param_1[0xd2] = lVar4;
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
  return;
}


