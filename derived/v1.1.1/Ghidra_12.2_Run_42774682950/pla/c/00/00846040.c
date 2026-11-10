/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00846040; name: FUN_00846040
 */


void FUN_00846040(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                 int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong local_70 [2];
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  puVar3 = local_70;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  uVar1 = (**(code **)(*param_5 + 0x48))(param_5);
  FUN_008438ac(local_60,param_2,param_3,uVar1 & 1);
  FUN_007ee660(local_50,local_60);
  if (local_50[0] == 0) {
    if (param_4 == 0) {
      local_60[0] = 0x10407;
    }
    else {
      if (*(long *)(param_2 + 0x40) == 0) {
        *(long *)(param_2 + 0x40) = param_4;
        *(long **)(param_2 + 0x7b8) = param_5;
        local_70[0] = 0;
        FUN_007ecf14(local_70);
        FUN_00821bd4(local_60,local_70[0] & 0xffffffff);
        uVar2 = FUN_00821c88(local_60);
        *(undefined8 *)(param_2 + 2000) = uVar2;
        if (param_6 == 0) {
          local_70[0] = CONCAT44(local_70[0]._4_4_,0x10407);
        }
        else {
          *(int *)(param_2 + 0x7c0) = param_6;
          memset((void *)(param_2 + 0x7c8),0,4);
          local_70[0] = local_70[0] & 0xffffffff00000000;
        }
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_38);
        goto LAB_00846184;
      }
      local_60[0] = 0x10408;
    }
    local_70[0] = local_70[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
    puVar3 = (ulong *)local_60;
  }
  else {
    puVar3 = (ulong *)local_50;
  }
LAB_00846184:
  FUN_007ee578(param_1,puVar3);
  return;
}


