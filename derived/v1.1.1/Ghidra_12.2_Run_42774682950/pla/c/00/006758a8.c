/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006758a8; name: FUN_006758a8
 */


void FUN_006758a8(undefined8 param_1)

{
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  local_18 = (long *)FUN_00612290();
  local_30 = CONCAT26(local_30._6_2_,0x73675f5f08);
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (long *)FUN_00612290();
  local_50 = CONCAT53(local_50._3_5_,0x6602);
  FUN_0067d580(param_1,&local_30,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
  }
  if ((local_30 & 1) == 0) {
    return;
  }
  (**(code **)(*local_18 + 0x18))(local_18,local_20,local_30 & 0xfffffffffffffffe,1);
  return;
}


