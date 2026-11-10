/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00238114; name: FUN_00238114
 */


void FUN_00238114(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  if (*param_2 == '\0') {
    iVar4 = 0;
  }
  else if (param_2[1] == '\0') {
    iVar4 = 1;
  }
  else if (param_2[2] == '\0') {
    iVar4 = 2;
  }
  else if (param_2[3] == '\0') {
    iVar4 = 3;
  }
  else if (param_2[4] == '\0') {
    iVar4 = 4;
  }
  else if (param_2[5] == '\0') {
    iVar4 = 5;
  }
  else if (param_2[6] == '\0') {
    iVar4 = 6;
  }
  else if (param_2[7] == '\0') {
    iVar4 = 7;
  }
  else if (param_2[8] == '\0') {
    iVar4 = 8;
  }
  else if (param_2[9] == '\0') {
    iVar4 = 9;
  }
  else if (param_2[10] == '\0') {
    iVar4 = 10;
  }
  else if (param_2[0xb] == '\0') {
    iVar4 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    iVar4 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    iVar4 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    iVar4 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    iVar4 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    iVar4 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    iVar4 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    iVar4 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    iVar4 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    iVar4 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    iVar4 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    iVar4 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    iVar4 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    iVar4 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    iVar4 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    iVar4 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    iVar4 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    iVar4 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    iVar4 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    iVar4 = 0x1e;
  }
  else {
    iVar4 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar4 = 0x20;
    }
  }
  pcVar3 = (char *)(**(code **)PTR_DAT_04372ba8)(iVar4 + 1,4,*(undefined8 *)PTR_DAT_04372bb8);
  pcVar2 = pcVar3;
  for (; (iVar4 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    iVar4 = iVar4 + -1;
    *pcVar2 = *param_2;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x10) = pcVar3;
  FUN_00237f40(param_1 + 0x18,param_3);
  return;
}


