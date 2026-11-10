/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dee08; name: FUN_001dee08
 */


void FUN_001dee08(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x420) + 0x84);
      if ((uVar1 >> 9 & 1) != 0) {
        return;
      }
      uVar1 = (uVar1 >> 9 ^ 0xffffffff) & 1;
    }
    else {
      uVar1 = 0;
    }
  }
  if (uVar1 != (*(uint *)(param_1 + 0x3fc) & 1)) {
    *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) & 0xfffffffe | uVar1;
  }
  return;
}


