/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a074b0; name: FUN_02a074b0
 */


void FUN_02a074b0(long param_1,long param_2,uint *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_88 [8];
  byte local_80;
  byte local_7f;
  undefined4 local_7c;
  ulong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_6b;
  undefined8 local_63;
  undefined8 local_5b;
  undefined7 local_53;
  undefined1 uStack_4c;
  undefined7 uStack_4b;
  
  uVar4 = (ulong)*param_3;
  lVar5 = (&DAT_0428af30)[uVar4 * 6];
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + uVar4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0x70 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x38], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) != '\0')) {
    local_80 = *(byte *)(param_2 + 0x7d);
    local_6c = 1;
    local_6b = 0;
    local_63 = 0;
    local_5b = 0;
    local_53 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_78 = (ulong)((uint)local_80 << 3 | 1) & 0xff | (ulong)(*param_3 << 0xe) & 0x3fffc000;
    local_70 = 0;
    local_7c = 0x2f;
    local_7f = local_80;
    FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9c0),auStack_88,&local_80);
    uVar4 = (ulong)*param_3;
    lVar5 = (&DAT_0428af30)[uVar4 * 6];
  }
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + uVar4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0x72 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x39], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) != '\0')) {
    bVar2 = *(byte *)(param_2 + 0x7d);
    uVar3 = FUN_0299893c(uVar4,param_3[8]);
    local_6c = 1;
    local_7c = 0x31;
    local_78 = (ulong)((uVar3 & 0x3f) << 8) | (ulong)((uint)bVar2 << 3 | 2) & 0xfe;
    local_70 = 0;
    local_6b = 0;
    local_63 = 0;
    local_5b = 0;
    local_53 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_80 = bVar2;
    local_7f = bVar2;
    FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9c0),auStack_88,&local_80);
    uVar4 = (ulong)*param_3;
    lVar5 = (&DAT_0428af30)[uVar4 * 6];
  }
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + uVar4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0x80 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x40], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) != '\0')) {
    bVar2 = *(byte *)(param_2 + 0x7d);
    uVar3 = FUN_02998cc0(uVar4,param_3[8]);
    lVar5 = (&DAT_0428af30)[(ulong)*param_3 * 6];
    if (lVar5 == 0) {
      plVar6 = &DAT_0428af30;
    }
    else {
      plVar6 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar6 = &DAT_0428af30 + (ulong)*param_3 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x85) ||
       (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x42], uVar4 == 0)) {
      local_78 = 0;
    }
    else {
      local_78 = (ulong)*(byte *)((long)piVar1 + uVar4) << 0xe;
    }
    local_6c = 1;
    local_7c = 0x34;
    local_78 = (ulong)((uVar3 & 0x3f) << 8) | (ulong)((uint)bVar2 << 3 | 2) & 0xfe | local_78;
    local_70 = 0;
    local_6b = 0;
    local_63 = 0;
    local_5b = 0;
    local_53 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_80 = bVar2;
    local_7f = bVar2;
    FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9c0),auStack_88,&local_80);
    uVar4 = (ulong)*param_3;
    lVar5 = (&DAT_0428af30)[uVar4 * 6];
  }
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + uVar4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0x76 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x3b], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) != '\0')) {
    bVar2 = *(byte *)(param_2 + 0x7d);
    uVar3 = FUN_02998a68(uVar4,param_3[8]);
    local_6c = 1;
    local_6b = 0;
    local_63 = 0;
    local_5b = 0;
    local_53 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_70 = 0;
    local_7c = 0x32;
    local_78 = (ulong)((uVar3 & 0x3f) << 8) | (ulong)((uint)bVar2 << 3 | 2) & 0xfe |
               (ulong)(*param_3 << 0xe) & 0x3fffc000;
    local_80 = bVar2;
    local_7f = bVar2;
    FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9c0),auStack_88,&local_80);
    uVar4 = (ulong)*param_3;
    lVar5 = (&DAT_0428af30)[uVar4 * 6];
  }
  if (lVar5 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + uVar4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0x7c < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x3e], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) != '\0')) {
    bVar2 = *(byte *)(param_2 + 0x7d);
    uVar3 = FUN_02998b94(uVar4,param_3[8]);
    local_6c = 1;
    local_7c = 0x33;
    local_78 = (ulong)((uVar3 & 0x3f) << 8) | (ulong)((uint)bVar2 << 3 | 2) & 0xfe;
    local_70 = 0;
    local_6b = 0;
    local_63 = 0;
    local_5b = 0;
    local_53 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_80 = bVar2;
    local_7f = bVar2;
    FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9c0),auStack_88,&local_80);
  }
  return;
}


