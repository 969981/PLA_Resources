/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090db0; name: FUN_01090db0
 */


undefined8 FUN_01090db0(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  uVar1 = (param_1 & 0xffff) - 0x1e5;
  if (((6 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x4bU) == 0)) &&
     ((uVar1 = (param_1 & 0xffff) - 0x281, 4 < uVar1 || ((1 << (ulong)(uVar1 & 0x1f) & 0x13U) == 0))
     )) {
    uVar2 = 0;
  }
  return uVar2;
}


