/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00282fe0; name: FUN_00282fe0
 */


void FUN_00282fe0(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + (long)param_2 * 8 + 0xb0);
  if (lVar6 == 0) {
LAB_00283098:
    lVar6 = *(long *)(param_1 + (long)param_2 * 8 + 0x4b0);
    if (lVar6 == 0) {
      return;
    }
    lVar5 = *(long *)(lVar6 + 0x1d0);
    if (*(char *)(lVar6 + 0xc) != '\0') goto LAB_002830e0;
    do {
      FUN_00271770("EmitterSet has been already deleted.\n");
      *(undefined1 *)(lVar6 + 0xf) = 0;
      lVar6 = lVar5;
      while( true ) {
        if (lVar6 == 0) {
          return;
        }
        lVar5 = *(long *)(lVar6 + 0x1d0);
        if (*(char *)(lVar6 + 0xc) == '\0') break;
LAB_002830e0:
        nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
        iVar2 = *(int *)(param_1 + 0x8b8);
        plVar3 = *(long **)(param_1 + 0x8b0);
        lVar4 = (long)iVar2;
        if (0 < iVar2) {
          do {
            if (*plVar3 == lVar6) goto LAB_00283128;
            lVar4 = lVar4 + -1;
            plVar3 = plVar3 + 1;
          } while (lVar4 != 0);
        }
        (*(long **)(param_1 + 0x8b0))[iVar2] = lVar6;
        *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_00283128:
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
        *(undefined1 *)(lVar6 + 0xf) = 0;
        lVar6 = lVar5;
      }
    } while( true );
  }
  cVar1 = *(char *)(lVar6 + 0xc);
  lVar5 = *(long *)(lVar6 + 0x1d0);
  do {
    if (cVar1 == '\0') {
      FUN_00271770("EmitterSet has been already deleted.\n");
    }
    else {
      nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
      iVar2 = *(int *)(param_1 + 0x8b8);
      plVar3 = *(long **)(param_1 + 0x8b0);
      lVar4 = (long)iVar2;
      if (0 < iVar2) {
        do {
          if (*plVar3 == lVar6) goto LAB_00283088;
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 1;
        } while (lVar4 != 0);
      }
      (*(long **)(param_1 + 0x8b0))[iVar2] = lVar6;
      *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_00283088:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
    }
    if (lVar5 == 0) goto LAB_00283098;
    cVar1 = *(char *)(lVar5 + 0xc);
    lVar6 = lVar5;
    lVar5 = *(long *)(lVar5 + 0x1d0);
  } while( true );
}


