/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03285d94; name: FUN_03285d94
 */


void FUN_03285d94(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = param_1[1];
  uVar5 = (long)(param_2 << 1) | 1;
  lVar6 = (long)(param_2 << 1) + 2;
  uVar2 = (uint)lVar6;
  if ((int)uVar2 < (int)lVar1) {
    if (*(float *)(*param_1 + lVar6 * 0x10 + 8) < *(float *)(*param_1 + uVar5 * 0x10 + 8)) {
      uVar2 = (uint)uVar5;
    }
    uVar5 = (ulong)uVar2;
  }
  iVar3 = (int)uVar5;
  while( true ) {
    if ((int)lVar1 <= iVar3) {
      return;
    }
    iVar4 = (int)uVar5;
    lVar6 = *param_1;
    pfVar7 = (float *)(lVar6 + (long)iVar4 * 0x10 + 8);
    fVar10 = *pfVar7;
    pfVar8 = (float *)(lVar6 + (long)param_2 * 0x10 + 8);
    fVar11 = *pfVar8;
    if (fVar10 <= fVar11) break;
    uVar9 = *(undefined8 *)(lVar6 + (long)param_2 * 0x10);
    *(undefined8 *)(lVar6 + (long)param_2 * 0x10) = *(undefined8 *)(lVar6 + (long)iVar4 * 0x10);
    *pfVar8 = fVar10;
    *(undefined8 *)(lVar6 + (long)iVar4 * 0x10) = uVar9;
    *pfVar7 = fVar11;
    uVar5 = (long)(iVar4 << 1) | 1;
    lVar6 = (long)(iVar4 << 1) + 2;
    uVar2 = (uint)lVar6;
    if ((int)uVar2 < (int)param_1[1]) {
      if (*(float *)(*param_1 + lVar6 * 0x10 + 8) < *(float *)(*param_1 + uVar5 * 0x10 + 8)) {
        uVar2 = (uint)uVar5;
      }
      uVar5 = (ulong)uVar2;
    }
    iVar3 = (int)uVar5;
    param_2 = iVar4;
  }
  return;
}


