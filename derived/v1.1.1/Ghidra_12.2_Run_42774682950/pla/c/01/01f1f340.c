/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1f340; name: FUN_01f1f340
 */


void FUN_01f1f340(float param_1,long param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  float fVar3;
  
  if (6 < param_3) {
LAB_01f1f498:
                    /* WARNING: Subroutine does not return */
    FUN_01f22c10();
  }
  lVar2 = (long)(int)param_3;
  piVar1 = (int *)(param_2 + lVar2 * 0x6028 + 0xd6794);
  if (*piVar1 == 0xff) {
    return;
  }
  if ((int)param_3 < 6) {
    if (*(char *)(param_2 + 0xfa880) != '\0') {
LAB_01f1f4a4:
      *piVar1 = 0xff;
      *(undefined4 *)(param_2 + lVar2 * 0x6028 + 0xd67a0) = 0;
      fVar3 = 1.0;
      goto LAB_01f1f3b0;
    }
    if ((int)param_3 < 5) {
      if (*(char *)(param_2 + 0xf4858) != '\0') goto LAB_01f1f4a4;
      if ((int)param_3 < 4) {
        if (*(char *)(param_2 + 0xee830) != '\0') goto LAB_01f1f4a4;
        if ((int)param_3 < 3) {
          if (*(char *)(param_2 + 0xe8808) != '\0') goto LAB_01f1f4a4;
          if ((int)param_3 < 2) {
            if (*(char *)(param_2 + 0xe27e0) != '\0') goto LAB_01f1f4a4;
            if ((int)param_3 < 1) {
              if (*(char *)(param_2 + 0xdc7b8) != '\0') goto LAB_01f1f4a4;
              if ((int)param_3 < 0) {
                if (*(char *)(param_2 + 0xd6790) != '\0') goto LAB_01f1f4a4;
                if ((int)param_3 < -1) goto LAB_01f1f498;
              }
            }
          }
        }
      }
    }
  }
  *piVar1 = 0xff;
  *(undefined4 *)(param_2 + lVar2 * 0x6028 + 0xd67a0) = 0;
  if (param_1 <= 0.0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / (param_1 * 30.0);
  }
LAB_01f1f3b0:
  param_2 = param_2 + lVar2 * 0x6028;
  *(float *)(param_2 + 0xd67a4) = fVar3;
  *(undefined1 *)(param_2 + 0xd6790) = 1;
  return;
}


