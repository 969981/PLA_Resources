/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dc190; name: FUN_032dc190
 */


undefined8 FUN_032dc190(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  long lVar2;
  undefined8 local_38;
  
  lVar2 = DAT_0444a230;
  pMVar1 = (MutexType *)(DAT_0444a230 + 0xc0);
  nn::os::LockMutex(pMVar1);
  local_38 = FUN_032dba70(lVar2 + 0x18,param_2);
  if (-1 < (int)local_38) {
    FUN_032dbd44(lVar2 + 0x18,&local_38,param_1,param_3);
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


