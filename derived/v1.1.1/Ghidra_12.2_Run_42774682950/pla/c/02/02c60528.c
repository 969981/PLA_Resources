/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60528; name: FUN_02c60528
 */


void FUN_02c60528(long param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0) {
    return;
  }
  uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),param_2);
  lVar6 = (&DAT_0428af30)[(uVar4 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar5 = &DAT_0428af30;
  }
  else {
    plVar5 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar5 = &DAT_0428af30 + (uVar4 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)((long)piVar1 + uVar4);
  }
  uVar3 = FUN_02c6b51c(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar3 = (uVar3 & 0xff) + (param_3 & 0xff);
  if (uVar3 <= uVar7) {
    uVar7 = uVar3;
  }
  uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),param_2);
  lVar6 = (&DAT_0428af30)[(uVar4 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar5 = &DAT_0428af30;
  }
  else {
    plVar5 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar5 = &DAT_0428af30 + (uVar4 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)((long)piVar1 + uVar4);
  }
  if ((uVar7 & 0xff) <= uVar3) {
    uVar3 = uVar7;
  }
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
  return;
}


