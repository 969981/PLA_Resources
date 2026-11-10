/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b56418; name: FUN_01b56418
 */


void FUN_01b56418(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(long *)(param_1 + 0x4c8) != 0) {
    iVar3 = *(int *)(param_1 + 0x304) - *(int *)(param_1 + 0x300);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = iVar3 + 1;
      if (uVar1 == 0) {
        uVar8 = *(ulong *)(param_1 + 0x4b0);
        uVar5 = (int)*(ulong *)(param_1 + 0x4b8) + (int)uVar8;
        uVar6 = *(ulong *)(param_1 + 0x4b8) ^ uVar8;
        *(ulong *)(param_1 + 0x4b0) = uVar6 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar6 << 0x10;
        *(ulong *)(param_1 + 0x4b8) = uVar6 >> 0x1b | uVar6 << 0x25;
      }
      else {
        lVar9 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
          lVar9 = 0x20;
        }
        uVar6 = lVar9 - LZCOUNT(uVar1);
        uVar8 = uVar6 >> 6;
        if ((uVar6 & 0x3f) != 0) {
          uVar8 = uVar8 + 1;
        }
        if (uVar6 < uVar8) {
          uVar7 = 0;
        }
        else {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar6 / uVar8;
          }
          uVar7 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
        }
        uVar8 = *(ulong *)(param_1 + 0x4b0);
        uVar6 = *(ulong *)(param_1 + 0x4b8);
        do {
          uVar10 = uVar8 ^ uVar6;
          iVar3 = (int)uVar6;
          uVar6 = uVar10 >> 0x1b | uVar10 << 0x25;
          uVar5 = (int)uVar8 + iVar3 & uVar7;
          uVar8 = uVar10 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar10 << 0x10;
        } while (uVar1 <= uVar5);
        *(ulong *)(param_1 + 0x4b0) = uVar8;
        *(ulong *)(param_1 + 0x4b8) = uVar6;
      }
    }
    iVar3 = uVar5 + *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x4a4) = iVar3;
    *(int *)(*(long *)(param_1 + 0x4c8) + 0x418) = iVar3;
    lVar9 = *(long *)(param_1 + 0x4c8);
    iVar3 = (*(byte *)(lVar9 + 0xc3) ^ 1) + (*(byte *)(lVar9 + 0x43) ^ 1) +
            (*(byte *)(lVar9 + 0x143) ^ 1) + (*(byte *)(lVar9 + 0x1c3) ^ 1) +
            (*(byte *)(lVar9 + 0x243) ^ 1) + (*(byte *)(lVar9 + 0x2c3) ^ 1) +
            (*(byte *)(lVar9 + 0x343) ^ 1) + (*(byte *)(lVar9 + 0x3c3) ^ 1);
    if (iVar3 < *(int *)(param_1 + 0x4a4)) {
      uVar8 = *(ulong *)(lVar9 + 0x408);
      lVar4 = 0;
      uVar6 = 0x82a2b175229d6a5b;
      if (*(byte *)(lVar9 + 0x43) == 0) goto LAB_01b565e8;
      while( true ) {
        uVar10 = uVar8 ^ uVar6;
        uVar11 = uVar10 >> 0x1b | uVar10 << 0x25;
        iVar3 = iVar3 + 1;
        uVar10 = uVar10 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar10 << 0x10;
        *(ulong *)(lVar9 + lVar4 + 0x20) = uVar8 + uVar6;
        uVar6 = uVar10 ^ uVar11;
        uVar8 = uVar6 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar6 << 0x10;
        uVar6 = uVar6 >> 0x1b | uVar6 << 0x25;
        *(ulong *)(*(long *)(param_1 + 0x4c8) + lVar4 + 0x58) = uVar10 + uVar11;
        *(undefined1 *)(*(long *)(param_1 + 0x4c8) + lVar4 + 0x43) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x4c8) + lVar4 + 0x42) = 0;
        if (*(int *)(param_1 + 0x4a4) <= iVar3) break;
LAB_01b565e8:
        do {
          if (lVar4 == 0x380) goto LAB_01b5660c;
          lVar9 = *(long *)(param_1 + 0x4c8);
          lVar2 = lVar9 + lVar4;
          lVar4 = lVar4 + 0x80;
        } while (*(char *)(lVar2 + 0xc3) == '\0');
      }
LAB_01b5660c:
      *(ulong *)(*(long *)(param_1 + 0x4c8) + 0x408) = uVar8 + uVar6;
      if (*(long *)(param_1 + 0x560) != 0) {
        FUN_01bad050(*(long *)(param_1 + 0x560));
      }
    }
    lVar9 = *(long *)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0x82a2b175229d6a5b;
    lVar9 = lVar9 + *(long *)(param_1 + 0x4b0);
    *(long *)(param_1 + 0x4c0) = lVar9;
    *(long *)(param_1 + 0x4b0) = lVar9;
    *(long *)(*(long *)(param_1 + 0x4c8) + 0x400) = lVar9;
    if (*(long *)(param_1 + 0x560) != 0) {
      FUN_01bacefc();
      return;
    }
  }
  return;
}


