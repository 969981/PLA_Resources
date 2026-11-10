/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d76780; name: FUN_00d76780
 */


ulong FUN_00d76780(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ShowKeyboardArg aSStack_560 [1280];
  long local_60;
  undefined8 uStack_58;
  undefined2 *local_48;
  
  local_48 = &DAT_03a759e8;
  if (*(undefined2 **)(param_3 + 0x58) != (undefined2 *)0x0) {
    local_48 = *(undefined2 **)(param_3 + 0x58);
  }
  plVar6 = (long *)FUN_00d76b70(aSStack_560,param_2,&local_48);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = nn::swkbd::GetRequiredStringBufferSize();
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,uVar7,0x1000);
  local_60 = lVar8;
  uStack_58 = uVar7;
  FUN_00d76920(aSStack_560,param_3,param_2);
  uVar5 = nn::swkbd::ShowKeyboard((String *)&local_60,aSStack_560);
  FUN_00d76a90(aSStack_560,param_2);
  if (uVar5 == 0) {
    FUN_02c302d0(param_1,local_60);
    uVar5 = FUN_02c2ffb8(param_1,plVar6);
    uVar11 = 0;
    uVar10 = (ulong)(~uVar5 & 1) << 0x20;
  }
  else {
    uVar10 = 0;
    uVar11 = 0x80000001;
    if ((uVar5 & 0x3fffff) != 0x29f) {
      uVar11 = 0x80000002;
    }
  }
  if (lVar8 != 0) {
    uVar9 = FUN_02bcc75c(param_2);
    if ((uVar9 & 1) == 0) {
      (**(code **)(*param_2 + 0x18))(param_2,lVar8,uVar7,0x1000);
    }
    else {
      FUN_02bcc824(param_2,lVar8,uVar7,0x1000);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return uVar11 | uVar10;
}


