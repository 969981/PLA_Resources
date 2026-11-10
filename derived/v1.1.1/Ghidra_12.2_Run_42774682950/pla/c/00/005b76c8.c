/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b76c8; name: FUN_005b76c8
 */


void FUN_005b76c8(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  char *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined *puStack_18;
  
  local_40 = param_2;
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 0:
    local_50 = &DAT_03996322;
    if (*(char *)(param_2 + 0x51) != '\0') {
      local_50 = &DAT_0397b7dc;
    }
    local_30 = (char *)(param_2 + 0x30);
    pcVar1 = "Header exact match:%s %s:%s";
    break;
  case 1:
    local_30 = *(char **)(param_2 + 0x48);
    local_50 = &DAT_03996322;
    if (*(char *)(param_2 + 0x51) != '\0') {
      local_50 = &DAT_0397b7dc;
    }
    pcVar1 = "Header regex match:%s %s:%s";
    break;
  case 2:
    local_50 = &DAT_03996322;
    if (*(char *)(param_2 + 0x51) != '\0') {
      local_50 = &DAT_0397b7dc;
    }
    puStack_48 = PTR_LAB_043737d8;
    puStack_38 = PTR_LAB_04374a18;
    local_30 = *(char **)(param_2 + 0x20);
    puStack_28 = PTR_FUN_04373818;
    local_20 = *(undefined8 *)(param_2 + 0x28);
    puStack_18 = PTR_FUN_04373818;
    FUN_002e6390("Header range match:%s %s:[%d, %d)",0x21,&local_50,4);
    return;
  case 3:
    local_50 = &DAT_03996322;
    if (*(char *)(param_2 + 0x51) != '\0') {
      local_50 = &DAT_0397b7dc;
    }
    local_30 = "false";
    if (*(char *)(param_2 + 0x50) != '\0') {
      local_30 = "true";
    }
    uVar2 = 0x1d;
    pcVar1 = "Header present match:%s %s:%s";
    puStack_28 = PTR_LAB_043737d8;
    goto LAB_005b7904;
  case 4:
    local_50 = &DAT_03996322;
    if (*(char *)(param_2 + 0x51) != '\0') {
      local_50 = &DAT_0397b7dc;
    }
    pcVar1 = "Header prefix match:%s %s:%s";
    goto LAB_005b78f8;
  case 5:
    local_50 = &DAT_03996322;
    if (*(char *)(param_2 + 0x51) != '\0') {
      local_50 = &DAT_0397b7dc;
    }
    pcVar1 = "Header suffix match:%s %s:%s";
LAB_005b78f8:
    local_30 = (char *)(param_2 + 0x30);
    uVar2 = 0x1c;
    puStack_28 = PTR_LAB_04374a18;
    goto LAB_005b7904;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  puStack_38 = PTR_LAB_04374a18;
  uVar2 = 0x1b;
  puStack_28 = puStack_38;
LAB_005b7904:
  puStack_38 = PTR_LAB_04374a18;
  puStack_48 = PTR_LAB_043737d8;
  FUN_002e6390(pcVar1,uVar2,&local_50,3);
  return;
}


