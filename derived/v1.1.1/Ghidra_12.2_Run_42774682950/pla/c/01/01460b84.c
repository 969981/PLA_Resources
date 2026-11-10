/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01460b84; name: FUN_01460b84
 */


void FUN_01460b84(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = nn::os::GetSystemTick();
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 1;
  }
  return;
}


