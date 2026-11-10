/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60328; name: FUN_02c60328
 */


void FUN_02c60328(long param_1)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  lVar5 = (&DAT_0428af30)[(uVar2 & 0xffffffff) * 6];
  if (lVar5 == 0) {
    plVar4 = &DAT_0428af30;
  }
  else {
    plVar4 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar4 = &DAT_0428af30 + (uVar2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((long)piVar1 + uVar2);
  }
  FUN_02c60528(param_1,0,uVar3);
  uVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
  lVar5 = (&DAT_0428af30)[(uVar2 & 0xffffffff) * 6];
  if (lVar5 == 0) {
    plVar4 = &DAT_0428af30;
  }
  else {
    plVar4 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar4 = &DAT_0428af30 + (uVar2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((long)piVar1 + uVar2);
  }
  FUN_02c60528(param_1,1,uVar3);
  uVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
  lVar5 = (&DAT_0428af30)[(uVar2 & 0xffffffff) * 6];
  if (lVar5 == 0) {
    plVar4 = &DAT_0428af30;
  }
  else {
    plVar4 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar4 = &DAT_0428af30 + (uVar2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((long)piVar1 + uVar2);
  }
  FUN_02c60528(param_1,2,uVar3);
  uVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
  lVar5 = (&DAT_0428af30)[(uVar2 & 0xffffffff) * 6];
  if (lVar5 == 0) {
    plVar4 = &DAT_0428af30;
  }
  else {
    plVar4 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar4 = &DAT_0428af30 + (uVar2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((long)piVar1 + uVar2);
  }
  FUN_02c60528(param_1,3,uVar3);
  return;
}


