/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a6030; name: FUN_026a6030
 */


void FUN_026a6030(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_026a661c();
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_008c4b3c(param_1 + 2,param_2 + 0x10);
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_019a99b8(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_01aff02c(param_1 + 6,param_2 + 0x30);
  lVar5 = *(long *)(param_2 + 0x40);
  param_1[8] = lVar5;
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
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_018e5814(param_1 + 9,param_2 + 0x48);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  FUN_00cf9b38(param_1 + 0xb,param_2 + 0x58);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  FUN_025dad40(param_1 + 0xd,param_2 + 0x68);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  FUN_01afe0dc(param_1 + 0xf,param_2 + 0x78);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  FUN_025fa60c(param_1 + 0x11,param_2 + 0x88);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_00cf9db0(param_1 + 0x13,param_2 + 0x98);
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar6;
  param_1[0x15] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar6 = *(undefined8 *)(param_2 + 200);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1b] = uVar7;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0xf0);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar6 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x1d] = uVar6;
  param_1[0x1e] = uVar7;
  param_1[0x1c] = uVar4;
  return;
}


