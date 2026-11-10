/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5e70; name: FUN_007e5e70
 */


void FUN_007e5e70(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04377458;
  lVar3 = *(long *)PTR_DAT_04377458;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x68));
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 5;
    if ((param_2 & 1) == 0) {
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_007ecf14(param_1 + 0x10);
    FUN_007e89c8(*(undefined8 *)puVar1,param_1,param_2 & 1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x68));
  return;
}


