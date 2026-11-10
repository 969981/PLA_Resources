/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7a00; name: FUN_005a7a00
 */


undefined4 FUN_005a7a00(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar3 = 6;
  }
  uVar2 = (uint)param_1;
  uVar1 = 4;
  if (0x1fffff < uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 3;
  if (0x3fff < uVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 2;
  if (0x7f < uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}


