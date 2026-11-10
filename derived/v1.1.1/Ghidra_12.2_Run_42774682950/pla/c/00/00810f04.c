/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00810f04; name: FUN_00810f04
 */


void FUN_00810f04(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int local_90 [8];
  int local_70 [4];
  int local_60 [4];
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  undefined4 local_28;
  undefined1 local_24 [4];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_38[0] = 0x2c09;
    local_28 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)&local_28);
    FUN_007ee578(param_1,local_38);
    return;
  }
  FUN_0080f8bc(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)PTR_DAT_043773c0);
  piVar2 = local_90;
  FUN_007e3400(auStack_50);
  local_24[0] = 0;
  FUN_007ebd7c(local_60,*(undefined8 *)(param_2 + 0x18),param_3 + 0x30,0x5c0,auStack_50,local_24,
               (int *)(param_3 + 0x5f8));
  if (local_60[0] == 0) {
    if (*(int *)(param_3 + 0x5f8) <= **(int **)PTR_DAT_04377480) {
      FUN_007f0ce0(local_90);
      FUN_007f105c(local_90,auStack_50);
      uVar1 = FUN_007f0f48(local_90,*(long *)(param_2 + 0x58) + 0x98);
      if ((uVar1 & 1) == 0) {
        FUN_007f0f88(param_3 + 0x628,local_90);
        *(undefined1 *)(param_3 + 0x620) = local_24[0];
        FUN_007f0508(local_70,param_3);
        FUN_007ee660(local_60,local_70);
        if (local_60[0] == 0) {
          local_70[0] = 0;
        }
        else {
          local_70[0] = 0x2c09;
        }
      }
      else {
        local_70[0] = 0x2c09;
      }
      piVar2 = local_70;
      local_28 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)piVar2 | 4),(Result *)&local_28);
      goto LAB_00811194;
    }
LAB_00811040:
    local_90[0] = 0x2c09;
  }
  else {
    if (*(char *)(param_2 + 0x10) == '\0') goto LAB_00811040;
    local_90[0] = 0x2c09;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
    if (local_60[0] == local_90[0]) {
LAB_00811018:
      piVar2 = local_60;
      goto LAB_00811194;
    }
    local_90[0] = 0x10407;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
    if (local_60[0] == local_90[0]) {
      local_90[0] = 0xc406;
    }
    else {
      local_90[0] = 0xc47f;
      local_70[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
      if (local_60[0] != local_90[0]) {
        local_28 = 0;
        local_70[0] = 0x2c18;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_28);
        if (local_60[0] != local_70[0]) goto LAB_00811018;
      }
      local_90[0] = 0x2c09;
    }
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
LAB_00811194:
  FUN_007ee578(param_1,piVar2);
  FUN_007e34a4(auStack_50);
  return;
}


