/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffd214; name: FUN_02ffd214
 */


void FUN_02ffd214(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  undefined1 auVar12 [16];
  
  iVar3 = (int)((ulong)(param_2 - param_1) >> 4);
  if (iVar3 < 4) {
    *param_4 = 0;
    return;
  }
  auVar12._8_4_ = 0x7f7fffee;
  auVar12._0_8_ = 0x7f7fffee7f7fffee;
  auVar12._12_4_ = 0x7f7fffee;
  fVar7 = -(float)*param_3;
  fVar10 = -(float)((ulong)*param_3 >> 0x20);
  fVar11 = -(float)param_3[1];
  iVar5 = iVar3 + -4;
  iVar4 = 0;
  do {
    pfVar1 = (float *)(param_1 + (long)iVar5 * 0x10);
    iVar2 = iVar4 + 4;
    auVar6._0_4_ = *pfVar1 * fVar7 + pfVar1[1] * fVar10 + pfVar1[2] * fVar11 + pfVar1[3] * -1.0;
    auVar6._4_4_ = pfVar1[4] * fVar7 + pfVar1[5] * fVar10 + pfVar1[6] * fVar11 + pfVar1[7] * -1.0;
    auVar6._8_4_ = (float)*(undefined8 *)(pfVar1 + 8) * fVar7 +
                   (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar10 +
                   (float)*(undefined8 *)(pfVar1 + 10) * fVar11 +
                   (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * -1.0;
    auVar6._12_4_ =
         (float)*(undefined8 *)(pfVar1 + 0xc) * fVar7 +
         (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar10 +
         (float)*(undefined8 *)(pfVar1 + 0xe) * fVar11 +
         (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * -1.0;
    auVar12 = NEON_fmin(auVar12,auVar6,4);
    iVar5 = iVar4;
    iVar4 = iVar2;
  } while (iVar2 < iVar3);
  uVar8 = NEON_fminnmv(auVar12,4);
  uVar9 = NEON_fmax(CONCAT44(uVar8,uVar8),0,4);
  *param_4 = uVar9;
  return;
}


