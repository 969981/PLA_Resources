/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03311a18; name: FUN_03311a18
 */


/* WARNING: Removing unreachable block (ram,0x033129a4) */
/* WARNING: Removing unreachable block (ram,0x03311e10) */
/* WARNING: Removing unreachable block (ram,0x03312768) */
/* WARNING: Removing unreachable block (ram,0x03312880) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_03311a18(long param_1,long param_2,long param_3,long param_4,ulong param_5,uint param_6,
                  int param_7)

{
  double *******pppppppdVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong *puVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint *puVar35;
  ulong *puVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  byte *pbVar39;
  long lVar40;
  undefined1 *puVar41;
  double *******pppppppdVar42;
  double *******pppppppdVar43;
  short sVar44;
  long lVar45;
  double ******ppppppdVar46;
  double *******pppppppdVar47;
  long lVar48;
  double *******pppppppdVar49;
  double *******pppppppdVar50;
  long lVar51;
  long lVar52;
  undefined1 uVar53;
  uint *puVar54;
  undefined1 *puVar55;
  int iVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  uint uVar61;
  long *plVar62;
  long *plVar63;
  long *plVar64;
  float fVar65;
  ulong local_2d00;
  undefined1 *local_2c98;
  undefined8 local_2c90;
  undefined1 auStack_2c88 [3072];
  double *******local_2088;
  uint *local_2080;
  uint *local_2078;
  double *******local_88;
  byte *pbStack_80;
  long *local_78;
  uint local_6c [3];
  
  puVar11 = PTR_PTR_0434a090;
  puVar10 = PTR_PTR_0434a080;
  local_2c98 = auStack_2c88;
  local_2c90 = 0x8000004000000000;
  if (0 < param_7) {
    uVar16 = (uint)param_5;
    lVar51 = (long)(int)uVar16;
    lVar52 = (long)(int)param_6;
    lVar45 = lVar51 * 2;
    iVar18 = 0;
    lVar32 = lVar52 * 2;
    local_2d00 = lVar52 * 4;
    do {
      iVar5 = *(int *)(param_2 + 0x10);
      uVar9 = param_7 - iVar18;
      lVar33 = (long)iVar18;
      uVar19 = uVar9;
      if (0x3ff < (int)uVar9) {
        uVar19 = 0x400;
      }
      uVar17 = (ulong)uVar19;
      if (iVar5 != 0) {
        lVar22 = lVar51 * (lVar33 + 1);
        iVar15 = 0;
        lVar23 = lVar51 * lVar33;
        lVar24 = uVar17 - (uVar17 & 1);
        lVar48 = lVar51 * (lVar33 + 3);
        do {
          lVar58 = *(long *)(param_2 + 8);
          lVar34 = lVar58 + (long)iVar15 * 0x38;
          if (0xc < *(byte *)(lVar34 + 8) - 1) goto switchD_03313170_caseD_3;
          uVar57 = (ulong)*(ushort *)(lVar34 + 0xc);
          uVar7 = *(ushort *)(lVar34 + 10);
          lVar60 = (long)iVar15;
          pppppppdVar47 = (double *******)(param_3 + lVar33 * lVar51 + uVar57);
          pppppppdVar43 = (double *******)(param_4 + lVar33 * lVar52 + (ulong)uVar7);
          switch((uint)*(byte *)(lVar34 + 8)) {
          case 1:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            plVar63 = (long *)0x0;
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 2) {
              pbVar26 = (byte *)0x0;
            }
            if ((pbVar26 != (byte *)0x0) &&
               (plVar63 = (long *)FUN_032e3508(pbVar26), ((ulong)plVar63 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            if ((*pbVar37 & 1) == 0) {
              pbVar39 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar39;
              while ((bVar6 & 1) == 0) {
                pbVar39 = *(byte **)(pbVar39 + 8);
                bVar6 = *pbVar39;
              }
            }
            else {
              pbVar39 = pbVar37;
            }
            plVar13 = (long *)0x0;
            if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 2) {
              pbVar37 = (byte *)0x0;
            }
            if ((pbVar37 != (byte *)0x0) &&
               (plVar13 = (long *)FUN_032e3508(pbVar37), ((ulong)plVar13 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar13 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            if ((int)uVar9 < 1) {
              uVar53 = true;
joined_r0x033131c8:
              if (((ulong)plVar13 & 1) != 0) {
                plVar13 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                plVar64 = plVar13 + 1;
                do {
                  lVar58 = *plVar64;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                  if (bVar12) {
                    *(int *)plVar64 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            }
            else {
              iVar56 = 0;
              plVar64 = plVar63;
              do {
                local_2088 = (double *******)((ulong)local_2088 & 0xffffffffffffff00);
                plVar62 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                (**(code **)(*plVar62 + 0x38))(plVar62,pppppppdVar43,pbVar37,&local_2088);
                plVar63 = (long *)((ulong)plVar64 & 0xfffffffffffffffe);
                local_2d00 = (**(code **)(*plVar63 + 0x30))
                                       (plVar63,pppppppdVar47,pbVar26,(ulong)local_2088 & 0xff);
                if ((int)local_2d00 < 0) {
                  uVar53 = false;
                  plVar63 = plVar64;
                  goto joined_r0x033131c8;
                }
                if (((ulong)plVar64 & 1) != 0) {
                  plVar64 = plVar63 + 1;
                  do {
                    lVar58 = *plVar64;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                    if (bVar12) {
                      *(int *)plVar64 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar63 + 8))(plVar63);
                  }
                }
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                if (((ulong)plVar13 & 1) != 0) {
                  plVar13 = plVar62 + 1;
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                iVar56 = iVar56 + 1;
                plVar64 = plVar63;
                plVar13 = plVar62;
              } while (iVar56 < (int)uVar19);
              uVar53 = true;
            }
            if (((ulong)plVar63 & 1) != 0) {
              plVar63 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              plVar13 = plVar63 + 1;
              do {
                lVar58 = *plVar13;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar12) {
                  *(int *)plVar13 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar63 + 8))();
              }
            }
            goto LAB_03313208;
          case 2:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            plVar63 = (long *)0x0;
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 4) {
              pbVar26 = (byte *)0x0;
            }
            if ((pbVar26 != (byte *)0x0) &&
               (plVar63 = (long *)FUN_032e3508(pbVar26), ((ulong)plVar63 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            if ((*pbVar37 & 1) == 0) {
              pbVar39 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar39;
              while ((bVar6 & 1) == 0) {
                pbVar39 = *(byte **)(pbVar39 + 8);
                bVar6 = *pbVar39;
              }
            }
            else {
              pbVar39 = pbVar37;
            }
            plVar13 = (long *)0x0;
            if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 4) {
              pbVar37 = (byte *)0x0;
            }
            if ((pbVar37 != (byte *)0x0) &&
               (plVar13 = (long *)FUN_032e3508(pbVar37), ((ulong)plVar13 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar13 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            if ((int)uVar9 < 1) {
              uVar53 = true;
joined_r0x033131f0:
              if (((ulong)plVar13 & 1) != 0) {
                plVar13 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                plVar64 = plVar13 + 1;
                do {
                  lVar58 = *plVar64;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                  if (bVar12) {
                    *(int *)plVar64 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            }
            else {
              iVar56 = 0;
              plVar64 = plVar63;
              do {
                local_2088 = (double *******)0x0;
                plVar62 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                local_2080 = (uint *)((ulong)local_2080 & 0xffffffffffffff00);
                (**(code **)(*plVar62 + 0x38))(plVar62,pppppppdVar43,pbVar37,&local_2088);
                plVar63 = (long *)((ulong)plVar64 & 0xfffffffffffffffe);
                local_2d00 = (**(code **)(*plVar63 + 0x30))
                                       (plVar63,pppppppdVar47,pbVar26,&local_2088);
                if ((int)local_2d00 < 0) {
                  uVar53 = false;
                  plVar63 = plVar64;
                  goto joined_r0x033131f0;
                }
                if (((ulong)plVar64 & 1) != 0) {
                  plVar64 = plVar63 + 1;
                  do {
                    lVar58 = *plVar64;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                    if (bVar12) {
                      *(int *)plVar64 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar63 + 8))(plVar63);
                  }
                }
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                if (((ulong)plVar13 & 1) != 0) {
                  plVar13 = plVar62 + 1;
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                iVar56 = iVar56 + 1;
                plVar64 = plVar63;
                plVar13 = plVar62;
              } while (iVar56 < (int)uVar19);
              uVar53 = true;
            }
            if (((ulong)plVar63 & 1) != 0) {
              plVar63 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              plVar13 = plVar63 + 1;
              do {
                iVar56 = (int)*plVar13;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar12) {
                  *(int *)plVar13 = iVar56 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_03313370:
              if ((plVar63 != (long *)0x0) && (iVar56 == 1)) {
                (**(code **)(*plVar63 + 8))();
              }
            }
            goto LAB_03313208;
          case 3:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            plVar63 = (long *)0x0;
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 5) {
              pbVar26 = (byte *)0x0;
            }
            if ((pbVar26 != (byte *)0x0) &&
               (plVar63 = (long *)FUN_032e3508(pbVar26), ((ulong)plVar63 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            if ((*pbVar37 & 1) == 0) {
              pbVar39 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar39;
              while ((bVar6 & 1) == 0) {
                pbVar39 = *(byte **)(pbVar39 + 8);
                bVar6 = *pbVar39;
              }
            }
            else {
              pbVar39 = pbVar37;
            }
            plVar13 = (long *)0x0;
            if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 5) {
              pbVar37 = (byte *)0x0;
            }
            if ((pbVar37 != (byte *)0x0) &&
               (plVar13 = (long *)FUN_032e3508(pbVar37), ((ulong)plVar13 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar13 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            if ((int)uVar9 < 1) {
              uVar53 = true;
joined_r0x0331319c:
              if (((ulong)plVar13 & 1) != 0) {
                plVar13 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                plVar64 = plVar13 + 1;
                do {
                  lVar58 = *plVar64;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                  if (bVar12) {
                    *(int *)plVar64 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            }
            else {
              iVar56 = 0;
              plVar64 = plVar63;
              do {
                local_2088 = (double *******)0x0;
                plVar62 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                (**(code **)(*plVar62 + 0x38))(plVar62,pppppppdVar43,pbVar37,&local_2088);
                plVar63 = (long *)((ulong)plVar64 & 0xfffffffffffffffe);
                local_2d00 = (**(code **)(*plVar63 + 0x30))
                                       (local_2088,plVar63,pppppppdVar47,pbVar26);
                if ((int)local_2d00 < 0) {
                  uVar53 = false;
                  plVar63 = plVar64;
                  goto joined_r0x0331319c;
                }
                if (((ulong)plVar64 & 1) != 0) {
                  plVar64 = plVar63 + 1;
                  do {
                    lVar58 = *plVar64;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                    if (bVar12) {
                      *(int *)plVar64 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar63 + 8))(plVar63);
                  }
                }
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                if (((ulong)plVar13 & 1) != 0) {
                  plVar13 = plVar62 + 1;
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                iVar56 = iVar56 + 1;
                plVar64 = plVar63;
                plVar13 = plVar62;
              } while (iVar56 < (int)uVar19);
              uVar53 = true;
            }
            if (((ulong)plVar63 & 1) != 0) {
              plVar63 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              plVar13 = plVar63 + 1;
              do {
                iVar56 = (int)*plVar13;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar12) {
                  *(int *)plVar13 = iVar56 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              goto LAB_03313370;
            }
LAB_03313208:
            if (!(bool)uVar53) goto LAB_033121b8;
            break;
          case 4:
            local_2080 = *(uint **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar25 = local_2080;
            if ((*local_2080 & 1) == 0) {
              puVar25 = *(uint **)(local_2080 + 2);
              bVar6 = (byte)*puVar25;
              while ((bVar6 & 1) == 0) {
                puVar25 = *(uint **)(puVar25 + 2);
                bVar6 = (byte)*puVar25;
              }
            }
            if ((*(ulong *)(puVar25 + 4) & 0x1f) != 6) {
              local_2080 = (uint *)0x0;
            }
            local_2088 = pppppppdVar47;
            if (local_2080 == (uint *)0x0) {
              local_2078 = (uint *)0x0;
            }
            else {
              local_2078 = (uint *)FUN_032e3508();
              if (((ulong)local_2078 & 1) != 0) {
                piVar3 = (int *)(((ulong)local_2078 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            puVar25 = local_2078;
            pbStack_80 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            pbVar26 = pbStack_80;
            if ((*pbStack_80 & 1) == 0) {
              pbVar26 = *(byte **)(pbStack_80 + 8);
              bVar6 = *pbVar26;
              while ((bVar6 & 1) == 0) {
                pbVar26 = *(byte **)(pbVar26 + 8);
                bVar6 = *pbVar26;
              }
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) == 6) {
              plVar63 = (long *)0x0;
              local_88 = pppppppdVar43;
              if (pbStack_80 != (byte *)0x0) {
                plVar63 = (long *)FUN_032e3508();
              }
            }
            else {
              plVar63 = (long *)0x0;
              pbStack_80 = (byte *)0x0;
              local_88 = pppppppdVar43;
            }
            local_78 = plVar63;
            if (((ulong)plVar63 & 1) == 0) {
              FUN_03314ee0(param_1,&local_2088,&local_88,param_5 & 0xffffffff,param_6,uVar19);
            }
            else {
              plVar63 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              plVar13 = plVar63 + 1;
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar12) {
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              FUN_03314ee0(param_1,&local_2088,&local_88,param_5,param_6,uVar19);
              do {
                lVar58 = *plVar13;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar12) {
                  *(int *)plVar13 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar63 + 8))(plVar63);
              }
            }
            if (((ulong)puVar25 & 1) != 0) {
              plVar13 = (long *)((ulong)puVar25 & 0xfffffffffffffffe);
              plVar63 = plVar13 + 1;
              do {
                lVar58 = *plVar63;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                if (bVar12) {
                  *(int *)plVar63 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            local_2d00 = 0;
            break;
          case 5:
            if ((int)(local_2c90._4_4_ & 0x3fffffff) < (int)((int)local_2c90 + uVar19)) {
              local_2c98 = (undefined1 *)
                           FUN_03315ae4(puVar11,(int)local_2c90 + uVar19,local_2c98,
                                        local_2c90 & 0xffffffff,(long)&local_2c90 + 4);
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            pbVar26 = pbVar37;
            if ((*pbVar37 & 1) == 0) {
              for (pbVar26 = *(byte **)(pbVar37 + 8); (*pbVar26 & 1) == 0;
                  pbVar26 = *(byte **)(pbVar26 + 8)) {
              }
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) == 3) {
              if (pbVar37 == (byte *)0x0) goto LAB_033120ec;
              uVar57 = FUN_032e3508(pbVar37);
              if ((uVar57 & 1) != 0) {
                piVar3 = (int *)((uVar57 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            else {
              pbVar37 = (byte *)0x0;
LAB_033120ec:
              uVar57 = 0;
            }
            pbVar39 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            pbVar26 = pbVar39;
            if ((*pbVar39 & 1) == 0) {
              for (pbVar26 = *(byte **)(pbVar39 + 8); (*pbVar26 & 1) == 0;
                  pbVar26 = *(byte **)(pbVar26 + 8)) {
              }
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) == 3) {
              if (pbVar39 == (byte *)0x0) goto LAB_03312130;
              plVar63 = (long *)FUN_032e3508(pbVar39);
              if (((ulong)plVar63 & 1) != 0) {
                piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            else {
              pbVar39 = (byte *)0x0;
LAB_03312130:
              plVar63 = (long *)0x0;
            }
            if ((int)uVar9 < 1) {
              if (((ulong)plVar63 & 1) != 0) {
                plVar63 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
                plVar13 = plVar63 + 1;
                do {
                  lVar58 = *plVar13;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar12) {
                    *(int *)plVar13 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar63 + 8))();
                }
              }
              if ((uVar57 & 1) != 0) {
                plVar63 = (long *)(uVar57 & 0xfffffffffffffffe);
                plVar13 = plVar63 + 1;
                do {
                  iVar56 = (int)*plVar13;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar12) {
                    *(int *)plVar13 = iVar56 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                goto LAB_033145ac;
              }
            }
            else {
              iVar56 = 0;
              do {
                if ((uVar57 & 1) != 0) {
                  piVar3 = (int *)((uVar57 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar12) {
                      *piVar3 = *piVar3 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                if (((ulong)plVar63 & 1) != 0) {
                  piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar12) {
                      *piVar3 = *piVar3 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                iVar2 = (int)local_2c90 + 1;
                if ((int)(local_2c90._4_4_ & 0x3fffffff) <= (int)local_2c90) {
                  local_2c98 = (undefined1 *)
                               FUN_03315ae4(puVar11,iVar2,local_2c98,local_2c90 & 0xffffffff,
                                            (long)&local_2c90 + 4);
                }
                puVar38 = (undefined8 *)(local_2c98 + (long)(int)local_2c90 * 0x30);
                puVar38[2] = uVar57;
                *puVar38 = pppppppdVar47;
                puVar38[1] = pbVar37;
                if ((uVar57 & 1) != 0) {
                  piVar3 = (int *)((uVar57 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar12) {
                      *piVar3 = *piVar3 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                *(double ********)(local_2c98 + (long)(int)local_2c90 * 0x30 + 0x18) = pppppppdVar43
                ;
                *(byte **)(local_2c98 + (long)(int)local_2c90 * 0x30 + 0x20) = pbVar39;
                *(long **)(local_2c98 + (long)(int)local_2c90 * 0x30 + 0x28) = plVar63;
                if (((ulong)plVar63 & 1) == 0) {
LAB_03311eac:
                  local_2c90 = CONCAT44(local_2c90._4_4_,iVar2);
                }
                else {
                  plVar64 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
                  plVar13 = plVar64 + 1;
                  do {
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)*plVar13 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  local_2c90 = CONCAT44(local_2c90._4_4_,iVar2);
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar64 == (long *)0x0) || ((int)lVar58 != 1)) goto LAB_03311eac;
                  (**(code **)(*plVar64 + 8))();
                }
                if ((uVar57 & 1) != 0) {
                  plVar64 = (long *)(uVar57 & 0xfffffffffffffffe);
                  plVar13 = plVar64 + 1;
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar64 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar64 + 8))(plVar64);
                  }
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar64 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar64 + 8))(plVar64);
                  }
                }
                uVar57 = uVar57 & 0xfffffffffffffffe;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                plVar13 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
                if (((ulong)plVar63 & 1) != 0) {
                  plVar63 = plVar13 + 1;
                  do {
                    lVar58 = *plVar63;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                    if (bVar12) {
                      *(int *)plVar63 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar13 + 8))(plVar13);
                  }
                }
                iVar56 = iVar56 + 1;
                plVar63 = plVar13;
              } while (iVar56 < (int)uVar19);
            }
            break;
          case 6:
            lVar34 = *(long *)(lVar58 + lVar60 * 0x38 + 0x20);
            if (lVar34 == 0) {
              uVar57 = 0;
            }
            else {
              uVar57 = FUN_032e3508(lVar34);
              if ((uVar57 & 1) != 0) {
                piVar3 = (int *)((uVar57 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            lVar40 = *(long *)(lVar58 + lVar60 * 0x38 + 0x18);
            if (lVar40 == 0) {
              uVar28 = 0;
            }
            else {
              uVar28 = FUN_032e3508(lVar40);
              if ((uVar28 & 1) != 0) {
                piVar3 = (int *)((uVar28 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            local_2d00 = (**(code **)(lVar58 + lVar60 * 0x38 + 0x28))
                                   (pppppppdVar47,lVar34,pppppppdVar43,lVar40,uVar19);
            if ((uVar28 & 1) != 0) {
              plVar13 = (long *)(uVar28 & 0xfffffffffffffffe);
              plVar63 = plVar13 + 1;
              do {
                lVar58 = *plVar63;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                if (bVar12) {
                  *(int *)plVar63 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            if ((uVar57 & 1) != 0) {
              plVar13 = (long *)(uVar57 & 0xfffffffffffffffe);
              plVar63 = plVar13 + 1;
              do {
                lVar58 = *plVar63;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                if (bVar12) {
                  *(int *)plVar63 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            if ((int)local_2d00 < 0) goto LAB_033121b8;
            break;
          case 7:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 4) {
              pbVar26 = (byte *)0x0;
            }
            bVar6 = *pbVar26;
            while ((bVar6 & 1) == 0) {
              pbVar26 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar26;
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar30 = *(uint *)(pbVar26 + 0x10);
            if ((*pbVar37 & 1) == 0) {
              pbVar26 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar26;
              while ((bVar6 & 1) == 0) {
                pbVar26 = *(byte **)(pbVar26 + 8);
                bVar6 = *pbVar26;
              }
            }
            else {
              pbVar26 = pbVar37;
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) != 4) {
              pbVar37 = (byte *)0x0;
            }
            bVar6 = *pbVar37;
            while ((bVar6 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar37;
            }
            uVar20 = *(uint *)(pbVar37 + 0x10);
            uVar61 = (uVar30 >> 10) + 7 >> 3;
            uVar28 = (ulong)uVar61;
            uVar31 = (uVar20 >> 10) + 7 >> 3;
            uVar59 = (ulong)uVar31;
            iVar56 = uVar61 - uVar31;
            uVar4 = (uVar30 ^ uVar20) >> 8 & 1;
            if (iVar56 < 1) {
              if ((uVar20 & 0x100) != 0) {
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)-iVar56);
              }
              if (uVar4 == 0) {
                if ((uVar61 == uVar16) && (uVar61 == param_6)) {
                  memcpy(pppppppdVar47,pppppppdVar43,(ulong)(uVar19 * param_6));
                }
                else if ((uVar61 != 0) && (0 < (int)uVar9)) {
                  uVar30 = 0;
                  do {
                    if (uVar28 - 1 < 7) {
                      lVar58 = 0;
                    }
                    else {
                      lVar58 = 0;
                      do {
                        puVar55 = (undefined1 *)((long)pppppppdVar43 + lVar58);
                        puVar41 = (undefined1 *)((long)pppppppdVar47 + lVar58);
                        lVar58 = lVar58 + 8;
                        *puVar41 = *puVar55;
                        puVar41[1] = puVar55[1];
                        puVar41[2] = puVar55[2];
                        puVar41[3] = puVar55[3];
                        puVar41[4] = puVar55[4];
                        puVar41[5] = puVar55[5];
                        puVar41[6] = puVar55[6];
                        puVar41[7] = puVar55[7];
                      } while (uVar28 - (uVar28 & 7) != lVar58);
                    }
                    if ((uVar61 & 7) != 0) {
                      uVar57 = uVar28 & 7;
                      do {
                        uVar57 = uVar57 - 1;
                        *(undefined1 *)((long)pppppppdVar47 + lVar58) =
                             *(undefined1 *)((long)pppppppdVar43 + lVar58);
                        lVar58 = lVar58 + 1;
                      } while (uVar57 != 0);
                    }
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                    uVar30 = uVar30 + 1;
                  } while (uVar30 != uVar19);
                }
              }
              else if (0 < (int)uVar9) {
                switch(uVar61) {
                case 1:
                  if (uVar17 - 1 < 3) {
                    lVar58 = 0;
                  }
                  else {
                    lVar58 = 0;
                    lVar34 = param_3 + uVar57;
                    pppppppdVar47 = pppppppdVar43;
                    do {
                      lVar58 = lVar58 + 4;
                      *(undefined1 *)(lVar23 + lVar34) = *(undefined1 *)pppppppdVar47;
                      *(undefined1 *)(lVar22 + lVar34) =
                           *(undefined1 *)(lVar52 + (long)pppppppdVar47);
                      *(undefined1 *)(lVar51 * (lVar33 + 2) + lVar34) =
                           *(undefined1 *)(lVar32 + (long)pppppppdVar47);
                      *(undefined1 *)(lVar48 + lVar34) =
                           *(undefined1 *)(lVar52 * 3 + (long)pppppppdVar47);
                      lVar34 = lVar34 + lVar51 * 4;
                      pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar52 * 4);
                    } while (uVar17 - (uVar17 & 3) != lVar58);
                  }
                  if ((uVar19 & 3) != 0) {
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52 * lVar58);
                    puVar55 = (undefined1 *)(param_3 + lVar51 * (lVar33 + lVar58) + uVar57);
                    uVar57 = uVar17 & 3;
                    do {
                      *puVar55 = *(undefined1 *)pppppppdVar43;
                      pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                      uVar57 = uVar57 - 1;
                      puVar55 = puVar55 + lVar51;
                    } while (uVar57 != 0);
                  }
                  break;
                case 2:
                  if (uVar17 == 1) {
                    lVar58 = 0;
                  }
                  else {
                    lVar58 = 0;
                    lVar34 = param_3 + uVar57;
                    pppppppdVar42 = pppppppdVar43;
                    do {
                      lVar58 = lVar58 + 2;
                      *(ushort *)(lVar23 + lVar34) =
                           *(ushort *)pppppppdVar42 >> 8 | *(ushort *)pppppppdVar42 << 8;
                      *(ushort *)(lVar22 + lVar34) =
                           *(ushort *)(lVar52 + (long)pppppppdVar42) >> 8 |
                           *(ushort *)(lVar52 + (long)pppppppdVar42) << 8;
                      lVar34 = lVar34 + lVar45;
                      pppppppdVar42 = (double *******)((long)pppppppdVar42 + lVar32);
                    } while (lVar24 != lVar58);
                  }
                  if ((uVar19 & 1) != 0) {
                    uVar7 = *(ushort *)(lVar58 * lVar52 + (long)pppppppdVar43);
                    *(ushort *)(lVar58 * lVar51 + (long)pppppppdVar47) = uVar7 >> 8 | uVar7 << 8;
                  }
                  break;
                case 3:
                case 5:
                case 6:
                case 7:
                  goto switchD_03313170_caseD_3;
                case 4:
                  if (uVar17 == 1) {
                    lVar58 = 0;
                  }
                  else {
                    lVar58 = 0;
                    lVar34 = param_3 + uVar57;
                    pppppppdVar42 = pppppppdVar43;
                    do {
                      uVar30 = (*(uint *)pppppppdVar42 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar42 & 0xff00ff) << 8;
                      *(uint *)(lVar23 + lVar34) = uVar30 >> 0x10 | uVar30 << 0x10;
                      uVar30 = (*(uint *)(lVar52 + (long)pppppppdVar42) & 0xff00ff00) >> 8 |
                               (*(uint *)(lVar52 + (long)pppppppdVar42) & 0xff00ff) << 8;
                      *(uint *)(lVar22 + lVar34) = uVar30 >> 0x10 | uVar30 << 0x10;
                      lVar34 = lVar34 + lVar45;
                      pppppppdVar42 = (double *******)((long)pppppppdVar42 + lVar32);
                      lVar58 = lVar58 + 2;
                    } while (lVar24 != lVar58);
                  }
                  if ((uVar19 & 1) != 0) {
                    uVar30 = *(uint *)(lVar58 * lVar52 + (long)pppppppdVar43);
                    uVar30 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
                    *(uint *)(lVar58 * lVar51 + (long)pppppppdVar47) =
                         uVar30 >> 0x10 | uVar30 << 0x10;
                  }
                  break;
                case 8:
                  if (uVar17 == 1) {
                    lVar58 = 0;
                  }
                  else {
                    lVar58 = 0;
                    lVar34 = param_3 + uVar57;
                    pppppppdVar42 = pppppppdVar43;
                    do {
                      uVar57 = ((ulong)*pppppppdVar42 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar42 & 0xff00ff00ff00ff) << 8;
                      uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar57 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar23 + lVar34) = uVar57 >> 0x20 | uVar57 << 0x20;
                      uVar57 = (*(ulong *)(lVar52 + (long)pppppppdVar42) & 0xff00ff00ff00ff00) >> 8
                               | (*(ulong *)(lVar52 + (long)pppppppdVar42) & 0xff00ff00ff00ff) << 8;
                      uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar57 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar22 + lVar34) = uVar57 >> 0x20 | uVar57 << 0x20;
                      pppppppdVar42 = (double *******)((long)pppppppdVar42 + lVar32);
                      lVar34 = lVar34 + lVar45;
                      lVar58 = lVar58 + 2;
                    } while (lVar24 != lVar58);
                  }
                  if ((uVar19 & 1) != 0) {
                    ppppppdVar46 = *(double *******)(lVar58 * lVar52 + (long)pppppppdVar43);
                    uVar57 = ((ulong)ppppppdVar46 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar46 & 0xff00ff00ff00ff) << 8;
                    uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar57 & 0xffff0000ffff) << 0x10;
                    *(double *******)(lVar58 * lVar51 + (long)pppppppdVar47) =
                         (double ******)(uVar57 >> 0x20 | uVar57 << 0x20);
                  }
                }
              }
            }
            else {
              bVar12 = (uVar30 & 0x100) != 0;
              uVar30 = uVar31 - 1;
              if (bVar12) {
                uVar30 = uVar31;
              }
              lVar58 = 1;
              if (bVar12) {
                lVar58 = (long)-iVar56;
              }
              lVar34 = 0;
              if (bVar12) {
                lVar34 = (long)iVar56;
              }
              if (0 < (int)uVar9) {
                lVar60 = (long)(int)uVar30;
                if (uVar4 == 0) {
                  uVar30 = uVar19;
                  if (uVar31 == 0) {
                    do {
                      if ((uVar20 >> 9 & 1) != 0) {
                        FUN_032c4b00((char *)((long)pppppppdVar47 + lVar60) + lVar58,
                                     (int)*(char *)((long)pppppppdVar47 + lVar60) >> 0x1f & 0xff,
                                     iVar56);
                      }
                      pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                      uVar30 = uVar30 - 1;
                    } while (uVar30 != 0);
                  }
                  else {
                    uVar30 = 0;
                    do {
                      if (uVar59 - 1 < 7) {
                        lVar40 = 0;
                      }
                      else {
                        lVar40 = 0;
                        do {
                          puVar55 = (undefined1 *)((long)pppppppdVar43 + lVar40 + 3);
                          puVar41 = (undefined1 *)((long)pppppppdVar47 + lVar40 + lVar34 + 3);
                          lVar40 = lVar40 + 8;
                          puVar41[-3] = puVar55[-3];
                          puVar41[-2] = puVar55[-2];
                          puVar41[-1] = puVar55[-1];
                          *puVar41 = *puVar55;
                          puVar41[1] = puVar55[1];
                          puVar41[2] = puVar55[2];
                          puVar41[3] = puVar55[3];
                          puVar41[4] = puVar55[4];
                        } while (uVar59 - (uVar59 & 7) != lVar40);
                      }
                      if ((uVar31 & 7) != 0) {
                        puVar55 = (undefined1 *)((long)pppppppdVar47 + lVar40 + lVar34);
                        puVar41 = (undefined1 *)((long)pppppppdVar43 + lVar40);
                        uVar57 = uVar59 & 7;
                        do {
                          uVar57 = uVar57 - 1;
                          *puVar55 = *puVar41;
                          puVar55 = puVar55 + 1;
                          puVar41 = puVar41 + 1;
                        } while (uVar57 != 0);
                      }
                      if ((uVar20 >> 9 & 1) != 0) {
                        FUN_032c4b00((char *)((long)pppppppdVar47 + lVar60) + lVar58,
                                     (int)*(char *)((long)pppppppdVar47 + lVar60) >> 0x1f & 0xff,
                                     iVar56);
                      }
                      pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                      pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                      uVar30 = uVar30 + 1;
                    } while (uVar30 != uVar19);
                  }
                }
                else {
                  if (uVar31 != 1) {
                    uVar30 = uVar19;
                    if (uVar31 != 2) goto LAB_033139fc;
                    do {
                      *(ushort *)((long)pppppppdVar47 + lVar34) =
                           *(ushort *)pppppppdVar43 >> 8 | *(ushort *)pppppppdVar43 << 8;
                      while( true ) {
                        if ((uVar20 >> 9 & 1) != 0) {
                          FUN_032c4b00((char *)((long)pppppppdVar47 + lVar60) + lVar58,
                                       (int)*(char *)((long)pppppppdVar47 + lVar60) >> 0x1f & 0xff,
                                       iVar56);
                        }
                        pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                        pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                        uVar30 = uVar30 - 1;
                        if (uVar30 == 0) goto switchD_03313170_default;
                        if (uVar31 == 2) break;
LAB_033139fc:
                        if (uVar31 == 4) {
                          uVar61 = (*(uint *)pppppppdVar43 & 0xff00ff00) >> 8 |
                                   (*(uint *)pppppppdVar43 & 0xff00ff) << 8;
                          *(uint *)((long)pppppppdVar47 + lVar34) = uVar61 >> 0x10 | uVar61 << 0x10;
                        }
                        else if (uVar31 == 8) {
                          uVar57 = ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff00) >> 8 |
                                   ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff) << 8;
                          uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar57 & 0xffff0000ffff) << 0x10;
                          *(ulong *)((long)pppppppdVar47 + lVar34) = uVar57 >> 0x20 | uVar57 << 0x20
                          ;
                        }
                      }
                    } while( true );
                  }
                  uVar30 = uVar19;
                  do {
                    *(undefined1 *)(lVar34 + (long)pppppppdVar47) = *(undefined1 *)pppppppdVar43;
                    if ((uVar20 >> 9 & 1) != 0) {
                      FUN_032c4b00((char *)((long)pppppppdVar47 + lVar60) + lVar58,
                                   (int)*(char *)((long)pppppppdVar47 + lVar60) >> 0x1f & 0xff,
                                   iVar56);
                    }
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                }
              }
            }
switchD_03313170_default:
            break;
          case 8:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 5) {
              pbVar26 = (byte *)0x0;
            }
            bVar6 = *pbVar26;
            while ((bVar6 & 1) == 0) {
              pbVar26 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar26;
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar30 = *(uint *)(pbVar26 + 0x10);
            if ((*pbVar37 & 1) == 0) {
              pbVar26 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar26;
              while ((bVar6 & 1) == 0) {
                pbVar26 = *(byte **)(pbVar26 + 8);
                bVar6 = *pbVar26;
              }
            }
            else {
              pbVar26 = pbVar37;
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) != 5) {
              pbVar37 = (byte *)0x0;
            }
            bVar6 = *pbVar37;
            while ((bVar6 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar37;
            }
            uVar20 = *(uint *)(pbVar37 + 0x10);
            bVar12 = (uVar20 & 0x100) == 0;
            pppppppdVar42 = (double *******)&local_2088;
            if (bVar12) {
              pppppppdVar42 = pppppppdVar43;
            }
            uVar61 = 8;
            if (bVar12) {
              uVar61 = param_6;
            }
            if ((uVar20 >> 8 & 1) != 0) {
              switch((uVar20 >> 10 & 1) + (uVar20 >> 0xb & 0x1f) + (uVar20 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                pppppppdVar1 = (double *******)((long)&local_2088 + (long)(int)(uVar19 << 3));
                if (&local_2088 < pppppppdVar1) {
                  pppppppdVar50 = (double *******)&local_2088;
                  do {
                    uVar53 = *(undefined1 *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                    pppppppdVar49 = pppppppdVar50 + 1;
                    *(undefined1 *)pppppppdVar50 = uVar53;
                    pppppppdVar50 = pppppppdVar49;
                  } while (pppppppdVar49 < pppppppdVar1);
                }
                break;
              case 2:
                pppppppdVar1 = (double *******)((long)&local_2088 + (long)(int)(uVar19 << 3));
                if (&local_2088 < pppppppdVar1) {
                  pppppppdVar50 = (double *******)&local_2088;
                  do {
                    pppppppdVar49 = pppppppdVar50 + 1;
                    *(ushort *)pppppppdVar50 =
                         *(ushort *)pppppppdVar43 >> 8 | *(ushort *)pppppppdVar43 << 8;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                    pppppppdVar50 = pppppppdVar49;
                  } while (pppppppdVar49 < pppppppdVar1);
                }
                break;
              case 4:
                pppppppdVar1 = (double *******)((long)&local_2088 + (long)(int)(uVar19 << 3));
                if (&local_2088 < pppppppdVar1) {
                  pppppppdVar50 = (double *******)&local_2088;
                  do {
                    uVar31 = (*(uint *)pppppppdVar43 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar43 & 0xff00ff) << 8;
                    pppppppdVar49 = pppppppdVar50 + 1;
                    *(uint *)pppppppdVar50 = uVar31 >> 0x10 | uVar31 << 0x10;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                    pppppppdVar50 = pppppppdVar49;
                  } while (pppppppdVar49 < pppppppdVar1);
                }
                break;
              case 8:
                pppppppdVar1 = (double *******)((long)&local_2088 + (long)(int)(uVar19 << 3));
                if (&local_2088 < pppppppdVar1) {
                  pppppppdVar50 = (double *******)&local_2088;
                  do {
                    uVar57 = ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff) << 8;
                    uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar57 & 0xffff0000ffff) << 0x10;
                    pppppppdVar49 = pppppppdVar50 + 1;
                    *pppppppdVar50 = (double ******)(uVar57 >> 0x20 | uVar57 << 0x20);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                    pppppppdVar50 = pppppppdVar49;
                  } while (pppppppdVar49 < pppppppdVar1);
                }
              }
              uVar20 = uVar20 & 0xfffffeff;
            }
            bVar12 = (uVar30 & 0x100) == 0;
            pppppppdVar43 = (double *******)&local_2088;
            if (bVar12) {
              pppppppdVar43 = pppppppdVar47;
            }
            uVar31 = 8;
            if (bVar12) {
              uVar31 = uVar16;
            }
            uVar4 = uVar30 & 0xfffffeff;
            if (uVar20 == 0x345e05) {
              if (uVar4 == 0x345e05) {
                pppppppdVar1 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19));
                if (pppppppdVar43 < pppppppdVar1) {
                  do {
                    *pppppppdVar43 = *pppppppdVar42;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                    pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                  } while (pppppppdVar43 < pppppppdVar1);
                }
              }
              else if (uVar4 == 0x174605) {
                pppppppdVar1 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19));
                if (pppppppdVar43 < pppppppdVar1) {
                  do {
                    ppppppdVar46 = *pppppppdVar42;
                    pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                    *(float *)pppppppdVar43 = (float)(double)ppppppdVar46;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  } while (pppppppdVar43 < pppppppdVar1);
                }
              }
              else if ((uVar4 == 0x74605) &&
                      (pppppppdVar1 = (double *******)
                                      ((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19)),
                      pppppppdVar43 < pppppppdVar1)) {
                do {
                  *(short *)pppppppdVar43 =
                       (short)((uint)((float)(double)*pppppppdVar42 * 1.0039062) >> 0x10);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                } while (pppppppdVar43 < pppppppdVar1);
              }
            }
            else if (uVar20 == 0x174605) {
              if (uVar4 == 0x345e05) {
                pppppppdVar1 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19));
                if (pppppppdVar43 < pppppppdVar1) {
                  do {
                    fVar65 = *(float *)pppppppdVar42;
                    pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                    *pppppppdVar43 = (double ******)(double)fVar65;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  } while (pppppppdVar43 < pppppppdVar1);
                }
              }
              else if (uVar4 == 0x174605) {
                pppppppdVar1 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19));
                if (pppppppdVar43 < pppppppdVar1) {
                  do {
                    *(uint *)pppppppdVar43 = *(uint *)pppppppdVar42;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                    pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                  } while (pppppppdVar43 < pppppppdVar1);
                }
              }
              else if ((uVar4 == 0x74605) &&
                      (pppppppdVar1 = (double *******)
                                      ((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19)),
                      pppppppdVar43 < pppppppdVar1)) {
                do {
                  *(short *)pppppppdVar43 =
                       (short)((uint)(*(float *)pppppppdVar42 * 1.0039062) >> 0x10);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                } while (pppppppdVar43 < pppppppdVar1);
              }
            }
            else if (uVar20 == 0x74605) {
              if (uVar4 == 0x345e05) {
                pppppppdVar1 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19));
                if (pppppppdVar43 < pppppppdVar1) {
                  do {
                    uVar7 = *(ushort *)pppppppdVar42;
                    pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                    *pppppppdVar43 = (double ******)(double)(float)((uint)uVar7 << 0x10);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  } while (pppppppdVar43 < pppppppdVar1);
                }
              }
              else if (uVar4 == 0x174605) {
                pppppppdVar1 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19));
                if (pppppppdVar43 < pppppppdVar1) {
                  do {
                    uVar7 = *(ushort *)pppppppdVar42;
                    pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                    *(uint *)pppppppdVar43 = (uint)uVar7 << 0x10;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  } while (pppppppdVar43 < pppppppdVar1);
                }
              }
              else if ((uVar4 == 0x74605) &&
                      (pppppppdVar1 = (double *******)
                                      ((long)pppppppdVar43 + (long)(int)(uVar31 * uVar19)),
                      pppppppdVar43 < pppppppdVar1)) {
                do {
                  *(undefined2 *)pppppppdVar43 = *(undefined2 *)pppppppdVar42;
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar31);
                  pppppppdVar42 = (double *******)((long)pppppppdVar42 + (long)(int)uVar61);
                } while (pppppppdVar43 < pppppppdVar1);
              }
            }
            if (((uVar30 >> 8 & 1) != 0) &&
               (uVar30 = (uVar30 >> 10 & 1) + (uVar30 >> 0xb & 0x1f) + (uVar30 >> 0x10 & 0xff) + 7
                         >> 3, uVar30 - 1 < 8)) {
              pppppppdVar43 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar19 * uVar16));
              switch(uVar30) {
              case 1:
                if (pppppppdVar47 < pppppppdVar43) {
                  pppppppdVar42 = (double *******)&local_2088;
                  do {
                    *(undefined1 *)pppppppdVar47 = *(undefined1 *)pppppppdVar42;
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar42 = pppppppdVar42 + 1;
                  } while (pppppppdVar47 < pppppppdVar43);
                }
                break;
              case 2:
                if (pppppppdVar47 < pppppppdVar43) {
                  pppppppdVar42 = (double *******)&local_2088;
                  do {
                    *(ushort *)pppppppdVar47 =
                         *(ushort *)pppppppdVar42 >> 8 | *(ushort *)pppppppdVar42 << 8;
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar42 = pppppppdVar42 + 1;
                  } while (pppppppdVar47 < pppppppdVar43);
                }
                break;
              case 4:
                if (pppppppdVar47 < pppppppdVar43) {
                  pppppppdVar42 = (double *******)&local_2088;
                  do {
                    uVar30 = (*(uint *)pppppppdVar42 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar42 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar47 = uVar30 >> 0x10 | uVar30 << 0x10;
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar42 = pppppppdVar42 + 1;
                  } while (pppppppdVar47 < pppppppdVar43);
                }
                break;
              case 8:
                if (pppppppdVar47 < pppppppdVar43) {
                  pppppppdVar42 = (double *******)&local_2088;
                  do {
                    uVar57 = ((ulong)*pppppppdVar42 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar42 & 0xff00ff00ff00ff) << 8;
                    uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar57 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar47 = (double ******)(uVar57 >> 0x20 | uVar57 << 0x20);
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar42 = pppppppdVar42 + 1;
                  } while (pppppppdVar47 < pppppppdVar43);
                }
              }
            }
            goto switchD_03313c60_caseD_3;
          case 9:
            lVar58 = lVar58 + lVar60 * 0x38;
            puVar36 = *(ulong **)(lVar58 + 0x18);
            puVar29 = *(ulong **)(lVar58 + 0x20);
            while( true ) {
              uVar30 = (uint)*puVar36;
              if ((uVar30 >> 0x14 & 1) != 0) break;
              if (((*puVar36 & 1) != 0) || (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0))
              goto LAB_03312360;
            }
            if (puVar36 != (ulong *)0x0) {
              uVar30 = (uVar30 & 0xfffff) - (uVar30 >> 1 & 0x55555);
              uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
              sVar44 = (short)puVar36[(ulong)((uVar30 + (uVar30 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                             0x18) + 2];
              goto LAB_03312d3c;
            }
LAB_03312360:
            sVar44 = 0;
            uVar57 = *puVar29;
            uVar30 = (uint)uVar57;
            while ((uVar30 >> 0x14 & 1) == 0) {
              if (((uVar57 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
              goto LAB_03312d50;
LAB_03312d3c:
              uVar57 = *puVar29;
              uVar30 = (uint)uVar57;
            }
            if (puVar29 == (ulong *)0x0) {
LAB_03312d50:
              uVar30 = 0;
            }
            else {
              uVar30 = (uVar30 & 0xfffff) - (uVar30 >> 1 & 0x55555);
              uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
              uVar30 = (uint)(ushort)puVar29[(ulong)((uVar30 + (uVar30 >> 4) & 0xf0f0f0f) *
                                                     0x1010101 >> 0x18) + 2];
            }
            pppppppdVar42 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar19 * uVar16));
            if (pppppppdVar47 < pppppppdVar42) {
              if (sVar44 == 1) {
                if (uVar30 == 1) {
                  do {
                    *(bool *)pppppppdVar47 = *(char *)pppppppdVar43 != '\0';
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
                else if (uVar30 == 8) {
                  do {
                    *pppppppdVar47 = (double ******)(ulong)(*(char *)pppppppdVar43 != '\0');
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
                else if (uVar30 == 2) {
                  do {
                    *(ushort *)pppppppdVar47 = (ushort)(*(char *)pppppppdVar43 != '\0');
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
                else {
                  if (uVar30 != 4) goto switchD_033130d4_caseD_3;
                  do {
                    *(uint *)pppppppdVar47 = (uint)(*(char *)pppppppdVar43 != '\0');
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
              }
              else if (sVar44 == 2) {
                if (uVar30 == 1) {
                  do {
                    *(bool *)pppppppdVar47 = *(short *)pppppppdVar43 != 0;
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
                else if (uVar30 == 2) {
                  do {
                    *(ushort *)pppppppdVar47 = (ushort)(*(short *)pppppppdVar43 != 0);
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
                else if (uVar30 == 4) {
                  do {
                    *(uint *)pppppppdVar47 = (uint)(*(short *)pppppppdVar43 != 0);
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
                else {
                  if (uVar30 != 8) {
switchD_033130d4_caseD_3:
                    do {
                    } while( true );
                  }
                  do {
                    *pppppppdVar47 = (double ******)(ulong)(*(short *)pppppppdVar43 != 0);
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                  } while (pppppppdVar47 < pppppppdVar42);
                }
              }
              else if (sVar44 == 8) {
                do {
                  if (7 < uVar30 - 1) goto switchD_033130d4_caseD_3;
                  ppppppdVar46 = *pppppppdVar43;
                  switch(uVar30) {
                  case 1:
                    *(bool *)pppppppdVar47 = ppppppdVar46 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar47 = (ushort)(ppppppdVar46 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_033130d4_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar47 = (uint)(ppppppdVar46 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar47 = (double ******)(ulong)(ppppppdVar46 != (double ******)0x0);
                  }
                  pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                } while (pppppppdVar47 < pppppppdVar42);
              }
              else {
                if (sVar44 != 4) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                do {
                  if (7 < uVar30 - 1) goto switchD_033130d4_caseD_3;
                  uVar20 = *(uint *)pppppppdVar43;
                  switch(uVar30) {
                  case 1:
                    *(bool *)pppppppdVar47 = uVar20 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar47 = (ushort)(uVar20 != 0);
                    break;
                  default:
                    goto switchD_033130d4_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar47 = (uint)(uVar20 != 0);
                    break;
                  case 8:
                    *pppppppdVar47 = (double ******)(ulong)(uVar20 != 0);
                  }
                  pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
                } while (pppppppdVar47 < pppppppdVar42);
              }
            }
switchD_03313c60_caseD_3:
            break;
          case 10:
            lVar58 = lVar58 + lVar60 * 0x38;
            pbVar26 = *(byte **)(lVar58 + 0x18);
            local_2080 = *(uint **)(lVar58 + 0x20);
            local_2088 = pppppppdVar47;
            if (local_2080 == (uint *)0x0) {
              local_2078 = local_2080;
            }
            else {
              local_2078 = (uint *)FUN_032e3508();
              if (((ulong)local_2078 & 1) != 0) {
                piVar3 = (int *)(((ulong)local_2078 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            pbStack_80 = pbVar26;
            if (pbVar26 == (byte *)0x0) {
              local_78 = (long *)0x0;
              local_88 = pppppppdVar43;
            }
            else {
              local_88 = pppppppdVar43;
              local_78 = (long *)FUN_032e3508(pbVar26);
              if (((ulong)local_78 & 1) != 0) {
                piVar3 = (int *)(((ulong)local_78 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            if (0 < (int)uVar9) {
              uVar30 = 0;
              do {
                FUN_0331f800(param_1,&local_2088,&local_88);
                puVar25 = local_2078;
                local_2078 = (uint *)((ulong)local_2078 & 0xfffffffffffffffe);
                local_2088 = (double *******)((long)local_2088 + lVar51);
                if (((ulong)puVar25 & 1) != 0) {
                  puVar25 = local_2078 + 2;
                  do {
                    uVar20 = *puVar25;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                    if (bVar12) {
                      *puVar25 = uVar20 - 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((local_2078 != (uint *)0x0) && (uVar20 == 1)) {
                    (**(code **)(*(long *)local_2078 + 8))();
                  }
                }
                plVar63 = (long *)((ulong)local_78 & 0xfffffffffffffffe);
                local_88 = (double *******)((long)local_88 + lVar52);
                uVar57 = (ulong)local_78 & 1;
                local_78 = plVar63;
                if (uVar57 != 0) {
                  plVar13 = plVar63 + 1;
                  do {
                    lVar58 = *plVar13;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar12) {
                      *(int *)plVar13 = (int)lVar58 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar63 + 8))();
                  }
                }
                uVar30 = uVar30 + 1;
              } while (uVar30 != uVar19);
            }
            if (((ulong)local_78 & 1) != 0) {
              plVar13 = (long *)((ulong)local_78 & 0xfffffffffffffffe);
              plVar63 = plVar13 + 1;
              do {
                lVar58 = *plVar63;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                if (bVar12) {
                  *(int *)plVar63 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            if (((ulong)local_2078 & 1) != 0) {
              plVar13 = (long *)((ulong)local_2078 & 0xfffffffffffffffe);
              plVar63 = plVar13 + 1;
              do {
                lVar58 = *plVar63;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                if (bVar12) {
                  *(int *)plVar63 = (int)lVar58 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            break;
          case 0xb:
            puVar25 = *(uint **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*puVar25 & 1) == 0) {
              puVar35 = *(uint **)(puVar25 + 2);
              bVar6 = (byte)*puVar35;
              while ((bVar6 & 1) == 0) {
                puVar35 = *(uint **)(puVar35 + 2);
                bVar6 = (byte)*puVar35;
              }
            }
            else {
              puVar35 = puVar25;
            }
            if ((*(ulong *)(puVar35 + 4) & 0x1f) != 8) {
              puVar25 = (uint *)0x0;
            }
            puVar35 = puVar25;
            if ((*puVar25 & 1) == 0) {
              puVar35 = *(uint **)(puVar25 + 2);
              bVar6 = (byte)*puVar35;
              while ((bVar6 & 1) == 0) {
                puVar35 = *(uint **)(puVar35 + 2);
                bVar6 = (byte)*puVar35;
              }
            }
            local_2088 = pppppppdVar47;
            if ((*(ulong *)(puVar35 + 4) & 0x1f) != 8) {
              puVar25 = (uint *)0x0;
            }
            local_2080 = puVar25;
            if (puVar25 == (uint *)0x0) {
              local_2078 = (uint *)0x0;
            }
            else {
              local_2078 = (uint *)FUN_032e3508(puVar25);
              if (((ulong)local_2078 & 1) != 0) {
                piVar3 = (int *)(((ulong)local_2078 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            puVar35 = local_2078;
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 8) {
              pbVar26 = (byte *)0x0;
            }
            pbStack_80 = pbVar26;
            if (pbVar26 == (byte *)0x0) {
              local_78 = (long *)0x0;
              local_88 = pppppppdVar43;
            }
            else {
              local_88 = pppppppdVar43;
              local_78 = (long *)FUN_032e3508(pbVar26);
              if (((ulong)local_78 & 1) != 0) {
                piVar3 = (int *)(((ulong)local_78 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
            }
            plVar63 = local_78;
            if ((int)uVar9 < 1) {
              if (((ulong)local_78 & 1) != 0) {
                plVar13 = (long *)((ulong)local_78 & 0xfffffffffffffffe);
                plVar63 = plVar13 + 1;
                do {
                  lVar58 = *plVar63;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                  if (bVar12) {
                    *(int *)plVar63 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
              if (((ulong)puVar35 & 1) != 0) {
                plVar13 = (long *)((ulong)puVar35 & 0xfffffffffffffffe);
                plVar63 = plVar13 + 1;
                do {
                  lVar58 = *plVar63;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                  if (bVar12) {
                    *(int *)plVar63 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                  goto LAB_03311e30;
                }
              }
            }
            else {
              FUN_03314bbc(*(undefined8 *)(param_1 + 0x288),&local_2088,&local_88);
              puVar54 = (uint *)((ulong)puVar35 & 0xfffffffffffffffe);
              local_2080 = puVar25;
              local_2088 = (double *******)((long)pppppppdVar47 + lVar51);
              if (((ulong)puVar35 & 1) != 0) {
                puVar35 = puVar54 + 2;
                do {
                  uVar30 = *puVar35;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
                  if (bVar12) {
                    *puVar35 = uVar30 - 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((puVar54 != (uint *)0x0) && (uVar30 == 1)) {
                  (**(code **)(*(long *)puVar54 + 8))(puVar54);
                }
              }
              pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
              plVar13 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              local_2078 = puVar54;
              local_88 = pppppppdVar43;
              pbStack_80 = pbVar26;
              if (((ulong)plVar63 & 1) != 0) {
                plVar63 = plVar13 + 1;
                do {
                  lVar58 = *plVar63;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                  if (bVar12) {
                    *(int *)plVar63 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))(plVar13);
                }
              }
              if (1 < (int)uVar19) {
                local_78 = plVar13;
                FUN_03314bbc(*(undefined8 *)(param_1 + 0x288),&local_2088,&local_88);
                local_2078 = puVar54;
                local_2080 = puVar25;
                local_2088 = (double *******)((long)pppppppdVar47 + lVar51 + lVar51);
                local_88 = (double *******)((long)pppppppdVar43 + lVar52);
                if (2 < (int)uVar19) {
                  pppppppdVar47 = (double *******)(param_3 + lVar48 + uVar57);
                  iVar56 = 2;
                  pppppppdVar42 = (double *******)(param_4 + lVar52 * (lVar33 + 3) + (ulong)uVar7);
                  do {
                    pppppppdVar43 = pppppppdVar42;
                    local_2080 = puVar25;
                    local_2078 = puVar54;
                    pbStack_80 = pbVar26;
                    local_78 = plVar13;
                    FUN_03314bbc(*(undefined8 *)(param_1 + 0x288),&local_2088,&local_88);
                    iVar56 = iVar56 + 1;
                    local_2088 = pppppppdVar47;
                    pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                    local_2078 = puVar54;
                    local_2080 = puVar25;
                    pppppppdVar42 = (double *******)((long)pppppppdVar43 + lVar52);
                    local_88 = pppppppdVar43;
                  } while (iVar56 < (int)uVar19);
                }
                local_2080 = puVar25;
                local_2078 = puVar54;
                pbStack_80 = pbVar26;
              }
              local_2d00 = 0;
              local_78 = plVar13;
            }
            break;
          case 0xc:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            else {
              pbVar37 = pbVar26;
            }
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 7) {
              pbVar26 = (byte *)0x0;
            }
            pbVar37 = pbVar26;
            if ((*pbVar26 & 1) == 0) {
              pbVar37 = *(byte **)(pbVar26 + 8);
              bVar6 = *pbVar37;
              while ((bVar6 & 1) == 0) {
                pbVar37 = *(byte **)(pbVar37 + 8);
                bVar6 = *pbVar37;
              }
            }
            plVar63 = (long *)0x0;
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 7) {
              pbVar26 = (byte *)0x0;
            }
            if ((pbVar26 != (byte *)0x0) &&
               (plVar63 = (long *)FUN_032e3508(pbVar26), ((ulong)plVar63 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            pbVar37 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            if ((*pbVar37 & 1) == 0) {
              pbVar39 = *(byte **)(pbVar37 + 8);
              bVar6 = *pbVar39;
              while ((bVar6 & 1) == 0) {
                pbVar39 = *(byte **)(pbVar39 + 8);
                bVar6 = *pbVar39;
              }
            }
            else {
              pbVar39 = pbVar37;
            }
            plVar13 = (long *)0x0;
            if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 7) {
              pbVar37 = (byte *)0x0;
            }
            if ((pbVar37 != (byte *)0x0) &&
               (plVar13 = (long *)FUN_032e3508(pbVar37), ((ulong)plVar13 & 1) != 0)) {
              piVar3 = (int *)(((ulong)plVar13 & 0xfffffffffffffffe) + 8);
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar12) {
                  *piVar3 = *piVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            if ((int)uVar9 < 1) {
              if (((ulong)plVar13 & 1) != 0) {
                plVar13 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
                plVar64 = plVar13 + 1;
                do {
                  lVar58 = *plVar64;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                  if (bVar12) {
                    *(int *)plVar64 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
              if (((ulong)plVar63 & 1) == 0) goto switchD_03313170_default;
              plVar63 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              plVar13 = plVar63 + 1;
              do {
                iVar56 = (int)*plVar13;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar12) {
                  *(int *)plVar13 = iVar56 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_033145ac:
              if ((plVar63 != (long *)0x0) && (iVar56 == 1)) {
                (**(code **)(*plVar63 + 8))();
              }
              goto switchD_03313170_default;
            }
            iVar56 = 0;
            do {
              plVar64 = *(long **)(param_1 + 0x288);
              uVar61 = *(uint *)(plVar64 + 1);
              uVar31 = *(uint *)((long)plVar64 + 0xc);
              lVar34 = *plVar64;
              uVar20 = uVar31 & 0x3fffffff;
              uVar30 = uVar61 + 1;
              lVar58 = lVar34;
              if ((int)uVar20 <= (int)uVar61) {
                if (0x3ffffffe < (int)uVar61) {
                  FUN_032bd0a8(uVar30);
                  uVar31 = *(uint *)((long)plVar64 + 0xc);
                  uVar20 = uVar31 & 0x3fffffff;
                }
                uVar31 = (uVar31 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar31) {
                  uVar31 = 0x3fffffff;
                }
                local_6c[0] = uVar30;
                if ((int)uVar30 <= (int)uVar31) {
                  local_6c[0] = uVar31;
                }
                local_88 = (double *******)((ulong)local_6c[0] * 0x30);
                if ((int)local_6c[0] < (int)uVar20 || 0x3fffffff < (int)local_6c[0]) {
                  local_2088 = (double *******)0x1;
                  local_2078 = local_6c;
                  local_2080 = (uint *)&DAT_0411b3b8;
                  FUN_03320b50(0x65816502,
                               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                               ,0x5a,"Invalid requestedCapacity {}",&local_2088);
                }
                uVar20 = *(uint *)((long)plVar64 + 0xc);
                lVar58 = (**(code **)(*(long *)puVar10 + 0x10))(puVar10,local_88,&local_88);
                if (0 < (int)uVar61) {
                  puVar38 = (undefined8 *)(lVar58 + 0x18);
                  puVar27 = (undefined8 *)(lVar34 + 0x18);
                  uVar57 = (ulong)uVar61;
                  do {
                    puVar38[-3] = puVar27[-3];
                    puVar38[-2] = puVar27[-2];
                    puVar38[-1] = puVar27[-1];
                    puVar27[-2] = 0;
                    puVar27[-1] = 0;
                    puVar27[-3] = 0;
                    *puVar38 = *puVar27;
                    puVar38[1] = puVar27[1];
                    uVar57 = uVar57 - 1;
                    puVar38[2] = puVar27[2];
                    puVar27[1] = 0;
                    puVar27[2] = 0;
                    *puVar27 = 0;
                    puVar38 = puVar38 + 6;
                    puVar27 = puVar27 + 6;
                  } while (uVar57 != 0);
                  uVar57 = 0;
                  do {
                    uVar28 = *(ulong *)(lVar34 + uVar57 * 0x30 + 0x28);
                    if ((uVar28 & 1) != 0) {
                      plVar14 = (long *)(uVar28 & 0xfffffffffffffffe);
                      plVar62 = plVar14 + 1;
                      do {
                        lVar60 = *plVar62;
                        cVar8 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                        if (bVar12) {
                          *(int *)plVar62 = (int)lVar60 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if ((plVar14 != (long *)0x0) && ((int)lVar60 == 1)) {
                        (**(code **)(*plVar14 + 8))();
                      }
                    }
                    uVar28 = *(ulong *)(lVar34 + uVar57 * 0x30 + 0x10);
                    if ((uVar28 & 1) != 0) {
                      plVar14 = (long *)(uVar28 & 0xfffffffffffffffe);
                      plVar62 = plVar14 + 1;
                      do {
                        lVar60 = *plVar62;
                        cVar8 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                        if (bVar12) {
                          *(int *)plVar62 = (int)lVar60 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if ((plVar14 != (long *)0x0) && ((int)lVar60 == 1)) {
                        (**(code **)(*plVar14 + 8))();
                      }
                    }
                    uVar57 = uVar57 + 1;
                  } while (uVar57 != uVar61);
                }
                if (-1 < (int)uVar20) {
                  (**(code **)(*(long *)puVar10 + 0x18))
                            (puVar10,lVar34,((ulong)uVar20 & 0x3fffffff) * 0x30);
                }
                if (local_88 < (double *******)0xbffffffd0) {
                  uVar21 = (undefined4)((ulong)local_88 / 0x30);
                }
                else {
                  uVar21 = 0x3fffffff;
                }
                *(undefined4 *)((long)plVar64 + 0xc) = uVar21;
                uVar61 = *(uint *)(plVar64 + 1);
                *plVar64 = lVar58;
              }
              puVar38 = (undefined8 *)(lVar58 + (long)(int)uVar61 * 0x30);
              *puVar38 = pppppppdVar47;
              puVar38[1] = pbVar26;
              puVar38[2] = plVar63;
              if (((ulong)plVar63 & 1) != 0) {
                piVar3 = (int *)(((ulong)plVar63 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              lVar58 = lVar58 + (long)(int)uVar61 * 0x30;
              *(double ********)(lVar58 + 0x18) = pppppppdVar43;
              *(byte **)(lVar58 + 0x20) = pbVar37;
              *(long **)(lVar58 + 0x28) = plVar13;
              if (((ulong)plVar13 & 1) != 0) {
                piVar3 = (int *)(((ulong)plVar13 & 0xfffffffffffffffe) + 8);
                do {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar12) {
                    *piVar3 = *piVar3 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              *(uint *)(plVar64 + 1) = uVar30;
              plVar64 = (long *)((ulong)plVar63 & 0xfffffffffffffffe);
              if (((ulong)plVar63 & 1) != 0) {
                plVar63 = plVar64 + 1;
                do {
                  lVar58 = *plVar63;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                  if (bVar12) {
                    *(int *)plVar63 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar64 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar64 + 8))(plVar64);
                }
              }
              pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
              pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
              plVar63 = (long *)((ulong)plVar13 & 0xfffffffffffffffe);
              if (((ulong)plVar13 & 1) != 0) {
                plVar13 = plVar63 + 1;
                do {
                  lVar58 = *plVar13;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar12) {
                    *(int *)plVar13 = (int)lVar58 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((plVar63 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar63 + 8))(plVar63);
                }
              }
              iVar56 = iVar56 + 1;
              local_2d00 = 0;
              plVar13 = plVar63;
              plVar63 = plVar64;
            } while (iVar56 < (int)uVar19);
            break;
          case 0xd:
            uVar30 = *(uint *)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar57 = (ulong)uVar30;
            if (uVar30 == uVar16 && uVar30 == param_6) {
              memcpy(pppppppdVar47,pppppppdVar43,(ulong)(uVar19 * param_6));
LAB_03311e30:
            }
            else if ((0 < (int)uVar9) && (0 < (int)uVar30)) {
              uVar20 = 0;
              do {
                if (uVar57 - 1 < 7) {
                  lVar58 = 0;
                }
                else {
                  lVar58 = 0;
                  do {
                    puVar55 = (undefined1 *)((long)pppppppdVar43 + lVar58);
                    puVar41 = (undefined1 *)((long)pppppppdVar47 + lVar58);
                    lVar58 = lVar58 + 8;
                    *puVar41 = *puVar55;
                    puVar41[1] = puVar55[1];
                    puVar41[2] = puVar55[2];
                    puVar41[3] = puVar55[3];
                    puVar41[4] = puVar55[4];
                    puVar41[5] = puVar55[5];
                    puVar41[6] = puVar55[6];
                    puVar41[7] = puVar55[7];
                  } while (uVar57 - (uVar57 & 7) != lVar58);
                }
                if ((uVar30 & 7) != 0) {
                  uVar28 = uVar57 & 7;
                  do {
                    uVar28 = uVar28 - 1;
                    *(undefined1 *)((long)pppppppdVar47 + lVar58) =
                         *(undefined1 *)((long)pppppppdVar43 + lVar58);
                    lVar58 = lVar58 + 1;
                  } while (uVar28 != 0);
                }
                uVar20 = uVar20 + 1;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar51);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar52);
              } while (uVar20 != uVar19);
            }
          }
switchD_03313170_caseD_3:
          iVar15 = iVar15 + 1;
        } while (iVar5 != iVar15);
      }
      iVar18 = uVar19 + iVar18;
    } while (iVar18 < param_7);
  }
  lVar32 = (long)(int)local_2c90;
  if ((int)local_2c90 == 0) {
    local_2d00 = 0;
  }
  else {
    puVar55 = local_2c98;
    do {
      FUN_033157c0(*(undefined8 *)(param_1 + 0x288),puVar55,puVar55 + 0x18);
      puVar55 = puVar55 + 0x30;
    } while (puVar55 != local_2c98 + lVar32 * 0x30);
    local_2d00 = 0;
LAB_033121b8:
    if ((int)local_2c90 != 0) {
      puVar55 = local_2c98 + (long)(int)local_2c90 * 0x30;
      do {
        if ((*(ulong *)(puVar55 + -8) & 1) != 0) {
          plVar13 = (long *)(*(ulong *)(puVar55 + -8) & 0xfffffffffffffffe);
          plVar63 = plVar13 + 1;
          do {
            lVar32 = *plVar63;
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
            if (bVar12) {
              *(int *)plVar63 = (int)lVar32 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar32 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        puVar36 = (ulong *)(puVar55 + -0x20);
        puVar55 = puVar55 + -0x30;
        if ((*puVar36 & 1) != 0) {
          plVar13 = (long *)(*puVar36 & 0xfffffffffffffffe);
          plVar63 = plVar13 + 1;
          do {
            lVar32 = *plVar63;
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar63,0x10);
            if (bVar12) {
              *(int *)plVar63 = (int)lVar32 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar32 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      } while (puVar55 != local_2c98);
    }
  }
  uVar17 = local_2c90;
  uVar57 = (ulong)local_2c90._4_4_;
  local_2c90 = (ulong)local_2c90._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_2c98 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_2c98,(uVar57 & 0x3fffffff) * 0x30);
  }
  return local_2d00 & 0xffffffff;
}


