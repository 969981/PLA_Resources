/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dba50; name: FUN_032dba50
 */


void FUN_032dba50(long *param_1)

{
  long lVar1;
  
  lVar1 = DAT_0444a230;
  *param_1 = DAT_0444a230;
  nn::os::LockMutex((MutexType *)(lVar1 + 0xc0));
  return;
}


