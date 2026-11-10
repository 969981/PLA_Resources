/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338de94; name: FUN_0338de94
 */


void FUN_0338de94(int *param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong *local_30;
  long lStack_28;
  
  FUN_0338d0fc(&local_50,param_2,param_1,1);
  if (-1 < *param_1) {
    local_70 = local_50;
    local_68 = uStack_48;
    uStack_60 = local_40;
    local_58 = uStack_38;
    FUN_0337ce2c(param_1,&local_70,0,0);
  }
  if (local_30[1] < *local_30 + lStack_28) {
    FUN_033216d4();
  }
  else {
    *local_30 = *local_30 + lStack_28;
  }
  return;
}


