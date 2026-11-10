/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008146fc; name: FUN_008146fc
 */


void FUN_008146fc(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_007fc69c(param_2,param_3,param_4 & 1);
  if (*param_1 == 0) {
    FUN_00815508(param_3);
    uVar1 = FUN_007f0ee4();
    if ((uVar1 & 1) == 0) {
      local_30[0] = 0x6439;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
      FUN_007ee660(param_1,local_30);
    }
  }
  return;
}


