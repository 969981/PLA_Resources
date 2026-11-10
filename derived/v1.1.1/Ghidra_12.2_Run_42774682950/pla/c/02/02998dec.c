/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02998dec; name: FUN_02998dec
 */


ushort FUN_02998dec(uint param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  long *plVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  if (param_2 == 1) {
    uVar2 = FUN_02c8dd70(param_1);
    if (((uVar2 & 0xf) != 4) && ((uVar2 & 0xf) != 2)) {
      return uVar2;
    }
    plVar3 = &DAT_0428af30 + (ulong)param_1 * 6;
    lVar6 = *plVar3;
    if (lVar6 == 0) {
      plVar8 = &DAT_0428af30;
    }
    else {
      plVar8 = &DAT_0428af30;
      if (*(char *)(lVar6 + 0x1e1) != '\0') {
        plVar8 = plVar3;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xad) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x56], uVar7 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(byte *)((long)piVar1 + uVar7) & 0x3f) << 4;
    }
    plVar8 = &DAT_0428af30;
    if ((lVar6 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar6 + 0x1e1) != '\0')) {
      plVar8 = plVar3;
    }
    uVar2 = uVar2 & 0xf;
    piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if (0xac < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar5 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x56];
      goto joined_r0x02998fbc;
    }
  }
  else {
    if (param_2 != 2) {
      uVar2 = FUN_02c8dd70(param_1);
      return uVar2;
    }
    uVar2 = FUN_02c8dd70(param_1);
    if (((uVar2 & 0xf) != 4) && ((uVar2 & 0xf) != 2)) {
      return uVar2;
    }
    plVar3 = &DAT_0428af30 + (ulong)param_1 * 6;
    lVar6 = *plVar3;
    if (lVar6 == 0) {
      plVar8 = &DAT_0428af30;
    }
    else {
      plVar8 = &DAT_0428af30;
      if (*(char *)(lVar6 + 0x1e1) != '\0') {
        plVar8 = plVar3;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x9d) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x4e], uVar7 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(byte *)((long)piVar1 + uVar7) & 0x3f) << 4;
    }
    plVar8 = &DAT_0428af30;
    if ((lVar6 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar6 + 0x1e1) != '\0')) {
      plVar8 = plVar3;
    }
    uVar2 = uVar2 & 0xf;
    piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
    if (0x9c < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar5 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x4e];
joined_r0x02998fbc:
      if ((ulong)uVar5 != 0) {
        uVar5 = (ushort)*(byte *)((long)piVar1 + (ulong)uVar5) << 10;
        goto LAB_02998fd4;
      }
    }
  }
  uVar5 = 0;
LAB_02998fd4:
  return uVar4 | uVar2 | uVar5;
}


