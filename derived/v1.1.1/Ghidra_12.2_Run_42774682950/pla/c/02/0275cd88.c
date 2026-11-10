/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275cd88; name: FUN_0275cd88
 */


void FUN_0275cd88(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_28 [8];
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    FUN_0275ce70(param_1,*(long *)(param_1 + 0x20) + uVar1 * 8);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  else {
    local_18 = *(long *)(param_1 + 0x20) + uVar1 * 8;
    FUN_0275cdf8(auStack_28,param_1,&local_18,param_2);
  }
  return;
}


