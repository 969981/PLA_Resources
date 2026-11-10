/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008350c8; name: FUN_008350c8
 */


void FUN_008350c8(int *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 local_40 [4];
  
  local_40[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_40);
  FUN_0083d340(local_40,*(undefined8 *)(param_2 + 0xd0),param_3 & 1,param_4,param_5);
  FUN_007ee660(param_1,local_40);
  if (*param_1 == 0) {
    FUN_007e5e70(*(undefined8 *)(param_2 + 0xd0),0);
  }
  return;
}


