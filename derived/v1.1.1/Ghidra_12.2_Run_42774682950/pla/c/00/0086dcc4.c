/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086dcc4; name: FUN_0086dcc4
 */


void FUN_0086dcc4(int *param_1,short *param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [6];
  short local_38;
  
  local_50[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_50);
  sVar1 = *param_2;
  if (sVar1 != 0) {
    FUN_007e3400(local_50);
    local_70[0] = 0;
    local_60[0] = 0;
    local_38 = sVar1;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_60);
    FUN_007eb968(local_60,param_3,local_50,0,0);
    FUN_007ee660(local_70,local_60);
    FUN_007e34a4(local_50);
    FUN_007ee660(param_1,local_70);
    if (*param_1 == 0) {
      return;
    }
  }
  FUN_0086dba8(local_50,param_2,param_3);
  FUN_007ee660(param_1,local_50);
  return;
}


