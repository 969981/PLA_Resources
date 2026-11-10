/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8dd70; name: FUN_02c8dd70
 */


ushort FUN_02c8dd70(ulong param_1)

{
  int *piVar1;
  ushort uVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar3 = &DAT_0428af30 + (param_1 & 0xffffffff) * 6;
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    plVar8 = &DAT_0428af30;
  }
  else {
    plVar8 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar8 = plVar3;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf], uVar7 == 0)) {
    return 0;
  }
  uVar6 = (ushort)*(byte *)((long)piVar1 + uVar7);
  uVar2 = uVar6 & 0xf;
  if (uVar6 != 0) {
    plVar8 = &DAT_0428af30;
    if ((lVar5 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar5 + 0x1e1) != '\0')) {
      plVar8 = plVar3;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(byte *)((long)piVar1 + uVar7) & 0x3f) << 4;
    }
    plVar8 = &DAT_0428af30;
    if ((lVar5 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar5 + 0x1e1) != '\0')) {
      plVar8 = plVar3;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x23) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x11], uVar7 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ushort)*(byte *)((long)piVar1 + uVar7) << 10;
    }
    uVar2 = uVar6 | uVar2 | uVar4;
  }
  return uVar2;
}


