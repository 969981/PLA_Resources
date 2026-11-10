/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b4e8c; name: FUN_010b4e8c
 */


void FUN_010b4e8c(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 900) = param_3;
  local_28 = param_2;
  lVar7 = FUN_00d48784(&local_50,param_2,&DAT_03a78ad8);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x378) = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  uVar6 = local_28;
  *(long *)(param_1 + 0x378) = lVar7;
  uVar9 = FUN_010b5054(DAT_043ba468,"FontHeapDef::TEXTURE_CACHE",0,0x1100000,local_28);
  *(undefined8 *)(param_1 + 200) = uVar9;
  uVar9 = FUN_010b5054(DAT_043ba468,"FontHeapDef::FONTFILE",1,0x800000,uVar6);
  *(undefined8 *)(param_1 + 0xd0) = uVar9;
  FUN_010b5130(&local_50,uVar6,&local_28);
  uVar9 = local_50;
  local_50 = 0;
  lVar7 = *(long *)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = uVar9;
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x3a0) = local_38;
  }
  else {
    FUN_010b8a2c(param_1 + 0x390);
    *(undefined8 *)(param_1 + 0x3a0) = local_38;
    uVar9 = *(undefined8 *)(param_1 + 0x388);
  }
  *(undefined8 *)(param_1 + 0x398) = uStack_40;
  *(undefined8 *)(param_1 + 0x390) = local_48;
  local_54 = 0x400;
  FUN_010b5250(&local_50,uVar6,&local_54,uVar9);
  uVar9 = local_50;
  local_50 = 0;
  lVar7 = *(long *)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = uVar9;
  if (lVar7 != 0) {
    FUN_010b8c84(param_1 + 0x3b0);
  }
  *(undefined8 *)(param_1 + 0x3b8) = uStack_40;
  *(undefined8 *)(param_1 + 0x3c0) = local_38;
  *(undefined8 *)(param_1 + 0x3b0) = local_48;
  FUN_010b5380(param_1);
  uVar10 = FUN_010b5528(param_1);
  while ((uVar10 & 1) == 0) {
    nn::os::SleepThread(16000000);
    uVar10 = FUN_010b5528(param_1);
  }
  FUN_010b55ac(param_1);
  return;
}


