/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f41670; name: FUN_02f41670
 */


void FUN_02f41670(long param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  puVar1 = (uint *)(param_1 + 0x2a3);
  uVar7 = *puVar1;
  if (((uVar7 >> 0x16 & 1) != 0) || ((*(byte *)(*(long *)(param_1 + 0x230) + 0xc) >> 1 & 1) == 0)) {
    fVar6 = (float)NEON_ucvtf((uint)DAT_042ab268);
    fVar6 = *(float *)(param_1 + 0x24c) * fVar6;
    fVar9 = 0.5;
    if (fVar6 <= 0.0) {
      fVar9 = -0.5;
    }
    iVar3 = *(int *)(param_1 + 0x2c0);
    iVar8 = (int)(fVar9 + fVar6);
    iVar5 = 0;
    if (iVar8 != 0) {
      iVar5 = iVar3 / iVar8;
    }
    iVar4 = *(int *)(param_1 + 0x29c);
    iVar2 = iVar8;
    if (iVar8 < 0) {
      iVar2 = iVar8 + 1;
    }
    iVar5 = iVar3 - iVar5 * iVar8;
    if (iVar4 < iVar5 || iVar2 >> 1 < iVar5) {
      *(int *)(param_1 + 0x2c0) = (iVar8 - iVar5) + iVar3;
      *(int *)(param_1 + 0x29c) = (iVar8 - iVar5) + iVar4;
    }
    else {
      if (iVar5 < 1) goto LAB_02f416f0;
      *(int *)(param_1 + 0x2c0) = iVar3 - iVar5;
      *(int *)(param_1 + 0x29c) = iVar4 - iVar5;
    }
    uVar7 = uVar7 & 0xfe3fffff | 0x400000;
    *puVar1 = uVar7;
  }
LAB_02f416f0:
  *puVar1 = uVar7 | 0x8000000;
  return;
}


