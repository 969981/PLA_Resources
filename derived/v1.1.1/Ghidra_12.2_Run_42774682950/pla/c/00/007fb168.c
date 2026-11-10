/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fb168; name: FUN_007fb168
 */


void FUN_007fb168(int *param_1,long param_2,byte param_3)

{
  undefined1 auStack_30 [16];
  
  FUN_007fa3fc(param_2,*(undefined8 *)(param_2 + 0x148));
  if (*param_1 == 0) {
    if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
      FUN_007e5bd8(param_2 + 0x1118);
      *(undefined4 *)(param_2 + 0x1148) = 0;
    }
    FUN_008069d0(auStack_30,*(undefined8 *)(param_2 + 0x148),param_2 + 0x1118,0);
    FUN_007ee660(param_1,auStack_30);
    if (*param_1 == 0) {
      FUN_007e5e70(*(undefined8 *)(param_2 + 0x148),0);
      *(undefined4 *)(param_2 + 0x1148) = 3;
      *(byte *)(param_2 + 0x284) = param_3 & 1;
      if (*(char *)(param_2 + 0x1168) != '\0') {
        *(char *)(param_2 + 0x1168) = '\0';
      }
    }
  }
  return;
}


