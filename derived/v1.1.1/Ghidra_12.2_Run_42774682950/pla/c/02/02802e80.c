/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02802e80; name: FUN_02802e80
 */


void FUN_02802e80(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_28 [8];
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    FUN_02802fac(param_1,*(long *)(param_1 + 0x20) + uVar1 * 8);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  else {
    local_18 = *(long *)(param_1 + 0x20) + uVar1 * 8;
    FUN_02802ef0(auStack_28,param_1,&local_18,param_2);
  }
  return;
}


