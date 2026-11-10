/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f562c; name: FUN_007f562c
 */


void FUN_007f562c(undefined8 param_1,long *param_2)

{
  int *piVar1;
  ErrorResultVariant *this;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  if (*(char *)((long)param_2 + 0x114c) == '\0') {
    (**(code **)(*param_2 + 0x220))(local_40);
    if (local_40[0] == 0) {
      FUN_007ff1f8(local_50,param_2[0x22b]);
      FUN_007ee660(local_40,local_50);
      if (local_40[0] == 0) {
        FUN_007e5e70(param_2[0x22b],0);
        FUN_00805a4c(local_50,param_2[0x31]);
        FUN_007ee660(local_40,local_50);
        if (local_40[0] == 0) {
          FUN_007e5e70(param_2[0x31],0);
          FUN_00805a4c(local_50,param_2[0x32]);
          FUN_007ee660(local_40,local_50);
          if (local_40[0] == 0) {
            FUN_007e5e70(param_2[0x32],0);
            *(char *)((long)param_2 + 0x114c) = '\x01';
            this = (ErrorResultVariant *)((ulong)local_50 | 4);
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
            FUN_007ee660(param_2 + 0x33,local_50);
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
            FUN_007ee660(param_2 + 0x35,local_50);
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
            goto LAB_007f5710;
          }
        }
      }
    }
  }
  else {
    local_40[0] = 0x10402;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  piVar1 = local_40;
LAB_007f5710:
  FUN_007ee578(param_1,piVar1);
  return;
}


