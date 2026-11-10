/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307f380; name: FUN_0307f380
 */


void FUN_0307f380(long param_1,long param_2,float *param_3,long param_4)

{
  byte bVar1;
  float fVar2;
  undefined1 (*pauVar3) [12];
  ulong uVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  bVar1 = *(byte *)(param_4 + 4);
  if ((ulong)bVar1 != 0) {
    fVar5 = (float)*(undefined8 *)(param_1 + 0x10) * *param_3;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * *param_3;
    fVar2 = param_3[1];
    uVar4 = 0;
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    pauVar3 = (undefined1 (*) [12])(param_2 + 0x60);
    do {
      fVar11 = (float)*(undefined8 *)(*pauVar3 + 8);
      fVar12 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
      fVar9 = (float)*(undefined8 *)*pauVar3;
      fVar10 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
      auVar13._0_4_ = fVar2 * fVar9;
      auVar13._4_4_ = fVar2 * fVar10;
      auVar13._8_4_ = fVar2 * fVar11;
      auVar13._12_4_ = fVar2 * fVar12;
      auVar14._12_4_ = fVar12;
      auVar14._0_12_ = *pauVar3;
      auVar14 = NEON_fmax(auVar14,auVar13,4);
      uVar4 = uVar4 + 4;
      auVar15._4_4_ = 0.0 - fVar7;
      auVar15._0_4_ = 0.0 - fVar5;
      auVar15._8_4_ = 0.0 - fVar5;
      auVar15._12_4_ = 0.0 - fVar7;
      auVar15 = NEON_fmax(auVar14,auVar15,4);
      *(ulong *)(pauVar3[-1] + 4) =
           CONCAT44((fVar12 - auVar15._12_4_) + (float)((ulong)uVar8 >> 0x20),
                    (fVar11 - auVar15._8_4_) + (float)uVar8);
      *(ulong *)(pauVar3[-2] + 8) =
           CONCAT44((fVar10 - auVar15._4_4_) + (float)((ulong)uVar6 >> 0x20),
                    (fVar9 - auVar15._0_4_) + (float)uVar6);
      uVar8 = auVar15._8_8_;
      *(undefined8 *)(*pauVar3 + 8) = uVar8;
      uVar6 = auVar15._0_8_;
      *(undefined8 *)*pauVar3 = uVar6;
      pauVar3 = (undefined1 (*) [12])(pauVar3[1] + 4);
    } while (uVar4 < bVar1);
  }
  FUN_03025798(param_1,(undefined1 (*) [12])(param_2 + 0x60),param_4);
  return;
}


