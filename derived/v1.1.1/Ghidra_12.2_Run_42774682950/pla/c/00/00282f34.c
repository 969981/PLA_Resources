/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00282f34; name: FUN_00282f34
 */


undefined8
FUN_00282f34(long param_1,long *param_2,int param_3,int param_4,int param_5,undefined8 param_6,
            uint param_7)

{
  long lVar1;
  MutexType *pMVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(char *)(lVar7 + 9) == '\0') {
    return 0;
  }
  if ((param_3 < *(int *)(lVar7 + 0x4c)) &&
     ((piVar9 = *(int **)(*(long *)(lVar7 + 0x60) + (long)param_3 * 8), piVar9 != (int *)0x0 ||
      (piVar9 = (int *)(*(long *)(lVar7 + 0x58) + (long)param_3 * 0x38), piVar9 != (int *)0x0)))) {
    if (*piVar9 <= *(int *)(param_1 + 0x80)) {
LAB_00282d74:
      iVar8 = 0;
      lVar7 = *(long *)(param_1 + 0xa0);
      iVar6 = *(int *)(param_1 + 0x74);
      do {
        iVar3 = 0;
        if (iVar6 + 1 < *(int *)(param_1 + 0x6c)) {
          iVar3 = iVar6 + 1;
        }
        *(int *)(param_1 + 0x74) = iVar3;
        if (*(char *)(lVar7 + (long)iVar3 * 0x270 + 0xc) == '\0') {
          lVar12 = (long)iVar3;
          lVar11 = lVar7 + lVar12 * 0x270;
          if (lVar11 != 0) {
            *param_2 = lVar11;
            iVar8 = *(int *)(param_1 + 0x7c);
            *(int *)(param_1 + 0x7c) = iVar8 + 1;
            *(int *)(param_2 + 1) = iVar8;
            uVar4 = FUN_002655dc(lVar11,param_3,iVar8,param_4,param_5,0,param_6);
            if ((uVar4 & 1) == 0) {
              FUN_00265dd8(lVar11);
              return 0;
            }
            if ((param_7 & 1) == 0) {
              plVar10 = (long *)(param_1 + (long)param_5 * 8 + 0xb0);
              if (*plVar10 == 0) {
                *plVar10 = lVar11;
                *(undefined8 *)(lVar7 + lVar12 * 0x270 + 0x1d8) = 0;
              }
              else {
                lVar1 = param_1 + (long)param_5 * 8;
                *(long *)(*(long *)(lVar1 + 0x2b0) + 0x1d0) = lVar11;
                *(undefined8 *)(lVar7 + lVar12 * 0x270 + 0x1d8) = *(undefined8 *)(lVar1 + 0x2b0);
              }
              *(undefined8 *)(lVar7 + lVar12 * 0x270 + 0x1d0) = 0;
              *(long *)(param_1 + (long)param_5 * 8 + 0x2b0) = lVar11;
              return 1;
            }
            pMVar2 = (MutexType *)(param_1 + 0x16e0);
            nn::os::LockMutex(pMVar2);
            nn::os::LockMutex(pMVar2);
            lVar1 = param_1 + (long)param_5 * 8;
            if (*(long *)(lVar1 + 0x4b0) == 0) {
              *(long *)(lVar1 + 0x4b0) = lVar11;
              *(undefined8 *)(lVar7 + lVar12 * 0x270 + 0x1d8) = 0;
            }
            else {
              lVar1 = param_1 + (long)param_5 * 8;
              *(long *)(*(long *)(lVar1 + 0x6b0) + 0x1d0) = lVar11;
              *(undefined8 *)(lVar7 + lVar12 * 0x270 + 0x1d8) = *(undefined8 *)(lVar1 + 0x6b0);
            }
            lVar7 = lVar7 + lVar12 * 0x270;
            *(undefined8 *)(lVar7 + 0x1d0) = 0;
            *(long *)(param_1 + (long)param_5 * 8 + 0x6b0) = lVar11;
            nn::os::UnlockMutex(pMVar2);
            nn::os::UnlockMutex(pMVar2);
            *(undefined1 *)(lVar7 + 0xf) = 1;
            return 1;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar3;
      } while (iVar8 < *(int *)(param_1 + 0x6c));
      pcVar5 = "There is no available EmitterSet instance.\n";
      goto LAB_00282e6c;
    }
  }
  else if (-1 < *(int *)(param_1 + 0x80)) goto LAB_00282d74;
  *param_2 = 0;
  pcVar5 = "There is no available Emitter instance.\n";
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
LAB_00282e6c:
  FUN_00271770(pcVar5);
  return 0;
}


