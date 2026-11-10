/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a3760; name: FUN_010a3760
 */


byte FUN_010a3760(ulong param_1)

{
  int *piVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar3 = &DAT_0428af30 + (param_1 & 0xffffffff) * 6;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar4 + 0x1e1) != '\0') {
      plVar6 = plVar3;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if (((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar7 != 0)) &&
     (*(char *)((long)piVar1 + uVar7) == 'e')) {
    return 0;
  }
  plVar6 = &DAT_0428af30;
  if ((lVar4 != 0) && (plVar6 = &DAT_0428af30, *(char *)(lVar4 + 0x1e1) != '\0')) {
    plVar6 = plVar3;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar7 == 0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)((long)piVar1 + uVar7);
  }
  plVar6 = &DAT_0428af30;
  if ((lVar4 != 0) && (plVar6 = &DAT_0428af30, *(char *)(lVar4 + 0x1e1) != '\0')) {
    plVar6 = plVar3;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2f) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar7 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)((long)piVar1 + uVar7) != '\a';
  }
  return cVar5 != '\0' | bVar2;
}


