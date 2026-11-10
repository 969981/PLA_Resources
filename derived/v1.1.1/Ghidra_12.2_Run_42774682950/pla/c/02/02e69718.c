/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69718; name: FUN_02e69718
 */


long * FUN_02e69718(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  
  plVar7 = *(long **)(param_1 + 0x278);
  if (plVar7 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)0x0;
  plVar1 = (long *)(param_1 + 0x278);
  if ((char)plVar7[0xd] != '\0') goto LAB_02e6977c;
  do {
    if (*(char *)((long)plVar7 + 0x65) == '\0') {
      nn::os::LockMutex((MutexType *)(plVar7 + 5));
      cVar2 = *(char *)((long)plVar7 + 0x6c);
      nn::os::UnlockMutex((MutexType *)(plVar7 + 5));
      if (cVar2 != '\0') {
        fVar9 = (float)(**(code **)(*plVar7 + 0x38))(plVar7);
        plVar4 = (long *)plVar7[2];
        if (plVar4 == (long *)0x0) {
LAB_02e69950:
          *param_2 = fVar9;
          return plVar7;
        }
        plVar5 = plVar7;
        if ((char)plVar4[0xd] != '\0') goto LAB_02e69838;
        break;
      }
    }
    plVar5 = (long *)plVar7[2];
    while( true ) {
      plVar4 = plVar7;
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar7 = plVar5;
      if ((char)plVar5[0xd] == '\0') break;
LAB_02e6977c:
      uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar5 = (long *)plVar7[2];
      if ((uVar3 & 1) != 0) {
        plVar6 = plVar1;
        if ((long *)*plVar1 != plVar7) {
          plVar6 = plVar4 + 2;
        }
        *plVar6 = (long)plVar5;
        (**(code **)*plVar7)(plVar7);
        (*DAT_0442d150)(7,plVar7);
        plVar7 = plVar4;
      }
    }
  } while( true );
LAB_02e69818:
  if (*(char *)((long)plVar4 + 0x65) == '\0') {
    nn::os::LockMutex((MutexType *)(plVar4 + 5));
    cVar2 = *(char *)((long)plVar4 + 0x6c);
    nn::os::UnlockMutex((MutexType *)(plVar4 + 5));
    if (cVar2 != '\0') {
      fVar10 = (float)(**(code **)(*plVar4 + 0x38))(plVar4);
      if (fVar10 == 0.0) {
        if ((0.0 < fVar9) || (*(char *)((long)plVar7 + 100) < *(char *)((long)plVar4 + 100)))
        goto LAB_02e69918;
        if (*(char *)((long)plVar4 + 100) == *(char *)((long)plVar7 + 100)) {
          if ((float)(*(long *)(param_1 + 0x270) - plVar7[9]) / DAT_0440a328 <
              (float)(*(long *)(param_1 + 0x270) - plVar4[9]) / DAT_0440a328) goto LAB_02e69918;
        }
      }
      else if (fVar10 < fVar9) {
LAB_02e69918:
        plVar7 = plVar4;
        fVar9 = fVar10;
      }
    }
  }
  plVar6 = plVar4;
  plVar8 = (long *)plVar4[2];
  while( true ) {
    plVar4 = plVar8;
    if (plVar4 == (long *)0x0) goto LAB_02e69950;
    plVar5 = plVar6;
    if ((char)plVar4[0xd] == '\0') break;
LAB_02e69838:
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    plVar8 = (long *)plVar4[2];
    plVar6 = plVar4;
    if ((uVar3 & 1) != 0) {
      plVar6 = plVar1;
      if ((long *)*plVar1 != plVar4) {
        plVar6 = plVar5 + 2;
      }
      *plVar6 = (long)plVar8;
      (**(code **)*plVar4)(plVar4);
      (*DAT_0442d150)(7,plVar4);
      plVar6 = plVar5;
    }
  }
  goto LAB_02e69818;
}


