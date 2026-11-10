/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ac6620; name: FUN_01ac6620
 */


undefined8 FUN_01ac6620(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ulong *)(param_1 + 0x248);
  if ((((((*(ulong *)(param_1 + 0x248) & 1) == 0) || ((*(byte *)(param_1 + 0x228) & 3) != 0)) &&
       (((uVar1 >> 1 & 1) == 0 || ((*(byte *)(param_1 + 0x230) & 3) != 0)))) &&
      (((uVar1 >> 2 & 1) == 0 || ((*(byte *)(param_1 + 0x238) & 3) != 0)))) &&
     (((uVar1 >> 3 & 1) == 0 || ((*(byte *)(param_1 + 0x240) & 3) != 0)))) {
    return 0;
  }
  return 1;
}


