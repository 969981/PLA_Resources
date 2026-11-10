/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00611128; name: FUN_00611128
 */


void FUN_00611128(long param_1,MultiWaitHolderType *param_2)

{
  nn::os::InitializeMultiWaitHolder(param_2,(EventType *)(param_1 + 0x10));
  return;
}


