/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e85d8; name: FUN_007e85d8
 */


void FUN_007e85d8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04377458;
  if (*(long *)PTR_DAT_04377458 != 0) {
    FUN_007e4d58();
    lVar3 = *(long *)puVar1;
    lVar2 = *(long *)(lVar3 + 0x88);
    if (lVar2 != 0) {
      FUN_007e8df4(lVar2);
      FUN_0081a800(lVar2);
    }
    nn::os::FinalizeMutex((MutexType *)(lVar3 + 0x68));
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_043774a0;
  lVar2 = *(long *)PTR_DAT_043774a0;
  if (lVar2 != 0) {
    FUN_0081a840(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


