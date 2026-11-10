/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00966560; name: FUN_00966560
 */


void FUN_00966560(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  undefined8 local_60 [2];
  int local_50;
  char local_4c;
  undefined4 local_48;
  
  piVar7 = (int *)local_60;
  piVar8 = (int *)local_60;
  param_1[1] = *param_1;
  lVar5 = FUN_00933eec(*(undefined8 *)(param_2 + 0xd0),param_3);
  if (lVar5 == 0) {
    return;
  }
  plVar6 = (long *)(lVar5 + 0x70);
  lVar5 = *plVar6;
  if ((*(byte *)(lVar5 + 0xb8) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,5);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,5);
    local_4c = cVar2 - local_4c;
    local_50 = 0;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x98) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,1);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,1);
    local_4c = cVar2 - local_4c;
    local_50 = 1;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0xc0) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,6);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,6);
    local_50 = 2;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0xb0) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,4);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,4);
    local_50 = 3;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 200) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,7);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,7);
    local_50 = 4;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x208) & 7) != 0) {
    local_50 = 5;
    local_48 = 0;
    local_4c = -1;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x210) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,0x30);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,0x30);
    local_50 = 6;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x218) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,0x31);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,0x31);
    local_50 = 7;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x220) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,0x32);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,0x32);
    local_50 = 8;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x228) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,0x33);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,0x33);
    local_50 = 9;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  if ((*(byte *)(lVar5 + 0x230) & 7) != 0) {
    local_60[0] = FUN_02950cd8(lVar5,0x34);
    cVar2 = FUN_02957010(local_60);
    local_4c = FUN_02950ce4(*plVar6,0x34);
    local_50 = 10;
    local_4c = cVar2 - local_4c;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  iVar3 = FUN_029506a8(lVar5,1);
  lVar5 = *plVar6;
  if (iVar3 < 1) {
    iVar3 = 0x11;
    piVar7 = &local_50;
LAB_009666f4:
    uVar1 = FUN_02951c48(lVar5,1);
    *(undefined1 *)(piVar7 + 1) = uVar1;
    *piVar7 = iVar3;
    piVar7[2] = 0;
    FUN_00966ea8(param_1,piVar7);
  }
  else {
    iVar3 = FUN_029506a8(lVar5,1);
    if (1 < iVar3) {
      lVar5 = *plVar6;
      iVar3 = 0x10;
      goto LAB_009666f4;
    }
  }
  iVar3 = FUN_029506a8(*plVar6,2);
  lVar5 = *plVar6;
  if (iVar3 < 1) {
    iVar3 = 0x13;
    piVar8 = &local_50;
  }
  else {
    iVar3 = FUN_029506a8(lVar5,2);
    if (iVar3 < 2) goto LAB_00966678;
    lVar5 = *plVar6;
    iVar3 = 0x12;
  }
  uVar1 = FUN_02951c48(lVar5,2);
  *(undefined1 *)(piVar8 + 1) = uVar1;
  *piVar8 = iVar3;
  piVar8[2] = 0;
  FUN_00966ea8(param_1,piVar8);
LAB_00966678:
  lVar5 = *plVar6;
  if (*(char *)(lVar5 + 0x392) != '\0') {
    local_50 = 0xb;
    local_48 = 0;
    local_4c = *(char *)(lVar5 + 0x392);
    FUN_00966ea8(param_1,&local_50);
    lVar5 = *plVar6;
  }
  iVar4 = FUN_02948d48(*(undefined8 *)(param_2 + 0x98),lVar5);
  iVar3 = 0xc;
  if (iVar4 != 2) {
    iVar3 = 0x15;
  }
  local_50 = 0xf;
  if (iVar4 != 3) {
    local_50 = iVar3;
  }
  if (local_50 != 0x15) {
    local_4c = 0xff;
    local_48 = 0;
    FUN_00966ea8(param_1,&local_50);
  }
  return;
}


