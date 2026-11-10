/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f2bc; name: FUN_0282f2bc
 */


void FUN_0282f2bc(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  
  if (*(uint *)(param_1 + 0x1bc) < *(uint *)(param_1 + 0x1c0)) {
    uVar1 = *(uint *)(param_1 + 0x1bc) + 1;
    *(uint *)(param_1 + 0x1bc) = uVar1;
    fVar6 = (float)uVar1;
    fVar7 = *(float *)(param_1 + 0x1d4);
    fVar6 = *(float *)(param_1 + 0x1c8) +
            (*(float *)(param_1 + 0x1cc) + *(float *)(param_1 + 0x1d0) * 0.5 * fVar6) * fVar6;
    *(float *)(param_1 + 0x1d8) = fVar6 - fVar7;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_38 = fVar7;
      fStack_34 = fVar6;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
    }
    fVar4 = *(float *)(param_1 + 0x1a0);
    *(float *)(param_1 + 0x1d4) = fVar6;
    if ((fVar4 <= fVar7) && (fVar5 = *(float *)(param_1 + 0x1a4), fVar7 <= fVar5)) {
      bVar2 = true;
      if ((fVar4 <= fVar6) && (bVar2 = false, !NAN(fVar5) && !NAN(fVar6))) {
        bVar2 = fVar5 < fVar6;
      }
      if (bVar2) {
        if (*(char *)(param_1 + 0x1ac) != '\0') {
          FUN_0282f1f0(param_1);
          *(undefined4 *)(param_1 + 0x1b8) = 2;
          return;
        }
        if (fVar4 <= fVar6) {
          fVar4 = fVar5;
        }
        *(undefined1 *)(param_1 + 0x1dc) = 0;
        *(undefined4 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        if (*(code **)(param_1 + 0x120) != (code *)0x0) {
          local_38 = fVar6;
          fStack_34 = fVar4;
          (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
        }
        *(float *)(param_1 + 0x1d4) = fVar4;
        return;
      }
    }
    if (*(char *)(param_1 + 0x1dc) != '\0') {
      if (((*(float *)(param_1 + 0x1d8) <= 0.0) ||
          (fVar4 = *(float *)(param_1 + 0x1e0), fVar4 < fVar7)) || (fVar6 < fVar4)) {
        if (0.0 <= *(float *)(param_1 + 0x1d8)) {
          return;
        }
        fVar4 = *(float *)(param_1 + 0x1e0);
        bVar2 = false;
        bVar3 = true;
        if (fVar6 <= fVar4) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar4) && !NAN(fVar7)) {
            bVar2 = fVar4 == fVar7;
            bVar3 = fVar7 <= fVar4;
          }
        }
        if (bVar3 && !bVar2) {
          return;
        }
        if (*(code **)(param_1 + 0x120) != (code *)0x0) {
          local_38 = fVar6;
          fStack_34 = fVar4;
          (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
        }
        *(float *)(param_1 + 0x1d4) = fVar4;
      }
      else {
        if (*(code **)(param_1 + 0x120) != (code *)0x0) {
          local_38 = fVar6;
          fStack_34 = fVar4;
          (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
        }
        *(float *)(param_1 + 0x1d4) = fVar4;
      }
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_38 = *(float *)(param_1 + 0x1d4);
      fStack_34 = fVar6;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_34,&local_38);
    }
    *(float *)(param_1 + 0x1d4) = fVar6;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return;
}


