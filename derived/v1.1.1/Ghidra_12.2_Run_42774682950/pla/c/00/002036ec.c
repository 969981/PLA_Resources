/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002036ec; name: FUN_002036ec
 */


undefined * FUN_002036ec(void)

{
  uint uVar1;
  
  if ((DAT_0438ebd5 & 1) == 0) {
    thunk_FUN_00204608(&DAT_0438ebd6,0x50);
    DAT_0411d5c8 = &DAT_0438ebd6;
    uVar1 = DAT_0411d5c0 | 0x200000;
    DAT_0411d5c0 = DAT_0411d5c0 & 0xffdfffff;
    if ((*(uint *)(*(long *)PTR_PTR_04372758 + 0x10) & 0x10) != 0) {
      DAT_0411d5c0 = uVar1;
    }
    DAT_0411d5d8 = FUN_00216400();
    DAT_0438ebd5 = 1;
  }
  return &DAT_0411d5a0;
}


