/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314ec30; name: FUN_0314ec30
 */


/* WARNING: Removing unreachable block (ram,0x0314ec80) */

void FUN_0314ec30(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float fStack_34;
  
  fVar3 = *(float *)(param_1 + 0x80);
  fVar1 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x94);
  fVar4 = fVar1;
  if (1.8446726e+19 < fVar1) {
    fVar4 = 1.8446726e+19;
  }
  fVar5 = -1.8446726e+19;
  if (-1.8446726e+19 <= fVar1) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x8c);
  *(float *)(param_3 + 0x1c) = fVar5;
  fVar3 = fVar3 * fVar4;
  fVar4 = -1.8446726e+19;
  if (-1.8446726e+19 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_3 + 0x20) = fVar4;
  if (1.0 <= fVar5 * fVar5 + fVar4 * fVar4) {
    FUN_0314ed80(param_2,&fStack_34,&local_38);
    local_38 = local_38 * *(float *)(param_1 + 0x88);
    fVar3 = fStack_34 * *(float *)(param_1 + 0x90);
    fVar4 = *(float *)(param_1 + 0x80);
    fVar5 = *(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x80) = local_38;
    *(float *)(param_1 + 0x84) = fVar3;
    *(float *)(param_1 + 0x98) = fVar4 - local_38;
    fVar6 = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x60) +
            *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x68);
    fVar1 = (float)FUN_032c8ef0(fVar6);
    fVar4 = 8388608.0;
    if (1.1920929e-07 < fVar1) {
      fVar4 = 1.0 / fVar6;
    }
    fVar1 = *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x88);
    fVar3 = (fVar5 - fVar3) * *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x90);
    uVar2 = FUN_032c8ed0(fVar4 * (fVar1 * fVar1 + fVar3 * fVar3));
    *(undefined4 *)(param_3 + 8) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}


