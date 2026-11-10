/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bfca40; name: FUN_02bfca40
 */


undefined8 FUN_02bfca40(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *local_80 [4];
  long *local_60;
  undefined **local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_50 = &PTR_LAB_04287f10;
  local_48 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_02c0097c(local_80);
  FUN_00938764(&local_50,0,local_80,0,0,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x20))();
  }
  if (local_48 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)((long)*(uint **)(local_48 + 0x250) + (ulong)**(uint **)(local_48 + 0x250));
  }
  if (*(ushort *)((long)piVar9 - (long)*piVar9) < 5) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
    lVar8 = 0;
    if (uVar7 != 0) {
      puVar2 = (uint *)((long)piVar9 + uVar7);
      lVar8 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  pcVar1 = (char *)(lVar8 + 4);
  sVar6 = strlen(pcVar1);
  uVar4 = FUN_001c9720(0,pcVar1,pcVar1 + sVar6);
  if (*(ushort *)((long)piVar9 - (long)*piVar9) < 7) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    lVar8 = 0;
    if (uVar7 != 0) {
      puVar2 = (uint *)((long)piVar9 + uVar7);
      lVar8 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  pcVar1 = (char *)(lVar8 + 4);
  sVar6 = strlen(pcVar1);
  uVar5 = FUN_001c9720(2,pcVar1,pcVar1 + sVar6);
  uVar3 = 0;
  if ((int)(uVar5 | uVar4) < 0) {
    uVar3 = 0x80040200;
  }
  FUN_00936104(&local_50);
  return uVar3;
}


