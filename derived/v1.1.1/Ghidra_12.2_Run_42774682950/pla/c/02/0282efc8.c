/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282efc8; name: FUN_0282efc8
 */


void FUN_0282efc8(float param_1,long param_2,uint param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  
  if (*(int *)(param_2 + 0x1b8) == 0) {
    cVar1 = *(char *)(param_2 + 0x1ac);
  }
  else {
    *(undefined4 *)(param_2 + 0x1b8) = 0;
    *(undefined1 *)(param_2 + 0x1dc) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
    cVar1 = *(char *)(param_2 + 0x1ac);
  }
  if (cVar1 == '\0') {
    fVar5 = *(float *)(param_2 + 0x1a0);
    if ((*(float *)(param_2 + 0x1a0) <= param_1) &&
       (fVar5 = param_1, *(float *)(param_2 + 0x1a4) < param_1)) {
      fVar5 = *(float *)(param_2 + 0x1a4);
    }
  }
  else {
    fVar5 = param_1;
  }
  fVar6 = *(float *)(param_2 + 0x1d4);
  fVar2 = -*(float *)(param_2 + 0x1a8);
  if (fVar5 <= fVar6) {
    fVar2 = *(float *)(param_2 + 0x1a8);
  }
  fVar4 = fVar5 - fVar6;
  fVar3 = (float)param_3;
  fVar7 = fVar4 / fVar3 + fVar2 * -0.5 * fVar3;
  *(undefined4 *)(param_2 + 0x1b8) = 1;
  if (-fVar7 / fVar2 < fVar3) {
    fVar7 = (fVar4 + fVar4) / fVar3;
    fVar2 = -fVar7 / fVar3;
  }
  *(undefined4 *)(param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x1d8) = 0;
  *(float *)(param_2 + 0x1d0) = fVar2;
  if (*(code **)(param_2 + 0x120) != (code *)0x0) {
    local_38 = fVar6;
    fStack_34 = fVar6;
    (**(code **)(param_2 + 0x120))(param_2 + 0x140,&fStack_34,&local_38);
  }
  *(float *)(param_2 + 0x1d4) = fVar6;
  *(uint *)(param_2 + 0x1c0) = param_3;
  *(float *)(param_2 + 0x1c4) = fVar5;
  *(float *)(param_2 + 0x1c8) = fVar6;
  *(float *)(param_2 + 0x1cc) = fVar7;
  return;
}


