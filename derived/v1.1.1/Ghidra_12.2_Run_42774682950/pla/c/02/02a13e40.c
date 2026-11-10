/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a13e40; name: FUN_02a13e40
 */


void FUN_02a13e40(long param_1,byte param_2,ulong param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  lVar8 = lVar6 + (param_3 & 0xff) * 0x1c;
  uVar5 = (uint)*(byte *)(lVar8 + 0x304) * 0x1000000;
  uVar2 = 0;
  if ((uint)(param_4 * 0x1000000) <= uVar5) {
    uVar2 = uVar5 + param_4 * -0x1000000;
  }
  uVar3 = (undefined1)(uVar2 >> 0x18);
  *(undefined1 *)(lVar8 + 0x304) = uVar3;
  if (*(char *)(lVar8 + 0x30c) == '\0') {
    return;
  }
  *(undefined1 *)(lVar6 + (param_3 & 0xff) * 0x1c + 0x2f8) = uVar3;
  lVar8 = *(long *)(lVar6 + 0x60);
  uVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar8 + 0x98),param_3 & 0xffffffff);
  lVar6 = (&DAT_0428af30)[(uVar4 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar7 = &DAT_0428af30;
  }
  else {
    plVar7 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar7 = &DAT_0428af30 + (uVar4 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar7 + 0x250) + (ulong)**(uint **)(*plVar7 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(byte *)((long)piVar1 + uVar4);
  }
  if (uVar2 >> 0x18 <= uVar5) {
    uVar5 = uVar2 >> 0x18;
  }
  FUN_02c7cd1c(*(undefined8 *)(lVar8 + 0x98),param_3 & 0xffffffff,uVar5);
  return;
}


