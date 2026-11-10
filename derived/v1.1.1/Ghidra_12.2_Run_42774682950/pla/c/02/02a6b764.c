/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6b764; name: FUN_02a6b764
 */


void FUN_02a6b764(long param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar3 = *(uint *)(param_2 + 0x380);
  if (uVar3 == 0 || (uVar3 & 1 << (ulong)(uVar2 & 0x1f)) != 0) {
    uVar6 = FUN_02a6d064(*(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x18));
    if (((uVar6 & 1) != 0) && (iVar7 = *(int *)(param_1 + 0x200), 0 < iVar7)) {
      uVar6 = 0;
      do {
        if (uVar6 != *(uint *)(param_3 + 0xc)) {
          lVar8 = *(long *)(param_1 + uVar6 * 8 + 0x18);
          piVar1 = (int *)(lVar8 + 0x5e4);
          if (*piVar1 != 2) {
            if (*piVar1 == 0) {
              do {
                if (*piVar1 != 0) {
                  ClearExclusiveLocal();
                  goto LAB_02a6b824;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 2;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            else {
LAB_02a6b824:
              nn::os::LockMutex((MutexType *)(lVar8 + 0x560));
              nn::os::ClearEvent((EventType *)(*(long *)(lVar8 + 0x5c0) + 0x68));
              nn::os::SignalConditionVariable((ConditionVariableType *)(lVar8 + 0x5b8));
              nn::os::UnlockMutex((MutexType *)(lVar8 + 0x560));
            }
          }
          iVar7 = *(int *)(param_1 + 0x200);
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)iVar7);
    }
  }
  else if (0 < (int)*(uint *)(param_1 + 0x200)) {
    lVar8 = 0;
    if (uVar2 != 0) goto LAB_02a6b7f8;
    while( true ) {
      lVar8 = lVar8 + 1;
      if (*(uint *)(param_1 + 0x200) == (uint)lVar8) break;
      if (uVar2 != (uint)lVar8) {
LAB_02a6b7f8:
        if ((1 << (ulong)((uint)lVar8 & 0x1f) & uVar3) != 0) {
          FUN_02a6d064(*(undefined8 *)(param_1 + lVar8 * 8 + 0x18));
          return;
        }
      }
    }
  }
  return;
}


