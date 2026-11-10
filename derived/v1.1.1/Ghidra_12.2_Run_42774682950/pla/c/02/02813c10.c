/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02813c10; name: FUN_02813c10
 */


void FUN_02813c10(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_0115a4bc();
  *param_1 = &PTR_FUN_0426e140;
  param_1[9] = &PTR_LAB_0426e1a0;
  param_1[10] = &PTR_LAB_0426e1e8;
  lVar5 = *param_2;
  param_1[0x12] = lVar5;
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
  param_1[0x15] = param_3[1];
  param_1[0x14] = *param_3;
  param_1[0x17] = param_4[1];
  param_1[0x16] = *param_4;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)((long)param_1 + 0xc4) = param_5;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}


