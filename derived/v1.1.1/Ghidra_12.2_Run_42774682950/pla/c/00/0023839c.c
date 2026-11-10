/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023839c; name: FUN_0023839c
 */


void FUN_0023839c(long param_1,char *param_2,char *param_3,char *param_4,byte param_5,byte param_6,
                 byte param_7)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  
  puVar4 = PTR_DAT_04372bb8;
  puVar3 = PTR_DAT_04372ba8;
  if (*param_2 == '\0') {
    iVar6 = 0;
  }
  else if (param_2[1] == '\0') {
    iVar6 = 1;
  }
  else if (param_2[2] == '\0') {
    iVar6 = 2;
  }
  else if (param_2[3] == '\0') {
    iVar6 = 3;
  }
  else if (param_2[4] == '\0') {
    iVar6 = 4;
  }
  else if (param_2[5] == '\0') {
    iVar6 = 5;
  }
  else if (param_2[6] == '\0') {
    iVar6 = 6;
  }
  else if (param_2[7] == '\0') {
    iVar6 = 7;
  }
  else if (param_2[8] == '\0') {
    iVar6 = 8;
  }
  else if (param_2[9] == '\0') {
    iVar6 = 9;
  }
  else if (param_2[10] == '\0') {
    iVar6 = 10;
  }
  else if (param_2[0xb] == '\0') {
    iVar6 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    iVar6 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    iVar6 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    iVar6 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    iVar6 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    iVar6 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    iVar6 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    iVar6 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    iVar6 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    iVar6 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    iVar6 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    iVar6 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    iVar6 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    iVar6 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    iVar6 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    iVar6 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    iVar6 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    iVar6 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    iVar6 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    iVar6 = 0x1e;
  }
  else {
    iVar6 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar6 = 0x20;
    }
  }
  pcVar5 = (char *)(**(code **)PTR_DAT_04372ba8)(iVar6 + 1,4,*(undefined8 *)PTR_DAT_04372bb8);
  pcVar2 = pcVar5;
  for (; (iVar6 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    iVar6 = iVar6 + -1;
    *pcVar2 = *param_2;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x10) = pcVar5;
  if (*param_3 == '\0') {
    iVar6 = 0;
  }
  else if (param_3[1] == '\0') {
    iVar6 = 1;
  }
  else if (param_3[2] == '\0') {
    iVar6 = 2;
  }
  else if (param_3[3] == '\0') {
    iVar6 = 3;
  }
  else if (param_3[4] == '\0') {
    iVar6 = 4;
  }
  else if (param_3[5] == '\0') {
    iVar6 = 5;
  }
  else if (param_3[6] == '\0') {
    iVar6 = 6;
  }
  else if (param_3[7] == '\0') {
    iVar6 = 7;
  }
  else if (param_3[8] == '\0') {
    iVar6 = 8;
  }
  else if (param_3[9] == '\0') {
    iVar6 = 9;
  }
  else if (param_3[10] == '\0') {
    iVar6 = 10;
  }
  else if (param_3[0xb] == '\0') {
    iVar6 = 0xb;
  }
  else if (param_3[0xc] == '\0') {
    iVar6 = 0xc;
  }
  else if (param_3[0xd] == '\0') {
    iVar6 = 0xd;
  }
  else if (param_3[0xe] == '\0') {
    iVar6 = 0xe;
  }
  else if (param_3[0xf] == '\0') {
    iVar6 = 0xf;
  }
  else if (param_3[0x10] == '\0') {
    iVar6 = 0x10;
  }
  else if (param_3[0x11] == '\0') {
    iVar6 = 0x11;
  }
  else if (param_3[0x12] == '\0') {
    iVar6 = 0x12;
  }
  else if (param_3[0x13] == '\0') {
    iVar6 = 0x13;
  }
  else if (param_3[0x14] == '\0') {
    iVar6 = 0x14;
  }
  else if (param_3[0x15] == '\0') {
    iVar6 = 0x15;
  }
  else if (param_3[0x16] == '\0') {
    iVar6 = 0x16;
  }
  else if (param_3[0x17] == '\0') {
    iVar6 = 0x17;
  }
  else if (param_3[0x18] == '\0') {
    iVar6 = 0x18;
  }
  else if (param_3[0x19] == '\0') {
    iVar6 = 0x19;
  }
  else if (param_3[0x1a] == '\0') {
    iVar6 = 0x1a;
  }
  else if (param_3[0x1b] == '\0') {
    iVar6 = 0x1b;
  }
  else if (param_3[0x1c] == '\0') {
    iVar6 = 0x1c;
  }
  else if (param_3[0x1d] == '\0') {
    iVar6 = 0x1d;
  }
  else if (param_3[0x1e] == '\0') {
    iVar6 = 0x1e;
  }
  else {
    iVar6 = 0x1f;
    if (param_3[0x1f] != '\0') {
      iVar6 = 0x20;
    }
  }
  pcVar5 = (char *)(**(code **)puVar3)(iVar6 + 1,4,*(undefined8 *)puVar4);
  pcVar2 = pcVar5;
  for (; (iVar6 != 0 && (*param_3 != '\0')); param_3 = param_3 + 1) {
    iVar6 = iVar6 + -1;
    *pcVar2 = *param_3;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  do {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x18) = pcVar5;
  if (*param_4 == '\0') {
    iVar6 = 0;
  }
  else if (param_4[1] == '\0') {
    iVar6 = 1;
  }
  else if (param_4[2] == '\0') {
    iVar6 = 2;
  }
  else if (param_4[3] == '\0') {
    iVar6 = 3;
  }
  else if (param_4[4] == '\0') {
    iVar6 = 4;
  }
  else if (param_4[5] == '\0') {
    iVar6 = 5;
  }
  else if (param_4[6] == '\0') {
    iVar6 = 6;
  }
  else if (param_4[7] == '\0') {
    iVar6 = 7;
  }
  else if (param_4[8] == '\0') {
    iVar6 = 8;
  }
  else if (param_4[9] == '\0') {
    iVar6 = 9;
  }
  else if (param_4[10] == '\0') {
    iVar6 = 10;
  }
  else if (param_4[0xb] == '\0') {
    iVar6 = 0xb;
  }
  else if (param_4[0xc] == '\0') {
    iVar6 = 0xc;
  }
  else if (param_4[0xd] == '\0') {
    iVar6 = 0xd;
  }
  else if (param_4[0xe] == '\0') {
    iVar6 = 0xe;
  }
  else if (param_4[0xf] == '\0') {
    iVar6 = 0xf;
  }
  else if (param_4[0x10] == '\0') {
    iVar6 = 0x10;
  }
  else if (param_4[0x11] == '\0') {
    iVar6 = 0x11;
  }
  else if (param_4[0x12] == '\0') {
    iVar6 = 0x12;
  }
  else if (param_4[0x13] == '\0') {
    iVar6 = 0x13;
  }
  else if (param_4[0x14] == '\0') {
    iVar6 = 0x14;
  }
  else if (param_4[0x15] == '\0') {
    iVar6 = 0x15;
  }
  else if (param_4[0x16] == '\0') {
    iVar6 = 0x16;
  }
  else if (param_4[0x17] == '\0') {
    iVar6 = 0x17;
  }
  else if (param_4[0x18] == '\0') {
    iVar6 = 0x18;
  }
  else if (param_4[0x19] == '\0') {
    iVar6 = 0x19;
  }
  else if (param_4[0x1a] == '\0') {
    iVar6 = 0x1a;
  }
  else if (param_4[0x1b] == '\0') {
    iVar6 = 0x1b;
  }
  else if (param_4[0x1c] == '\0') {
    iVar6 = 0x1c;
  }
  else if (param_4[0x1d] == '\0') {
    iVar6 = 0x1d;
  }
  else if (param_4[0x1e] == '\0') {
    iVar6 = 0x1e;
  }
  else {
    iVar6 = 0x1f;
    if (param_4[0x1f] != '\0') {
      iVar6 = 0x20;
    }
  }
  pcVar5 = (char *)(**(code **)puVar3)(iVar6 + 1,4,*(undefined8 *)puVar4);
  pcVar2 = pcVar5;
  for (; (iVar6 != 0 && (*param_4 != '\0')); param_4 = param_4 + 1) {
    iVar6 = iVar6 + -1;
    *pcVar2 = *param_4;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  do {
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x20) = pcVar5;
  *(byte *)(param_1 + 0x28) = param_5 & 1;
  *(byte *)(param_1 + 0x29) = param_6 & 1;
  *(byte *)(param_1 + 0x2a) = param_7 & 1;
  return;
}


