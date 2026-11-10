/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877904; name: FUN_00877904
 */


void FUN_00877904(long param_1,long param_2)

{
  (**(code **)PTR_DAT_04378568)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00877954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378570)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 4),
             *(undefined8 *)(param_2 + 0x10));
  return;
}


