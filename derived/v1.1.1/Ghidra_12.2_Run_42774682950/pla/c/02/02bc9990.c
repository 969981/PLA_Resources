/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc9990; name: FUN_02bc9990
 */


undefined8 FUN_02bc9990(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  
  nn::os::LockMutex((MutexType *)&DAT_043f1110);
  plVar8 = *(long **)(param_1 + 0x170);
  plVar2 = plVar8 + *(long *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x178) != 0) {
    lVar10 = *plVar8;
    if (lVar10 != 0) goto LAB_02bc99e0;
    do {
      do {
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar2) goto LAB_02bc9a04;
        lVar10 = *plVar8;
      } while (lVar10 == 0);
LAB_02bc99e0:
    } while (*(int *)(lVar10 + 0x68) != *param_2);
  }
  if ((plVar8 == plVar2) || (uVar6 = nn::hid::VibrationPlayer::IsPlaying(), (uVar6 & 1) != 0)) {
LAB_02bc9a04:
    uVar11 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x170);
    lVar9 = *(long *)(param_1 + 0x178);
    plVar2 = (long *)(lVar10 + lVar9 * 8);
    plVar12 = plVar8 + 1;
    if (plVar8 + 1 != plVar2) {
      do {
        plVar7 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar7 != (long *)0x0) {
          lVar10 = plVar7[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
        lVar10 = *plVar12;
        plVar7 = plVar12 + 1;
        *plVar12 = 0;
        *plVar8 = lVar10;
        plVar12 = plVar7;
        plVar8 = plVar8 + 1;
      } while (plVar7 != plVar2);
      lVar10 = *(long *)(param_1 + 0x170);
      lVar9 = *(long *)(param_1 + 0x178);
    }
    plVar8 = *(long **)(lVar10 + lVar9 * 8 + -8);
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + -1;
    uVar11 = 1;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_043f1110);
  return uVar11;
}


