/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf9418; name: FUN_02bf9418
 */


void FUN_02bf9418(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x128));
  uVar4 = *(ulong *)(param_2 + 0x1d8);
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & param_3;
    }
    else {
      uVar7 = param_3;
      if (uVar4 <= param_3) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = param_3 / uVar4;
        }
        uVar7 = param_3 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(param_2 + 0x1d0) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == param_3) {
            if (plVar8[2] == param_3) goto LAB_02bf9544;
          }
          else if ((plVar8[1] & uVar4 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == param_3) {
            if (plVar8[2] == param_3) goto LAB_02bf9544;
          }
          else {
            if (uVar4 <= uVar6) {
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar3 * uVar4;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_02bf9530:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x128));
  return;
LAB_02bf9544:
  lVar5 = plVar8[3];
  *param_1 = lVar5;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0)) {
    plVar8 = (long *)(lVar5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  goto LAB_02bf9530;
}


