/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00298d10; name: FUN_00298d10
 */


void FUN_00298d10(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00298d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
            (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
             *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe,1);
  return;
}


