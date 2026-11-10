/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338e1a8; name: FUN_0338e1a8
 */


void FUN_0338e1a8(int *param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_0338d0fc(&local_70,param_2,param_1,1);
  if (-1 < *param_1) {
    local_38 = uStack_68;
    uStack_30 = local_60;
    local_40 = local_70;
    local_28 = uStack_58;
    FUN_0338d2b4(param_1,&local_40,0,0,0);
  }
  if (local_50[1] < *local_50 + lStack_48) {
    FUN_033216d4();
  }
  else {
    *local_50 = *local_50 + lStack_48;
  }
  return;
}


