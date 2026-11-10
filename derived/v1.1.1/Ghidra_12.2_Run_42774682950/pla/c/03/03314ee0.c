/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03314ee0; name: FUN_03314ee0
 */


void FUN_03314ee0(long param_1,long *param_2,long *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  lVar27 = *param_2;
  lVar5 = param_2[1];
  plVar24 = (long *)param_2[2];
  if (((ulong)plVar24 & 1) != 0) {
    piVar2 = (int *)(((ulong)plVar24 & 0xfffffffffffffffe) + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar21 = *param_3;
  lVar6 = param_3[1];
  plVar25 = (long *)param_3[2];
  if (((ulong)plVar25 & 1) != 0) {
    piVar2 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (param_6 < 1) {
    if (((ulong)plVar25 & 1) != 0) {
      plVar25 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
      plVar20 = plVar25 + 1;
      do {
        lVar27 = *plVar20;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar9) {
          *(int *)plVar20 = (int)lVar27 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar25 != (long *)0x0) && ((int)lVar27 == 1)) {
        (**(code **)(*plVar25 + 8))();
      }
    }
    if (((ulong)plVar24 & 1) != 0) {
      plVar24 = (long *)((ulong)plVar24 & 0xfffffffffffffffe);
      plVar25 = plVar24 + 1;
      do {
        lVar27 = *plVar25;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar9) {
          *(int *)plVar25 = (int)lVar27 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar24 != (long *)0x0) && ((int)lVar27 == 1)) {
        (**(code **)(*plVar24 + 8))();
      }
    }
  }
  else {
    iVar23 = 0;
    do {
      plVar20 = *(long **)(param_1 + 0x290);
      uVar22 = *(uint *)(plVar20 + 1);
      uVar17 = *(uint *)((long)plVar20 + 0xc);
      lVar26 = *plVar20;
      uVar13 = uVar17 & 0x3fffffff;
      uVar1 = uVar22 + 1;
      lVar14 = lVar26;
      if ((int)uVar13 <= (int)uVar22) {
        if (0x3ffffffe < (int)uVar22) {
          FUN_032bd0a8(uVar1,&DAT_0434a000,0x5a,"Invalid requestedCapacity {}");
          uVar17 = *(uint *)((long)plVar20 + 0xc);
          uVar13 = uVar17 & 0x3fffffff;
        }
        puVar11 = PTR_PTR_0434a080;
        uVar17 = (uVar17 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar17) {
          uVar17 = 0x3fffffff;
        }
        local_7c = uVar1;
        if ((int)uVar1 <= (int)uVar17) {
          local_7c = uVar17;
        }
        local_88 = (ulong)local_7c * 0x30;
        if (((int)local_7c < (int)uVar13) || (0x3fffffff < (int)local_7c)) {
          local_78 = 1;
          puStack_70 = &DAT_0411b3b8;
          local_68 = &local_7c;
          FUN_03320b50(0x65816502,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x5a,"Invalid requestedCapacity {}",&local_78);
        }
        uVar13 = *(uint *)((long)plVar20 + 0xc);
        lVar14 = (**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_88,&local_88);
        if (0 < (int)uVar22) {
          uVar15 = 0;
          do {
            puVar3 = (undefined8 *)(lVar14 + uVar15 * 0x30);
            puVar4 = (undefined8 *)(lVar26 + uVar15 * 0x30);
            uVar7 = puVar4[1];
            *puVar3 = *puVar4;
            puVar3[1] = uVar7;
            uVar19 = puVar4[2];
            puVar3[2] = uVar19;
            if ((uVar19 & 1) != 0) {
              piVar2 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = *piVar2 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            uVar7 = puVar4[4];
            puVar3[3] = puVar4[3];
            puVar3[4] = uVar7;
            uVar19 = puVar4[5];
            puVar3[5] = uVar19;
            if ((uVar19 & 1) != 0) {
              piVar2 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = *piVar2 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar22);
          uVar15 = 0;
          do {
            uVar19 = *(ulong *)(lVar26 + uVar15 * 0x30 + 0x28);
            if ((uVar19 & 1) != 0) {
              plVar16 = (long *)(uVar19 & 0xfffffffffffffffe);
              plVar18 = plVar16 + 1;
              do {
                lVar10 = *plVar18;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar9) {
                  *(int *)plVar18 = (int)lVar10 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar16 != (long *)0x0) && ((int)lVar10 == 1)) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
            uVar19 = *(ulong *)(lVar26 + uVar15 * 0x30 + 0x10);
            if ((uVar19 & 1) != 0) {
              plVar16 = (long *)(uVar19 & 0xfffffffffffffffe);
              plVar18 = plVar16 + 1;
              do {
                lVar10 = *plVar18;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar9) {
                  *(int *)plVar18 = (int)lVar10 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar16 != (long *)0x0) && ((int)lVar10 == 1)) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar22);
        }
        if (-1 < (int)uVar13) {
          (**(code **)(*(long *)puVar11 + 0x18))(puVar11,lVar26,((ulong)uVar13 & 0x3fffffff) * 0x30)
          ;
        }
        if (local_88 < 0xbffffffd0) {
          uVar12 = (undefined4)(local_88 / 0x30);
        }
        else {
          uVar12 = 0x3fffffff;
        }
        uVar22 = *(uint *)(plVar20 + 1);
        *plVar20 = lVar14;
        *(undefined4 *)((long)plVar20 + 0xc) = uVar12;
      }
      plVar18 = (long *)(lVar14 + (long)(int)uVar22 * 0x30);
      plVar18[2] = (long)plVar24;
      *plVar18 = lVar27;
      plVar18[1] = lVar5;
      if (((ulong)plVar24 & 1) != 0) {
        piVar2 = (int *)(((ulong)plVar24 & 0xfffffffffffffffe) + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      lVar14 = lVar14 + (long)(int)uVar22 * 0x30;
      *(long *)(lVar14 + 0x18) = lVar21;
      *(long *)(lVar14 + 0x20) = lVar6;
      *(long **)(lVar14 + 0x28) = plVar25;
      if (((ulong)plVar25 & 1) != 0) {
        piVar2 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      *(uint *)(plVar20 + 1) = uVar1;
      plVar20 = (long *)((ulong)plVar24 & 0xfffffffffffffffe);
      if (((ulong)plVar24 & 1) != 0) {
        plVar24 = plVar20 + 1;
        do {
          lVar14 = *plVar24;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *(int *)plVar24 = (int)lVar14 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar20 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
      lVar27 = lVar27 + param_4;
      lVar21 = lVar21 + param_5;
      plVar18 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
      if (((ulong)plVar25 & 1) != 0) {
        plVar24 = plVar18 + 1;
        do {
          lVar14 = *plVar24;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *(int *)plVar24 = (int)lVar14 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar18 + 8))(plVar18);
        }
      }
      iVar23 = iVar23 + 1;
      plVar24 = plVar20;
      plVar25 = plVar18;
    } while (iVar23 != param_6);
  }
  return;
}


