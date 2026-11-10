/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b238a0; name: FUN_00b238a0
 */


undefined8 FUN_00b238a0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
    for (plVar1 = *(long **)(param_1 + 0xb0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if ((0 < *(int *)(plVar1[3] + 0x70)) &&
         ((((lVar2 = *(long *)(plVar1[3] + 0x68), *(char *)(lVar2 + 0xe0) == '\0' ||
            ((*(byte *)(lVar2 + 0xe1) & 1) == 0)) || (*(long *)(lVar2 + 0x70) == 0)) ||
          (*(char *)(*(long *)(lVar2 + 0x70) + 0x1e1) == '\0')))) {
        uVar3 = 0;
        goto LAB_00b23910;
      }
    }
    uVar3 = 1;
LAB_00b23910:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


