/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd388; name: FUN_032bd388
 */


void FUN_032bd388(undefined8 param_1,int param_2)

{
  int local_2c;
  undefined8 local_28;
  undefined *local_20;
  int *piStack_18;
  
  if (0x3fffffff < param_2) {
    local_28 = 1;
    piStack_18 = &local_2c;
    local_20 = &DAT_0411b3b8;
    local_2c = param_2;
    FUN_03320b50(0x159079fc,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x80,"Invalid requestedCapacity {}",&local_28);
  }
  return;
}


