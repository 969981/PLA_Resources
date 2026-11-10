/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01460bc4; name: FUN_01460bc4
 */


void FUN_01460bc4(long param_1)

{
  long lVar1;
  
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffff8;
    lVar1 = nn::os::GetSystemTick();
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(long *)(param_1 + 0x20) = lVar1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar1;
  }
  return;
}


