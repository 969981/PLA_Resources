/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59480; name: FUN_02f59480
 */


void FUN_02f59480(int param_1,long param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  
  plVar1 = (long *)(param_2 + (ulong)param_3 * 0x10);
  plVar8 = plVar1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
LAB_02f59624:
    lVar11 = FUN_02f59660(param_1,param_2,1);
    if (lVar11 != 0) {
      FUN_02f596f0(param_1,param_2,plVar1,lVar11,param_3);
      return;
    }
  }
  else {
    if (*plVar9 == 0) {
      uVar4 = *(uint *)(plVar9 + 3);
      uVar10 = *(uint *)(plVar9 + 2) - uVar4;
      if (uVar4 <= *(uint *)(plVar9 + 2) && uVar10 != 0) {
        uVar5 = *(uint *)(plVar9 + 5);
        uVar12 = (ulong)uVar5;
        plVar8 = (long *)((long)plVar9 + (ulong)(uVar5 * uVar4 + 0x60));
        plVar15 = plVar1;
        if (1 < uVar10) {
          uVar2 = (long)plVar8 + (ulong)(uVar5 * uVar10);
          uVar13 = *(ulong *)(&DAT_0442c120 + (long)param_1 * 0x820);
          uVar3 = ((ulong)plVar8 & -uVar13) + uVar13;
          plVar15 = (long *)((long)plVar8 + uVar12);
          *plVar1 = (long)plVar15;
          if (uVar2 <= uVar3 || uVar13 >> 1 <= uVar12) {
            uVar3 = uVar2;
          }
          if ((long)plVar15 + uVar12 < uVar3) {
            uVar10 = 2;
            do {
              lVar11 = (long)plVar8 + uVar12 * 2;
              plVar8 = (long *)((long)plVar8 + uVar12);
              *plVar8 = lVar11;
              uVar10 = uVar10 + 1;
            } while ((long)plVar8 + uVar12 * 2 < uVar3);
            plVar15 = (long *)((long)plVar8 + uVar12);
          }
          else {
            uVar10 = 2;
          }
        }
        *plVar15 = 0;
        *(uint *)(plVar9 + 3) = (int)plVar9[3] + uVar10;
        return;
      }
      plVar15 = plVar9 + 4;
      if (*plVar15 != 0) {
        do {
          do {
            plVar8 = (long *)*plVar15;
          } while (plVar8 == (long *)0xffffffffffffffff);
          while ((long *)*plVar15 == plVar8) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              *(undefined4 *)((long)plVar9 + 0x1c) = 0;
              plVar9[4] = 0;
              *plVar1 = (long)plVar8;
              goto LAB_02f594c0;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      lVar11 = *plVar8;
      lVar14 = *(long *)(lVar11 + 0x48);
      *plVar8 = lVar14;
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(lVar11 + 0x50);
      }
      *(undefined4 *)(plVar9 + 1) = 2;
      *(int *)((long)plVar9 + 0xc) = (int)plVar9[2];
      *plVar9 = 0;
      plVar9 = (long *)*plVar8;
      if (plVar9 == (long *)0x0) goto LAB_02f59624;
      *plVar1 = *plVar9;
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    else {
      *plVar1 = *plVar9;
    }
    *plVar9 = 0;
    plVar8 = (long *)*plVar1;
LAB_02f594c0:
    *plVar1 = *plVar8;
  }
  return;
}


