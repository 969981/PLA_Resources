/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d85f8; name: FUN_031d85f8
 */


void FUN_031d85f8(long param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_30 [2];
  int local_28 [2];
  undefined4 local_20 [2];
  int local_18 [2];
  
  local_28[0] = *param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)local_28[0] * 0x10;
  if ((int)*(short *)(lVar1 + 10) + (int)*(short *)(lVar1 + 8) < 0x17) {
    local_20[0] = *param_3;
    local_18[0] = local_28[0];
    FUN_031d92a4(param_1,param_1 + 0x10,local_18,local_20);
  }
  else {
    local_30[0] = *param_3;
    FUN_031d943c(param_1,param_1 + 0x30,local_28,local_30,param_4);
  }
  return;
}


