/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e40e64; name: FUN_02e40e64
 */


void FUN_02e40e64(void)

{
  long lVar1;
  
  lVar1 = DAT_04409ad0;
  if (DAT_04409ad0 != 0) {
    nn::os::FinalizeMutex((MutexType *)(DAT_04409ad0 + 0x28));
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      (*DAT_0442d150)(9);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
    }
    (*DAT_0442d150)(9,DAT_04409ad0);
    DAT_04409ad0 = 0;
  }
  return;
}


