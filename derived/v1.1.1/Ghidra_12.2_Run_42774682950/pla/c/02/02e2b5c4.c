/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e2b5c4; name: FUN_02e2b5c4
 */


void FUN_02e2b5c4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  
  dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x25c));
  lVar3 = *(long *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar3 + 0x18);
  dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + (ulong)(iVar2 - 1) * 4 + 0x58));
  fVar9 = *(float *)(lVar3 + 8);
  fVar10 = *(float *)(lVar3 + 0xc);
  dVar6 = exp2(((1.0 / dVar5) * dVar6 * -9.965784284662087) / (double)fVar9);
  dVar6 = log10(dVar6);
  if (iVar2 != 0) {
    dVar8 = 1.0 / (double)fVar10;
    dVar8 = 1.0 - 1.0 / (dVar8 * dVar8);
    if (1.0 < dVar8 * 0.5756462732485115 * dVar6) {
      dVar8 = 1.737177927613007 / dVar6;
    }
    uVar4 = 0;
    while( true ) {
      dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x58 + uVar4 * 4));
      dVar6 = pow(0.001,((1.0 / dVar5) * dVar6) / (double)fVar9);
      dVar7 = log10(dVar6);
      dVar7 = dVar8 * 0.5756462732485115 * dVar7;
      lVar1 = param_1 + (uVar4 >> 2 & 0x3fffffff) * 0x10 + (uVar4 * 4 & 0xc);
      *(float *)(lVar1 + 0x180) = (float)(dVar6 - dVar6 * dVar7);
      *(float *)(lVar1 + 0x1c0) = (float)dVar7;
      uVar4 = uVar4 + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) break;
      fVar9 = *(float *)(lVar3 + 8);
    }
  }
  return;
}


