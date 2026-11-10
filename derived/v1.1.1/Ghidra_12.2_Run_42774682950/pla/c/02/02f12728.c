/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12728; name: FUN_02f12728
 */


void FUN_02f12728(float *param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1;
  fVar4 = fVar3 + -6.2831855;
  if (fVar3 <= 3.1415927) {
    fVar4 = fVar3;
  }
  bVar1 = true;
  bVar2 = false;
  if (fVar3 <= 3.1415927) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < -3.1415927;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    fVar3 = fVar4 + 6.2831855;
    if (-3.1415927 <= fVar4) {
      fVar3 = fVar4;
    }
    *param_1 = fVar3;
  }
  fVar3 = param_1[1];
  fVar4 = fVar3 + -3.1415927;
  if (fVar3 <= 1.5707964) {
    fVar4 = fVar3;
  }
  bVar1 = true;
  bVar2 = false;
  if (fVar3 <= 1.5707964) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < -1.5707964;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    fVar3 = fVar4 + 3.1415927;
    if (-1.5707964 <= fVar4) {
      fVar3 = fVar4;
    }
    param_1[1] = fVar3;
  }
  return;
}


