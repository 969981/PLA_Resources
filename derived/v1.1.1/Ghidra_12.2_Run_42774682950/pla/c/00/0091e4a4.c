/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091e4a4; name: FUN_0091e4a4
 */


undefined8 FUN_0091e4a4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x3d0) != '\0') {
    bVar3 = *(byte *)(*(long *)(param_2 + 0x70) + 0x7d);
    lVar5 = 3;
    if (0x17 < bVar3) {
      lVar5 = (ulong)(bVar3 < 0x1e) << 2;
    }
    uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 0xd0) + 0x68) + 0x98
                               ) + 0x110);
    lVar2 = 1;
    if (0x11 < bVar3) {
      lVar2 = lVar5;
    }
    lVar5 = 2;
    if (0xb < bVar3) {
      lVar5 = lVar2;
    }
    lVar2 = 0;
    if (5 < bVar3) {
      lVar2 = lVar5;
    }
    if (((2 < uVar4) || ((&PTR_DAT_041b7688)[(int)uVar4][lVar2] != '\0')) &&
       (*(char *)(param_2 + 0xb9) != '\0')) {
      uVar4 = FUN_0091e58c();
      lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0xc0);
      uVar6 = *(ulong *)(lVar5 + 0x70);
      uVar8 = *(ulong *)(lVar5 + 0x78);
      do {
        uVar9 = uVar6 ^ uVar8;
        iVar7 = (int)uVar8;
        uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
        uVar1 = (int)uVar6 + iVar7 & 0x7f;
        uVar6 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
      } while (99 < uVar1);
      *(ulong *)(lVar5 + 0x70) = uVar6;
      *(ulong *)(lVar5 + 0x78) = uVar8;
      if (uVar1 < uVar4) {
        return 1;
      }
    }
  }
  return 0;
}


