/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03306e04; name: FUN_03306e04
 */


void FUN_03306e04(long *param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar4 = DAT_0444a230;
  if ((int)param_1[5] == 0) {
    uVar10 = param_2[1];
    pMVar1 = (MutexType *)(DAT_0444a230 + 0xc0);
    nn::os::LockMutex(pMVar1);
    iVar8 = FUN_032dec64(lVar4 + 0x38,uVar10);
    iVar5 = *(int *)(*(long *)(lVar4 + 0x38) + (long)iVar8 * 0x18 + 0x10);
    nn::os::UnlockMutex(pMVar1);
    if ((-1 < iVar8) && (iVar5 != 0)) {
      uVar10 = *param_2;
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_032e3508(lVar4);
        if ((uVar11 & 1) != 0) {
          piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      iVar8 = (int)param_1[1];
      iVar5 = iVar8 + 1;
      lVar9 = *param_1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar8) {
        lVar9 = FUN_03318194(PTR_PTR_0434a080,iVar5);
        iVar8 = (int)param_1[1];
        *param_1 = lVar9;
      }
      puVar3 = (undefined8 *)(lVar9 + (long)iVar8 * 0x20);
      *puVar3 = uVar10;
      puVar3[1] = lVar4;
      puVar3[2] = uVar11;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      *(int *)(param_1 + 1) = iVar5;
    }
  }
  return;
}


