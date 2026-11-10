/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c7060; name: FUN_014c7060
 */


void FUN_014c7060(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = 0x262436ff2a1bb18a;
  pcStack_58 = "grid_waza_panel";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  lVar4 = thunk_FUN_00d2ec48(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar4 == 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    local_60 = 0;
    FUN_0280e8d8(lVar4,&local_60,1,0);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
    cVar2 = FUN_02c5be58();
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        local_60 = CONCAT44(uVar6,(undefined4)local_60);
        FUN_0280f4d4(lVar4,&local_60,1);
        uVar6 = uVar6 + 1;
        uVar3 = FUN_02c5be58(uVar5);
      } while (uVar6 < (uVar3 & 0xff));
      if (3 < uVar6) goto LAB_014c7168;
    }
    do {
      local_60 = CONCAT44(uVar6,(undefined4)local_60);
      FUN_0280f4d4(lVar4,&local_60,0);
      uVar6 = uVar6 + 1;
    } while (uVar6 != 4);
  }
LAB_014c7168:
  bVar1 = param_2 & 1;
  FUN_014bfd70(param_1,bVar1);
  FUN_0280779c(lVar4,bVar1);
  if (*(char *)(*(long *)(param_1 + 0x5b0) + 0x18) == '\0') {
    local_60 = 0x9f583d657f2a540d;
    pcStack_58 = "InputWazaSwap";
    local_50 = 0xd;
    local_48 = (long *)0x0;
    FUN_014bff5c(param_1,&local_60,bVar1);
  }
  *(byte *)(param_1 + 0x5c0) = param_2 & 1;
  return;
}


