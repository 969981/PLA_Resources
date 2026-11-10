/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276a854; name: FUN_0276a854
 */


void FUN_0276a854(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  
  *param_1 = &PTR_LAB_0426bac0;
  param_1[1] = param_2;
  param_1[2] = &PTR_FUN_041a5648;
  param_1[3] = *(undefined8 *)(param_3 + 8);
  lVar7 = *(long *)(param_3 + 0x10);
  param_1[4] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[5] = *(undefined8 *)(param_3 + 0x18);
  lVar7 = *(long *)(param_3 + 0x20);
  param_1[6] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = &PTR_FUN_0426bbf8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x12);
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[3];
    param_1[0x10] = param_4[2];
    param_1[0x11] = uVar4;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
  }
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_1 + 0x22);
    uVar2 = *param_5;
    uVar3 = param_5[1];
    uVar4 = param_5[3];
    param_1[0x20] = param_5[2];
    param_1[0x21] = uVar4;
    param_1[0x1e] = uVar2;
    param_1[0x1f] = uVar3;
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if ((code *)param_6[2] != (code *)0x0) {
    (*(code *)param_6[2])(param_6 + 4,param_1 + 0x32);
    uVar2 = *param_6;
    uVar3 = param_6[1];
    uVar4 = param_6[3];
    param_1[0x30] = param_6[2];
    param_1[0x31] = uVar4;
    param_1[0x2e] = uVar2;
    param_1[0x2f] = uVar3;
  }
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,param_1 + 0x42);
    uVar2 = *param_7;
    uVar3 = param_7[1];
    uVar4 = param_7[3];
    param_1[0x40] = param_7[2];
    param_1[0x41] = uVar4;
    param_1[0x3e] = uVar2;
    param_1[0x3f] = uVar3;
  }
  return;
}


