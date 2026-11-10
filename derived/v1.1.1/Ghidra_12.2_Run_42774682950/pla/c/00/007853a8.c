/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007853a8; name: FUN_007853a8
 */


bool FUN_007853a8(undefined8 *param_1,long *param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  pMVar1 = (MutexType *)(param_1 + 0x14);
  *param_2 = 0;
  nn::os::LockMutex(pMVar1);
  plVar2 = param_1 + 3;
  if ((long *)param_1[4] != plVar2) {
    *param_2 = ((long *)param_1[4])[4];
    plVar5 = *(long **)(param_1[4] + 0x20);
    plVar4 = (long *)plVar5[1];
    lVar8 = *plVar4;
    *(long **)(*plVar5 + 8) = plVar4;
    *plVar4 = *plVar5;
    *(long **)(lVar8 + 8) = plVar5;
    *plVar5 = lVar8;
    plVar4 = (long *)param_1[4];
    if ((plVar4 != plVar2) && ((long *)plVar4[4] == plVar4 + 3)) {
      plVar5 = (long *)plVar4[1];
      lVar8 = *plVar5;
      *(long **)(*plVar4 + 8) = plVar5;
      *plVar5 = *plVar4;
      *(long **)(lVar8 + 8) = plVar4;
      *plVar4 = lVar8;
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,plVar4,0x28,8);
      plVar4 = (long *)param_1[4];
      if (plVar4 != plVar2) {
        plVar5 = (long *)plVar4[1];
        lVar8 = *plVar5;
        *(long **)(*plVar4 + 8) = plVar5;
        *plVar5 = *plVar4;
        *(long **)(lVar8 + 8) = plVar4;
        plVar6 = (long *)plVar4[4];
        plVar5 = plVar4 + 3;
        *plVar4 = lVar8;
        if (plVar5 != plVar6) {
          plVar3 = param_1 + 1;
          if (plVar6 != plVar5) goto LAB_007854dc;
          do {
            plVar7 = plVar5;
            while( true ) {
              lVar8 = *plVar6;
              *plVar6 = *plVar3;
              *(long **)(lVar8 + 8) = plVar3;
              *(long **)(*plVar3 + 8) = plVar6;
              *plVar3 = lVar8;
              if (plVar7 == plVar5) goto LAB_00785500;
              plVar6 = plVar7;
              if (plVar7 == plVar5) break;
LAB_007854dc:
              plVar7 = (long *)plVar6[1];
              lVar8 = *plVar7;
              *(long **)(*plVar6 + 8) = plVar7;
              *plVar7 = *plVar6;
              *(long **)(lVar8 + 8) = plVar6;
              *plVar6 = lVar8;
            }
          } while( true );
        }
LAB_00785500:
        nn::os::LockMutex(pMVar1);
        if ((((long *)param_1[4] == plVar2) && (*(char *)(param_1 + 0x22) == '\0')) &&
           ((undefined8 *)param_1[2] == param_1 + 1)) {
          nn::os::ClearEvent((EventType *)(param_1 + 5));
        }
        else {
          nn::os::SignalEvent((EventType *)(param_1 + 5));
        }
        nn::os::UnlockMutex(pMVar1);
        (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,plVar4,0x28,8);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return *param_2 != 0;
}


