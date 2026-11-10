/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5499c; name: FUN_02e5499c
 */


undefined8
FUN_02e5499c(float *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (1 < (uint)param_1[0xc]) {
    fVar3 = param_2[1] - param_1[0x15];
    fVar2 = *param_2 - param_1[0x14];
    fVar4 = param_2[2] - param_1[0x16];
    if ((ABS(param_1[0x1a] * fVar2 + fVar3 * param_1[0x1b] + fVar4 * param_1[0x1c]) <= param_1[0x17]
        ) && (ABS(param_1[3] * fVar2 + fVar3 * param_1[4] + fVar4 * param_1[5]) <= param_1[0x18])) {
      fVar2 = *param_1 * fVar2 + fVar3 * param_1[1] + fVar4 * param_1[2];
      fVar4 = param_1[0x19];
      fVar3 = ABS(fVar2);
      if (fVar3 <= fVar4) {
        *param_5 = (fVar3 + fVar4) / (fVar4 + fVar4);
        if (fVar2 <= 0.0) {
          *param_3 = (*(undefined8 **)(param_1 + 10))[1];
          uVar1 = **(undefined8 **)(param_1 + 10);
        }
        else {
          *param_3 = **(undefined8 **)(param_1 + 10);
          uVar1 = *(undefined8 *)(*(long *)(param_1 + 10) + 8);
        }
        *param_4 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}


