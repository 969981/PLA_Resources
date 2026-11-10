/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783168; name: FUN_00783168
 */


void FUN_00783168(MultiWaitType *param_1)

{
  *(MultiWaitType **)(param_1 + 0x30) = param_1 + 0x30;
  *(MultiWaitType **)(param_1 + 0x38) = param_1 + 0x30;
  nn::os::InitializeMultiWait(param_1);
  return;
}


