/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03196810; name: FUN_03196810
 */


void FUN_03196810(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short sVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  piVar5 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10);
  sVar1 = (short)piVar5[2];
  if (sVar1 < 1) {
    auVar9._8_4_ = 0xff7fffee;
    auVar9._0_8_ = 0xff7fffeeff7fffee;
    auVar9._12_4_ = 0xff7fffee;
    auVar8._8_4_ = 0x7f7fffee;
    auVar8._0_8_ = 0x7f7fffee7f7fffee;
    auVar8._12_4_ = 0x7f7fffee;
  }
  else {
    iVar2 = *piVar5;
    lVar4 = (long)iVar2;
    auVar8._8_4_ = 0x7f7fffee;
    auVar8._0_8_ = 0x7f7fffee7f7fffee;
    auVar8._12_4_ = 0x7f7fffee;
    auVar9._8_4_ = 0xff7fffee;
    auVar9._0_8_ = 0xff7fffeeff7fffee;
    auVar9._12_4_ = 0xff7fffee;
    piVar5 = (int *)(*(long *)(param_1 + 0x28) + lVar4 * 0x14);
    do {
      lVar4 = lVar4 + 1;
      pauVar3 = (undefined1 (*) [16])(*(long *)(param_1 + 0x38) + (long)*piVar5 * 0x10);
      auVar8 = NEON_fmin(auVar8,*pauVar3,4);
      auVar9 = NEON_fmax(auVar9,*pauVar3,4);
      piVar5 = piVar5 + 5;
    } while (lVar4 < iVar2 + sVar1);
  }
  fVar6 = (float)*param_3;
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  param_4[1] = CONCAT44(auVar8._12_4_ - fVar7,auVar8._8_4_ - fVar6);
  *param_4 = CONCAT44(auVar8._4_4_ - fVar7,auVar8._0_4_ - fVar6);
  *(float *)(param_4 + 3) = fVar6 + auVar9._8_4_;
  *(float *)((long)param_4 + 0x1c) = fVar7 + auVar9._12_4_;
  *(float *)(param_4 + 2) = fVar6 + auVar9._0_4_;
  *(float *)((long)param_4 + 0x14) = fVar7 + auVar9._4_4_;
  return;
}


