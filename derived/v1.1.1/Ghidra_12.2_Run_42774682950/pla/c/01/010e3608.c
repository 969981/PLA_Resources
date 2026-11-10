/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e3608; name: FUN_010e3608
 */


undefined8 FUN_010e3608(long param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  bVar2 = *(byte *)(*(long *)(param_1 + 0x54668) + 0x4a8);
  uVar7 = (uint)bVar2;
  if (bVar2 == 0x20) {
    iVar4 = FUN_010e630c();
    uVar7 = iVar4 + 0x1d;
  }
  uVar7 = uVar7 * 0x1e;
  if (uVar7 != 0) {
    uVar10 = *param_3 + *param_2 * 0x1e;
    uVar8 = uVar7;
    do {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar3 * uVar7;
      lVar5 = param_1;
      if (0x3bf < uVar10) {
LAB_010e37ec:
                    /* WARNING: Subroutine does not return */
        FUN_010e4430(lVar5);
      }
      if ((*(ulong *)(param_1 + ((ulong)(uVar10 >> 3) & 0x1ffffff8) + 0x54670) &
          1L << ((ulong)uVar10 & 0x3f)) == 0) {
        *param_2 = uVar10 / 0x1e;
        *param_3 = uVar10 % 0x1e;
        return 1;
      }
      uVar10 = uVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  bVar2 = *(byte *)(*(long *)(param_1 + 0x54668) + 0x4a8);
  uVar7 = (uint)bVar2;
  if (bVar2 == 0x20) {
    iVar4 = FUN_010e630c();
    uVar7 = iVar4 + 0x1d;
  }
  lVar5 = FUN_010e630c();
  if (uVar7 < (int)lVar5 + 0x1dU) {
    uVar11 = (ulong)(uVar7 * 0x1e);
    do {
      lVar6 = 1;
      do {
        uVar1 = uVar11 + lVar6;
        uVar9 = uVar1 - 1;
        if (0x3bf < (uint)uVar9) goto LAB_010e37ec;
        if ((*(ulong *)(param_1 + ((uVar9 & 0xffffffff) >> 3 & 0x1ffffff8) + 0x54670) &
            1L << (uVar9 & 0x3e)) == 0) {
          lVar6 = lVar6 + -1;
LAB_010e37d4:
          *param_2 = uVar7;
          *param_3 = (uint)lVar6;
          return 1;
        }
        if (0x3bf < (uint)uVar1) goto LAB_010e37ec;
        if ((*(ulong *)(param_1 + ((uVar1 & 0xffffffff) >> 3 & 0x1ffffff8) + 0x54670) &
            1L << (uVar1 & 0x3f)) == 0) goto LAB_010e37d4;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0x1f);
      uVar7 = uVar7 + 1;
      iVar4 = FUN_010e630c();
      lVar5 = 0;
      uVar11 = uVar11 + 0x1e;
    } while (uVar7 < iVar4 + 0x1dU);
  }
  return 0;
}


