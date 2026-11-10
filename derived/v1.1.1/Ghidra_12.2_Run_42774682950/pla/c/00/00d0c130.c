/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0c130; name: FUN_00d0c130
 */


undefined8 FUN_00d0c130(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar1 = *(long **)(param_1 + 0xb0);
  do {
    if (plVar1 == (long *)0x0) {
      uVar3 = 1;
LAB_00d0c198:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
      return uVar3;
    }
    if ((0 < *(int *)(plVar1[3] + 0x70)) &&
       ((((lVar2 = *(long *)(plVar1[3] + 0x68), *(char *)(lVar2 + 0xe0) == '\0' ||
          ((*(byte *)(lVar2 + 0xe1) & 1) == 0)) || (*(long *)(lVar2 + 0x70) == 0)) ||
        (*(char *)(*(long *)(lVar2 + 0x70) + 0x1e1) == '\0')))) {
      uVar3 = 0;
      goto LAB_00d0c198;
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


