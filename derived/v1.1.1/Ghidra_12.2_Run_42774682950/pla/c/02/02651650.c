/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02651650; name: FUN_02651650
 */


long FUN_02651650(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  FUN_026517d8();
  FUN_008c4b3c(param_1 + 0x10,param_2 + 0x10);
  FUN_019a99b8(param_1 + 0x20,param_2 + 0x20);
  FUN_01aff02c(param_1 + 0x30,param_2 + 0x30);
  lVar9 = *(long *)(param_2 + 0x40);
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar9;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_018e5814(param_1 + 0x48,param_2 + 0x48);
  FUN_00cf9b38(param_1 + 0x58,param_2 + 0x58);
  FUN_025dad40(param_1 + 0x68,param_2 + 0x68);
  FUN_01afe0dc(param_1 + 0x78,param_2 + 0x78);
  FUN_02650860(param_1 + 0x88,param_2 + 0x88);
  FUN_02650ad8(param_1 + 0x98,param_2 + 0x98);
  FUN_00cf9db0(param_1 + 0xa8,param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  uVar7 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  uVar8 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar8;
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0xf0);
  uVar7 = *(undefined8 *)(param_2 + 0xf8);
  uVar8 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = uVar8;
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  uVar8 = *(undefined8 *)(param_2 + 0x120);
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  *(undefined8 *)(param_1 + 0x110) = uVar6;
  return param_1;
}


