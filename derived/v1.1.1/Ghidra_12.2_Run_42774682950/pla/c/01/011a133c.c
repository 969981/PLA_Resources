/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a133c; name: FUN_011a133c
 */


void FUN_011a133c(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 local_28;
  
  uVar1 = *(undefined4 *)(param_1 + 0x6d8);
  local_28 = 0;
  FUN_00d51c38(param_1,(long)&local_28 + 4,&local_28,uVar1);
  if (param_2 == -1) {
    param_2 = local_28._4_4_;
  }
  else {
    local_28 = CONCAT44(param_2,(undefined4)local_28);
  }
  FUN_00d52f90(param_1,param_2,local_28 & 0xffffffff,uVar1,1);
  FUN_00d42438(param_1,1,1);
  FUN_00d428b0(param_1,0);
  return;
}


