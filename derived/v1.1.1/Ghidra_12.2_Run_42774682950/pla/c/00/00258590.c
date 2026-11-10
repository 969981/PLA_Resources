/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00258590; name: FUN_00258590
 */


undefined1  [16] FUN_00258590(long param_1)

{
  long lVar1;
  float fVar3;
  undefined1 auVar2 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return *(undefined1 (*) [16])(param_1 + 0x70);
  }
  fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x78);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
  fVar6 = (float)*(undefined8 *)(lVar1 + 0x70);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x98);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x88);
  fVar9 = (float)*(undefined8 *)(lVar1 + 0x90);
  fVar10 = (float)*(undefined8 *)(lVar1 + 0x80);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20);
  fVar9 = (((fVar8 * fVar10 * fVar11 + fVar6 * fVar4 * fVar3 + fVar7 * fVar5 * fVar9) -
           fVar4 * fVar9 * fVar8) - fVar7 * fVar10 * fVar3) - fVar6 * fVar11 * fVar5;
  if (fVar9 == 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0 / fVar9;
  }
  fVar10 = (fVar4 * fVar3 - fVar5 * fVar11) * fVar9;
  fVar11 = (fVar8 * fVar11 - fVar7 * fVar3) * fVar9;
  fVar9 = (fVar7 * fVar5 - fVar8 * fVar4) * fVar9;
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x70) * fVar10 +
                 (float)*(undefined8 *)(param_1 + 0x80) * fVar11 +
                 (float)*(undefined8 *)(param_1 + 0x90) * fVar9 + 0.0;
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar10 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * fVar11 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * fVar9 + 0.0;
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 0x78) * fVar10 +
                 (float)*(undefined8 *)(param_1 + 0x88) * fVar11 +
                 (float)*(undefined8 *)(param_1 + 0x98) * fVar9 + 0.0;
  auVar2._12_4_ =
       ((-((float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20) * fVar10) -
        fVar11 * (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20)) -
       fVar9 * (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20)) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar10 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar11 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * fVar9;
  return auVar2;
}


