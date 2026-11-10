/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141e248; name: FUN_0141e248
 */


bool FUN_0141e248(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  fVar3 = *(float *)(param_1 + 0x5b0);
  fVar2 = fVar3 + *(float *)(param_1 + 0x5b8);
  fVar1 = *(float *)(param_1 + 0x5b4);
  *(float *)(param_1 + 0x5b0) = fVar2;
  if (*(int *)(param_1 + 0x5bc) == 0) {
    if (fVar1 < fVar2) goto LAB_0141e280;
  }
  else if (fVar2 < fVar1) {
LAB_0141e280:
    *(float *)(param_1 + 0x5b0) = fVar1;
    fVar2 = fVar1;
  }
  fVar5 = *(float *)(param_1 + 0x5c0);
  fVar6 = fVar5 + *(float *)(param_1 + 0x5c8);
  fVar8 = *(float *)(param_1 + 0x5c4);
  *(float *)(param_1 + 0x5c0) = fVar6;
  if (*(int *)(param_1 + 0x5cc) == 0) {
    if (fVar8 < fVar6) goto LAB_0141e2ac;
  }
  else if (fVar6 < fVar8) {
LAB_0141e2ac:
    *(float *)(param_1 + 0x5c0) = fVar8;
    fVar6 = fVar8;
  }
  fVar4 = *(float *)(param_1 + 0x5d0);
  fVar8 = fVar4 + *(float *)(param_1 + 0x5d8);
  fVar7 = *(float *)(param_1 + 0x5d4);
  *(float *)(param_1 + 0x5d0) = fVar8;
  if (*(int *)(param_1 + 0x5dc) == 0) {
    if (fVar8 <= fVar7) goto LAB_0141e2f4;
  }
  else if (fVar7 <= fVar8) goto LAB_0141e2f4;
  *(float *)(param_1 + 0x5d0) = fVar7;
  fVar8 = fVar7;
LAB_0141e2f4:
  if ((fVar3 != fVar2 || fVar5 != fVar6) || fVar4 != fVar8) {
    local_40 = 0xb3d4a8e46682dfa0;
    pcStack_38 = "PLAY_UI_COMMON_PICBOOK_GAUGE";
    local_30 = 0x1c;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    fVar2 = *(float *)(param_1 + 0x5b0);
    fVar1 = *(float *)(param_1 + 0x5b4);
  }
  if (fVar2 != fVar1) {
    fVar3 = *(float *)(param_1 + 0x5c0);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x5c4);
    *(float *)(param_1 + 0x5b0) = fVar1;
    *(float *)(param_1 + 0x5c0) = fVar3;
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5d4);
  }
  if (fVar3 == 0.0) {
    FUN_0141e3d0(param_1);
  }
  FUN_0141d3f0(param_1);
  FUN_0141d60c(param_1);
  return fVar2 == fVar1;
}


