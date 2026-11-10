/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a401e0; name: FUN_02a401e0
 */


void FUN_02a401e0(ClockSnapshot *param_1)

{
  nn::time::ClockSnapshot::ClockSnapshot(param_1);
  nn::time::ClockSnapshot::CreateWithStandardSystemClock(param_1);
  return;
}


