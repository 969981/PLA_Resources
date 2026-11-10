/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2adc4; name: FUN_02c2adc4
 */


void FUN_02c2adc4(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x200));
  lVar2 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    pcVar1 = *(code **)(lVar2 + 0x68);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      (*pcVar1)(lVar2 + 0x80);
    }
    *(undefined1 **)(lVar2 + 0x60) = &LAB_02c18620;
    *(undefined1 **)(lVar2 + 0x68) = &LAB_02c18628;
    *(undefined1 **)(lVar2 + 0x70) = &LAB_02c1862c;
    *(undefined1 **)(lVar2 + 0x78) = &LAB_02c18630;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x200));
  return;
}


