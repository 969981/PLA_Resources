/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f5640; name: FUN_027f5640
 */


ulong FUN_027f5640(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  undefined1 auStack_24 [4];
  
  local_48 = &DAT_753f74378b49da9c;
  pcStack_40 = "View_Top";
  local_38 = 8;
  local_30 = (long *)0x0;
  lVar2 = FUN_027f4740(*(undefined8 *)(param_1 + 0x4c8),&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (param_2 == 0) {
    lVar2 = FUN_00d2eb20(lVar2 + 0x180,"grid_panel");
    lVar2 = *(long *)(lVar2 + 0x468);
    iVar4 = *(int *)(lVar2 + 8);
    if (*(int *)(lVar2 + 0x1c) == 0) {
      iVar6 = *(int *)(lVar2 + 0xc);
      goto LAB_027f56c4;
    }
    iVar6 = *(int *)(lVar2 + 0x10);
LAB_027f575c:
    uVar7 = 0;
    if (iVar6 != 0) {
      uVar7 = iVar4 / iVar6;
    }
    uVar1 = iVar4 - uVar7 * iVar6;
  }
  else {
    if (param_2 == 1) {
      local_48 = (undefined1 *)0xffffffff;
    }
    else {
      if (param_2 != 2) {
        uVar5 = 0;
        uVar8 = 0;
        goto LAB_027f56d8;
      }
      local_48 = (undefined1 *)0x1;
    }
    lVar2 = FUN_00d2eb20(lVar2 + 0x180,"grid_panel");
    lVar2 = *(long *)(lVar2 + 0x468);
    uVar3 = FUN_0282b6d0(lVar2,&local_48,auStack_24);
    iVar4 = (int)((ulong)uVar3 >> 0x20);
    if (*(int *)(lVar2 + 0x1c) != 0) {
      iVar6 = *(int *)(lVar2 + 0x10);
      iVar4 = iVar4 + iVar6 * (int)uVar3;
      goto LAB_027f575c;
    }
    iVar6 = *(int *)(lVar2 + 0xc);
    iVar4 = (int)uVar3 + iVar6 * iVar4;
LAB_027f56c4:
    uVar1 = 0;
    if (iVar6 != 0) {
      uVar1 = iVar4 / iVar6;
    }
    uVar7 = iVar4 - uVar1 * iVar6;
  }
  uVar8 = (ulong)uVar7;
  uVar5 = (ulong)uVar1 << 0x20;
LAB_027f56d8:
  return uVar8 | uVar5;
}


