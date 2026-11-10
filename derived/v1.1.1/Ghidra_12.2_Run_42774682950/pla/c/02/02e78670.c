/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e78670; name: FUN_02e78670
 */


undefined8 FUN_02e78670(int param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if ((param_2 == 0 && param_1 == 0) && (DAT_0440a30c == '\x01')) {
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    lVar1 = FUN_02eca254(0);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
    }
    nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  }
  return uVar2;
}


