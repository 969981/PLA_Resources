/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b7a44; name: FUN_032b7a44
 */


void FUN_032b7a44(long *param_1,undefined8 *param_2,int param_3)

{
  long local_40;
  long lStack_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  lStack_38 = 0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_40);
  if ((param_3 < 0) || ((int)local_30 <= param_3)) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = local_40 + (long)local_30._4_4_ * (long)param_3;
    param_1[1] = lStack_38;
    param_1[2] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_032e0c28(local_28 & 0xfffffffffffffffe);
    }
  }
  if ((local_28 & 1) != 0) {
    FUN_032e0c40(local_28 & 0xfffffffffffffffe);
  }
  return;
}


