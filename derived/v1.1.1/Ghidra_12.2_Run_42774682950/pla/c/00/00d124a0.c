/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d124a0; name: FUN_00d124a0
 */


uint FUN_00d124a0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int local_64 [16];
  uint local_24;
  
  local_24 = 0;
  iVar1 = (**(code **)(*DAT_043ab4f0 + 0x28))(DAT_043ab4f0,local_64,0xffff,param_1,1);
  if (iVar1 == 0) {
    uVar2 = (uint)(local_64[0] != 0);
    local_24 = (uint)(local_64[0] != 0);
    if ((local_64[0] != 0) && ((param_2 & 1) != 0)) {
      FUN_00d12530(&local_24,param_1);
      uVar2 = local_24;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


