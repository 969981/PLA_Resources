/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008014f4; name: FUN_008014f4
 */


void FUN_008014f4(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined8 local_48;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10407;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)&local_48);
    piVar1 = local_38;
  }
  else {
    FUN_008004c8(local_38,param_2,param_3,8);
    if (local_38[0] == 0) {
      local_48 = 0;
      FUN_007ecf14(&local_48);
      *(undefined4 *)(param_2 + 200) = 9;
      *(ulong *)(param_2 + 0xc0) = local_48;
      local_48 = local_48 & 0xffffffff00000000;
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,0x10408);
    }
    piVar1 = (int *)&local_48;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)piVar1 | 4),(Result *)local_28);
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


