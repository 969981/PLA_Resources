/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01adb7d8; name: FUN_01adb7d8
 */


void FUN_01adb7d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,long *param_6,undefined4 param_7,long *param_8,
                 undefined4 param_9)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_01a6fbe4();
  *param_1 = &PTR_LAB_0423d130;
  param_1[9] = &PTR_LAB_0423d278;
  param_1[10] = &PTR_FUN_0423d358;
  FUN_00befc74(param_1 + 0xb6,param_2);
  param_1[0xb7] = param_3;
  param_1[0xb8] = param_4;
  *(undefined4 *)(param_1 + 0xb9) = *param_5;
  *(undefined2 *)((long)param_1 + 0x5cc) = *(undefined2 *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0xba) = param_5[2];
  *(undefined1 *)((long)param_1 + 0x5d4) = *(undefined1 *)(param_5 + 3);
  *(undefined1 *)((long)param_1 + 0x5d5) = *(undefined1 *)((long)param_5 + 0xd);
  *(undefined4 *)(param_1 + 0xbb) = param_5[4];
  *(undefined4 *)((long)param_1 + 0x5dc) = param_5[5];
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  lVar5 = *param_6;
  param_1[0xc0] = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = param_7;
  lVar5 = *param_8;
  param_1[0xe6] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 0xe7) = param_9;
  param_1[0xe8] = &DAT_cbf29ce484222645;
  param_1[0xe9] = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  return;
}


