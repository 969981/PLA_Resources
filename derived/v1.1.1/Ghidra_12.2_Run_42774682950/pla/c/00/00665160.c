/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00665160; name: FUN_00665160
 */


undefined8 FUN_00665160(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x128);
  bVar1 = FUN_002937d4(param_1 + 200);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x38));
  *(byte *)(lVar2 + 0x58) = bVar1 & 1;
  *(undefined1 *)(lVar2 + 0x59) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x38));
  return 1;
}


