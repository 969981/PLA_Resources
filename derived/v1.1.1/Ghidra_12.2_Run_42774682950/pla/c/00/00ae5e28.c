/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae5e28; name: FUN_00ae5e28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00ae5e28(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long extraout_d0;
  long extraout_d0_00;
  undefined1 auVar17 [16];
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 in_q3 [16];
  byte bVar33;
  long local_60;
  long lStack_58;
  long *local_48;
  
  bVar33 = in_q3[0xf];
  bVar32 = in_q3[0xe];
  bVar31 = in_q3[0xd];
  bVar30 = in_q3[0xc];
  bVar29 = in_q3[0xb];
  bVar28 = in_q3[10];
  bVar27 = in_q3[9];
  bVar26 = in_q3[8];
  bVar25 = in_q3[7];
  bVar24 = in_q3[6];
  bVar23 = in_q3[5];
  bVar22 = in_q3[4];
  bVar21 = in_q3[3];
  bVar20 = in_q3[2];
  bVar19 = in_q3[1];
  bVar18 = in_q3[0];
  lVar13 = *param_1;
  local_60 = 0;
  lStack_58 = 0;
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar9 = *(int *)(lVar13 + 0xc);
      do {
        plVar16 = *(long **)(lVar13 + 0x10);
        lVar10 = FUN_00a3edb8(local_60);
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_00ae5f9c;
          if (plVar16 == (long *)lVar10) break;
          plVar16 = (long *)*plVar16;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            local_60 = 0;
            lStack_58 = 0;
            plVar16 = (long *)(lVar13 + -0x50);
            if (lVar13 == 0) goto LAB_00ae5e4c;
            plVar14 = *(long **)(lVar13 + 0x1a0);
            if (plVar14 == (long *)0x0) {
              FUN_009c69bc(&local_48,0,plVar16);
              lStack_58 = local_48[0x1b];
              local_60 = local_48[0x1a];
              if ((local_48 == (long *)0x0) ||
                 (uVar11 = FUN_02a43a5c(local_48[0xb]), (uVar11 & 1) == 0)) goto LAB_00ae5f88;
              pcVar12 = *(code **)(*local_48 + 0x20);
              goto LAB_00ae5fb0;
            }
            plVar2 = plVar14 + 10;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((*PTR_DAT_0437a570 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_0437a570);
              local_60 = extraout_d0_00;
              if (iVar9 != 0) {
                FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
                local_60 = __cxa_guard_release(PTR_DAT_0437a570);
              }
            }
            puVar4 = (undefined8 *)PTR_DAT_0437a578;
            if (plVar14[0x19] != 0) {
              puVar4 = (undefined8 *)(plVar14[0x19] + 0x88);
            }
            plVar15 = (long *)*puVar4;
            if (plVar15 == (long *)0x0) {
              FUN_009c69bc(&local_48,local_60,plVar16);
              lStack_58 = local_48[0x1b];
              local_60 = local_48[0x1a];
              if ((local_48 != (long *)0x0) &&
                 (uVar11 = FUN_02a43a5c(local_48[0xb]), (uVar11 & 1) != 0)) {
                pcVar12 = *(code **)(*local_48 + 0x20);
                goto LAB_00ae5fc4;
              }
            }
            else {
              plVar3 = plVar15 + 10;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *(int *)plVar3 = (int)*plVar3 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              sVar8 = FUN_02b68184(plVar15,param_2);
              if (sVar8 < 0) {
                FUN_009c69bc(&local_48,plVar16);
                lStack_58 = local_48[0x1b];
                local_60 = local_48[0x1a];
                if ((local_48 != (long *)0x0) &&
                   (uVar11 = FUN_02a43a5c(local_48[0xb]), (uVar11 & 1) != 0)) {
                  (**(code **)(*local_48 + 0x20))(local_48);
                }
              }
              else {
                FUN_02b6a9fc(plVar15);
                local_60 = CONCAT17(bVar25 & (byte)((ulong)_DAT_038897c0 >> 0x38),
                                    CONCAT16(bVar24 & (byte)((ulong)_DAT_038897c0 >> 0x30),
                                             CONCAT15(bVar23 & (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                      CONCAT14(bVar22 & (byte)((ulong)_DAT_038897c0
                                                                              >> 0x20),
                                                               CONCAT13(bVar21 & (byte)((ulong)
                                                  _DAT_038897c0 >> 0x18),
                                                  CONCAT12(bVar20 & (byte)((ulong)_DAT_038897c0 >>
                                                                          0x10),
                                                           CONCAT11(bVar19 & (byte)((ulong)
                                                  _DAT_038897c0 >> 8),bVar18 & (byte)_DAT_038897c0))
                                                  )))));
                lStack_58 = CONCAT17(bVar33 & (byte)((ulong)_UNK_038897c8 >> 0x38),
                                     CONCAT16(bVar32 & (byte)((ulong)_UNK_038897c8 >> 0x30),
                                              CONCAT15(bVar31 & (byte)((ulong)_UNK_038897c8 >> 0x28)
                                                       ,CONCAT14(bVar30 & (byte)((ulong)
                                                  _UNK_038897c8 >> 0x20),
                                                  CONCAT13(bVar29 & (byte)((ulong)_UNK_038897c8 >>
                                                                          0x18),
                                                           CONCAT12(bVar28 & (byte)((ulong)
                                                  _UNK_038897c8 >> 0x10),
                                                  CONCAT11(bVar27 & (byte)((ulong)_UNK_038897c8 >> 8
                                                                          ),
                                                           bVar26 & (byte)_UNK_038897c8)))))));
              }
              do {
                iVar9 = (int)*plVar3 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *(int *)plVar3 = iVar9;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 == 0) {
                pcVar12 = *(code **)(*plVar15 + 0x10);
                local_48 = plVar15;
LAB_00ae5fc4:
                (*pcVar12)(local_48);
              }
            }
            do {
              iVar9 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              pcVar12 = *(code **)(*plVar14 + 0x10);
              local_48 = plVar14;
LAB_00ae5fb0:
              (*pcVar12)(local_48);
            }
LAB_00ae5f88:
            uVar11 = FUN_02a43a5c(*(undefined8 *)(lVar13 + 8));
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
            goto LAB_00ae5e4c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        local_60 = extraout_d0;
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ae5f9c:
    local_60 = 0;
    lStack_58 = 0;
  }
LAB_00ae5e4c:
  auVar17._8_8_ = lStack_58;
  auVar17._0_8_ = local_60;
  return auVar17;
}


