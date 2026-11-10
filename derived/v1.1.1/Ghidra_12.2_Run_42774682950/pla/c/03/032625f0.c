/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032625f0; name: FUN_032625f0
 */


undefined8 FUN_032625f0(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = param_3 - (long)param_2;
  if (0 < (int)(uVar2 >> 4)) {
    uVar3 = uVar2 >> 4 & 0xffffffff;
    puVar1 = (undefined8 *)((long)param_2 + ((long)(uVar2 * 0x10000000 + -0x100000000) >> 0x1c));
    uVar13 = *puVar1;
    fVar12 = (float)uVar13;
    fVar4 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fVar15 = (float)((ulong)uVar13 >> 0x20);
    fVar6 = (float)*(undefined8 *)(param_1 + 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar8 = (float)*(undefined8 *)(param_1 + 0x40);
    fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    fVar16 = (float)puVar1[1];
    fVar10 = (float)*(undefined8 *)(param_1 + 0x30);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    fVar14 = fVar8 + fVar4 * fVar12 + fVar6 * fVar15 + fVar10 * fVar16 + -8191.0;
    fVar12 = fVar9 + fVar5 * fVar12 + fVar7 * fVar15 + fVar11 * fVar16 + -8191.0;
    do {
      fVar16 = (float)*param_2;
      fVar17 = (float)((ulong)*param_2 >> 0x20);
      fVar15 = fVar10 * (float)param_2[1] + fVar6 * fVar17 + fVar8 + fVar4 * fVar16 + -8191.0;
      fVar16 = fVar11 * (float)param_2[1] + fVar7 * fVar17 + fVar9 + fVar5 * fVar16 + -8191.0;
      if (fVar14 * fVar16 - fVar15 * fVar12 < 0.0) {
        return 0;
      }
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 2;
      fVar14 = fVar15;
      fVar12 = fVar16;
    } while (uVar3 != 0);
  }
  return 1;
}


