/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4f0f4; name: FUN_02f4f0f4
 */


undefined8
FUN_02f4f0f4(long *param_1,long param_2,int param_3,undefined4 *param_4,undefined8 param_5,
            ulong param_6,long *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint local_24;
  
  lVar3 = param_1[0x21];
  uVar1 = *(uint *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar6 = 0x7fffffffffffffff;
  }
  else {
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(*param_1 + 8) + 0x68);
      if (uVar1 != 1) {
        lVar5 = (ulong)uVar1 - 1;
        plVar9 = param_1;
        do {
          plVar9 = plVar9 + 1;
          lVar5 = lVar5 + -1;
          lVar6 = *(long *)(*(long *)(*plVar9 + 8) + 0x68) + lVar6;
        } while (lVar5 != 0);
      }
    }
    uVar7 = *(long *)(lVar3 + 8) - (ulong)*(uint *)(param_1[0x22] + 0x88);
    lVar6 = (uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU)) + lVar6;
  }
  lVar5 = lVar6;
  if (lVar6 <= param_2) {
    lVar5 = param_2;
  }
  if (uVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*param_1 + 8) + 0x68);
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      plVar9 = param_1;
      do {
        plVar9 = plVar9 + 1;
        lVar4 = lVar4 + -1;
        lVar8 = *(long *)(*(long *)(*plVar9 + 8) + 0x68) + lVar8;
      } while (lVar4 != 0);
    }
  }
  uVar7 = ((lVar5 - lVar8) - *(long *)(lVar3 + 8)) + (ulong)*(uint *)(param_1[0x22] + 0x88);
  if ((*(long *)(lVar3 + 0x18) == 0) || (*(char *)((long)param_1 + 0x129) != '\0')) {
    *param_4 = 0;
    if ((param_3 != 0) && ((param_6 & 1) == 0)) {
      return 2;
    }
  }
  else {
    uVar2 = FUN_02f426f4(*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x78));
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    uVar7 = (ulong)local_24;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*param_1 + 8) + 0x68);
    if (uVar1 != 1) {
      lVar5 = (ulong)uVar1 - 1;
      plVar9 = param_1;
      do {
        plVar9 = plVar9 + 1;
        lVar5 = lVar5 + -1;
        lVar3 = *(long *)(*(long *)(*plVar9 + 8) + 0x68) + lVar3;
      } while (lVar5 != 0);
    }
  }
  lVar3 = (lVar3 + uVar7 + *(long *)(param_1[0x21] + 8)) - (ulong)*(uint *)(param_1[0x22] + 0x88);
  *param_7 = lVar3;
  if (((char)param_1[0x25] == '\0') && (param_1[0x24] + lVar6 < lVar3)) {
    uVar2 = 3;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


