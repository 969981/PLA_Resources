/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4be0; name: FUN_02ec4be0
 */


ulong FUN_02ec4be0(ulong param_1,float param_2,long *param_3,uint param_4,float *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  
  if (param_4 != 0) {
    puVar1 = (undefined8 *)*param_3;
    fVar5 = (float)param_1;
    fVar4 = param_2 * 4.0;
    fVar6 = param_2 + fVar5;
    fVar7 = param_2 + param_2 + fVar5;
    fVar9 = param_2 * 3.0 + fVar5;
    puVar1[1] = CONCAT44(fVar9,fVar7);
    *puVar1 = CONCAT44(fVar6,fVar5 + 0.0);
    fVar5 = fVar5 + 0.0 + fVar4;
    uVar8 = CONCAT44(fVar9 + fVar4,fVar7 + fVar4);
    if (4 < param_4) {
      puVar2 = puVar1 + 2;
      do {
        fVar6 = fVar6 + fVar4;
        puVar3 = puVar2 + 2;
        puVar2[1] = uVar8;
        *puVar2 = CONCAT44(fVar6,fVar5);
        fVar5 = fVar5 + fVar4;
        uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar4,(float)uVar8 + fVar4);
        puVar2 = puVar3;
      } while (puVar3 < (undefined8 *)((long)puVar1 + (ulong)param_4 * 4));
    }
    fVar5 = (float)NEON_fminnm(fVar5,0x3f800000);
    *param_3 = *param_3 + (ulong)param_4 * 4;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar4 = fVar5;
    if (fVar5 <= *param_5) {
      fVar4 = *param_5;
    }
    *param_5 = fVar4;
    param_1 = (ulong)(uint)fVar5;
  }
  return param_1;
}


