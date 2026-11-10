/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00828e40; name: FUN_00828e40
 */


void FUN_00828e40(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  pcVar3 = (char *)*param_2;
  if (pcVar3 == (char *)0x0) {
LAB_00828eb8:
    local_30[0] = 0x2c0a;
    goto LAB_00828f6c;
  }
  pcVar2 = pcVar3;
  if (*pcVar3 == *param_3) goto LAB_00828e84;
  do {
    do {
      pcVar2 = *(char **)(pcVar2 + 0x30);
      if (pcVar2 == (char *)0x0) goto LAB_00828eb8;
    } while (*pcVar2 != *param_3);
LAB_00828e84:
  } while (pcVar2[1] != param_3[1]);
  if (pcVar2 == pcVar3) {
    if (pcVar2 != (char *)param_2[1]) {
      *param_2 = *(undefined8 *)(pcVar3 + 0x30);
      goto LAB_00828ed8;
    }
    *param_2 = 0;
    param_2[1] = 0;
    lVar1 = *(long *)(pcVar2 + 0x30);
    lVar4 = *(long *)(pcVar2 + 0x38);
  }
  else if (pcVar2 == (char *)param_2[1]) {
    param_2[1] = *(undefined8 *)(pcVar2 + 0x38);
    lVar1 = *(long *)(pcVar2 + 0x30);
    lVar4 = *(long *)(pcVar2 + 0x38);
  }
  else {
LAB_00828ed8:
    lVar1 = *(long *)(pcVar2 + 0x30);
    lVar4 = *(long *)(pcVar2 + 0x38);
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x30) = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x38) = lVar4;
  }
  lVar4 = param_2[2];
  lVar1 = *(long *)(lVar4 + 0x20);
  if (*(long *)(lVar4 + 0x18) == 0) {
    if (lVar1 == 0) {
      pcVar2[0x20] = '\0';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = '\0';
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\0';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = '\0';
      *(char **)(lVar4 + 0x18) = pcVar2;
      goto LAB_00828f14;
    }
  }
  else if (lVar1 != 0) {
    *(char **)(lVar1 + 0x20) = pcVar2;
    pcVar2[0x20] = '\0';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = '\0';
    *(long *)(pcVar2 + 0x28) = lVar1;
LAB_00828f14:
    *(char **)(lVar4 + 0x20) = pcVar2;
  }
  if (*(char **)(lVar4 + 8) == pcVar2) {
    if (*(char **)(lVar4 + 0x10) != pcVar2) {
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(pcVar2 + 0x10);
      goto LAB_00828f50;
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar1 = *(long *)(pcVar2 + 0x10);
    lVar4 = *(long *)(pcVar2 + 0x18);
  }
  else if (*(char **)(lVar4 + 0x10) == pcVar2) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(pcVar2 + 0x18);
    lVar1 = *(long *)(pcVar2 + 0x10);
    lVar4 = *(long *)(pcVar2 + 0x18);
  }
  else {
LAB_00828f50:
    lVar1 = *(long *)(pcVar2 + 0x10);
    lVar4 = *(long *)(pcVar2 + 0x18);
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = lVar4;
  }
  local_30[0] = 0;
LAB_00828f6c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


