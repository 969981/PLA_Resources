/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ff688; name: FUN_014ff688
 */


void FUN_014ff688(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar6 = *(long *)(param_1 + 0x630);
  local_40 = 0x3e15d4fcf512bfb7;
  pcStack_38 = "waza_custom_list";
  local_30 = 0x10;
  local_28 = (long *)0x0;
  FUN_00d2ee28(param_1 + 0x180,&local_40);
  uVar3 = FUN_0281a514();
  iVar1 = *(int *)(*(long *)(lVar6 + 0xa8) + (uVar3 & 0xffffffff) * 8);
  if (((*(int *)(param_1 + 0x640) == iVar1) || (*(int *)(param_1 + 0x644) == iVar1)) ||
     (*(int *)(param_1 + 0x648) == iVar1)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x64c) == iVar1;
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (*(int *)(param_1 + 0x658) == -1) {
    if (bVar2) {
      puVar4 = &DAT_03a7c1f0;
LAB_014ff764:
      uVar5 = 1;
      goto LAB_014ff748;
    }
    puVar4 = &DAT_03a7c1d0;
  }
  else {
    if (bVar2) {
      puVar4 = &UNK_03a7c220;
      goto LAB_014ff764;
    }
    puVar4 = &DAT_03a7c200;
  }
  uVar5 = 2;
LAB_014ff748:
  FUN_014ff138(param_1,puVar4,uVar5);
  return;
}


