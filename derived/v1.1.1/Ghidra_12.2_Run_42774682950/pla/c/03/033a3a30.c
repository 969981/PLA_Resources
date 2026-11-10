/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3a30; name: GetCurrentTime
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void nn::time::StandardUserSystemClock::GetCurrentTime(PosixTime *param_1)

{
  (*(code *)PTR_GetCurrentTime_043713e0)();
  return;
}


