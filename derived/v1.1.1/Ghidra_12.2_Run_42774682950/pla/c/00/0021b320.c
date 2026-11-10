/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021b320; name: FUN_0021b320
 */


void FUN_0021b320(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  puVar9 = PTR_DAT_04372840;
  puVar8 = PTR_DAT_04372838;
  if (*(int *)(param_1 + 0x170c) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1734);
    uVar13 = (uint)*(ushort *)(param_1 + 0x1730);
  }
  else {
    uVar12 = 0;
    do {
      uVar1 = uVar12 + 1;
      bVar5 = *(byte *)(*(long *)(param_1 + 0x1700) + uVar12);
      uVar11 = (uint)*(ushort *)(*(long *)(param_1 + 0x1710) + uVar12 * 2);
      if (uVar11 == 0) {
        puVar2 = (ushort *)(param_2 + (ulong)bVar5 * 4);
        uVar10 = *(uint *)(param_1 + 0x1734);
        uVar6 = *puVar2;
        uVar11 = (uint)puVar2[1];
        uVar13 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar6 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar13;
        if ((int)(0x10 - uVar11) < (int)uVar10) {
          lVar14 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar14 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar14) = (char)uVar13;
          lVar14 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar14 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar14) = *(undefined1 *)(param_1 + 0x1731);
          uVar6 = uVar6 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar13 = (uint)uVar6;
          uVar10 = (uVar11 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) = uVar6;
        }
        else {
          uVar10 = uVar10 + uVar11;
        }
LAB_0021b378:
        *(uint *)(param_1 + 0x1734) = uVar10;
      }
      else {
        uVar12 = (ulong)(byte)puVar8[bVar5];
        lVar14 = (uVar12 << 2 | 0x400) + param_2;
        uVar6 = *(ushort *)(lVar14 + 6);
        uVar10 = *(uint *)(param_1 + 0x1734);
        uVar7 = *(ushort *)(lVar14 + 4);
        uVar13 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar7 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar13;
        if ((int)(0x10 - (uint)uVar6) < (int)uVar10) {
          lVar14 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar14 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar14) = (char)uVar13;
          lVar14 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar14 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar14) = *(undefined1 *)(param_1 + 0x1731);
          uVar7 = uVar7 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar13 = (uint)uVar7;
          uVar10 = ((uint)uVar6 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) = uVar7;
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        else {
          uVar10 = uVar10 + uVar6;
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        if (uVar12 - 8 < 0x14) {
          iVar4 = *(int *)(&DAT_039cf39c + uVar12 * 4);
          uVar3 = (uint)bVar5 - *(int *)(&DAT_039cf4e8 + uVar12 * 4) & 0xffff;
          uVar13 = uVar13 | uVar3 << (ulong)(uVar10 & 0x1f);
          *(short *)(param_1 + 0x1730) = (short)uVar13;
          if (0x10 - iVar4 < (int)uVar10) {
            lVar14 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar14 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar14) = (char)uVar13;
            lVar14 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar14 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar14) = *(undefined1 *)(param_1 + 0x1731);
            uVar13 = uVar3 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar13;
            uVar10 = (iVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar10 = iVar4 + uVar10;
          }
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        uVar11 = uVar11 - 1;
        uVar3 = uVar11;
        if (0xff < uVar11) {
          uVar3 = (uVar11 >> 7) + 0x100;
        }
        uVar12 = (ulong)(byte)puVar9[uVar3];
        puVar2 = (ushort *)(param_3 + uVar12 * 4);
        uVar6 = puVar2[1];
        uVar7 = *puVar2;
        uVar13 = uVar13 | (uint)uVar7 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar13;
        if ((int)(0x10 - (uint)uVar6) < (int)uVar10) {
          lVar14 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar14 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar14) = (char)uVar13;
          lVar14 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar14 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar14) = *(undefined1 *)(param_1 + 0x1731);
          uVar7 = uVar7 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar13 = (uint)uVar7;
          *(ushort *)(param_1 + 0x1730) = uVar7;
          uVar10 = ((uint)uVar6 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        else {
          uVar10 = uVar10 + uVar6;
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        if (uVar12 - 4 < 0x1a) {
          iVar4 = *(int *)(&DAT_039cf410 + uVar12 * 4);
          uVar11 = uVar11 - *(int *)(&DAT_039cf55c + uVar12 * 4) & 0xffff;
          uVar13 = uVar13 | uVar11 << (ulong)(uVar10 & 0x1f);
          *(short *)(param_1 + 0x1730) = (short)uVar13;
          if (0x10 - iVar4 < (int)uVar10) {
            lVar14 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar14 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar14) = (char)uVar13;
            lVar14 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar14 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar14) = *(undefined1 *)(param_1 + 0x1731);
            uVar13 = uVar11 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar13;
            uVar10 = (iVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar10 = iVar4 + uVar10;
          }
          goto LAB_0021b378;
        }
      }
      uVar12 = uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x170c));
  }
  uVar6 = *(ushort *)(param_2 + 0x402);
  uVar7 = *(ushort *)(param_2 + 0x400);
  uVar13 = uVar13 | (uint)uVar7 << (ulong)(uVar10 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar13;
  if ((int)(0x10 - (uint)uVar6) < (int)uVar10) {
    lVar14 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar14 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar14) = (char)uVar13;
    lVar14 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar14 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar14) = *(undefined1 *)(param_1 + 0x1731);
    *(ushort *)(param_1 + 0x1730) = uVar7 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    *(uint *)(param_1 + 0x1734) = (uint)uVar6 + *(int *)(param_1 + 0x1734) + -0x10;
    return;
  }
  *(uint *)(param_1 + 0x1734) = uVar10 + uVar6;
  return;
}


