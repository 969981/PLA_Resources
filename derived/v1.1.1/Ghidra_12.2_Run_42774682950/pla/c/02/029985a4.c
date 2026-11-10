/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029985a4; name: FUN_029985a4
 */


uint FUN_029985a4(ulong param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  param_1 = param_1 & 0xffffffff;
  if (param_2 == 1) {
    lVar6 = (&DAT_0428af30)[param_1 * 6];
    if (lVar6 == 0) {
      plVar4 = &DAT_0428af30;
    }
    else {
      plVar4 = &DAT_0428af30;
      if (*(char *)(lVar6 + 0x1e1) != '\0') {
        plVar4 = &DAT_0428af30 + param_1 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb5) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x5a];
  }
  else {
    if (param_2 != 2) {
      lVar6 = (&DAT_0428af30)[param_1 * 6];
      if (lVar6 == 0) {
        plVar4 = &DAT_0428af30;
      }
      else {
        plVar4 = &DAT_0428af30;
        if (*(char *)(lVar6 + 0x1e1) != '\0') {
          plVar4 = &DAT_0428af30 + param_1 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2d) {
        return 0;
      }
      uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x16];
      if (uVar5 == 0) {
        return 0;
      }
      uVar3 = (uint)*(char *)((long)piVar1 + uVar5);
      return uVar3 & (uVar3 >> 7 ^ 0xffffffff) & 0xff;
    }
    lVar6 = (&DAT_0428af30)[param_1 * 6];
    if (lVar6 == 0) {
      plVar4 = &DAT_0428af30;
    }
    else {
      plVar4 = &DAT_0428af30;
      if (*(char *)(lVar6 + 0x1e1) != '\0') {
        plVar4 = &DAT_0428af30 + param_1 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x9b) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x4d];
  }
  if ((ulong)uVar2 == 0) {
    return 0;
  }
  uVar3 = (uint)*(char *)((long)piVar1 + (ulong)uVar2);
  return uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
}


