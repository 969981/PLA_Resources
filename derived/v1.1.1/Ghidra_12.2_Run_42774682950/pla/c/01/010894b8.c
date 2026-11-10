/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010894b8; name: FUN_010894b8
 */


void FUN_010894b8(float param_1,long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long *local_40;
  float local_34;
  
  if ((*param_2 != 0) && (FUN_01089924(&local_40), local_40 != (long *)0x0)) {
    local_34 = 0.0;
    modff(*(float *)(param_2 + 3),&local_34);
    fVar3 = *(float *)((long)param_2 + 0x2c);
    fVar4 = *(float *)(param_2 + 6);
    fVar2 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_2 + 7) * 8))();
    fVar3 = fVar3 + (fVar4 - fVar3) * fVar2;
    *(float *)(param_2 + 5) = fVar3;
    fVar3 = *(float *)(param_2 + 3) + fVar3 * (param_1 / *(float *)((long)param_2 + 0x34));
    *(float *)(param_2 + 3) = fVar3;
    fVar2 = (float)FUN_01088428(local_40);
    if (fVar2 < fVar3) {
      uVar1 = FUN_01088420(local_40);
      fVar2 = (float)FUN_01088428(local_40);
      if ((uVar1 & 1) != 0) {
        fVar2 = *(float *)(param_2 + 3) - fVar2;
      }
      *(float *)(param_2 + 3) = fVar2;
    }
    else {
      fVar2 = *(float *)(param_2 + 3);
    }
    if (param_2[4] != (long)fVar2) {
      param_2[4] = (long)fVar2;
      FUN_010890a8(param_2);
    }
    if ((local_40 != (long *)0x0) && (uVar1 = FUN_02a43a5c(local_40[0xb]), (uVar1 & 1) != 0)) {
      (**(code **)(*local_40 + 0x20))(local_40);
    }
  }
  return;
}


