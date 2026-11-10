/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1c110; name: FUN_02f1c110
 */


void FUN_02f1c110(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(byte *)(param_1 + 0x6c) - 3 < 3) {
    if ((*(char *)(param_1 + 0x6d) != '\0') &&
       (**(undefined4 **)(param_1 + 0x20) = *param_2, 1 < *(byte *)(param_1 + 0x6d))) {
      uVar5 = 1;
      do {
        uVar1 = uVar5 + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar5 * 4) = param_2[uVar5];
        uVar5 = uVar1;
      } while (uVar1 < *(byte *)(param_1 + 0x6d));
    }
  }
  else if ((*(byte *)(param_1 + 0x6c) < 3) && (*(char *)(param_1 + 0x6d) != '\0')) {
    uVar5 = 0;
    do {
      fVar6 = (float)param_2[uVar5] * 32767.0;
      fVar8 = (float)NEON_fminnm(fVar6,0x46fffe00);
      fVar7 = -32768.0;
      if (-32768.0 < fVar8) {
        fVar7 = 32767.0;
      }
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if (fVar6 < 32767.0) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar8)) {
          bVar2 = fVar8 < -32768.0;
          bVar3 = fVar8 == -32768.0;
          bVar4 = false;
        }
      }
      if (!bVar3 && bVar2 == bVar4) {
        fVar7 = fVar6;
      }
      *(short *)(*(long *)(param_1 + 0x20) + uVar5 * 2) = (short)(int)fVar7;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x6d));
  }
  return;
}


