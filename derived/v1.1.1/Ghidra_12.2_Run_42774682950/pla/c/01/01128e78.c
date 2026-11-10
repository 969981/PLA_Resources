/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01128e78; name: FUN_01128e78
 */


void FUN_01128e78(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 0x3268);
  lVar1 = *param_3;
  if (*pcVar2 != '\0') {
    if (*(long *)(param_2 + 0x3270) == lVar1) {
LAB_01128f3c:
      *(undefined8 *)(pcVar2 + 0x10) = param_1;
      return;
    }
    pcVar2 = (char *)(param_2 + 0x3280);
    if (*pcVar2 != '\0') {
      if (*(long *)(param_2 + 0x3288) == lVar1) {
LAB_01128f5c:
        *(undefined8 *)(pcVar2 + 0x10) = param_1;
        return;
      }
      pcVar2 = (char *)(param_2 + 0x3298);
      if (*pcVar2 != '\0') {
        if (*(long *)(param_2 + 0x32a0) == lVar1) goto LAB_01128f5c;
        pcVar2 = (char *)(param_2 + 0x32b0);
        if (*pcVar2 != '\0') {
          if (*(long *)(param_2 + 0x32b8) == lVar1) goto LAB_01128f5c;
          pcVar2 = (char *)(param_2 + 13000);
          if (*pcVar2 != '\0') {
            if (*(long *)(param_2 + 0x32d0) == lVar1) goto LAB_01128f5c;
            pcVar2 = (char *)(param_2 + 0x32e0);
            if (*pcVar2 != '\0') {
              if (*(long *)(param_2 + 0x32e8) == lVar1) goto LAB_01128f5c;
              pcVar2 = (char *)(param_2 + 0x32f8);
              if (*pcVar2 != '\0') {
                if (*(long *)(param_2 + 0x3300) == lVar1) goto LAB_01128f5c;
                pcVar2 = (char *)(param_2 + 0x3310);
                if (*pcVar2 != '\0') {
                  if (*(long *)(param_2 + 0x3318) != lVar1) {
                    return;
                  }
                  goto LAB_01128f3c;
                }
              }
            }
          }
        }
      }
    }
  }
  *(long *)(pcVar2 + 8) = lVar1;
  *(undefined8 *)(pcVar2 + 0x10) = param_1;
  *pcVar2 = '\x01';
  return;
}


