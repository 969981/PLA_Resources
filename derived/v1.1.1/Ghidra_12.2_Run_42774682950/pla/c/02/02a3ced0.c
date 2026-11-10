/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3ced0; name: FUN_02a3ced0
 */


void FUN_02a3ced0(long param_1,byte param_2)

{
  FUN_02a3a3f0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + (ulong)param_2 * 8 +
                0x120));
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x67,param_2);
  return;
}


