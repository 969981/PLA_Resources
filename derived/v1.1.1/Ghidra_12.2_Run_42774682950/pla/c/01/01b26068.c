/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b26068; name: FUN_01b26068
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b26068(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  long lVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  int *piVar24;
  long lVar25;
  undefined4 *puVar26;
  long *plVar27;
  long lVar28;
  int *piVar29;
  undefined4 *puVar30;
  long lVar31;
  undefined4 *puVar32;
  int *piVar33;
  undefined4 *puVar34;
  long *plVar35;
  uint uVar36;
  long *plVar37;
  int *piVar38;
  long *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  long *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long **local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  int *piStack_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar11 = PTR_DAT_043794d0;
  puVar10 = PTR_DAT_043794c8;
  puVar9 = PTR_DAT_043794b8;
  puVar8 = PTR_DAT_043794b0;
  switch((int)param_1[0x4f7]) {
  case 0:
    lVar25 = param_1[0x35];
    if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01b260c0:
      plVar16 = (long *)0x0;
    }
    else {
      piVar38 = (int *)(lVar25 + 0xc);
      iVar13 = *(int *)(lVar25 + 0xc);
      do {
        puVar18 = *(undefined8 **)(lVar25 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar15 != 0)) {
            if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
              uVar19 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar19;
              __cxa_guard_release(puVar11);
            }
            *(undefined **)puVar10 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar9 = puVar10;
          __cxa_guard_release(puVar8);
        }
        if (puVar18 == (undefined8 *)0x0) goto LAB_01b260c0;
        while (puVar18 != (undefined8 *)puVar9) {
          puVar18 = (undefined8 *)*puVar18;
          plVar16 = (long *)0x0;
          if (puVar18 == (undefined8 *)0x0) goto LAB_01b260c4;
        }
        iVar15 = *piVar38;
        if (iVar15 == iVar13) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar16 = (long *)0x0;
            if (*(long *)(lVar25 + 0x18) != 0) {
              plVar16 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar16 = (long *)0x0;
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01b260c4:
    lVar25 = FUN_00b12644(plVar16 + 0x1e,&local_a8);
    if (plVar16 != (long *)0x0) {
      lVar21 = plVar16[0xb];
      piVar38 = (int *)(lVar21 + 0xc);
      do {
        iVar13 = *piVar38;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar7) {
          *piVar38 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    if (lVar25 == 0) {
      return;
    }
    FUN_01b28350(&local_a8,lVar25);
    FUN_01b33fcc(param_1 + 0x42,&local_a8);
    if (local_a8 != (long *)0x0) {
      plVar16 = local_a8 + 1;
      do {
        iVar13 = (int)*plVar16 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 0) {
        local_a8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_c8 = (long *)*local_a8;
        FUN_02a44274(lVar25 + 0xd8,&local_c8);
      }
    }
    uVar20 = 1;
    break;
  default:
    lVar25 = param_1[0x42];
    if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
      piVar38 = (int *)(lVar25 + 0xc);
      iVar13 = *(int *)(lVar25 + 0xc);
      do {
        uVar17 = FUN_01b35e90(*(undefined8 *)(lVar25 + 0x10));
        if ((uVar17 & 1) == 0) break;
        iVar15 = *piVar38;
        if (iVar15 == iVar13) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar25 = *(long *)(lVar25 + 0x18);
            if (lVar25 != 0) {
              lVar21 = *(long *)(lVar25 + 8);
              piVar38 = (int *)(lVar21 + 0xc);
              lVar28 = param_1[0x4f9];
              lVar31 = param_1[0x4f8];
              do {
                iVar13 = *piVar38;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
                if (bVar7) {
                  *piVar38 = iVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*(long *)(lVar25 + -0x50) + 0x20))();
              }
              if (lVar28 == lVar31) {
                return;
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
    puVar34 = (undefined4 *)param_1[0x4f8];
    puVar26 = (undefined4 *)param_1[0x4f9];
    if (puVar26 != puVar34) {
LAB_01b2640c:
      *puVar34 = 1;
      puVar26 = (undefined4 *)param_1[0x4f9];
      if (puVar34 == puVar26) goto LAB_01b26400;
      lVar25 = 0;
      puVar32 = puVar34;
LAB_01b26428:
      do {
        puVar22 = puVar32;
        puVar32 = puVar22 + 0xde;
        lVar25 = lVar25 + -0x378;
        if (puVar26 == puVar32) goto LAB_01b26400;
      } while (lVar25 == 0);
      puVar30 = puVar34;
      if (**(char **)(puVar34 + 0x9e) == '\0') goto LAB_01b26464;
      if (*(long *)(puVar34 + 0x9c) == *(long *)(puVar22 + 0x17a)) {
        if (puVar34 + 0xde == puVar26) goto LAB_01b26518;
        puVar32 = puVar34;
        do {
          puVar30 = puVar32 + 0xde;
          FUN_01b35fa4(puVar32,puVar30);
          puVar22 = puVar32 + 0x1bc;
          puVar32 = puVar30;
        } while (puVar22 != puVar26);
        puVar26 = (undefined4 *)param_1[0x4f9];
        if (puVar26 != puVar30) {
LAB_01b26518:
          do {
            puVar26 = puVar26 + -0xde;
            FUN_01b2b604(puVar26);
          } while (puVar30 != puVar26);
        }
      }
      else {
        if (*(long *)(puVar34 + 0x9c) != *(long *)(puVar22 + 0xe0)) goto LAB_01b26464;
        if (puVar34 + 0xde != puVar26) {
          puVar32 = puVar34;
          do {
            puVar30 = puVar32 + 0xde;
            FUN_01b35fa4(puVar32,puVar30);
            puVar22 = puVar32 + 0x1bc;
            puVar32 = puVar30;
          } while (puVar22 != puVar26);
          puVar26 = (undefined4 *)param_1[0x4f9];
          if (puVar26 == puVar30) goto LAB_01b26584;
        }
        do {
          puVar26 = puVar26 + -0xde;
          FUN_01b2b604(puVar26);
        } while (puVar30 != puVar26);
      }
      goto LAB_01b26584;
    }
LAB_01b26594:
    *(undefined4 *)(param_1 + 0x4f7) = 2;
    goto LAB_01b2659c;
  case 2:
    puVar26 = (undefined4 *)param_1[0x4f9];
LAB_01b2659c:
    puVar34 = (undefined4 *)param_1[0x4f8];
    if (puVar34 != puVar26) {
      lVar25 = *(long *)(puVar34 + 0xbc);
      for (; ((((lVar25 == 0 || (**(char **)(lVar25 + 0x60) == '\0')) ||
               (*(long *)(puVar34 + 0xd8) != 0)) ||
              ((_DAT_00000070 != 0 && (*(char *)(_DAT_00000070 + 0x1e1) != '\0')))) &&
             (puVar34 + 0xde != puVar26)); puVar34 = puVar34 + 0xde) {
        lVar25 = *(long *)(puVar34 + 0x19a);
      }
    }
    if (param_1[0x44] != 0) {
      FUN_01b38280(&local_a8);
      plVar16 = local_a8;
      if (local_a8 != (long *)0x0) {
        FUN_01ab9180(local_a8 + 0x42);
        lVar25 = plVar16[0xb];
        piVar38 = (int *)(lVar25 + 0xc);
        do {
          iVar13 = *piVar38;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4f7) = 3;
switchD_01b260b4_caseD_3:
    *(undefined4 *)((long)param_1 + 0x2801) = 0;
    lVar25 = param_1[0x3e];
    if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01b26608:
      plVar27 = (long *)0x0;
    }
    else {
      piVar38 = (int *)(lVar25 + 0xc);
      iVar13 = *(int *)(lVar25 + 0xc);
      do {
        plVar37 = *(long **)(lVar25 + 0x10);
        plVar16 = (long *)FUN_00a3edb8();
        if (plVar37 == (long *)0x0) goto LAB_01b26608;
        while (plVar37 != plVar16) {
          plVar37 = (long *)*plVar37;
          plVar27 = (long *)0x0;
          if (plVar37 == (long *)0x0) goto LAB_01b2660c;
        }
        iVar15 = *piVar38;
        if (iVar15 == iVar13) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar27 = (long *)0x0;
            if (*(long *)(lVar25 + 0x18) != 0) {
              plVar27 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar27 = (long *)0x0;
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01b2660c:
    FUN_009983e4(&local_c8,param_1 + 0x40);
    if ((plVar27 == (long *)0x0) || (local_c8 == (long *)0x0)) {
      uVar20 = 9;
LAB_01b26aa0:
      *(undefined4 *)(param_1 + 0x4f7) = uVar20;
    }
    else if ((int)plVar27[0x3f] == 3) {
      local_a8 = (long *)&DAT_afc4d6c05abef19e;
      piStack_a0 = (int *)0x39840c2;
      local_98 = (long *)&DAT_00000007;
      uStack_90 = 0;
      FUN_0289f790(local_c8,&local_a8);
      FUN_0289f190(local_c8,param_1 + 0x4b);
      FUN_0289f190(local_c8,param_1 + 0xa1);
      FUN_0289f190(local_c8,param_1 + 0xf7);
      FUN_0289f190(local_c8,param_1 + 0x14d);
      FUN_0289f190(local_c8,param_1 + 0x1a3);
      FUN_0289f190(local_c8,param_1 + 0x1f9);
      FUN_0289f190(local_c8,param_1 + 0x24f);
      FUN_0289f190(local_c8,param_1 + 0x2a5);
      FUN_0289f190(local_c8,param_1 + 0x2fb);
      FUN_0289f190(local_c8,param_1 + 0x351);
      FUN_0289f190(local_c8,param_1 + 0x3a7);
      puVar10 = PTR_DAT_0437b508;
      puVar9 = PTR_DAT_0437b500;
      puVar8 = PTR_DAT_0437b4f8;
      piVar38 = (int *)param_1[0x4f8];
      if (piVar38 != (int *)param_1[0x4f9]) {
        do {
          if (*piVar38 == 1) {
            plVar16 = (long *)FUN_02a9b144(plVar27,piVar38 + 0x9c);
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_01b26850;
            plVar37 = plVar16 + 10;
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar7) {
                *(int *)plVar37 = (int)*plVar37 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar16[0x17] == 0) || (*(char *)(plVar16[0x17] + 0x1e1) == '\0')) {
LAB_01b268a4:
              do {
                iVar13 = (int)*plVar37 + -1;
                bVar12 = iVar13 == 0;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar7) {
                  *(int *)plVar37 = iVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            else {
              piVar24 = (int *)plVar16[0x26];
              if (piVar24 != (int *)plVar16[0x27]) {
                bVar7 = true;
                do {
                  lVar25 = *(long *)(plVar16[0x1d] + (long)*piVar24 * 8);
                  if (lVar25 == 0) {
LAB_01b267a4:
                    bVar4 = 0;
                  }
                  else {
                    for (lVar21 = *(long *)(lVar25 + 0x58); lVar21 != *(long *)(lVar25 + 0x60);
                        lVar21 = lVar21 + 0x30) {
                      if (*(char *)(*(long *)(lVar21 + 8) + 0x2d8) == '\0') goto LAB_01b267a4;
                    }
                    bVar4 = 1;
                  }
                  piVar24 = piVar24 + 3;
                  bVar7 = (bool)(bVar7 & bVar4);
                } while (piVar24 != (int *)plVar16[0x27]);
                if (!bVar7) goto LAB_01b268a4;
              }
              lVar25 = plVar16[0x24];
              if (lVar25 == 0) goto LAB_01b268a4;
              for (lVar21 = *(long *)(lVar25 + 0x60); lVar21 != *(long *)(lVar25 + 0x68);
                  lVar21 = lVar21 + 0x30) {
                if (*(char *)(*(long *)(lVar21 + 8) + 0x2e0) == '\0') goto LAB_01b268a4;
              }
              if (plVar16[0x25] == 0) {
                do {
                  iVar13 = (int)*plVar37 + -1;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                  if (bVar7) {
                    *(int *)plVar37 = iVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar13 == 0) {
LAB_01b268cc:
                  (**(code **)(*plVar16 + 0x10))();
                }
LAB_01b26850:
                plVar16 = (long *)FUN_02a9b144(plVar27,piVar38 + 2);
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_01b26998;
                plVar37 = plVar16 + 10;
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                  if (bVar7) {
                    *(int *)plVar37 = (int)*plVar37 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar16[0x17] != 0) && (*(char *)(plVar16[0x17] + 0x1e1) != '\0')) {
                  piVar24 = (int *)plVar16[0x26];
                  if (piVar24 != (int *)plVar16[0x27]) {
                    bVar7 = true;
                    do {
                      lVar25 = *(long *)(plVar16[0x1d] + (long)*piVar24 * 8);
                      if (lVar25 == 0) {
LAB_01b268dc:
                        bVar4 = 0;
                      }
                      else {
                        for (lVar21 = *(long *)(lVar25 + 0x58); lVar21 != *(long *)(lVar25 + 0x60);
                            lVar21 = lVar21 + 0x30) {
                          if (*(char *)(*(long *)(lVar21 + 8) + 0x2d8) == '\0') goto LAB_01b268dc;
                        }
                        bVar4 = 1;
                      }
                      piVar24 = piVar24 + 3;
                      bVar7 = (bool)(bVar7 & bVar4);
                    } while (piVar24 != (int *)plVar16[0x27]);
                    if (!bVar7) goto LAB_01b26a04;
                  }
                  lVar25 = plVar16[0x24];
                  if (lVar25 != 0) {
                    for (lVar21 = *(long *)(lVar25 + 0x60); lVar21 != *(long *)(lVar25 + 0x68);
                        lVar21 = lVar21 + 0x30) {
                      if (*(char *)(*(long *)(lVar21 + 8) + 0x2e0) == '\0') goto LAB_01b26a04;
                    }
                    if (plVar16[0x25] == 0) {
                      do {
                        iVar13 = (int)*plVar37 + -1;
                        cVar5 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                        if (bVar7) {
                          *(int *)plVar37 = iVar13;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar13 == 0) {
LAB_01b26a2c:
                        (**(code **)(*plVar16 + 0x10))();
                      }
                    }
                    else {
                      lVar25 = *(long *)(plVar16[0x25] + 0x60);
                      if (lVar25 == 0) goto LAB_01b26a04;
                      cVar5 = *(char *)(lVar25 + 0x1e1);
                      do {
                        lVar25 = *plVar37;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                        if (bVar7) {
                          *(int *)plVar37 = (int)lVar25 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      bVar12 = (int)lVar25 == 1;
                      if (cVar5 == '\0') goto LAB_01b26734;
                      if (bVar12) goto LAB_01b26a2c;
                    }
LAB_01b26998:
                    if (**(char **)(piVar38 + 4) != '\0') {
                      *(undefined1 *)((long)param_1 + 0x2801) = 1;
                      if (((*puVar8 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                        FUN_00100250(PTR_LAB_0437b590,puVar9,&PTR_LOOP_0411a000);
                        __cxa_guard_release(puVar8);
                      }
                      lVar25 = *(long *)puVar9;
                      *(long *)puVar10 = lVar25;
                      local_a8 = param_1;
                      piStack_a0 = piVar38 + 2;
                      FUN_01b301cc(*(undefined8 *)(lVar25 + 0x50),&local_a8);
                    }
                    if (**(char **)(piVar38 + 0x9e) != '\0') {
                      *(undefined1 *)((long)param_1 + 0x2802) = 1;
                      FUN_00d09400(*(undefined8 *)(piVar38 + 0xda));
                      if (((*puVar8 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                        FUN_00100250(PTR_LAB_0437b590,puVar9,&PTR_LOOP_0411a000);
                        __cxa_guard_release(puVar8);
                      }
                      lVar25 = *(long *)puVar9;
                      *(long *)puVar10 = lVar25;
                      local_a8 = param_1;
                      piStack_a0 = piVar38;
                      FUN_01b2ff20(*(undefined8 *)(lVar25 + 0x50),&local_a8);
                    }
                    goto LAB_01b26738;
                  }
                }
LAB_01b26a04:
                do {
                  iVar13 = (int)*plVar37 + -1;
                  bVar12 = iVar13 == 0;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                  if (bVar7) {
                    *(int *)plVar37 = iVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              else {
                lVar25 = *(long *)(plVar16[0x25] + 0x60);
                if (lVar25 == 0) goto LAB_01b268a4;
                cVar5 = *(char *)(lVar25 + 0x1e1);
                do {
                  lVar25 = *plVar37;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                  if (bVar7) {
                    *(int *)plVar37 = (int)lVar25 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar12 = (int)lVar25 == 1;
                if (cVar5 != '\0') {
                  if (bVar12) goto LAB_01b268cc;
                  goto LAB_01b26850;
                }
              }
            }
LAB_01b26734:
            if (bVar12) {
              (**(code **)(*plVar16 + 0x10))();
            }
          }
LAB_01b26738:
          piVar38 = piVar38 + 0xde;
        } while (piVar38 != (int *)param_1[0x4f9]);
      }
      uVar20 = 4;
      goto LAB_01b26aa0;
    }
    if (local_c8 != (long *)0x0) {
      lVar25 = local_c8[0xb];
      piVar38 = (int *)(lVar25 + 0xc);
      do {
        iVar13 = *piVar38;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar7) {
          *piVar38 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
    if (plVar27 == (long *)0x0) {
      return;
    }
    lVar25 = plVar27[0xb];
    piVar38 = (int *)(lVar25 + 0xc);
    do {
      bVar12 = *piVar38 + -1 == 0;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
      if (bVar7) {
        *piVar38 = *piVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01b27534:
    if (!bVar12) {
      return;
    }
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar27 + 0x20))(plVar27);
    return;
  case 3:
    goto switchD_01b260b4_caseD_3;
  case 4:
    if ((*(char *)((long)param_1 + 0x2801) != '\0') && (*(char *)((long)param_1 + 0x2803) == '\0'))
    {
      return;
    }
    if ((*(char *)((long)param_1 + 0x2802) != '\0') && (*(char *)((long)param_1 + 0x2804) == '\0'))
    {
      return;
    }
    lVar25 = param_1[0x3e];
    if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01b2624c:
      plVar27 = (long *)0x0;
    }
    else {
      piVar38 = (int *)(lVar25 + 0xc);
      iVar13 = *(int *)(lVar25 + 0xc);
      do {
        plVar37 = *(long **)(lVar25 + 0x10);
        plVar16 = (long *)FUN_00a3edb8();
        if (plVar37 == (long *)0x0) goto LAB_01b2624c;
        while (plVar37 != plVar16) {
          plVar37 = (long *)*plVar37;
          plVar27 = (long *)0x0;
          if (plVar37 == (long *)0x0) goto LAB_01b26250;
        }
        iVar15 = *piVar38;
        if (iVar15 == iVar13) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar27 = (long *)0x0;
            if (*(long *)(lVar25 + 0x18) != 0) {
              plVar27 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar27 = (long *)0x0;
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01b26250:
    FUN_009983e4(&local_c8,param_1 + 0x40);
    plVar16 = local_c8;
    if ((plVar27 != (long *)0x0) && ((int)plVar27[0x3f] != 3)) {
LAB_01b26294:
      if (local_c8 != (long *)0x0) {
        lVar25 = local_c8[0xb];
        piVar38 = (int *)(lVar25 + 0xc);
        do {
          iVar13 = *piVar38;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_c8 + 0x20))();
        }
      }
      if (plVar27 == (long *)0x0) {
        return;
      }
      lVar25 = plVar27[0xb];
      piVar38 = (int *)(lVar25 + 0xc);
      do {
        bVar12 = *piVar38 + -1 == 0;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar7) {
          *piVar38 = *piVar38 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01b27534;
    }
    if (local_c8 == (long *)0x0) {
      *(undefined2 *)((long)param_1 + 0x2803) = 0;
      *(undefined4 *)(param_1 + 0x4f7) = 5;
    }
    else {
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar13 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      plVar37 = local_c8;
      if ((*(byte *)(plVar16 + 0x61) & 1) == 0) goto LAB_01b26294;
      lVar25 = param_1[0x9e];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar37,&local_a8,param_1 + 0x4b,
                     (undefined1 *)param_1[0x4b] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0xf4];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0xa1,
                     (undefined1 *)param_1[0xa1] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x14a];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0xf7,
                     (undefined1 *)param_1[0xf7] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x1a0];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x14d,
                     (undefined1 *)param_1[0x14d] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x1f6];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x1a3,
                     (undefined1 *)param_1[0x1a3] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x24c];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x1f9,
                     (undefined1 *)param_1[0x1f9] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x2a2];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x24f,
                     (undefined1 *)param_1[0x24f] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x2f8];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x2a5,
                     (undefined1 *)param_1[0x2a5] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x34e];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x2fb,
                     (undefined1 *)param_1[0x2fb] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x3a4];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x351,
                     (undefined1 *)param_1[0x351] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      plVar16 = local_c8;
      lVar25 = param_1[0x3fa];
      if (lVar25 != 0) {
        local_a8 = (long *)(lVar25 + 0x48);
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
        FUN_0289ea54(plVar16,&local_a8,param_1 + 0x3a7,
                     (undefined1 *)param_1[0x3a7] == &DAT_b49a716fb65dbb9c);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
      }
      local_a8 = (long *)&DAT_afc4d6c05abef19e;
      piStack_a0 = (int *)0x39840c2;
      local_98 = (long *)&DAT_00000007;
      uStack_90 = 0;
      FUN_0289f9a4(local_c8,&local_a8);
      *(undefined2 *)((long)param_1 + 0x2803) = 0;
      *(undefined4 *)(param_1 + 0x4f7) = 5;
      if (local_c8 != (long *)0x0) {
        lVar25 = local_c8[0xb];
        piVar38 = (int *)(lVar25 + 0xc);
        do {
          iVar13 = *piVar38;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_c8 + 0x20))();
        }
      }
    }
    if (plVar27 == (long *)0x0) {
switchD_01b260b4_caseD_5:
      lVar25 = param_1[0x3e];
      if (lVar25 == 0) goto LAB_01b26f6c;
LAB_01b2763c:
      if (*(int *)(lVar25 + 0xc) == 0) goto LAB_01b26f6c;
      piVar38 = (int *)(lVar25 + 0xc);
      iVar13 = *(int *)(lVar25 + 0xc);
      do {
        plVar37 = *(long **)(lVar25 + 0x10);
        plVar16 = (long *)FUN_00a3edb8();
        if (plVar37 == (long *)0x0) goto LAB_01b26f6c;
        while (plVar37 != plVar16) {
          plVar37 = (long *)*plVar37;
          plVar27 = (long *)0x0;
          if (plVar37 == (long *)0x0) goto LAB_01b26f70;
        }
        iVar15 = *piVar38;
        if (iVar15 == iVar13) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar27 = (long *)0x0;
            if (*(long *)(lVar25 + 0x18) != 0) {
              plVar27 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar27 = (long *)0x0;
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
    else {
      lVar25 = plVar27[0xb];
      piVar38 = (int *)(lVar25 + 0xc);
      do {
        iVar13 = *piVar38;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar7) {
          *piVar38 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 != 0) goto switchD_01b260b4_caseD_5;
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
      lVar25 = param_1[0x3e];
      if (lVar25 != 0) goto LAB_01b2763c;
LAB_01b26f6c:
      plVar27 = (long *)0x0;
    }
LAB_01b26f70:
    FUN_009983e4(&local_f0,param_1 + 0x40);
    piVar38 = (int *)param_1[0x4f8];
    piVar24 = (int *)param_1[0x4f9];
    if (piVar38 == piVar24) {
LAB_01b27094:
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      local_c8 = (long *)0x0;
      local_c0 = (long **)0x0;
      FUN_00aeaa8c(&local_c8,param_1 + 0x40);
      FUN_00b1b5bc(&local_b8,param_1 + 0x3e);
      lVar21 = param_1[0x4ff];
      local_110 = (long *)0x0;
      uStack_108 = 0;
      FUN_00aeaa8c(&local_110,&local_c8);
      local_100 = (long *)0x0;
      uStack_f8 = 0;
      FUN_00b1b5bc(&local_100,&local_b8);
      lVar25 = nn::os::GetCurrentThread();
      plVar16 = (long *)(lVar21 + 0xf8);
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xec));
            while (*plVar16 == 0) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar7) {
                *plVar16 = lVar25;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01b27130;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = lVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01b27130:
      puVar10 = PTR_DAT_043794a8;
      puVar9 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_04379498;
      plVar16 = *(long **)(lVar21 + 0xb0);
      if (plVar16 != (long *)0x0) {
        do {
          local_e8 = (long *)0x0;
          uStack_e0 = 0;
          FUN_008802f0(&local_e8,plVar16 + 3);
          plVar37 = (long *)plVar16[5];
          local_d8 = plVar37;
          if ((local_e8 == (long *)0x0) || (*(int *)((long)local_e8 + 0xc) == 0)) {
            plVar16 = (long *)FUN_01b36298(lVar21 + 0x80,plVar16);
            plVar37 = local_e8;
          }
          else {
            local_a8 = (long *)0x0;
            piStack_a0 = (int *)0x0;
            FUN_00aeaa8c(&local_a8,&local_110);
            local_98 = (long *)0x0;
            uStack_90 = 0;
            FUN_00b1b5bc(&local_98,&local_100);
            (**(code **)(*plVar37 + 0x30))(plVar37,&local_a8);
            plVar37 = local_98;
            if (local_98 != (long *)0x0) {
              plVar2 = local_98 + 1;
              do {
                iVar13 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = iVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar13 == 0) {
                local_98[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar25 = *(long *)puVar9;
                *(long *)puVar10 = lVar25;
                local_d0 = (long *)*plVar37;
                FUN_02a44274(lVar25 + 0xd8,&local_d0);
              }
            }
            plVar37 = local_a8;
            if (local_a8 != (long *)0x0) {
              plVar2 = local_a8 + 1;
              do {
                iVar13 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = iVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar13 == 0) {
                local_a8[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar25 = *(long *)puVar9;
                *(long *)puVar10 = lVar25;
                local_d0 = (long *)*plVar37;
                FUN_02a44274(lVar25 + 0xd8,&local_d0);
              }
            }
            plVar16 = (long *)*plVar16;
            plVar37 = local_e8;
          }
          local_e8 = plVar37;
          if (plVar37 != (long *)0x0) {
            plVar2 = plVar37 + 1;
            do {
              iVar13 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = iVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 == 0) {
              plVar37[2] = 0;
              if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              lVar25 = *(long *)puVar9;
              *(long *)puVar10 = lVar25;
              local_d0 = (long *)*plVar37;
              FUN_02a44274(lVar25 + 0xd8,&local_d0);
            }
          }
        } while (plVar16 != (long *)0x0);
      }
      *(undefined8 *)(lVar21 + 0xf8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0xec));
      plVar16 = local_100;
      if (local_100 != (long *)0x0) {
        plVar37 = local_100 + 1;
        do {
          iVar13 = (int)*plVar37 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *(int *)plVar37 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_100[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_a8 = (long *)*plVar16;
          FUN_02a44274(lVar25 + 0xd8,&local_a8);
        }
      }
      plVar16 = local_110;
      if (local_110 != (long *)0x0) {
        plVar37 = local_110 + 1;
        do {
          iVar13 = (int)*plVar37 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *(int *)plVar37 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_110[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_a8 = (long *)*plVar16;
          FUN_02a44274(lVar25 + 0xd8,&local_a8);
        }
      }
      plVar16 = local_b8;
      *(undefined4 *)(param_1 + 0x4f7) = 6;
      if (local_b8 != (long *)0x0) {
        plVar37 = local_b8 + 1;
        do {
          iVar13 = (int)*plVar37 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *(int *)plVar37 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_a8 = (long *)*plVar16;
          FUN_02a44274(lVar25 + 0xd8,&local_a8);
        }
      }
      plVar16 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar37 = local_c8 + 1;
        do {
          iVar13 = (int)*plVar37 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *(int *)plVar37 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_c8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar25 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar25;
          local_a8 = (long *)*plVar16;
          FUN_02a44274(lVar25 + 0xd8,&local_a8);
        }
      }
    }
    else {
      bVar7 = true;
      do {
        if ((((*piVar38 == 1) && (**(char **)(piVar38 + 0x9e) != '\0')) &&
            (*(long *)(piVar38 + 0xbc) != 0)) &&
           ((**(char **)(*(long *)(piVar38 + 0xbc) + 0x60) != '\0' && (local_f0 != (long *)0x0)))) {
          plVar16 = (long *)local_f0[0x4a];
          plVar37 = (long *)local_f0[0x4b];
          if (plVar16 == plVar37) {
LAB_01b27010:
            if ((plVar16 != plVar37) && (lVar25 = *plVar16, lVar25 != 0)) {
              lVar21 = nn::os::GetCurrentThread();
              plVar16 = (long *)(lVar25 + 0x98);
              do {
                if (*plVar16 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x8c));
                    while (*plVar16 == 0) {
                      cVar5 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                      if (bVar12) {
                        *plVar16 = lVar21;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_01b27068;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar12) {
                  *plVar16 = lVar21;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_01b27068:
              cVar5 = *(char *)(lVar25 + 299);
              *(undefined8 *)(lVar25 + 0x98) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x8c));
              piVar24 = (int *)param_1[0x4f9];
              bVar7 = (bool)(bVar7 & cVar5 != '\0');
              goto LAB_01b26f9c;
            }
          }
          else {
            do {
              if (*(long *)(*plVar16 + 0x158) == *(long *)(piVar38 + 0x9c)) goto LAB_01b27010;
              plVar16 = plVar16 + 1;
            } while (plVar37 != plVar16);
          }
          bVar7 = false;
        }
LAB_01b26f9c:
        piVar38 = piVar38 + 0xde;
      } while (piVar38 != piVar24);
      if (bVar7) goto LAB_01b27094;
    }
    if (local_f0 != (long *)0x0) {
      lVar25 = local_f0[0xb];
      piVar38 = (int *)(lVar25 + 0xc);
      do {
        iVar13 = *piVar38;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar7) {
          *piVar38 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
    }
    if (plVar27 == (long *)0x0) {
      return;
    }
    lVar25 = plVar27[0xb];
    piVar38 = (int *)(lVar25 + 0xc);
    do {
      bVar12 = *piVar38 + -1 == 0;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
      if (bVar7) {
        *piVar38 = *piVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_01b27534;
  case 5:
    goto switchD_01b260b4_caseD_5;
  case 6:
    plVar16 = param_1 + 0x55;
    lVar25 = 0x1d90;
    cVar5 = (char)*plVar16;
    while( true ) {
      if (cVar5 == '\0') {
        if ((plVar16[2] != 0) && (*(char *)(plVar16[2] + 0x1e1) == '\0')) {
          return;
        }
        if ((plVar16[0xe] != 0) && (*(char *)(plVar16[0xe] + 0x1e1) == '\0')) {
          return;
        }
        if ((plVar16[0x1a] != 0) && (*(char *)(plVar16[0x1a] + 0x1e1) == '\0')) {
          return;
        }
        if ((plVar16[0x26] != 0) && (*(char *)(plVar16[0x26] + 0x1e1) == '\0')) {
          return;
        }
        if ((plVar16[0x32] != 0) && (*(char *)(plVar16[0x32] + 0x1e1) == '\0')) {
          return;
        }
        if ((plVar16[0x3e] != 0) && (*(char *)(plVar16[0x3e] + 0x1e1) == '\0')) {
          return;
        }
      }
      lVar25 = lVar25 + -0x2b0;
      plVar16 = plVar16 + 0x56;
      if (lVar25 == 0) break;
      cVar5 = (char)*plVar16;
    }
    *(undefined4 *)(param_1 + 0x4f7) = 7;
  case 7:
    uVar17 = FUN_01b28430(param_1);
    if ((uVar17 & 1) == 0) {
      return;
    }
    lVar25 = param_1[0x3e];
    if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
      piVar38 = (int *)(lVar25 + 0xc);
      iVar13 = *(int *)(lVar25 + 0xc);
      do {
        plVar16 = *(long **)(lVar25 + 0x10);
        lVar21 = FUN_00a3edb8();
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01b26b04;
          if (plVar16 == (long *)lVar21) break;
          plVar16 = (long *)*plVar16;
        }
        iVar15 = *piVar38;
        if (iVar15 == iVar13) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar7) {
            *piVar38 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar25 = *(long *)(lVar25 + 0x18);
            plVar16 = (long *)(lVar25 + -0x50);
            if (lVar25 != 0) {
              if (*(int *)(lVar25 + 0x1a8) == 3) {
                do {
                  lVar21 = DAT_043d2928;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(0x43d2928,0x10);
                  if (bVar7) {
                    cVar5 = ExclusiveMonitorsStatus();
                    DAT_043d2928 = DAT_043d2928 + 1;
                  }
                } while (cVar5 != '\0');
                local_78 = 0;
                uStack_70 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_98 = (long *)0x0;
                uStack_90 = 0;
                local_a8 = (long *)0x0;
                piStack_a0 = (int *)0x0;
                snprintf((char *)&local_a8,0x40,"__%ld",lVar21);
                plVar37 = param_1 + 0x4b;
                do {
                  if ((*(char *)plVar37[1] != '\0') && ((char)plVar37[10] == '\0')) {
                    puVar18 = (undefined8 *)FUN_02a9b144(plVar16,plVar37);
                    plVar27 = (long *)*puVar18;
                    if (plVar27 != (long *)0x0) {
                      plVar2 = plVar27 + 10;
                      do {
                        cVar5 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar7) {
                          *(int *)plVar2 = (int)*plVar2 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      puVar18 = (undefined8 *)FUN_02ad80c4();
                      plVar35 = (long *)*puVar18;
                      if (plVar35 != (long *)0x0) {
                        plVar3 = plVar35 + 10;
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                          if (bVar7) {
                            *(int *)plVar3 = (int)*plVar3 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      local_c8 = (long *)&DAT_cbf29ce484222645;
                      if ((byte)local_a8 != 0) {
                        local_c8 = (long *)&DAT_cbf29ce484222645;
                        pbVar23 = (byte *)((ulong)&local_a8 | 1);
                        bVar4 = (byte)local_a8;
                        do {
                          local_c8 = (long *)(((ulong)local_c8 ^ (ulong)bVar4) * 0x100000001b3);
                          bVar4 = *pbVar23;
                          pbVar23 = pbVar23 + 1;
                        } while (bVar4 != 0);
                      }
                      local_c0 = &local_a8;
                      local_b8 = (long *)0x3f;
                      local_b0 = (long *)0x0;
                      FUN_02b3bf44(plVar27,&local_c8);
                      if (local_b0 != (long *)0x0) {
                        (**(code **)(*local_b0 + 0x20))();
                      }
                      if ((plVar37[0xc] != 0) && (iVar13 = FUN_02b75d50(), iVar13 != 0)) {
                        uVar36 = 0;
                        do {
                          uVar19 = FUN_02b75d34(plVar37[0xc],uVar36);
                          uVar19 = FUN_02b75c14(plVar37[0xc],uVar19);
                          local_c8 = plVar35;
                          local_d0 = (long *)FUN_01b34908(&local_e8,plVar35[1],&local_c8);
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = (int)*plVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          FUN_02bc03b4(local_d0,uVar19,1);
                          local_c0 = (long **)0x3958513;
                          local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
                          local_c8 = (long *)0x490f2945d883beaf;
                          local_b8 = (long *)0xc;
                          local_b0 = (long *)0x0;
                          FUN_02b3c010(plVar27,&local_c8,&local_d0,&local_e8);
                          if (local_b0 != (long *)0x0) {
                            (**(code **)(*local_b0 + 0x20))();
                          }
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              iVar13 = (int)*plVar3 + -1;
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = iVar13;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar13 == 0) {
                              (**(code **)(*local_d0 + 0x10))();
                            }
                          }
                          uVar36 = uVar36 + 1;
                          uVar14 = FUN_02b75d50(plVar37[0xc]);
                        } while (uVar36 < uVar14);
                      }
                      if ((plVar37[0x18] != 0) && (iVar13 = FUN_02b75d50(), iVar13 != 0)) {
                        uVar36 = 0;
                        do {
                          uVar19 = FUN_02b75d34(plVar37[0x18],uVar36);
                          uVar19 = FUN_02b75c14(plVar37[0x18],uVar19);
                          local_c8 = plVar35;
                          local_d0 = (long *)FUN_01b34908(&local_e8,plVar35[1],&local_c8);
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = (int)*plVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          FUN_02bc03b4(local_d0,uVar19,1);
                          local_c0 = (long **)0x38905f8;
                          local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
                          local_c8 = (long *)0x2eb27b778bf2f920;
                          local_b8 = (long *)0xc;
                          local_b0 = (long *)0x0;
                          FUN_02b3c010(plVar27,&local_c8,&local_d0,&local_e8);
                          if (local_b0 != (long *)0x0) {
                            (**(code **)(*local_b0 + 0x20))();
                          }
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              iVar13 = (int)*plVar3 + -1;
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = iVar13;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar13 == 0) {
                              (**(code **)(*local_d0 + 0x10))();
                            }
                          }
                          uVar36 = uVar36 + 1;
                          uVar14 = FUN_02b75d50(plVar37[0x18]);
                        } while (uVar36 < uVar14);
                      }
                      if ((plVar37[0x24] != 0) && (iVar13 = FUN_02b75d50(), iVar13 != 0)) {
                        uVar36 = 0;
                        do {
                          uVar19 = FUN_02b75d34(plVar37[0x24],uVar36);
                          uVar19 = FUN_02b75c14(plVar37[0x24],uVar19);
                          local_c8 = plVar35;
                          local_d0 = (long *)FUN_01b34908(&local_e8,plVar35[1],&local_c8);
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = (int)*plVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          FUN_02bc03b4(local_d0,uVar19,1);
                          local_c0 = (long **)0x39890c3;
                          local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
                          local_c8 = (long *)0x11c4dd2c082fe2dc;
                          local_b8 = (long *)&DAT_00000009;
                          local_b0 = (long *)0x0;
                          FUN_02b3c010(plVar27,&local_c8,&local_d0,&local_e8);
                          if (local_b0 != (long *)0x0) {
                            (**(code **)(*local_b0 + 0x20))();
                          }
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              iVar13 = (int)*plVar3 + -1;
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = iVar13;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar13 == 0) {
                              (**(code **)(*local_d0 + 0x10))();
                            }
                          }
                          uVar36 = uVar36 + 1;
                          uVar14 = FUN_02b75d50(plVar37[0x24]);
                        } while (uVar36 < uVar14);
                      }
                      if ((plVar37[0x30] != 0) && (iVar13 = FUN_02b75d50(), iVar13 != 0)) {
                        uVar36 = 0;
                        do {
                          uVar19 = FUN_02b75d34(plVar37[0x30],uVar36);
                          uVar19 = FUN_02b75c14(plVar37[0x30],uVar19);
                          local_c8 = plVar35;
                          local_d0 = (long *)FUN_01b34908(&local_e8,plVar35[1],&local_c8);
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = (int)*plVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          FUN_02bc03b4(local_d0,uVar19,1);
                          local_c0 = (long **)0x39ad378;
                          local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
                          local_c8 = (long *)0xe02307e40c33a13e;
                          local_b8 = (long *)0xb;
                          local_b0 = (long *)0x0;
                          FUN_02b3c010(plVar27,&local_c8,&local_d0,&local_e8);
                          if (local_b0 != (long *)0x0) {
                            (**(code **)(*local_b0 + 0x20))();
                          }
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              iVar13 = (int)*plVar3 + -1;
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = iVar13;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar13 == 0) {
                              (**(code **)(*local_d0 + 0x10))();
                            }
                          }
                          uVar36 = uVar36 + 1;
                          uVar14 = FUN_02b75d50(plVar37[0x30]);
                        } while (uVar36 < uVar14);
                      }
                      if ((plVar37[0x3c] != 0) && (iVar13 = FUN_02b75d50(), iVar13 != 0)) {
                        uVar36 = 0;
                        do {
                          uVar19 = FUN_02b75d34(plVar37[0x3c],uVar36);
                          uVar19 = FUN_02b75c14(plVar37[0x3c],uVar19);
                          local_c8 = plVar35;
                          local_d0 = (long *)FUN_01b34908(&local_e8,plVar35[1],&local_c8);
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = (int)*plVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          FUN_02bc03b4(local_d0,uVar19,1);
                          local_c0 = (long **)0x38eb5a7;
                          local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
                          local_c8 = (long *)0xba34590974025fe1;
                          local_b8 = (long *)0xc;
                          local_b0 = (long *)0x0;
                          FUN_02b3c010(plVar27,&local_c8,&local_d0,&local_e8);
                          if (local_b0 != (long *)0x0) {
                            (**(code **)(*local_b0 + 0x20))();
                          }
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              iVar13 = (int)*plVar3 + -1;
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = iVar13;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar13 == 0) {
                              (**(code **)(*local_d0 + 0x10))();
                            }
                          }
                          uVar36 = uVar36 + 1;
                          uVar14 = FUN_02b75d50(plVar37[0x3c]);
                        } while (uVar36 < uVar14);
                      }
                      if ((plVar37[0x48] != 0) && (iVar13 = FUN_02b75d50(), iVar13 != 0)) {
                        uVar36 = 0;
                        do {
                          uVar19 = FUN_02b75d34(plVar37[0x48],uVar36);
                          uVar19 = FUN_02b75c14(plVar37[0x48],uVar19);
                          local_c8 = plVar35;
                          local_d0 = (long *)FUN_01b34908(&local_e8,plVar35[1],&local_c8);
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = (int)*plVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                          }
                          FUN_02bc03b4(local_d0,uVar19,1);
                          local_c0 = (long **)0x38a6590;
                          local_e8 = (long *)((ulong)local_e8 & 0xffffffffffffff00);
                          local_c8 = (long *)0xafdf677778b34e35;
                          local_b8 = (long *)0x5;
                          local_b0 = (long *)0x0;
                          FUN_02b3c010(plVar27,&local_c8,&local_d0,&local_e8);
                          if (local_b0 != (long *)0x0) {
                            (**(code **)(*local_b0 + 0x20))();
                          }
                          if (local_d0 != (long *)0x0) {
                            plVar3 = local_d0 + 10;
                            do {
                              iVar13 = (int)*plVar3 + -1;
                              cVar5 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar7) {
                                *(int *)plVar3 = iVar13;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (iVar13 == 0) {
                              (**(code **)(*local_d0 + 0x10))();
                            }
                          }
                          uVar36 = uVar36 + 1;
                          uVar14 = FUN_02b75d50(plVar37[0x48]);
                        } while (uVar36 < uVar14);
                      }
                      *(undefined1 *)(plVar37 + 10) = 1;
                      if (plVar35 != (long *)0x0) {
                        plVar3 = plVar35 + 10;
                        do {
                          iVar13 = (int)*plVar3 + -1;
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                          if (bVar7) {
                            *(int *)plVar3 = iVar13;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar13 == 0) {
                          (**(code **)(*plVar35 + 0x10))(plVar35);
                        }
                      }
                      do {
                        iVar13 = (int)*plVar2 + -1;
                        cVar5 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar7) {
                          *(int *)plVar2 = iVar13;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar13 == 0) {
                        (**(code **)(*plVar27 + 0x10))(plVar27);
                      }
                    }
                  }
                  plVar37 = plVar37 + 0x56;
                } while (plVar37 != param_1 + 0x3fd);
              }
              lVar25 = *(long *)(lVar25 + 8);
              piVar38 = (int *)(lVar25 + 0xc);
              do {
                iVar13 = *piVar38;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
                if (bVar7) {
                  *piVar38 = iVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar25 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar15;
      } while (iVar15 != 0);
    }
LAB_01b26b04:
    uVar20 = 8;
    break;
  case 8:
    uVar17 = FUN_01b28430(param_1);
    if ((uVar17 & 1) == 0) {
      return;
    }
    FUN_01b287a0(param_1);
    uVar20 = 9;
    break;
  case 9:
    piVar38 = (int *)param_1[0x4f8];
    piVar24 = (int *)param_1[0x4f9];
    if (piVar38 != piVar24) {
      do {
        while (*piVar38 != 1) {
          piVar38 = piVar38 + 0xde;
          if (piVar38 == piVar24) goto LAB_01b263cc;
        }
        if (*(long *)(piVar38 + 0xe) != 0) {
          FUN_0098468c(piVar38 + 0xc);
        }
        if (*(long *)(piVar38 + 0x26) != 0) {
          FUN_0098468c(piVar38 + 0x24);
        }
        if (*(long *)(piVar38 + 0x3e) != 0) {
          FUN_0098468c(piVar38 + 0x3c);
        }
        if (*(long *)(piVar38 + 0x56) != 0) {
          FUN_0098468c(piVar38 + 0x54);
        }
        if (*(long *)(piVar38 + 0x6e) != 0) {
          FUN_0098468c(piVar38 + 0x6c);
        }
        if (*(long *)(piVar38 + 0x86) != 0) {
          FUN_0098468c(piVar38 + 0x84);
        }
        piVar33 = (int *)param_1[0x4f9];
        piVar29 = piVar38 + 0xde;
        if (piVar29 == piVar33) {
          piVar24 = piVar38;
LAB_01b263ac:
          do {
            piVar29 = piVar29 + -0xde;
            FUN_01b2b604(piVar29);
          } while (piVar24 != piVar29);
        }
        else {
          piVar29 = piVar38;
          do {
            piVar24 = piVar29 + 0xde;
            FUN_01b35fa4(piVar29,piVar24);
            piVar1 = piVar29 + 0x1bc;
            piVar29 = piVar24;
          } while (piVar1 != piVar33);
          piVar29 = (int *)param_1[0x4f9];
          if (piVar29 != piVar24) goto LAB_01b263ac;
        }
        param_1[0x4f9] = (long)piVar24;
      } while (piVar38 != piVar24);
    }
LAB_01b263cc:
    FUN_01b299d8(param_1);
    *(undefined1 *)(param_1 + 0x500) = 0;
    uVar20 = 1;
  }
  *(undefined4 *)(param_1 + 0x4f7) = uVar20;
  return;
LAB_01b26400:
  puVar34 = puVar34 + 0xde;
  if (puVar26 == puVar34) goto LAB_01b26594;
  goto LAB_01b2640c;
LAB_01b26464:
  if ((**(char **)(puVar34 + 4) == '\0') || (*(long *)(puVar34 + 2) != *(long *)(puVar22 + 0xe0)))
  goto LAB_01b26428;
  if (puVar34 + 0xde != puVar26) {
    puVar32 = puVar34;
    do {
      puVar30 = puVar32 + 0xde;
      FUN_01b35fa4(puVar32,puVar30);
      puVar22 = puVar32 + 0x1bc;
      puVar32 = puVar30;
    } while (puVar22 != puVar26);
    puVar26 = (undefined4 *)param_1[0x4f9];
    if (puVar26 == puVar30) goto LAB_01b26584;
  }
  do {
    puVar26 = puVar26 + -0xde;
    FUN_01b2b604(puVar26);
  } while (puVar30 != puVar26);
LAB_01b26584:
  puVar26 = puVar30;
  param_1[0x4f9] = (long)puVar26;
  if (puVar26 == puVar34) goto LAB_01b26594;
  goto LAB_01b2640c;
}


