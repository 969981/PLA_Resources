/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fff1c; name: FUN_029fff1c
 */


undefined8 FUN_029fff1c(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char local_70 [3];
  undefined4 local_6d;
  undefined1 local_69;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 auStack_18 [8];
  
  pcVar1 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  local_70[0] = *(char *)(param_2 + 0x7d);
  if (((((*pcVar1 == '\0') || (pcVar1[2] != local_70[0])) &&
       ((pcVar1[3] == '\0' || (pcVar1[5] != local_70[0])))) &&
      ((((pcVar1[6] == '\0' || (pcVar1[8] != local_70[0])) &&
        ((pcVar1[9] == '\0' || (pcVar1[0xb] != local_70[0])))) &&
       (((pcVar1[0xc] == '\0' || (pcVar1[0xe] != local_70[0])) &&
        ((pcVar1[0xf] == '\0' || (pcVar1[0x11] != local_70[0])))))))) ||
     (*(short *)(param_2 + 0x74) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    local_5c = 0;
    local_5a = 0;
    local_58 = 0;
    local_54 = 0;
    local_6d = 0;
    local_69 = 0;
    local_50 = 0x10000000000;
    local_48 = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    local_2c = 0;
    local_24 = 0;
    local_70[1] = 1;
    local_64 = 1;
    local_70[2] = local_70[0];
    local_68 = param_4;
    local_60 = param_3;
    FUN_029e5e44(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xe80),auStack_18,local_70);
  }
  return uVar2;
}


