/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029986dc; name: FUN_029986dc
 */


uint FUN_029986dc(ulong param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  param_1 = param_1 & 0xffffffff;
  if (param_2 == 1) {
    lVar7 = (&DAT_0428af30)[param_1 * 6];
    if (lVar7 == 0) {
      plVar5 = &DAT_0428af30;
    }
    else {
      plVar5 = &DAT_0428af30;
      if (*(char *)(lVar7 + 0x1e1) != '\0') {
        plVar5 = &DAT_0428af30 + param_1 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb5) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x5a];
  }
  else {
    if (param_2 != 2) {
      lVar7 = (&DAT_0428af30)[param_1 * 6];
      if (lVar7 == 0) {
        plVar5 = &DAT_0428af30;
      }
      else {
        plVar5 = &DAT_0428af30;
        if (*(char *)(lVar7 + 0x1e1) != '\0') {
          plVar5 = &DAT_0428af30 + param_1 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2d) {
        return 0;
      }
      uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x16];
      if (uVar6 == 0) {
        return 0;
      }
      uVar4 = (uint)*(char *)((long)piVar1 + uVar6);
      return -uVar4 & uVar4 >> 7 & 0xff;
    }
    lVar7 = (&DAT_0428af30)[param_1 * 6];
    if (lVar7 == 0) {
      plVar5 = &DAT_0428af30;
    }
    else {
      plVar5 = &DAT_0428af30;
      if (*(char *)(lVar7 + 0x1e1) != '\0') {
        plVar5 = &DAT_0428af30 + param_1 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x9b) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x4d];
  }
  if ((ulong)uVar2 == 0) {
    return 0;
  }
  cVar3 = *(char *)((long)piVar1 + (ulong)uVar2);
  uVar4 = -(int)cVar3;
  if (-1 < cVar3) {
    uVar4 = (uint)cVar3;
  }
  return uVar4;
}


