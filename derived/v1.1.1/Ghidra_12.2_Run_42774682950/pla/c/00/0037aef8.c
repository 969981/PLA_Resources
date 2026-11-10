/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037aef8; name: FUN_0037aef8
 */


undefined8 FUN_0037aef8(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38 [3];
  
  local_38[1] = 0;
  lVar1 = param_1 + 0x28;
  local_38[2] = 0;
  local_38[0] = 0x5b02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  uVar5 = uVar6;
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)local_38 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_0037af8c;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
      goto LAB_0037afe4;
    }
    if (**(char **)(param_1 + 0x40) != '[') goto LAB_0037afe4;
LAB_0037af8c:
                    /* try { // try from 0037af8c to 0037af93 has its CatchHandler @ 0037b314 */
    FUN_003a0640(lVar1);
    uVar5 = FUN_0037b334(param_1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[0] = 0x5d02;
                    /* try { // try from 0037afb4 to 0037afbf has its CatchHandler @ 0037b2f0 */
    uVar5 = FUN_003780a4(param_1,local_38);
    if ((local_38[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38[2]);
    }
  }
  else {
LAB_0037afe4:
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[0] = 0;
                    /* try { // try from 0037afec to 0037aff7 has its CatchHandler @ 0037b320 */
    uVar5 = FUN_00378994(param_1,local_38);
    if ((local_38[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38[2]);
    }
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[0] = 0x3a02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  uVar5 = uVar6;
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ':') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)local_38 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_0037b098;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ':') {
LAB_0037b098:
                    /* try { // try from 0037b098 to 0037b09f has its CatchHandler @ 0037b2e4 */
      FUN_003a0640(lVar1);
      uStack_48 = 0;
      local_40 = 0;
      local_50 = 0x7b02;
      bVar4 = *(byte *)(param_1 + 0x30);
      uVar6 = (ulong)(bVar4 >> 1);
      uVar5 = uVar6;
      if ((bVar4 & 1) != 0) {
        uVar5 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar5 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '{') {
            pcVar7 = (char *)(param_1 + 0x32);
            pcVar8 = (char *)((ulong)&local_50 | 2);
            uVar9 = uVar6;
            do {
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_0037b18c;
              cVar2 = *pcVar8;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 == cVar2);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '{') goto LAB_0037b18c;
      }
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0x3c02;
      if (uVar5 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '<') {
            pcVar7 = (char *)(param_1 + 0x32);
            pcVar8 = (char *)((ulong)&local_68 | 2);
            do {
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_0037b18c;
              cVar2 = *pcVar8;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 == cVar2);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '<') goto LAB_0037b18c;
      }
      uVar5 = FUN_00378bf0(param_1);
      goto joined_r0x0037b284;
    }
  }
LAB_0037b18c:
  uVar5 = FUN_00379470(param_1);
joined_r0x0037b284:
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[0] = 0x3b02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  uVar5 = uVar6;
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ';') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)local_38 | 2);
        uVar9 = uVar6;
        do {
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0037b218;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ';') {
LAB_0037b218:
                    /* try { // try from 0037b218 to 0037b21f has its CatchHandler @ 0037b2d8 */
      FUN_003a0640(lVar1);
      return 1;
    }
  }
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0x2c02;
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ',') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)&local_50 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_0037b2b0;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ',') {
LAB_0037b2b0:
                    /* try { // try from 0037b2b0 to 0037b2b7 has its CatchHandler @ 0037b2cc */
      FUN_003a0640(lVar1);
    }
  }
  return 1;
}


