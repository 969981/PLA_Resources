/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951c48; name: FUN_02951c48
 */


undefined1 FUN_02951c48(long param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (param_2 < 8) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & 0xe0) == 0) {
      if ((uVar1 & 10) != 0) {
        return *(undefined1 *)(param_1 + 0x2e7);
      }
      if ((1 << (ulong)(param_2 & 0x1f) & 0x14U) != 0) {
        return *(undefined1 *)(param_1 + 0x2e8);
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_1 + 0x2e9);
    }
  }
  return uVar2;
}


