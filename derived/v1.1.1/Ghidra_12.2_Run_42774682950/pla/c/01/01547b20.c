/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01547b20; name: FUN_01547b20
 */


undefined1  [16] FUN_01547b20(void)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
  fVar7 = fVar8 * 90.0;
  fVar6 = fVar8 * 180.0;
  uVar2 = FUN_00cb8d18();
  fVar1 = (float)uVar2;
  fVar4 = fVar7;
  if (fVar1 <= fVar7) {
    fVar4 = fVar1;
  }
  fVar5 = fVar8 * -90.0;
  if (fVar8 * -90.0 <= fVar1) {
    fVar5 = fVar4;
  }
  fVar4 = (float)((ulong)uVar2 >> 0x20);
  if (fVar6 < fVar4) {
    do {
      fVar4 = fVar4 - fVar8 * 360.0;
    } while (fVar6 < fVar4);
  }
  if (fVar4 < -fVar6) {
    do {
      fVar4 = fVar8 * 360.0 + fVar4;
    } while (fVar4 < -fVar6);
  }
  auVar3._4_4_ = fVar4 / fVar6;
  auVar3._0_4_ = fVar5 / fVar7;
  auVar3._8_8_ = 0;
  return auVar3;
}


