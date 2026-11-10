/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a1908; name: FUN_011a1908
 */


uint FUN_011a1908(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_e0 [24];
  long *local_c8;
  undefined1 auStack_c0 [24];
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xf2e960d070fadce1;
  pcStack_38 = "anime_tab_shift_left_list_out_L";
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      goto joined_r0x011a1ad0;
    }
    lVar3 = *(long *)(param_1 + 0x2c8);
  }
  local_60 = 0x48b0821a07790306;
  pcStack_58 = "anime_tab_shift_right_list_out_L";
  local_50 = 0x20;
  local_48 = (long *)0x0;
  lVar4 = 0;
  if (lVar3 == 0) {
LAB_011a1990:
    local_80 = 0xf2e94ad070fab77f;
    pcStack_78 = "anime_tab_shift_left_list_out_R";
    local_70 = 0x1f;
    local_68 = (long *)0x0;
    lVar3 = 0;
    if (lVar4 == 0) {
LAB_011a19c8:
      local_a0 = 0x48b09c1a07792f34;
      pcStack_98 = "anime_tab_shift_right_list_out_R";
      local_90 = 0x20;
      local_88 = (long *)0x0;
      if ((lVar3 == 0) || (uVar2 = FUN_0283b5c4(lVar3,&local_a0), (uVar2 & 1) != 0)) {
        FUN_00d5f468(auStack_c0,param_1,0,1,0,0);
        if ((*(long *)(param_1 + 0x2c8) == 0) ||
           (uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),auStack_c0), (uVar2 & 1) != 0)) {
          FUN_00d5f468(auStack_e0,param_1,0,0xffffffff,0,0);
          if ((*(long *)(param_1 + 0x2c8) == 0) ||
             (uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),auStack_e0), (uVar2 & 1) != 0)) {
            uVar1 = FUN_011aa5d4(*(undefined8 *)(param_1 + 0x16b8));
          }
          else {
            uVar1 = 0;
          }
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
        }
        else {
          uVar1 = 0;
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      else {
        uVar1 = 0;
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
    }
    else {
      uVar2 = FUN_0283b5c4(lVar4,&local_80);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x2c8);
        goto LAB_011a19c8;
      }
      uVar1 = 0;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  else {
    uVar2 = FUN_0283b5c4(lVar3,&local_60);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x2c8);
      goto LAB_011a1990;
    }
    uVar1 = 0;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
joined_r0x011a1ad0:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1 & 1;
}


