/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c9c4; name: FUN_02f3c9c4
 */


undefined8 FUN_02f3c9c4(float param_1,long param_2,int param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    param_4[8] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 0x78);
  dVar6 = (double)NEON_ucvtf((ulong)DAT_042ab258);
  dVar6 = 1.0 / dVar6;
  dVar8 = (double)(long)*(int *)(*(long *)(lVar1 + 0x100) + 4) * 1000.0 * dVar6;
  dVar9 = 0.5;
  if (dVar8 <= 0.0) {
    dVar9 = -0.5;
  }
  param_4[1] = (int)(dVar9 + dVar8);
  dVar8 = (double)(*(int *)(*(long *)(lVar1 + 0x100) + (ulong)*(uint *)(lVar1 + 0x108) * 0x10 + -0xc
                           ) - *(int *)(*(long *)(lVar1 + 0x100) + 4)) * 1000.0 * dVar6;
  dVar9 = 0.5;
  if (dVar8 <= 0.0) {
    dVar9 = -0.5;
  }
  param_4[2] = (int)(dVar9 + dVar8);
  dVar8 = (double)(*(int *)(lVar1 + 0x110) -
                  *(int *)(*(long *)(lVar1 + 0x100) + (ulong)*(uint *)(lVar1 + 0x108) * 0x10 + -0xc)
                  ) * 1000.0 * dVar6;
  dVar9 = 0.5;
  if (dVar8 <= 0.0) {
    dVar9 = -0.5;
  }
  dVar6 = (double)param_3 * 1000.0 * dVar6;
  dVar7 = 0.5;
  if (dVar6 <= 0.0) {
    dVar7 = -0.5;
  }
  param_4[3] = (int)(dVar9 + dVar8);
  *param_4 = (int)(dVar7 + dVar6);
  param_3 = *(int *)(*(long *)(param_2 + 0x18) + 0x90) - param_3;
  if (param_3 < 1) {
    iVar2 = 0;
  }
  else {
    dVar8 = (double)NEON_ucvtf((ulong)DAT_042ab258);
    dVar8 = ((double)param_3 * 1000.0) / dVar8;
    dVar6 = 0.5;
    if (dVar8 <= 0.0) {
      dVar6 = -0.5;
    }
    iVar2 = (int)(dVar6 + dVar8);
  }
  param_4[4] = iVar2;
  if ((*(byte *)(lVar1 + 0xf4) >> 2 & 1) == 0) {
    do {
      lVar3 = *(long *)(lVar1 + 0x80);
      if (lVar3 == 0) break;
      lVar1 = lVar3;
    } while ((*(byte *)(lVar3 + 0xf4) >> 2 & 1) == 0);
  }
  fVar4 = (float)NEON_ucvtf(DAT_042ab258);
  fVar4 = 1.0 / (fVar4 * param_1);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0xe8));
  param_4[6] = (int)(fVar4 * fVar5);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0xe4));
  param_4[5] = (int)(fVar4 * fVar5);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0xec));
  param_4[7] = (int)(fVar4 * fVar5);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0xf0));
  param_4[8] = (int)(fVar4 * fVar5);
  return 1;
}


