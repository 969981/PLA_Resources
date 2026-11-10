/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0aef0; name: FUN_02e0aef0
 */


void FUN_02e0aef0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7,float *param_8,float *param_9,uint param_10)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (((param_2 == param_1) && (param_4 == param_3)) && (param_6 == param_5)) {
    if (param_10 != 0) {
      pfVar3 = param_7;
      do {
        pfVar4 = pfVar3 + 4;
        uVar5 = *(undefined8 *)param_8;
        uVar6 = *(undefined8 *)param_9;
        *(ulong *)(pfVar3 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * param_1 +
                      param_3 * (float)((ulong)*(undefined8 *)(param_8 + 2) >> 0x20) +
                      param_5 * (float)((ulong)*(undefined8 *)(param_9 + 2) >> 0x20),
                      (float)*(undefined8 *)(pfVar3 + 2) * param_1 +
                      param_3 * (float)*(undefined8 *)(param_8 + 2) +
                      param_5 * (float)*(undefined8 *)(param_9 + 2));
        *(ulong *)pfVar3 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_1 +
                      param_3 * (float)((ulong)uVar5 >> 0x20) +
                      param_5 * (float)((ulong)uVar6 >> 0x20),
                      (float)*(undefined8 *)pfVar3 * param_1 + param_3 * (float)uVar5 +
                      param_5 * (float)uVar6);
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        pfVar3 = pfVar4;
      } while (pfVar4 < param_7 + param_10);
    }
  }
  else if (param_10 != 0) {
    fVar7 = 1.0 / (float)param_10;
    param_2 = param_2 - param_1;
    param_4 = param_4 - param_3;
    param_6 = param_6 - param_5;
    pfVar3 = param_7;
    do {
      fVar8 = *pfVar3 * param_1;
      param_1 = param_1 + param_2 * fVar7;
      fVar1 = param_3 * *param_8;
      fVar2 = param_5 * *param_9;
      param_3 = param_3 + param_4 * fVar7;
      param_5 = param_5 + param_6 * fVar7;
      pfVar4 = pfVar3 + 1;
      *pfVar3 = fVar8 + fVar1 + fVar2;
      pfVar3 = pfVar4;
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
    } while (pfVar4 < param_7 + param_10);
  }
  return;
}


