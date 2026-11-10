/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a7280; name: FUN_002a7280
 */


void FUN_002a7280(long param_1)

{
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04373328 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0xc0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xa0));
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),
               *(ulong *)(param_1 + 0x80) & 0xfffffffffffffffe,1);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_02767254(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a730c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
            (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
             *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffe,1);
  return;
}


