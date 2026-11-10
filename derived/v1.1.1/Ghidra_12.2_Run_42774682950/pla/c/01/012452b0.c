/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012452b0; name: FUN_012452b0
 */


void FUN_012452b0(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [28];
  float local_e4;
  undefined1 auStack_28 [8];
  
  FUN_0134eddc(auStack_100);
  local_e4 = (float)FUN_012455c4(param_1,*(undefined4 *)(param_1 + 0x1a4));
  local_e4 = local_e4 * (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
  iVar3 = *(int *)(param_1 + 0x1a4);
  uVar4 = *(uint *)(param_1 + 0x1a0);
  if (iVar3 == 0) {
    pbVar9 = *(byte **)(param_1 + 0x128);
    lVar7 = *(long *)(param_1 + 0x130);
    if (lVar7 - (long)pbVar9 != 0) {
      uVar11 = 0;
      pbVar10 = pbVar9;
      do {
        if (uVar4 == *pbVar10 && pbVar10[1] == 0) goto LAB_0124541c;
        uVar11 = uVar11 + 1;
        pbVar10 = pbVar10 + 0x40;
      } while (uVar11 < (ulong)(lVar7 - (long)pbVar9 >> 6));
    }
  }
  else if (iVar3 == 1) {
    pbVar9 = *(byte **)(param_1 + 0x128);
    lVar7 = *(long *)(param_1 + 0x130);
    if (lVar7 - (long)pbVar9 != 0) {
      uVar11 = 0;
      pbVar10 = pbVar9;
      do {
        if (uVar4 == *pbVar10 && pbVar10[1] == 1) goto LAB_0124541c;
        uVar11 = uVar11 + 1;
        pbVar10 = pbVar10 + 0x40;
      } while (uVar11 < (ulong)(lVar7 - (long)pbVar9 >> 6));
    }
  }
  else if (iVar3 == 2) {
    pbVar9 = *(byte **)(param_1 + 0x128);
    lVar7 = *(long *)(param_1 + 0x130);
    if (lVar7 - (long)pbVar9 != 0) {
      uVar11 = 0;
      pbVar10 = pbVar9;
      do {
        if (uVar4 == *pbVar10 && pbVar10[1] == 2) goto LAB_0124541c;
        uVar11 = uVar11 + 1;
        pbVar10 = pbVar10 + 0x40;
      } while (uVar11 < (ulong)(lVar7 - (long)pbVar9 >> 6));
    }
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x128);
    lVar7 = *(long *)(param_1 + 0x130);
    if (lVar7 - (long)pbVar9 != 0) {
      uVar11 = 0;
      pbVar10 = pbVar9;
      do {
        if (uVar4 == *pbVar10 && pbVar10[1] == 3) goto LAB_0124541c;
        uVar11 = uVar11 + 1;
        pbVar10 = pbVar10 + 0x40;
      } while (uVar11 < (ulong)(lVar7 - (long)pbVar9 >> 6));
    }
  }
  goto LAB_0124545c;
LAB_0124541c:
  uStack_108 = *(undefined8 *)(pbVar10 + 0x18);
  local_110 = *(undefined8 *)(pbVar10 + 0x10);
  if (iVar3 == 0) {
    lVar7 = lVar7 - (long)pbVar9;
    if (lVar7 != 0) {
      uVar11 = 0;
      do {
        if (uVar4 == *pbVar9 && pbVar9[1] == 0) {
LAB_0124552c:
          uStack_118 = *(undefined8 *)(pbVar9 + 0x28);
          local_120 = *(undefined8 *)(pbVar9 + 0x20);
          lVar7 = FUN_01245e94(auStack_28,*(undefined8 *)(param_1 + 0x58),
                               (undefined8 *)(param_1 + 0x58),auStack_100,&local_110,&local_120);
          if (lVar7 != 0) {
            piVar2 = (int *)(lVar7 + 0x50);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar8 = *(long **)(param_1 + 0x88);
          *(undefined8 *)(param_1 + 0x88) = 0;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 10;
            do {
              iVar3 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar3;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          *(long *)(param_1 + 0x88) = lVar7;
          FUN_0134edcc(lVar7);
          return;
        }
        uVar11 = uVar11 + 1;
        pbVar9 = pbVar9 + 0x40;
      } while (uVar11 < (ulong)(lVar7 >> 6));
    }
  }
  else if (iVar3 == 1) {
    lVar7 = lVar7 - (long)pbVar9;
    if (lVar7 != 0) {
      uVar11 = 0;
      do {
        if (uVar4 == *pbVar9 && pbVar9[1] == 1) goto LAB_0124552c;
        uVar11 = uVar11 + 1;
        pbVar9 = pbVar9 + 0x40;
      } while (uVar11 < (ulong)(lVar7 >> 6));
    }
  }
  else if (iVar3 == 2) {
    lVar7 = lVar7 - (long)pbVar9;
    if (lVar7 != 0) {
      uVar11 = 0;
      do {
        if (uVar4 == *pbVar9 && pbVar9[1] == 2) goto LAB_0124552c;
        uVar11 = uVar11 + 1;
        pbVar9 = pbVar9 + 0x40;
      } while (uVar11 < (ulong)(lVar7 >> 6));
    }
  }
  else {
    lVar7 = lVar7 - (long)pbVar9;
    if (lVar7 != 0) {
      uVar11 = 0;
      do {
        if (uVar4 == *pbVar9 && pbVar9[1] == 3) goto LAB_0124552c;
        uVar11 = uVar11 + 1;
        pbVar9 = pbVar9 + 0x40;
      } while (uVar11 < (ulong)(lVar7 >> 6));
    }
  }
LAB_0124545c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


