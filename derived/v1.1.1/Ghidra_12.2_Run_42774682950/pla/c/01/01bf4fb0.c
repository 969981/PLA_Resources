/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf4fb0; name: FUN_01bf4fb0
 */


undefined4 FUN_01bf4fb0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_01a5badc(param_1,param_1 + 0xfb0);
  uVar2 = 1;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = (undefined4)(uVar1 >> 0x20);
  }
  return uVar2;
}


