/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150f804; name: FUN_0150f804
 */


void FUN_0150f804(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  local_28 = param_2;
  if (lVar1 != 0) {
    FUN_014c7b3c(param_1 + 0x78);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (*(long *)(lVar1 + 8) == 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      FUN_014c1330(&local_50,param_2,&local_28,lVar1 + 0x18);
      lVar1 = local_50;
      local_50 = 0;
      lVar2 = *(long *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar1;
      lVar1 = 0;
      if (lVar2 != 0) {
        FUN_014c7b3c(param_1 + 0x78,lVar2);
        lVar1 = local_50;
      }
      *(undefined8 *)(param_1 + 0x78) = local_48;
      *(undefined8 *)(param_1 + 0x80) = uStack_40;
      *(undefined8 *)(param_1 + 0x88) = local_38;
      local_50 = 0;
      if (lVar1 != 0) {
        FUN_014c8c40(&local_48);
      }
    }
    else {
      FUN_014c11c0(&local_50,param_2,(long *)(lVar1 + 0x10),lVar1 + 0x18);
      lVar1 = local_50;
      local_50 = 0;
      lVar2 = *(long *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar1;
      lVar1 = 0;
      if (lVar2 != 0) {
        FUN_014c7b3c(param_1 + 0x78,lVar2);
        lVar1 = local_50;
      }
      *(undefined8 *)(param_1 + 0x78) = local_48;
      *(undefined8 *)(param_1 + 0x80) = uStack_40;
      *(undefined8 *)(param_1 + 0x88) = local_38;
      local_50 = 0;
      if (lVar1 != 0) {
        FUN_014c89d8(&local_48);
      }
    }
  }
  else {
    FUN_014c10b0(&local_50,param_2);
    lVar1 = local_50;
    local_50 = 0;
    lVar2 = *(long *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar1;
    lVar1 = 0;
    if (lVar2 != 0) {
      FUN_014c7b3c(param_1 + 0x78,lVar2);
      lVar1 = local_50;
    }
    *(undefined8 *)(param_1 + 0x78) = local_48;
    *(undefined8 *)(param_1 + 0x80) = uStack_40;
    *(undefined8 *)(param_1 + 0x88) = local_38;
    local_50 = 0;
    if (lVar1 != 0) {
      FUN_014c8770(&local_48);
    }
  }
  return;
}


