/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027610e4; name: FUN_027610e4
 */


void FUN_027610e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong local_50 [3];
  long *local_38;
  
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_38 = (long *)FUN_00612290();
  FUN_027625d0(local_50,param_2,param_3);
  FUN_02762668(param_1 + 0x78,local_50);
  if ((local_50[0] & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,local_50[2],local_50[0] & 0xfffffffffffffffe,1);
  }
  return;
}


