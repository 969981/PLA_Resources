/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332b928; name: FUN_0332b928
 */


void FUN_0332b928(SemaphoreType *param_1,int param_2,int param_3)

{
  if ((param_3 < 1) || (param_3 < param_2)) {
    CallSupervisor(0x26);
    return;
  }
  nn::os::InitializeSemaphore(param_1,param_2,param_3);
  return;
}


