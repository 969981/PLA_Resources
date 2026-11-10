/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00809f34; name: FUN_00809f34
 */


void FUN_00809f34(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04377928 + 0x10);
  puVar1 = PTR_DAT_043773c0;
  lVar2 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  if (lVar2 != 0) {
    lVar2 = FUN_008551bc(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_00808b5c();
    }
    lVar2 = FUN_008551bc(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_007ff6a0();
    }
  }
  puVar1 = PTR_DAT_04377910;
  (**(code **)(**(long **)PTR_DAT_04377910 + 0x18))();
  FUN_007f3f44(*(undefined8 *)puVar1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x248));
  FUN_0080f398(param_1);
  return;
}


