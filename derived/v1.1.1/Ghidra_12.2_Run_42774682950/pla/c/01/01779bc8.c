/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01779bc8; name: FUN_01779bc8
 */


undefined8 FUN_01779bc8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0177a368(*(undefined8 *)(param_1 + 0x58));
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_0177cb38(*(undefined8 *)(param_1 + 0x60)), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


