/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee890; name: FUN_001ee890
 */


void FUN_001ee890(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x30) == 0) {
    FUN_001f3ae0(*param_1,
                 "Error while processing content unencoding: Unknown failure within decompression software."
                );
    return;
  }
  FUN_001f3ae0(*param_1,"Error while processing content unencoding: %s");
  return;
}


