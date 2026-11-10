/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03285ed0; name: FUN_03285ed0
 */


void FUN_03285ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  
  if ((int)((long)*(int *)(param_1 + 1) + -1) == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    fVar2 = *(float *)(puVar1 + ((long)*(int *)(param_1 + 1) + -1) * 2 + 1);
    fVar3 = *(float *)(puVar1 + 1);
    *puVar1 = puVar1[((long)*(int *)(param_1 + 1) + -1) * 2];
    *(float *)(puVar1 + 1) = fVar2;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    if (fVar2 <= fVar3) {
      FUN_03285d94(param_1,0);
      return;
    }
  }
  return;
}


