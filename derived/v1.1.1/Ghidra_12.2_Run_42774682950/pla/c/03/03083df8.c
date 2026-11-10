/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03083df8; name: FUN_03083df8
 */


void FUN_03083df8(long param_1,long param_2,long *param_3,long *param_4,int param_5,long *param_6,
                 long param_7,long param_8,long param_9)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  long local_80;
  
  iVar3 = *(int *)(param_9 + 0x1c);
  if (iVar3 != 0) {
    lVar12 = nn::os::GetSystemTick();
    local_80 = -lVar12;
  }
  *(int *)(param_9 + 0x18) = *(int *)(param_9 + 0x18) + param_5;
  puVar23 = (uint *)param_6[1];
  if (*(int *)(param_7 + 0x18) < 0xe01) {
    puVar11 = (uint *)(*(long *)(param_7 + 0x10) + (long)*(int *)(param_7 + 0x18) + 0x20);
  }
  else {
    puVar11 = (uint *)FUN_032bf82c(param_7);
  }
  if (0 < param_5) {
    uVar5 = *(ushort *)(*param_4 + 0x5a);
    uVar6 = *(ushort *)(*param_4 + 0x5c);
    uVar7 = *(ushort *)(*param_3 + 0x5c);
    uVar8 = *(ushort *)(*param_3 + 0x5a);
    do {
      while( true ) {
        bVar4 = *(byte *)((long)puVar23 + 9);
        uVar21 = (uint)bVar4;
        puVar16 = puVar11;
        puVar22 = puVar23;
        uVar20 = uVar21;
        if ((bVar4 + (bVar4 == 0) & 1) != 0) {
          uVar20 = puVar23[2];
          uVar1 = puVar23[3];
          *(undefined8 *)puVar11 = *(undefined8 *)puVar23;
          puVar11[2] = uVar20;
          puVar11[3] = uVar1;
          puVar16 = puVar11 + 4;
          puVar22 = puVar23 + 4;
          uVar20 = uVar21 - 1;
        }
        if (uVar21 != (bVar4 != 0)) {
          do {
            uVar20 = uVar20 - 2;
            uVar21 = puVar22[2];
            uVar1 = puVar22[3];
            *(undefined8 *)puVar16 = *(undefined8 *)puVar22;
            puVar16[2] = uVar21;
            puVar16[3] = uVar1;
            uVar21 = puVar22[6];
            uVar1 = puVar22[7];
            *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar22 + 4);
            puVar16[6] = uVar21;
            puVar16[7] = uVar1;
            puVar22 = puVar22 + 8;
            puVar16 = puVar16 + 8;
          } while (0 < (int)uVar20);
        }
        uVar20 = *(int *)((long)param_6 + 0x14) - 1;
        bVar4 = *(byte *)((long)puVar23 + 9);
        *(uint *)((long)param_6 + 0x14) = uVar20;
        if ((int)uVar20 < 1) {
          uVar21 = *(uint *)(param_6 + 2);
          if (uVar21 == 0) {
            puVar23 = (uint *)0x0;
            *param_6 = 0;
            param_6[1] = 0;
          }
          else {
            puVar22 = *(uint **)(*param_6 + 8);
            *param_6 = (long)puVar22;
            if (puVar22 == (uint *)0x0) {
              puVar23 = (uint *)0x0;
              param_6[1] = 0;
            }
            else {
              uVar1 = *puVar22 & 0xffff;
              if ((int)uVar21 <= (int)(*puVar22 & 0xffff)) {
                uVar1 = uVar21;
              }
              if ((int)uVar1 < 1) {
                puVar23 = (uint *)0x0;
                param_6[1] = 0;
              }
              else {
                puVar23 = puVar22 + 8;
                *(uint *)(param_6 + 2) = uVar21 - uVar1;
                *(uint *)((long)param_6 + 0x14) = uVar1;
                param_6[1] = (long)puVar23;
                Hint_Prefetch(*(long *)(puVar22 + 2),0,0,0);
                Hint_Prefetch(*(long *)(puVar22 + 2) + 0x40,0,0,0);
                Hint_Prefetch(puVar22 + 0x20,0,0,0);
                Hint_Prefetch(puVar22 + 0x30,0,0,0);
                uVar20 = uVar1;
              }
              puVar16 = (uint *)param_6[4];
              if (puVar22 != puVar16) {
                uVar21 = *(uint *)(param_6 + 5);
                if (uVar21 != 0) {
                  if (uVar21 == (*puVar16 & 0xffff)) {
                    lVar12 = param_6[3];
                    puVar17 = (undefined8 *)param_6[6];
                    *(undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(int)puVar16[1] * 8) = 0;
                    *(undefined1 *)(lVar12 + 0xc) = 1;
                    iVar15 = *(int *)(puVar17 + 0xb);
                    lVar18 = puVar17[1];
                    *(uint **)(lVar18 + (long)iVar15 * 8) = puVar16;
                    *(int *)(puVar17 + 0xb) = iVar15 + 1;
                    if (*(int *)((long)puVar17 + 0x5c) <= iVar15 + 1) {
                      (**(code **)(*(long *)*puVar17 + 0x28))
                                ((long *)*puVar17,lVar18 + (long)(iVar15 + -5) * 8,6);
                      *(int *)(puVar17 + 0xb) = iVar15 + -5;
                    }
                  }
                  else {
                    do {
                      cVar9 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                      if (bVar10) {
                        *puVar16 = *puVar16 - uVar21;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    lVar12 = param_6[3];
                    puVar22 = (uint *)*param_6;
                    uVar20 = *(uint *)((long)param_6 + 0x14);
                  }
                  *(undefined4 *)(param_6 + 5) = 0;
                  *(undefined1 *)(lVar12 + 0xc) = 1;
                }
                param_6[4] = (long)puVar22;
                *(uint *)(param_6 + 5) = uVar20;
              }
            }
          }
        }
        else {
          puVar23 = (uint *)(param_6[1] + (ulong)bVar4 * 0x10);
          param_6[1] = (long)puVar23;
        }
        Hint_Prefetch(puVar23 + 0x40,0,0,0);
        Hint_Prefetch(puVar23 + 0x50,0,0,0);
        if (*(long *)(param_8 + 0x18) == 0) {
          puVar11[8] = 0;
          puVar11[9] = 0;
          *(undefined2 *)(puVar11 + 10) = 0;
        }
        else if ((2 < *(byte *)((long)puVar11 + 9)) && (*(long *)(puVar11 + 8) != 0)) {
          iVar15 = (uint)(ushort)puVar11[0x25] - ((uint)uVar8 + (uint)uVar5);
          *(ushort *)(puVar11 + 0x25) = (ushort)iVar15 & ((ushort)(iVar15 >> 0x1f) ^ 0xffff);
          uVar20 = *puVar11;
          lVar12 = *(long *)(*param_4 + 0x78);
          *(uint *)(param_4 + 3) = uVar20;
          if (*(char *)(lVar12 + 0x18) == '\x15') {
            plVar13 = (long *)(lVar12 + ((ulong)(uVar20 >> 0x1a) & 0x38) + 0x48);
            lVar12 = *plVar13;
            if (lVar12 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = lVar12 + (long)plVar13;
            }
          }
          param_4[4] = lVar12;
          param_4[2] = *(long *)(param_1 + 0x20) + (ulong)*(ushort *)((long)puVar11 + 0x16) * 0x50;
          if (*(char *)(param_8 + 0x79) == '\0') {
            plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x658);
            (**(code **)(*plVar13 + 0x68))
                      (plVar13,param_1,*(undefined8 *)(param_2 + 8),puVar11,param_3,param_4,0,
                       *(undefined8 *)(param_8 + 0x10),*(undefined8 *)(param_8 + 0x18));
          }
          else {
            puVar17 = *(undefined8 **)(param_8 + 0x60);
            if (*(char *)((long)puVar17 + 0xe) == '\0') {
              if (*(int *)(puVar17 + 1) != 0) {
                iVar15 = *(int *)(*(long *)(param_8 + 0x48) + 0x18);
                if (iVar15 < 0xed1) {
                  puVar14 = (undefined8 *)
                            (*(long *)(*(long *)(param_8 + 0x48) + 0x10) + (long)iVar15 + 0x20);
                }
                else {
                  puVar14 = (undefined8 *)FUN_032bf82c();
                  puVar17 = *(undefined8 **)(param_8 + 0x60);
                }
                uVar2 = puVar17[1];
                *puVar14 = *puVar17;
                puVar14[1] = uVar2;
                lVar12 = *(long *)(param_8 + 0x48);
                *(undefined8 **)(param_8 + 0x60) = puVar14;
                *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 0x10;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                puVar17 = *(undefined8 **)(param_8 + 0x60);
              }
              *(undefined1 *)((long)puVar17 + 0xe) = 1;
              *(undefined4 *)(*(long *)(param_8 + 0x60) + 8) = 1;
            }
            else {
              *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
            }
            *(undefined1 *)(param_8 + 0x7a) = 0;
            lVar12 = param_3[2];
            lVar19 = *(long *)(param_1 + 0x20);
            lVar18 = param_4[2];
            iVar15 = *(int *)(*(long *)(param_8 + 0x48) + 0x18);
            if (iVar15 < 0xed1) {
              puVar17 = (undefined8 *)
                        (*(long *)(*(long *)(param_8 + 0x48) + 0x10) + (long)iVar15 + 0x20);
            }
            else {
              puVar17 = (undefined8 *)FUN_032bf82c();
            }
            *puVar17 = puVar11;
            *(short *)(puVar17 + 1) = (short)(lVar12 - lVar19 >> 4) * -0x3333;
            *(short *)((long)puVar17 + 10) = (short)(lVar18 - lVar19 >> 4) * -0x3333;
            lVar12 = *(long *)(param_8 + 0x48);
            *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 0x10;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          }
        }
        iVar15 = (uint)(ushort)puVar11[3] - ((uint)uVar7 + (uint)uVar6);
        *(ushort *)(puVar11 + 3) = (ushort)iVar15 & ((ushort)(iVar15 >> 0x1f) ^ 0xffff);
        *(undefined2 *)(puVar11 + 6) = 0x7f7f;
        *(undefined1 *)((long)puVar11 + 0x1a) = 0x7f;
        lVar12 = (long)*(int *)(param_7 + 0x18) + (ulong)*(byte *)((long)puVar11 + 9) * 0x10;
        param_5 = param_5 + -1;
        iVar15 = (int)lVar12;
        *(int *)(param_7 + 0x18) = iVar15;
        *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
        if (0xe00 < iVar15) break;
        puVar11 = (uint *)(*(long *)(param_7 + 0x10) + lVar12 + 0x20);
        if (param_5 < 1) goto LAB_03084118;
      }
      puVar11 = (uint *)FUN_032bf82c(param_7);
    } while (0 < param_5);
  }
LAB_03084118:
  if (iVar3 != 0) {
    lVar12 = nn::os::GetSystemTick();
    *(long *)(param_9 + 8) = lVar12 + local_80 + *(long *)(param_9 + 8);
    *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
  }
  return;
}


