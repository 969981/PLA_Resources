/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12920; name: FUN_00d12920
 */


void FUN_00d12920(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) - 0x41;
  if (uVar1 < 0x112) {
                    /* WARNING: Could not recover jumptable at 0x00d12948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00d1294c + (ulong)(byte)(&DAT_03a77fa0)[uVar1] * 4))(0);
    return;
  }
  return;
}


