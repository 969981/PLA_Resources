/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800e0c; name: FUN_00800e0c
 */


void FUN_00800e0c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_50;
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = (int *)&local_50;
  if ((param_3 == 0) || (param_4 == 0)) {
LAB_00800e68:
    local_40[0] = 0x10407;
  }
  else {
    if (*(int *)(*(long *)(param_2 + 0x78) + 0x1c0) == 0) {
      uVar1 = FUN_007f29a8(param_4);
      uVar2 = (**(code **)(**(long **)(param_2 + 0x78) + 0xf0))();
      if (uVar1 <= uVar2) {
        FUN_008004c8(local_40,param_2,param_3,8);
        if (local_40[0] == 0) {
          local_50 = 0;
          FUN_007ecf14(&local_50);
          *(undefined4 *)(param_2 + 200) = 6;
          *(ulong *)(param_2 + 0xc0) = local_50;
          local_50 = local_50 & 0xffffffff00000000;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,0x10408);
        }
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_28);
        goto LAB_00800e90;
      }
      goto LAB_00800e68;
    }
    local_40[0] = 0x4c11;
  }
  local_50 = (ulong)local_50._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)&local_50);
  piVar3 = local_40;
LAB_00800e90:
  FUN_007ee578(param_1,piVar3);
  return;
}


