/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143c52c; name: FUN_0143c52c
 */


undefined4 FUN_0143c52c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1 * 0x100;
  if ((param_2 & 0xffffff) * 0x80 < uVar2) {
    return 0;
  }
  uVar3 = 2;
  if (uVar2 == 0) {
    uVar3 = 3;
  }
  uVar1 = 1;
  if (uVar2 <= (param_2 << 8) / 5) {
    uVar1 = uVar3;
  }
  return uVar1;
}


