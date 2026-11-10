/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03099530; name: FUN_03099530
 */


void FUN_03099530(long param_1,long param_2,long param_3,float *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auStack_70 [16];
  undefined1 local_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  iVar5 = FUN_03006410(*(undefined8 *)(param_1 + 0x20),auStack_40,auStack_50);
  if (iVar5 < 0) {
    if ((*(byte *)(param_2 + 0x54) & 1) == 0) {
      auVar10._8_4_ = 0x7f7fffee;
      auVar10._0_8_ = 0x7f7fffee7f7fffee;
      auVar10._12_4_ = 0x7f7fffee;
      auVar7 = NEON_fmin(*(undefined1 (*) [16])(param_2 + 0x30),auVar10,4);
      auVar2._8_4_ = 0xff7fffee;
      auVar2._0_8_ = 0xff7fffeeff7fffee;
      auVar2._12_4_ = 0xff7fffee;
      auVar9 = NEON_fmax(*(undefined1 (*) [16])(param_2 + 0x30),auVar2,4);
      bVar1 = *(byte *)(param_3 + 0x54);
    }
    else {
      auVar9._8_4_ = 0xff7fffee;
      auVar9._0_8_ = 0xff7fffeeff7fffee;
      auVar9._12_4_ = 0xff7fffee;
      auVar7._8_4_ = 0x7f7fffee;
      auVar7._0_8_ = 0x7f7fffee7f7fffee;
      auVar7._12_4_ = 0x7f7fffee;
      bVar1 = *(byte *)(param_3 + 0x54);
    }
    if ((bVar1 & 1) == 0) {
      uVar11 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
      auVar3._12_4_ = uVar11;
      auVar3._0_12_ = *(undefined1 (*) [12])(param_3 + 0x30);
      auVar7 = NEON_fmin(auVar7,auVar3,4);
      auVar4._12_4_ = uVar11;
      auVar4._0_12_ = *(undefined1 (*) [12])(param_3 + 0x30);
      auVar9 = NEON_fmax(auVar9,auVar4,4);
    }
  }
  else {
    FUN_032cc3fc(local_60,param_2,auStack_40);
    auVar6._8_4_ = 0x7f7fffee;
    auVar6._0_8_ = 0x7f7fffee7f7fffee;
    auVar6._12_4_ = 0x7f7fffee;
    auVar7 = NEON_fmin(local_60,auVar6,4);
    auVar8._8_4_ = 0xff7fffee;
    auVar8._0_8_ = 0xff7fffeeff7fffee;
    auVar8._12_4_ = 0xff7fffee;
    auVar9 = NEON_fmax(local_60,auVar8,4);
    FUN_032cc3fc(auStack_70,param_3,auStack_50);
    auVar7 = NEON_fmin(auVar7,auStack_70,4);
    auVar9 = NEON_fmax(auVar9,auStack_70,4);
  }
  param_4[2] = auVar7._8_4_ + -0.06666667;
  param_4[3] = auVar7._12_4_ + -0.06666667;
  *param_4 = auVar7._0_4_ + -0.06666667;
  param_4[1] = auVar7._4_4_ + -0.06666667;
  param_4[6] = auVar9._8_4_ + 0.06666667;
  param_4[7] = auVar9._12_4_ + 0.06666667;
  param_4[4] = auVar9._0_4_ + 0.06666667;
  param_4[5] = auVar9._4_4_ + 0.06666667;
  return;
}


