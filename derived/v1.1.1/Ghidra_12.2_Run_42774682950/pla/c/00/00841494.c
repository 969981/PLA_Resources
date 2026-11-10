/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841494; name: FUN_00841494
 */


void FUN_00841494(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  (**(code **)(*param_2 + 0x78))(local_58);
  if (local_58[0] == 0) {
    if (param_3 == 0) {
      local_68[0] = 0x10407;
    }
    else {
      FUN_0084d628(local_68,param_2[0xe],param_3,param_4,param_5,param_6);
      FUN_007ee660(local_58,local_68);
      if (local_58[0] == 0) {
        uVar1 = FUN_0084f2ec(param_2[0xe]);
        FUN_007f1af0(param_2 + 2,uVar1);
        local_68[0] = 0;
      }
      else {
        local_68[0] = 0x10404;
        local_48[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
        if (local_58[0] == local_68[0]) {
          local_68[0] = 0x10404;
        }
        else {
          local_68[0] = 0x2c09;
        }
      }
    }
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
    piVar2 = local_68;
  }
  else {
    piVar2 = local_58;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


