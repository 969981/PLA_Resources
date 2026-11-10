/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2f948; name: FUN_01c2f948
 */


void FUN_01c2f948(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if ((*(uint *)(param_2 + 2) != 0) && (*(uint *)(param_2 + 2) <= *(uint *)((long)param_2 + 0x14)))
  {
    fVar8 = *(float *)(param_2 + 4);
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if (0.0 <= fVar8) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar8)) {
        bVar3 = fVar8 < 1.0;
        bVar4 = fVar8 == 1.0;
        bVar5 = false;
      }
    }
    if (bVar4 || bVar3 != bVar5) {
      fVar10 = (float)param_2[1];
      fVar11 = (float)((ulong)param_2[1] >> 0x20);
      fVar8 = (float)*param_2;
      fVar9 = (float)((ulong)*param_2 >> 0x20);
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      auVar12._4_4_ = fVar9;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = fVar10;
      auVar12._12_4_ = fVar11;
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar8;
      auVar2._8_4_ = fVar10;
      auVar2._12_4_ = fVar11;
      auVar12 = NEON_ext(auVar12,auVar2,8,1);
      if (1.1920929e-07 < auVar12._0_4_ + fVar8 + auVar12._4_4_ + fVar9) {
        *(undefined4 *)(param_1 + 800) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        *(undefined8 *)(param_1 + 0x2e0) = 0;
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        *(undefined8 *)(param_1 + 0x2e8) = 0;
        *(undefined1 *)(param_1 + 0x2a8) = 0;
        *(undefined8 *)(param_1 + 0x324) = 0;
        *(undefined8 *)(param_1 + 0x329) = 0;
        *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffd;
        *(undefined8 *)(param_1 + 0x334) = 0;
        *(undefined8 *)(param_1 + 0x2b0) = *param_2;
        uVar7 = param_2[3];
        uVar1 = *(undefined4 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 0x2b8) = param_2[1];
        *(undefined8 *)(param_1 + 0x2c8) = uVar7;
        uVar7 = param_2[2];
        *(undefined4 *)(param_1 + 0x2d0) = uVar1;
        *(undefined8 *)(param_1 + 0x2c0) = uVar7;
        FUN_01c2fbf0();
        *(undefined1 *)(param_1 + 0x2a8) = 1;
        if ((param_3 & 1) == 0) {
          uVar6 = *(uint *)(param_1 + 0x200) | 4;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x200) & 0xfffffff9 | 2;
        }
        *(uint *)(param_1 + 0x200) = uVar6;
      }
    }
  }
  return;
}


