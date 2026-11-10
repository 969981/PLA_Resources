/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f628; name: FUN_0282f628
 */


void FUN_0282f628(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_38;
  float fStack_34;
  
  fVar8 = *(float *)(param_1 + 0x1d4);
  fVar5 = *(float *)(param_1 + 0x1d8);
  fVar7 = fVar8 + fVar5;
  local_38 = fVar8;
  if (0.0 < fVar5 && *(char *)(param_1 + 0x1dc) != '\0') {
    fVar6 = *(float *)(param_1 + 0x1e0);
    bVar3 = false;
    bVar4 = true;
    if (fVar8 <= fVar6) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar6) && !NAN(fVar7)) {
        bVar3 = fVar6 == fVar7;
        bVar4 = fVar7 <= fVar6;
      }
    }
    if (!bVar4 || bVar3) goto LAB_0282f710;
    if (0.0 <= fVar5) goto LAB_0282f66c;
  }
  else {
    if (0.0 <= fVar5 || *(char *)(param_1 + 0x1dc) == '\0') goto LAB_0282f66c;
    fVar6 = *(float *)(param_1 + 0x1e0);
  }
  bVar3 = false;
  bVar4 = true;
  if (fVar7 <= fVar6) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar6) && !NAN(fVar8)) {
      bVar3 = fVar6 == fVar8;
      bVar4 = fVar8 <= fVar6;
    }
  }
  if (!bVar4 || bVar3) {
LAB_0282f710:
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      fStack_34 = fVar6;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
    }
    *(float *)(param_1 + 0x1d4) = fVar6;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    return;
  }
LAB_0282f66c:
  if (*(code **)(param_1 + 0x120) != (code *)0x0) {
    fStack_34 = fVar7;
    (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
  }
  fVar5 = *(float *)(param_1 + 0x1a0);
  *(float *)(param_1 + 0x1d4) = fVar7;
  if (((fVar8 < fVar5) || (fVar6 = *(float *)(param_1 + 0x1a4), fVar6 < fVar8)) ||
     ((fVar5 <= fVar7 && (fVar7 <= fVar6)))) {
    uVar1 = *(int *)(param_1 + 0x1bc) + 1;
    *(uint *)(param_1 + 0x1bc) = uVar1;
    if ((*(uint *)(param_1 + 0x1c0) <= uVar1) && (*(char *)(param_1 + 0x1dc) == '\0')) {
      fVar5 = *(float *)(param_1 + 0x1d0) + *(float *)(param_1 + 0x1d8);
      fVar7 = *(float *)(param_1 + 0x1cc);
      bVar3 = fVar7 < fVar5;
      if (fVar7 <= 0.0) {
        bVar3 = fVar5 < fVar7;
      }
      *(float *)(param_1 + 0x1d8) = fVar5;
      puVar2 = (undefined4 *)(param_1 + 0x1cc);
      if (!bVar3) {
        puVar2 = (undefined4 *)(param_1 + 0x1d8);
      }
      *(undefined4 *)(param_1 + 0x1d8) = *puVar2;
      *(undefined4 *)(param_1 + 0x1bc) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x1ac) == '\0') {
    if (fVar5 <= fVar7) {
      fVar5 = fVar6;
    }
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_38 = fVar7;
      fStack_34 = fVar5;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
    }
    *(float *)(param_1 + 0x1d4) = fVar5;
  }
  return;
}


