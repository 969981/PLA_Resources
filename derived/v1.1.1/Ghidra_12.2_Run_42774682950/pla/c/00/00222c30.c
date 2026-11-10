/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00222c30; name: FUN_00222c30
 */


/* WARNING: Removing unreachable block (ram,0x00222c78) */

long FUN_00222c30(long param_1,ushort param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pbVar8 = *(byte **)(param_1 + (ulong)param_2 * 8 + 0x18a8);
  bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x1888);
  lVar4 = *(long *)(param_1 + 0x1bf0);
  uVar7 = (ulong)*pbVar8;
  uVar5 = (uint)*pbVar8;
  if (1 < (ulong)bVar1) {
    fVar10 = *(float *)(lVar4 + uVar7 * 0x1c + 0xc);
    uVar2 = bVar1 - 1;
    if (bVar1 == 2) {
      lVar9 = 1;
    }
    else {
      lVar3 = 0;
      do {
        lVar9 = lVar3;
        fVar11 = *(float *)(lVar4 + (ulong)pbVar8[lVar9 + 1] * 0x1c + 0xc);
        uVar6 = (uint)pbVar8[lVar9 + 1];
        if (fVar11 <= fVar10) {
          uVar6 = (uint)uVar7;
        }
        if (fVar11 <= fVar10) {
          fVar11 = fVar10;
        }
        fVar12 = *(float *)(lVar4 + (ulong)pbVar8[lVar9 + 2] * 0x1c + 0xc);
        fVar10 = fVar12;
        if (fVar12 <= fVar11) {
          fVar10 = fVar11;
        }
        uVar5 = (uint)pbVar8[lVar9 + 2];
        if (fVar12 <= fVar11) {
          uVar5 = uVar6;
        }
        uVar7 = (ulong)uVar5;
        lVar3 = lVar9 + 2;
      } while (~((ulong)uVar2 & 1) + (ulong)bVar1 != lVar9 + 2);
      lVar9 = lVar9 + 3;
      if ((uVar2 & 1) == 0) goto LAB_00222ce8;
    }
    uVar2 = (uint)pbVar8[lVar9];
    if (*(float *)(lVar4 + (ulong)pbVar8[lVar9] * 0x1c + 0xc) <= fVar10) {
      uVar2 = uVar5;
    }
    uVar7 = (ulong)uVar2;
  }
LAB_00222ce8:
  return lVar4 + uVar7 * 0x1c;
}


