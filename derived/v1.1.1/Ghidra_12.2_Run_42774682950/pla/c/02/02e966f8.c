/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e966f8; name: FUN_02e966f8
 */


undefined1  [16] FUN_02e966f8(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar5 = *(uint *)(param_1 + 0x98);
  if (uVar5 != 0) {
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = param_2 / uVar5;
    }
    for (plVar4 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)(param_2 - uVar3 * uVar5) * 8);
        plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (*(uint *)(plVar4 + 1) == param_2) {
        iVar7 = *(int *)(plVar4 + 6) + 1;
        lVar14 = plVar4[2];
        *(int *)(plVar4 + 6) = iVar7;
        if (lVar14 == 0) {
          uVar5 = *(uint *)(plVar4 + 5);
          if (uVar5 == 0) {
            uVar13 = 0xffffffff00000000;
          }
          else {
            plVar10 = (long *)plVar4[4];
            lVar14 = plVar10[2];
            if (((lVar14 == 0) || (*(char *)(lVar14 + 0x30) == '\0')) && (-1 < (int)plVar10[1])) {
              *param_3 = lVar14;
              lVar14 = *plVar10;
              uVar13 = plVar10[1];
              bVar6 = true;
              uVar9 = uVar13 & 0xffffffff;
              uVar5 = *(uint *)(plVar4 + 5);
              plVar8 = (long *)plVar4[4];
            }
            else {
              lVar14 = 0;
              bVar6 = false;
              uVar9 = 0xffffffff;
              uVar13 = 0xffffffff00000000;
              plVar8 = plVar10;
            }
            while (plVar11 = plVar10, plVar10 = plVar11 + 3, plVar10 != plVar8 + (ulong)uVar5 * 3) {
              lVar12 = plVar11[5];
              if (((lVar12 == 0) || (*(char *)(lVar12 + 0x30) == '\0')) &&
                 ((int)uVar9 < (int)plVar11[4])) {
                *param_3 = lVar12;
                lVar14 = *plVar10;
                uVar13 = plVar11[4];
                plVar8 = (long *)plVar4[4];
                bVar6 = true;
                uVar9 = uVar13 & 0xffffffff;
                uVar5 = *(uint *)(plVar4 + 5);
              }
            }
            if (bVar6) {
              if (*param_3 != 0) {
                piVar1 = (int *)(*param_3 + 0x60);
                do {
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              goto LAB_02e96764;
            }
            iVar7 = *(int *)(plVar4 + 6);
          }
          uVar13 = uVar13 & 0xffffffff00000000;
          *(int *)(plVar4 + 6) = iVar7 + -1;
          if ((iVar7 + -1 == 0) && (plVar4[2] != 0)) {
            (*DAT_0442d158)(*(undefined4 *)((long)plVar4 + 0x1c));
            lVar14 = 0;
            plVar4[2] = 0;
            plVar4[3] = 0xffffffff00000000;
          }
          else {
            lVar14 = 0;
          }
        }
        else {
          uVar13 = plVar4[3];
        }
        goto LAB_02e96764;
      }
    }
  }
  lVar14 = 0;
  uVar13 = 0xffffffff00000000;
LAB_02e96764:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  auVar15._8_8_ = uVar13;
  auVar15._0_8_ = lVar14;
  return auVar15;
}


