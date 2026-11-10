/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609040; name: FUN_00609040
 */


void FUN_00609040(void)

{
  ThreadType *pTVar1;
  
  pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
  nn::os::GetThreadId(pTVar1);
  return;
}


