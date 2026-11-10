/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080fd30; name: FUN_0080fd30
 */


undefined8 FUN_0080fd30(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_50 [32];
  
  FUN_007f0fc8(auStack_50,param_2);
  local_58 = 0;
  local_60 = 0x10;
  FUN_007e45fc(auStack_50,&local_60);
  FUN_007e34a4(auStack_50);
  plVar8 = *(long **)(*(long *)(param_1 + 0x188) + 0x120);
  (**(code **)(*plVar8 + 0x68))(plVar8,param_2);
  iVar7 = *(int *)(param_1 + 0x150);
  if (0 < iVar7) {
    lVar6 = *(long *)(param_1 + 0x140);
    iVar3 = iVar7;
    while( true ) {
      if (0 < iVar7) {
        iVar7 = 0;
        if (*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x14c)) {
          iVar7 = *(int *)(param_1 + 0x148);
        }
        lVar6 = lVar6 + (long)(*(int *)(param_1 + 0x14c) - iVar7) * 0x20;
      }
      FUN_007f0d08(auStack_50,lVar6);
      if (0 < *(int *)(param_1 + 0x150)) {
        iVar7 = 0;
        if (*(int *)(param_1 + 0x14c) + 1 < *(int *)(param_1 + 0x148)) {
          iVar7 = *(int *)(param_1 + 0x14c) + 1;
        }
        *(int *)(param_1 + 0x14c) = iVar7;
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
      }
      uVar4 = (**(code **)(*plVar8 + 0x68))(plVar8,auStack_50);
      if ((uVar4 & 1) != 0) {
        iVar7 = *(int *)(param_1 + 0x150);
        iVar2 = *(int *)(param_1 + 0x148);
        if (iVar7 < iVar2) {
          *(int *)(param_1 + 0x150) = iVar7 + 1;
          iVar7 = *(int *)(param_1 + 0x14c) + iVar7;
          iVar1 = 0;
          if (iVar2 <= iVar7) {
            iVar1 = iVar2;
          }
          FUN_007f0f88(*(long *)(param_1 + 0x140) + (long)(iVar7 - iVar1) * 0x20,auStack_50);
        }
      }
      iVar7 = *(int *)(param_1 + 0x150);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      lVar6 = *(long *)(param_1 + 0x140);
    }
  }
  iVar3 = *(int *)(param_1 + 0x148);
  if (iVar7 < iVar3) {
    *(int *)(param_1 + 0x150) = iVar7 + 1;
    iVar7 = *(int *)(param_1 + 0x14c) + iVar7;
    iVar2 = 0;
    if (iVar3 <= iVar7) {
      iVar2 = iVar3;
    }
    FUN_007f0f88(*(long *)(param_1 + 0x140) + (long)(iVar7 - iVar2) * 0x20,param_2);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


