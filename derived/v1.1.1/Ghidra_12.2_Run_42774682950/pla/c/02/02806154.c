/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02806154; name: FUN_02806154
 */


void FUN_02806154(long param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = 0xe2a06d3a0634e918;
  pcStack_58 = "grid_panel";
  local_50 = 10;
  local_48 = (long *)0x0;
  lVar5 = FUN_00d2ec48(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x468);
  uVar1 = *(undefined4 *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0x1c) == 0) {
    iVar3 = *param_2 + *(int *)(lVar6 + 0xc) * param_2[1];
  }
  else {
    iVar3 = param_2[1] + *(int *)(lVar6 + 0x10) * *param_2;
  }
  *(int *)(lVar6 + 8) = iVar3;
  FUN_0280e96c(lVar5,iVar3,uVar1,0);
  local_60 = 0xe2a06d3a0634e918;
  pcStack_58 = "grid_panel";
  local_50 = 10;
  local_48 = (long *)0x0;
  lVar5 = FUN_00d2ec48(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar5 = *(long *)(lVar5 + 0x468);
  iVar3 = *(int *)(lVar5 + 8);
  if (*(int *)(lVar5 + 0x1c) == 0) {
    iVar2 = *(int *)(lVar5 + 0xc);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar3 / iVar2;
    }
    iVar2 = iVar3 - iVar4 * iVar2;
  }
  else {
    iVar2 = 0;
    if (*(int *)(lVar5 + 0x10) != 0) {
      iVar2 = iVar3 / *(int *)(lVar5 + 0x10);
    }
  }
  FUN_02804ac0(param_1,iVar2);
  return;
}


