/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008004c8; name: FUN_008004c8
 */


void FUN_008004c8(undefined8 param_1,long *param_2,long param_3,int param_4)

{
  ulong uVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_007e5f0c();
  if ((((uVar1 & 1) == 0) && ((param_4 < 3 || (*(char *)((long)param_2 + 100) == '\0')))) &&
     ((param_4 < 3 || (*(char *)((long)param_2 + 0x65) == '\0')))) {
    (**(code **)(*param_2 + 0x10))(param_2,0);
    param_2[0xb] = param_3;
    FUN_007e5bd8(param_3);
    FUN_007e5c2c(param_2[0xb]);
    *(int *)(param_2 + 0xc) = param_4;
    local_40[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    FUN_007ee660(param_2 + 0x10,local_40);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_40[0] = 0;
  }
  else {
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


