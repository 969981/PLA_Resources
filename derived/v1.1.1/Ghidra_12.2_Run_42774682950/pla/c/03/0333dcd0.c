/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333dcd0; name: FUN_0333dcd0
 */


undefined1 * FUN_0333dcd0(undefined1 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_0333d904(*param_2);
  fVar2 = fVar1 * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  *param_1 = (char)(int)fVar3;
  fVar1 = (float)FUN_0333d904(param_2[1]);
  fVar2 = fVar1 * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  param_1[1] = (char)(int)fVar3;
  fVar1 = (float)FUN_0333d904(param_2[2]);
  fVar2 = fVar1 * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  param_1[2] = (char)(int)fVar3;
  fVar2 = (float)param_2[3] * 255.0 + 0.5;
  fVar1 = fVar2;
  if (255.0 < fVar2) {
    fVar1 = 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  param_1[3] = (char)(int)fVar3;
  return param_1;
}


