/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e02dc; name: FUN_001e02dc
 */


undefined8 FUN_001e02dc(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = (param_2 & 0xf00000) - 0x100000 >> 0x14;
    if (uVar1 < 6) {
                    /* WARNING: Jumptable with 0 entries at 0x001e0364 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK_001e0368 + (ulong)(byte)(&DAT_039c7070)[uVar1] * 4))();
      return uVar2;
    }
  }
  return 0x30;
}


