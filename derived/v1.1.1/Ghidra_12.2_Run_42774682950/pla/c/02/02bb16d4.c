/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb16d4; name: FUN_02bb16d4
 */


void FUN_02bb16d4(long *param_1,int param_2,uint param_3,char *param_4,char *param_5,long *param_6)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  uint local_28;
  uint local_24;
  
  if ((param_2 == 2) && (lVar4 = *param_6, *(uint *)(lVar4 + 0x500) <= param_3)) {
    pcVar1 = (char *)(lVar4 + (ulong)param_3 * 0x10);
    if (*pcVar1 == '\0' || *param_4 == '\0') {
      if (*param_4 != '\0' || *pcVar1 != '\0') {
LAB_02bb1730:
        uVar3 = *(undefined8 *)(param_4 + 8);
        *(undefined8 *)pcVar1 = *(undefined8 *)param_4;
        *(undefined8 *)(pcVar1 + 8) = uVar3;
        goto LAB_02bb1738;
      }
    }
    else if (*(long *)(lVar4 + (ulong)param_3 * 0x10 + 8) != *(long *)(param_4 + 8))
    goto LAB_02bb1730;
    local_24 = *(uint *)(lVar4 + (ulong)param_3 * 4 + 0x200);
  }
  else {
LAB_02bb1738:
    local_24 = 0xffffffff;
  }
  if (*param_5 == '\0') {
    local_40 = *(undefined8 *)(*param_1 + 0x62a0);
    local_38 = *(long *)(*param_1 + 0x62a8);
  }
  else {
    local_40 = *(undefined8 *)param_5;
    local_38 = *(long *)(param_5 + 8);
  }
  if ((param_2 == 2) && (lVar4 = *param_6, *(uint *)(lVar4 + 0x500) <= param_3)) {
    lVar2 = lVar4 + (ulong)param_3 * 0x10;
    if ((*(char *)(lVar2 + 0x280) == '\0') || ((char)local_40 == '\0')) {
      if ((char)local_40 != '\0' || *(char *)(lVar2 + 0x280) != '\0') goto LAB_02bb17e4;
    }
    else if (*(long *)(lVar4 + (ulong)param_3 * 0x10 + 0x288) != local_38) {
LAB_02bb17e4:
      *(undefined8 *)(lVar2 + 0x280) = local_40;
      *(long *)(lVar2 + 0x288) = local_38;
      goto LAB_02bb17f0;
    }
    local_28 = *(uint *)(lVar4 + (ulong)param_3 * 4 + 0x480);
  }
  else {
LAB_02bb17f0:
    local_28 = 0xffffffff;
  }
  if ((((int)(local_28 | local_24) < 0) &&
      (FUN_02b9cf4c(param_1,param_2,param_3,param_4,&local_40,&local_24,&local_28), param_2 == 2))
     && (*(uint *)(*param_6 + 0x500) <= param_3)) {
    *(uint *)(*param_6 + (ulong)param_3 * 4 + 0x200) = local_24;
    *(uint *)(*param_6 + (ulong)param_3 * 4 + 0x480) = local_28;
  }
  return;
}


