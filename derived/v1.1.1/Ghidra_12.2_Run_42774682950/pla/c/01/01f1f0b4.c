/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1f0b4; name: FUN_01f1f0b4
 */


void FUN_01f1f0b4(float param_1,long param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  char *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if (6 < param_3) goto LAB_01f1f33c;
  lVar4 = (long)(int)param_3;
  lVar5 = param_2 + lVar4 * 0x6028;
  puVar1 = (uint *)(lVar5 + 0xd6794);
  if (*puVar1 == param_4) {
    return;
  }
  if ((int)param_3 < 6) {
    if (*(char *)(param_2 + 0xfa880) == '\0') {
      if ((int)param_3 < 5) {
        if (*(char *)(param_2 + 0xf4858) != '\0') goto LAB_01f1f1dc;
        if ((int)param_3 < 4) {
          if (*(char *)(param_2 + 0xee830) != '\0') goto LAB_01f1f1dc;
          if ((int)param_3 < 3) {
            if (*(char *)(param_2 + 0xe8808) != '\0') goto LAB_01f1f1dc;
            if ((int)param_3 < 2) {
              if (*(char *)(param_2 + 0xe27e0) != '\0') goto LAB_01f1f1dc;
              if ((int)param_3 < 1) {
                if (*(char *)(param_2 + 0xdc7b8) != '\0') goto LAB_01f1f1dc;
                if ((int)param_3 < 0) {
                  if (*(char *)(param_2 + 0xd6790) != '\0') goto LAB_01f1f1dc;
                  if ((int)param_3 < -1) goto LAB_01f1f33c;
                }
              }
            }
          }
        }
      }
      goto LAB_01f1f0f0;
    }
LAB_01f1f1dc:
    bVar3 = true;
  }
  else {
LAB_01f1f0f0:
    bVar3 = false;
  }
  pcVar2 = (char *)(lVar5 + 0xd6790);
  if (param_4 == 0xff) {
    *puVar1 = 0xff;
    *(undefined4 *)(param_2 + lVar4 * 0x6028 + 0xd67a0) = 0;
    if (bVar3) {
      *(undefined4 *)(param_2 + lVar4 * 0x6028 + 0xd67a4) = 0x3f800000;
      goto LAB_01f1f1b8;
    }
    if (param_1 <= 0.0) goto LAB_01f1f164;
LAB_01f1f194:
    fVar6 = 1.0 / (param_1 * 30.0);
  }
  else {
    if (bVar3) {
      if (0x13 >= param_4) {
        *(long *)(param_2 + lVar4 * 0x6028 + 0xd6798) =
             param_2 + (long)(int)param_4 * 0x6008 + 0x5e688;
        if (*pcVar2 != '\0') {
          *(undefined1 *)(param_2 + lVar4 * 0x6028 + 0xdc7b0) = 1;
        }
        *puVar1 = param_4;
        *(undefined8 *)(param_2 + lVar4 * 0x6028 + 0xd67a0) = 0x3f80000000000000;
        goto LAB_01f1f1b8;
      }
LAB_01f1f33c:
                    /* WARNING: Subroutine does not return */
      FUN_01f22c10();
    }
    if (0x13 < param_4) goto LAB_01f1f33c;
    *(long *)(param_2 + lVar4 * 0x6028 + 0xd6798) = param_2 + (long)(int)param_4 * 0x6008 + 0x5e688;
    if (*pcVar2 != '\0') {
      *(undefined1 *)(param_2 + lVar4 * 0x6028 + 0xdc7b0) = 1;
    }
    *puVar1 = param_4;
    *(undefined4 *)(param_2 + lVar4 * 0x6028 + 0xd67a0) = 0;
    if (0.0 < param_1) goto LAB_01f1f194;
LAB_01f1f164:
    fVar6 = 1.0;
  }
  *(float *)(param_2 + lVar4 * 0x6028 + 0xd67a4) = fVar6;
LAB_01f1f1b8:
  *pcVar2 = '\x01';
  return;
}


