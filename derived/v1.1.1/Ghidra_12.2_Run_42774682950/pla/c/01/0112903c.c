/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112903c; name: FUN_0112903c
 */


ulong FUN_0112903c(ulong param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    return param_1;
  }
  pcVar3 = (char *)(param_1 + 0x3328);
  if (*pcVar3 == '\0') {
LAB_01129168:
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    uVar1 = snprintf((char *)&local_40,0x20,"%s",param_3);
    *(long *)(pcVar3 + 8) = *param_2;
    *(undefined8 *)(pcVar3 + 0x20) = local_30;
    *(undefined8 *)(pcVar3 + 0x28) = uStack_28;
    *(undefined8 *)(pcVar3 + 0x10) = local_40;
    *(undefined8 *)(pcVar3 + 0x18) = uStack_38;
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
    }
    return (ulong)uVar1;
  }
  lVar2 = *param_2;
  if (*(long *)(param_1 + 0x3330) != lVar2) {
    pcVar3 = (char *)(param_1 + 0x3358);
    if (*pcVar3 == '\0') goto LAB_01129168;
    if (*(long *)(param_1 + 0x3360) != lVar2) {
      pcVar3 = (char *)(param_1 + 0x3388);
      if (*pcVar3 == '\0') goto LAB_01129168;
      if (*(long *)(param_1 + 0x3390) != lVar2) {
        pcVar3 = (char *)(param_1 + 0x33b8);
        if (*pcVar3 == '\0') goto LAB_01129168;
        if (*(long *)(param_1 + 0x33c0) != lVar2) {
          pcVar3 = (char *)(param_1 + 0x33e8);
          if (*pcVar3 == '\0') goto LAB_01129168;
          if (*(long *)(param_1 + 0x33f0) != lVar2) {
            pcVar3 = (char *)(param_1 + 0x3418);
            if (*pcVar3 == '\0') goto LAB_01129168;
            if (*(long *)(param_1 + 0x3420) != lVar2) {
              pcVar3 = (char *)(param_1 + 0x3448);
              if (*pcVar3 == '\0') goto LAB_01129168;
              if (*(long *)(param_1 + 0x3450) != lVar2) {
                pcVar3 = (char *)(param_1 + 0x3478);
                if (*pcVar3 == '\0') goto LAB_01129168;
                if (*(long *)(param_1 + 0x3480) != lVar2) {
                  return param_1;
                }
              }
            }
          }
        }
      }
    }
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = snprintf((char *)&local_40,0x20,"%s",param_3);
  *(undefined8 *)(pcVar3 + 0x20) = local_30;
  *(undefined8 *)(pcVar3 + 0x28) = uStack_28;
  *(undefined8 *)(pcVar3 + 0x10) = local_40;
  *(undefined8 *)(pcVar3 + 0x18) = uStack_38;
  return (ulong)uVar1;
}


