/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081516c; name: FUN_0081516c
 */


void FUN_0081516c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ErrorResultVariant *this;
  int *piVar2;
  int local_90 [4];
  int local_80 [8];
  int local_60 [4];
  undefined1 auStack_50 [32];
  undefined4 local_28;
  undefined1 local_24 [4];
  
  piVar2 = local_90;
  FUN_007e3400(auStack_50);
  local_24[0] = 0;
  local_60[0] = 0;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
  FUN_007ebd7c(local_80,param_3,param_4 + 0x30,0x5c0,auStack_50,local_24,param_4 + 0x5f8);
  FUN_007ee660(local_60,local_80);
  if (local_60[0] == 0) {
    uVar1 = FUN_007e4430(auStack_50);
    if (((((uVar1 & 1) != 0) && (uVar1 = FUN_007e45a8(param_2 + 0x88,auStack_50), (uVar1 & 1) == 0))
        && (uVar1 = FUN_007e45a8(param_2 + 0xa8,auStack_50), (uVar1 & 1) == 0)) &&
       ((uVar1 = FUN_007e45a8(param_2 + 200,auStack_50), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_007e45a8(param_2 + 0xe8,auStack_50), (uVar1 & 1) == 0)))) {
      FUN_007f0ce0(local_80);
      FUN_007f105c(local_80,auStack_50);
      FUN_007fa32c(*(undefined8 *)(param_2 + 0x58),local_80);
      FUN_007f0f88(param_4 + 0x628,local_80);
      *(undefined1 *)(param_4 + 0x620) = local_24[0];
      FUN_007f0508(local_90,param_4);
      FUN_007ee660(local_60,local_90);
      if (local_60[0] == 0) {
        local_90[0] = 0;
      }
      else {
        local_90[0] = 0x2c09;
      }
      local_28 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_28);
      goto LAB_008152f8;
    }
    local_80[0] = 0x2c09;
LAB_008152a0:
    this = (ErrorResultVariant *)((ulong)local_80 | 4);
  }
  else {
    if (*(char *)(param_2 + 0x10) != '\0') {
      local_80[0] = 0x10407;
      local_90[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
      if (local_60[0] != local_80[0]) {
        local_80[0] = 0x2c18;
        local_90[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
        if (local_60[0] == local_80[0]) {
          local_80[0] = 0xc406;
          goto LAB_008152a0;
        }
      }
      piVar2 = local_60;
      goto LAB_008152f8;
    }
    this = (ErrorResultVariant *)((ulong)local_80 | 4);
    local_80[0] = 0x2c09;
    local_90[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_90);
    local_80[0] = 0x2c09;
  }
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_90);
  piVar2 = local_80;
LAB_008152f8:
  FUN_007ee578(param_1,piVar2);
  FUN_007e34a4(auStack_50);
  return;
}


