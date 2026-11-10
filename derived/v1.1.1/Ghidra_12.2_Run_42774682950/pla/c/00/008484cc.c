/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008484cc; name: FUN_008484cc
 */


void FUN_008484cc(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  int local_50 [4];
  
  uVar1 = 0;
  if (*(byte *)(param_2 + 0x14) + 0x1c <= *(uint *)(param_2 + 0x5f8)) {
    uVar1 = (*(uint *)(param_2 + 0x5f8) - (uint)*(byte *)(param_2 + 0x14)) - 0x1c;
  }
  if (uVar1 <= param_3) {
LAB_008485b4:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
  pcVar3 = (char *)FUN_007f0644(param_2,param_3);
  if (*pcVar3 == -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar4 = FUN_007f0644(param_2,param_3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x2c);
  param_1[3] = param_1[6];
  FUN_008486a8(local_50,param_1 + 4,uVar4,0x10);
  if (local_50[0] != 0) goto LAB_008485b4;
  local_78 = PTR_DAT_04378008 + 0x10;
  local_70 = param_1[2];
  uStack_68 = param_1[3];
  FUN_00848780(auStack_60,param_1 + 4,&local_78);
  FUN_007ee660(local_50,auStack_60);
  if (local_50[0] != 0) goto LAB_008485b4;
  if (*(char *)(param_2 + 0x648) == '\0') {
LAB_0084863c:
    *param_1 = 0;
    return;
  }
  bVar2 = *(byte *)(param_1 + 5);
  iVar6 = 1;
  if ((bVar2 & 1) != 0) {
    iVar6 = 2;
  }
  if ((bVar2 & 2) != 0) {
    iVar6 = iVar6 + 2;
  }
  if ((bVar2 & 4) != 0) {
    iVar6 = iVar6 + 4;
  }
  if ((bVar2 & 8) != 0) {
    iVar6 = iVar6 + 8;
  }
  if ((uVar1 < iVar6 + param_3) ||
     (uVar1 < iVar6 + param_3 + (uint)*(ushort *)((long)param_1 + 0x2a))) goto LAB_0084863c;
  bVar2 = *(byte *)((long)param_1 + 0x29);
  *param_1 = uVar4;
  if ((bVar2 >> 6 & 1) == 0) {
    if (-1 < (char)bVar2) goto LAB_00848664;
    uVar7 = 2;
  }
  else {
    uVar7 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = uVar7;
LAB_00848664:
  if ((bVar2 >> 3 & 1) == 0) {
    FUN_007f0f88(param_1 + 8,param_2 + 0x628);
    uVar5 = *(undefined1 *)(param_2 + 0x620);
  }
  else {
    FUN_007f0d34(param_1 + 8);
    uVar5 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x62) = uVar5;
  memcpy((void *)((long)param_1 + 100),(void *)(param_2 + 0x5fc),4);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0x10);
  return;
}


