/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e3f8c; name: FUN_032e3f8c
 */


undefined2 FUN_032e3f8c(long *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)*param_1;
  if ((uVar1 >> 0x11 & 1) == 0) {
    return 0;
  }
  uVar1 = (uVar1 & 0x1ffff) - (uVar1 >> 1 & 0x5555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return *(undefined2 *)
          (*param_1 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12);
}


