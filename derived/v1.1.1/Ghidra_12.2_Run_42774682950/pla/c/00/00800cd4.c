/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800cd4; name: FUN_00800cd4
 */


void FUN_00800cd4(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5,int param_6
                 ,long param_7)

{
  uint uVar1;
  int *piVar2;
  undefined8 local_60;
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar2 = (int *)&local_60;
  if (((param_3 == 0) || (param_4 == 0)) || (param_7 == 0)) {
LAB_00800d68:
    local_50[0] = 0x10407;
  }
  else {
    if (*(int *)(*(long *)(param_2 + 0x78) + 0x1c0) == 0) {
      if ((param_6 != 0) && (uVar1 = FUN_0083385c(param_7), param_5 < (uVar1 & 0xffff))) {
        FUN_008004c8(local_50,param_2,param_3,7);
        if (local_50[0] == 0) {
          *(uint *)(param_2 + 0x98) = param_5;
          *(int *)(param_2 + 0x9c) = param_6;
          *(long *)(param_2 + 0x90) = param_7;
          local_60 = 0;
          FUN_007ecf14(&local_60);
          *(undefined4 *)(param_2 + 200) = 2;
          *(undefined8 *)(param_2 + 0x30) = 0x108;
          *(undefined8 *)(param_2 + 0x38) = 1;
          *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartSearchNetwork";
          *(ulong *)(param_2 + 0xc0) = local_60;
          local_60 = local_60 & 0xffffffff00000000;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,0x10408);
        }
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
        goto LAB_00800d90;
      }
      goto LAB_00800d68;
    }
    local_50[0] = 0x4c11;
  }
  local_60 = (ulong)local_60._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  piVar2 = local_50;
LAB_00800d90:
  FUN_007ee578(param_1,piVar2);
  return;
}


