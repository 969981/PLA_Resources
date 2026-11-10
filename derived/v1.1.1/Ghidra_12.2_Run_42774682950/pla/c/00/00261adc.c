/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00261adc; name: FUN_00261adc
 */


void FUN_00261adc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ushort uVar14;
  uint *puVar15;
  ushort *puVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  ushort *puVar24;
  ulong uVar25;
  ushort *puVar26;
  int local_d4;
  float local_d0;
  float fStack_cc;
  ulong local_c8;
  long lStack_c0;
  ulong local_b8;
  long lStack_b0;
  ulong local_a8;
  long lStack_a0;
  ulong local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_68;
  
  local_68 = 0;
  local_80 = 0;
  uVar5 = *(uint *)(param_2 + 0xc0);
  if (uVar5 == 0) {
    uVar20 = 0;
  }
  else {
    uVar22 = 0;
    uVar20 = 0;
    puVar16 = *(ushort **)(param_2 + 0xa0);
    uVar14 = *puVar16;
    puVar24 = puVar16;
    while( true ) {
      if (uVar14 != 0) {
        uVar10 = (ulong)uVar14;
        uVar25 = 0;
        do {
          lVar17 = *(long *)(*(long *)(puVar16 + uVar22 * 0x50 + 4) + uVar25 * 8);
          if ((*(short *)(lVar17 + 4) != 0) && ((*(byte *)(lVar17 + 1) & 1) == 0)) {
            uVar5 = (**(code **)(**(long **)(*(long *)(*(long *)(param_2 + 0xa8) + uVar22 * 0x30 +
                                                      0x18) + uVar25 * 8) + 0x38))();
            uVar10 = (ulong)*puVar24;
            if (uVar5 <= uVar20) {
              uVar5 = uVar20;
            }
            uVar20 = uVar5;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar10);
        uVar5 = *(uint *)(param_2 + 0xc0);
      }
      uVar22 = uVar22 + 1;
      if (uVar5 <= uVar22) break;
      puVar16 = *(ushort **)(param_2 + 0xa0);
      puVar24 = puVar16 + uVar22 * 0x50;
      uVar14 = *puVar24;
    }
  }
  FUN_0025ff5c(param_2,(long)&local_68 + 4,&local_68,(long)&local_80 + 4,&local_80);
  if (local_80._4_4_ != 0 || local_68._4_4_ != 0) {
    lVar17 = 0;
    if (local_80._4_4_ != 0) {
      lVar17 = (long)(int)uVar20 * 0x18;
    }
    lVar11 = *(long *)(*(long *)(param_3 + 0xb8) + 0x70);
    lVar13 = *(long *)(*(long *)(param_3 + 0xb8) + 0x78);
    lVar21 = (long)local_80._4_4_ * 8 + ((long)local_68._4_4_ << 3 | 4U) + lVar17 +
             (long)(int)local_68 * 4 + (long)(int)local_80 * 4 + (lVar13 + lVar11) * 2;
    pbVar18 = *(byte **)(param_3 + 200);
    if ((*pbVar18 & 1) == 0) {
      lVar19 = *(long *)(pbVar18 + 0x48) + lVar21;
      *(long *)(pbVar18 + 0x48) = lVar19;
    }
    else {
      plVar23 = *(long **)(pbVar18 + 0x48);
      do {
        lVar19 = *plVar23 + lVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *plVar23 = lVar19;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_90 = *(long *)(*(long *)(param_3 + 200) + 0x38);
    local_c8 = (lStack_90 + (*(long *)(pbVar18 + 0x18) - lVar19) + 3U & 0xfffffffffffffffc) +
               lVar11 + -1 & -lVar11;
    lStack_c0 = local_c8 - lStack_90;
    local_b8 = lVar13 + -1 + local_c8 + (long)local_68._4_4_ * 8 & -lVar13;
    local_a8 = lVar11 + -1 + local_b8 + (long)(int)local_68 * 4 & -lVar11;
    local_98 = lVar13 + -1 + local_a8 + (long)local_80._4_4_ * 8 & -lVar13;
    lStack_b0 = local_b8 - lStack_90;
    lStack_a0 = local_a8 - lStack_90;
    lStack_90 = local_98 - lStack_90;
    if (lVar17 != 0) {
      local_88 = local_98 + (long)(int)local_80 * 4;
    }
    *(undefined8 *)(param_2 + 0xcc) = 0;
    uVar22 = (ulong)*(uint *)(param_2 + 0xc0);
    *(long *)(param_2 + 0xd8) = lStack_c0;
    *(long *)(param_2 + 0xe0) = lStack_b0;
    *(long *)(param_2 + 0xf0) = lStack_a0;
    *(long *)(param_2 + 0xf8) = lStack_90;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    if (*(uint *)(param_2 + 0xc0) != 0) {
      uVar25 = 0;
      puVar16 = *(ushort **)(param_2 + 0xa0);
      uVar14 = *puVar16;
      puVar24 = puVar16;
      do {
        if (((uVar14 != 0) && (puVar26 = puVar16 + uVar25 * 0x50 + 8, *puVar26 != 0)) &&
           (0.0 < *(float *)(param_2 + 0x18))) {
          uVar8 = FUN_0025fbc8(param_1,param_2,param_3,param_4,uVar25 & 0xffffffff,puVar24);
          uVar14 = *puVar24;
          lVar17 = *(long *)(param_2 + 0xa8);
          if (uVar14 == 0) {
            local_d4 = 0;
          }
          else {
            uVar22 = 0;
            local_d4 = 0;
            do {
              lVar21 = *(long *)(*(long *)(puVar16 + uVar25 * 0x50 + 4) + uVar22 * 8);
              if ((*(short *)(lVar21 + 4) != 0) && ((*(byte *)(lVar21 + 1) & 1) == 0)) {
                plVar23 = *(long **)(*(long *)(lVar17 + uVar25 * 0x30 + 0x18) + uVar22 * 8);
                uVar5 = *(uint *)(param_2 + 0xd0);
                local_d0 = 1.0;
                fStack_cc = 0.0;
                uVar8 = FUN_002617e8(param_1,uVar8,&fStack_cc,&local_d0,puVar24,lVar21);
                if (0.001 <= local_d0 - fStack_cc) {
                  (**(code **)(*plVar23 + 0x60))(plVar23);
                  uVar8 = (**(code **)(*plVar23 + 0x68))
                                    (plVar23,&local_c8,(undefined8 *)(param_2 + 0xcc),&local_b8,
                                     (uint *)(param_2 + 0xd0),local_88);
                  uVar10 = (ulong)*(ushort *)(lVar21 + 2);
                  if (*(ushort *)(lVar21 + 2) < *puVar26) {
                    lVar17 = uVar10 << 4;
                    uVar6 = (undefined4)uVar8;
                    pbVar18 = *(byte **)(*(long *)(puVar16 + uVar25 * 0x50 + 0xc) + uVar10 * 8);
                    bVar2 = pbVar18[1];
                    lVar11 = local_88;
                    do {
                      local_88 = lVar11;
                      if ((bVar2 & 1) == 0) {
                        if (*pbVar18 == 1) {
                          if ((*(byte *)(lVar21 + 4) >> 1 & 1) != 0) {
                            uVar20 = *(uint *)(param_2 + 0xec);
                            lVar13 = *(long *)(*(long *)(param_2 + 0xa8) + uVar25 * 0x30 + 0x10);
                            uVar9 = (**(code **)(*plVar23 + 0x50))(plVar23);
                            if ((uVar9 & 1) == 0) {
                              uVar7 = 0;
                            }
                            else {
                              uVar7 = (**(code **)(*plVar23 + 0x58))(plVar23);
                              uVar7 = uVar7 ^ 1;
                            }
                            uVar8 = FUN_00260ce4(param_1,param_2,plVar23,&local_a8,&local_98,
                                                 lVar13 + lVar17,lVar11,uVar6,uVar7 & 1);
                            lVar11 = *(long *)(param_2 + 0xa8) + uVar25 * 0x30;
                            puVar15 = (uint *)(*(long *)(lVar11 + 0x28) + (long)local_d4 * 0x18);
                            iVar1 = *(int *)(param_2 + 0xec);
                            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 8) + uVar10 * 8);
                            *puVar15 = (uint)*pbVar18;
                            puVar15[1] = uVar20;
                            uVar20 = iVar1 - uVar20;
                            *(undefined8 *)(puVar15 + 4) = uVar12;
                            goto LAB_00261f58;
                          }
                        }
                        else if ((*pbVar18 == 0) && ((*(byte *)(lVar21 + 4) & 1) != 0)) {
                          lVar11 = *(long *)(param_2 + 0xa8) + uVar25 * 0x30;
                          puVar15 = (uint *)(*(long *)(lVar11 + 0x28) + (long)local_d4 * 0x18);
                          uVar12 = *(undefined8 *)(*(long *)(lVar11 + 8) + uVar10 * 8);
                          uVar20 = *(int *)(param_2 + 0xd0) - uVar5;
                          *puVar15 = 0;
                          puVar15[1] = uVar5;
                          *(undefined8 *)(puVar15 + 4) = uVar12;
LAB_00261f58:
                          local_d4 = local_d4 + 1;
                          puVar15[2] = uVar20;
                        }
                      }
                      uVar10 = uVar10 + 1;
                      lVar17 = lVar17 + 0x10;
                      if (*puVar26 <= uVar10) break;
                      pbVar18 = *(byte **)(*(long *)(puVar16 + uVar25 * 0x50 + 0xc) + uVar10 * 8);
                      bVar2 = pbVar18[1];
                      lVar11 = local_88;
                    } while( true );
                  }
                }
                uVar14 = *puVar24;
                lVar17 = *(long *)(param_2 + 0xa8);
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar14);
          }
          *(int *)(lVar17 + uVar25 * 0x30 + 0x24) = local_d4;
          uVar22 = (ulong)*(uint *)(param_2 + 0xc0);
        }
        uVar25 = uVar25 + 1;
        if (uVar22 <= uVar25) {
          return;
        }
        puVar16 = *(ushort **)(param_2 + 0xa0);
        puVar24 = puVar16 + uVar25 * 0x50;
        uVar14 = *puVar24;
      } while( true );
    }
  }
  return;
}


