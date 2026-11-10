/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00843b6c; name: FUN_00843b6c
 */


void FUN_00843b6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  int *piVar1;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  FUN_008438ac(local_60,param_2,param_3,*(undefined1 *)(param_6 + 0x38));
  FUN_007ee660(local_50,local_60);
  if (local_50[0] == 0) {
    if ((param_4 == 0) || (param_5 == 0)) {
      local_60[0] = 0x10407;
    }
    else if (*(long *)(param_2 + 0x48) == 0) {
      *(long *)(param_2 + 0x40) = param_6;
      *(long *)(param_2 + 0x48) = param_4;
      *(long *)(param_2 + 0xb8) = param_5;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      local_60[0] = 0;
    }
    else {
      local_60[0] = 0x10408;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
  }
  else {
    piVar1 = local_50;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


