/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad73a8; name: FUN_01ad73a8
 */


void FUN_01ad73a8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_01a6fbe4();
  *param_1 = &PTR_LAB_0423c888;
  param_1[9] = &PTR_LAB_0423c9d0;
  param_1[10] = &PTR_FUN_0423cab0;
  FUN_00befc74(param_1 + 0xb6,param_2);
  param_1[0xb7] = *(undefined8 *)(param_2 + 0x20);
  param_1[0xb8] = *(undefined8 *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x30);
  param_1[0xb9] = lVar5;
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
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  param_1[0xdf] = 0;
  param_1[0xde] = uVar4;
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((long)param_1 + 0x704) = *(undefined4 *)(param_2 + 0x44);
  param_1[0xe1] = &DAT_cbf29ce484222645;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  return;
}


