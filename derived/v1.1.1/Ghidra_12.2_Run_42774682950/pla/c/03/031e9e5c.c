/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e9e5c; name: FUN_031e9e5c
 */


void FUN_031e9e5c(long param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined *puVar15;
  byte bVar16;
  undefined4 uVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  unkbyte9 *pVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  int *piVar27;
  undefined1 (*pauVar28) [16];
  float *pfVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  undefined1 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint *puVar40;
  int *piVar41;
  int *piVar42;
  uint *puVar43;
  long *plVar44;
  undefined4 *puVar45;
  long lVar46;
  undefined8 *puVar47;
  long lVar48;
  float fVar49;
  float fVar50;
  uint uVar51;
  uint uVar52;
  int iVar57;
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  int iVar58;
  undefined1 auVar56 [12];
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  int iVar69;
  int iVar70;
  int iVar72;
  int iVar73;
  undefined1 auVar71 [16];
  long local_158;
  int *local_140;
  uint *local_138;
  long local_f0;
  undefined4 local_d8 [2];
  long local_d0;
  long local_c8;
  int *local_c0;
  undefined8 local_b8;
  uint *local_b0;
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 uStack_88;
  int **local_80;
  undefined8 uStack_78;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar46 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar46;
    lVar46 = *(long *)(lVar46 + 0x10);
  }
  else {
    lVar46 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar46 != 0) {
    puVar22 = *(undefined8 **)(lVar46 + 8);
    uVar26 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
    if ((uVar26 <= *(ulong *)(lVar46 + 0x10)) &&
       (*(ulong *)(lVar46 + 8) = uVar26, puVar22 != (undefined8 *)0x0)) {
      *puVar22 = "TtupdateOverlaps";
      uVar20 = nn::os::GetSystemTick();
      puVar22[1] = uVar20;
    }
  }
  local_c8 = lVar46;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
      lVar19 = *(long *)(lVar4 + 0x38d490);
    }
    fVar50 = *(float *)(param_1 + 0x184);
    lVar33 = (long)DAT_0444b53c;
    local_b0 = (uint *)0x0;
    local_a8 = 0x8000000000000000;
    local_c0 = (int *)0x0;
    local_b8 = 0x8000000000000000;
    local_d0 = param_1;
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    lVar35 = param_1 + 0x40;
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    plVar44 = (long *)(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x28)) {
      uVar52 = 0x10624de;
      lVar33 = 0;
      lVar19 = 0;
      do {
        if (*(char *)(*plVar44 + lVar33 + 0x40) != '\0') {
          FUN_001d530c(lVar35,*(undefined4 *)(*plVar44 + lVar33 + 0x44));
          uVar26 = local_a8;
          puVar43 = local_b0;
          uVar51 = (int)local_a8 + 1;
          if ((int)(local_a8._4_4_ & 0x3fffffff) <= (int)local_a8) {
            if (0x3ffffffe < (int)local_a8) {
              FUN_032bd0a8(uVar51);
            }
            uVar30 = (local_a8._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar30) {
              uVar30 = 0x3fffffff;
            }
            uVar32 = uVar51;
            if ((int)uVar51 <= (int)uVar30) {
              uVar32 = uVar30;
            }
            local_b0 = (uint *)FUN_032bd1d4(PTR_PTR_0434a090,uVar32,4,puVar43,uVar26 & 0xffffffff,
                                            (long)&local_a8 + 4);
          }
          local_b0[(int)local_a8] = (uint)lVar19;
          local_a8 = CONCAT44(local_a8._4_4_,uVar51);
        }
        if (uVar52 < 0x10624de) {
          lVar39 = (long)DAT_0444b53c;
          lVar37 = *(long *)(lVar4 + 0x38d490);
          if (lVar37 == 0) {
            lVar37 = FUN_0333d16c(0,1);
            *(long *)(lVar4 + 0x38d490) = lVar37;
          }
          if (*(long *)(lVar37 + lVar39 * 8 + 0x18) != 0) {
            FUN_0332a954();
          }
        }
        lVar19 = lVar19 + 1;
        lVar33 = lVar33 + 0x50;
        uVar52 = uVar52 + 0x10624de;
      } while (lVar19 < *(int *)(param_1 + 0x28));
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    lVar37 = param_1 + 0x60;
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    puVar15 = PTR_PTR_0434a090;
    if (0 < *(int *)(param_1 + 0x38)) {
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x40) != '\0') {
        FUN_001d530c(lVar37,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x44));
        uVar26 = local_b8;
        piVar42 = local_c0;
        uVar52 = (int)local_b8 + 1;
        if ((int)(local_b8._4_4_ & 0x3fffffff) <= (int)local_b8) {
          if (0x3ffffffe < (int)local_b8) {
            FUN_032bd0a8(uVar52);
          }
          uVar51 = (local_b8._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar51) {
            uVar51 = 0x3fffffff;
          }
          uVar30 = uVar52;
          if ((int)uVar52 <= (int)uVar51) {
            uVar30 = uVar51;
          }
          local_c0 = (int *)FUN_032bd1d4(puVar15,uVar30,4,piVar42,uVar26 & 0xffffffff,
                                         (long)&local_b8 + 4);
        }
        local_c0[(int)local_b8] = 0;
        local_b8 = CONCAT44(local_b8._4_4_,uVar52);
      }
      if (1 < *(int *)(param_1 + 0x38)) {
        lVar33 = 0;
        uVar52 = 0x20c49bc;
        lVar19 = 1;
        do {
          lVar39 = *(long *)(param_1 + 0x30) + lVar33;
          if (*(char *)(lVar39 + 0x90) != '\0') {
            FUN_001d530c(lVar37,*(undefined4 *)(lVar39 + 0x94));
            uVar26 = local_b8;
            piVar42 = local_c0;
            uVar51 = (int)local_b8 + 1;
            if ((int)(local_b8._4_4_ & 0x3fffffff) <= (int)local_b8) {
              if (0x3ffffffe < (int)local_b8) {
                FUN_032bd0a8(uVar51);
              }
              uVar30 = (local_b8._4_4_ & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar30) {
                uVar30 = 0x3fffffff;
              }
              uVar32 = uVar51;
              if ((int)uVar51 <= (int)uVar30) {
                uVar32 = uVar30;
              }
              local_c0 = (int *)FUN_032bd1d4(puVar15,uVar32,4,piVar42,uVar26 & 0xffffffff,
                                             (long)&local_b8 + 4);
            }
            local_c0[(int)local_b8] = (int)lVar19;
            local_b8 = CONCAT44(local_b8._4_4_,uVar51);
          }
          if (uVar52 < 0x10624de) {
            lVar24 = (long)DAT_0444b53c;
            lVar39 = *(long *)(lVar4 + 0x38d490);
            if (lVar39 == 0) {
              lVar39 = FUN_0333d16c(0,1);
              *(long *)(lVar4 + 0x38d490) = lVar39;
            }
            if (*(long *)(lVar39 + lVar24 * 8 + 0x18) != 0) {
              FUN_0332a954();
            }
          }
          lVar19 = lVar19 + 1;
          lVar33 = lVar33 + 0x50;
          uVar52 = uVar52 + 0x10624de;
        } while (lVar19 < *(int *)(param_1 + 0x38));
      }
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) == 0) {
    }
    else {
      FUN_0332a954();
    }
    if ((int)local_a8 != 0) {
      if ((int)local_b8 != 0) {
        FUN_031efcec(plVar44,local_b0,local_b0 + (int)local_a8,local_c0,local_c0 + (int)local_b8,
                     &local_d0);
      }
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar33 = *(long *)(param_1 + 0x20);
    lVar19 = *(long *)(param_1 + 0x30);
    if ((int)local_a8 == 0) {
      local_140 = local_c0;
    }
    else {
      puVar43 = local_b0 + (int)local_a8;
      local_138 = local_b0;
      do {
        uVar52 = *local_138;
        pVar23 = (unkbyte9 *)(lVar33 + (long)(int)uVar52 * 0x50);
        pauVar28 = (undefined1 (*) [16])(pVar23 + 2);
        auVar71 = *pauVar28;
        pfVar29 = (float *)(pVar23 + 3);
        uVar20 = *(undefined8 *)((long)pVar23 + 8);
        iVar69 = -(uint)(auVar71._0_4_ <= *(float *)*(undefined1 (*) [16])(pVar23 + 1));
        iVar70 = -(uint)(auVar71._4_4_ <= *(float *)((long)pVar23 + 0x14));
        iVar72 = -(uint)(auVar71._8_4_ <= *(float *)((long)pVar23 + 0x18));
        iVar18 = -(uint)((float)*(undefined8 *)pVar23 <= (float)*(undefined8 *)pfVar29);
        iVar31 = -(uint)((float)((ulong)*(undefined8 *)pVar23 >> 0x20) <=
                        (float)((ulong)*(undefined8 *)pfVar29 >> 0x20));
        iVar25 = -(uint)((float)uVar20 <= (float)*(undefined8 *)((long)pVar23 + 0x38));
        if ((CONCAT13((byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                      CONCAT12((byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                               CONCAT11((byte)((uint)iVar69 >> 8) & (byte)((uint)iVar18 >> 8),
                                        (byte)iVar69 & (byte)iVar18))) &
             CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                      CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                               CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar31 >> 8),
                                        (byte)iVar70 & (byte)iVar31))) &
            CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                     CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                              CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar25 >> 8),
                                       (byte)iVar72 & (byte)iVar25)))) == 0) {
          local_90 = (undefined4 *)0x0;
          uStack_88 = (undefined *)0x8000000000000000;
          local_a0 = (undefined4 *)0x0;
          local_98 = -0x8000000000000000;
          FUN_001d58f0(lVar37,pVar23,&local_90);
          FUN_001d58f0(lVar37,pauVar28,&local_a0);
          if (1 < (int)uStack_88) {
            FUN_031f0380(local_90,0,(int)uStack_88 + -1);
          }
          puVar15 = PTR_PTR_0434a080;
          if ((int)local_98 + -1 != 0 && 0 < (int)local_98) {
            FUN_031f0380(local_a0,0,(int)local_98 + -1);
          }
          iVar18 = 0;
          iVar31 = (int)local_98;
          if ((int)local_98 < 1) {
            iVar25 = 0;
            iVar69 = (int)uStack_88;
            if (0 < (int)uStack_88) goto LAB_031eae44;
          }
          else {
            iVar25 = 0;
            if (0 < (int)uStack_88) {
              iVar25 = 0;
              iVar18 = 0;
              do {
                uVar51 = local_90[iVar25];
                uVar30 = local_a0[iVar18];
                if (uVar51 < uVar30) {
                  uVar30 = *(uint *)(param_1 + 0x88);
                  if (0 < (int)uVar30) {
                    lVar24 = *(long *)(param_1 + 0x80);
                    lVar48 = 0;
                    lVar39 = 0;
                    puVar40 = (uint *)(lVar24 + 4);
                    do {
                      if ((puVar40[-1] == uVar52) && (*puVar40 == uVar51)) {
                        if ((int)lVar48 != 1) {
                          *(uint *)(param_1 + 0x88) = uVar30 - 1;
                          if (uVar30 + (int)lVar48 != 1) {
                            *(undefined8 *)(lVar24 + (lVar39 >> 0x1d)) =
                                 *(undefined8 *)(lVar24 + (long)(int)(uVar30 - 1) * 8);
                          }
                          FUN_031ed430(param_1,-lVar48 & 0xffffffff);
                          FUN_031ed6b8(param_1,-lVar48 & 0xffffffff);
                        }
                        break;
                      }
                      lVar48 = lVar48 + -1;
                      lVar39 = lVar39 + 0x100000000;
                      puVar40 = puVar40 + 2;
                    } while ((ulong)uVar30 + lVar48 != 0);
                  }
                  iVar25 = iVar25 + 1;
                }
                else {
                  if (uVar30 < uVar51) {
                    puVar22 = (undefined8 *)(lVar19 + (long)(int)uVar30 * 0x50);
                    iVar72 = -(uint)((float)*puVar22 <= *pfVar29);
                    iVar73 = -(uint)((float)((ulong)*puVar22 >> 0x20) <=
                                    *(float *)((long)pVar23 + 0x34));
                    iVar57 = -(uint)((float)puVar22[1] <= *(float *)((long)pVar23 + 0x38));
                    iVar31 = -(uint)((float)*(undefined8 *)*pauVar28 <= (float)puVar22[2]);
                    iVar69 = -(uint)((float)((ulong)*(undefined8 *)*pauVar28 >> 0x20) <=
                                    (float)((ulong)puVar22[2] >> 0x20));
                    iVar70 = -(uint)((float)*(undefined8 *)((long)pVar23 + 0x28) <=
                                    (float)puVar22[3]);
                    uVar51 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar72 >> 0x18),
                                      CONCAT12((byte)((uint)iVar31 >> 0x10) &
                                               (byte)((uint)iVar72 >> 0x10),
                                               CONCAT11((byte)((uint)iVar31 >> 8) &
                                                        (byte)((uint)iVar72 >> 8),
                                                        (byte)iVar31 & (byte)iVar72)));
                    auVar53._0_8_ =
                         CONCAT17((byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar73 >> 0x18),
                                  CONCAT16((byte)((uint)iVar69 >> 0x10) &
                                           (byte)((uint)iVar73 >> 0x10),
                                           CONCAT15((byte)((uint)iVar69 >> 8) &
                                                    (byte)((uint)iVar73 >> 8),
                                                    CONCAT14((byte)iVar69 & (byte)iVar73,uVar51))));
                    auVar53[8] = (byte)iVar70 & (byte)iVar57;
                    auVar53[9] = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar57 >> 8);
                    auVar53[10] = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
                    auVar53[0xb] = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
                    if ((uVar51 & (uint)((ulong)auVar53._0_8_ >> 0x20) & auVar53._8_4_) != 0) {
                      FUN_031ed2e8(param_1,uVar52);
                      iVar69 = *(int *)(param_1 + 0x88);
                      lVar39 = *(long *)(param_1 + 0x80);
                      iVar31 = iVar69 + 1;
                      if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar69) {
                        lVar39 = FUN_031ef8e8(puVar15,iVar31,lVar39,iVar69,param_1 + 0x8c);
                        iVar69 = *(int *)(param_1 + 0x88);
                        *(long *)(param_1 + 0x80) = lVar39;
                      }
                      *(ulong *)(lVar39 + (long)iVar69 * 8) = CONCAT44(uVar30,uVar52);
                      *(int *)(param_1 + 0x88) = iVar31;
                    }
                  }
                  else {
                    FUN_031f01b4(plVar44,CONCAT44(uVar51,uVar52),&local_d0);
                    iVar25 = iVar25 + 1;
                  }
                  iVar18 = iVar18 + 1;
                }
                iVar31 = (int)local_98;
              } while ((iVar25 < (int)uStack_88) && (iVar18 < (int)local_98));
            }
            iVar69 = (int)uStack_88;
            if (iVar25 < (int)uStack_88) {
LAB_031eae44:
              lVar39 = (long)iVar25;
              do {
                uVar51 = *(uint *)(param_1 + 0x88);
                if (0 < (int)uVar51) {
                  lVar38 = 0;
                  lVar24 = 0;
                  lVar48 = *(long *)(param_1 + 0x80);
                  piVar42 = (int *)(lVar48 + 4);
                  do {
                    if ((piVar42[-1] == uVar52) && (*piVar42 == local_90[lVar39])) {
                      if ((int)lVar38 != 1) {
                        *(uint *)(param_1 + 0x88) = uVar51 - 1;
                        if (uVar51 + (int)lVar38 != 1) {
                          *(undefined8 *)(lVar48 + (lVar24 >> 0x1d)) =
                               *(undefined8 *)(lVar48 + (long)(int)(uVar51 - 1) * 8);
                        }
                        FUN_031ed430(param_1,-lVar38 & 0xffffffff);
                        FUN_031ed6b8(param_1,-lVar38 & 0xffffffff);
                        iVar69 = (int)uStack_88;
                      }
                      break;
                    }
                    lVar38 = lVar38 + -1;
                    lVar24 = lVar24 + 0x100000000;
                    piVar42 = piVar42 + 2;
                  } while ((ulong)uVar51 + lVar38 != 0);
                }
                lVar39 = lVar39 + 1;
              } while (lVar39 < iVar69);
              iVar31 = (int)local_98;
            }
          }
          puVar21 = PTR_PTR_0434a090;
          if (iVar18 < iVar31) {
            lVar39 = (long)iVar18;
            do {
              iVar18 = local_a0[lVar39];
              puVar22 = (undefined8 *)(lVar19 + (long)iVar18 * 0x50);
              iVar72 = -(uint)((float)*puVar22 <= *pfVar29);
              iVar73 = -(uint)((float)((ulong)*puVar22 >> 0x20) <= *(float *)((long)pVar23 + 0x34));
              iVar57 = -(uint)((float)puVar22[1] <= *(float *)((long)pVar23 + 0x38));
              iVar25 = -(uint)((float)*(undefined8 *)*pauVar28 <= (float)puVar22[2]);
              iVar69 = -(uint)((float)((ulong)*(undefined8 *)*pauVar28 >> 0x20) <=
                              (float)((ulong)puVar22[2] >> 0x20));
              iVar70 = -(uint)((float)*(undefined8 *)((long)pVar23 + 0x28) <= (float)puVar22[3]);
              uVar51 = CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar72 >> 0x18),
                                CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar72 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar25 >> 8) &
                                                   (byte)((uint)iVar72 >> 8),
                                                   (byte)iVar25 & (byte)iVar72)));
              auVar54._0_8_ =
                   CONCAT17((byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar73 >> 0x18),
                            CONCAT16((byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar73 >> 0x10),
                                     CONCAT15((byte)((uint)iVar69 >> 8) & (byte)((uint)iVar73 >> 8),
                                              CONCAT14((byte)iVar69 & (byte)iVar73,uVar51))));
              auVar54[8] = (byte)iVar70 & (byte)iVar57;
              auVar54[9] = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar57 >> 8);
              auVar54[10] = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
              auVar54[0xb] = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
              if ((uVar51 & (uint)((ulong)auVar54._0_8_ >> 0x20) & auVar54._8_4_) != 0) {
                FUN_031ed2e8(param_1,uVar52);
                iVar25 = *(int *)(param_1 + 0x88);
                lVar24 = *(long *)(param_1 + 0x80);
                iVar31 = iVar25 + 1;
                if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar25) {
                  lVar24 = FUN_031ef8e8(puVar15,iVar31,lVar24,iVar25,param_1 + 0x8c);
                  iVar25 = *(int *)(param_1 + 0x88);
                  *(long *)(param_1 + 0x80) = lVar24;
                }
                *(ulong *)(lVar24 + (long)iVar25 * 8) = CONCAT44(iVar18,uVar52);
                *(int *)(param_1 + 0x88) = iVar31;
                iVar31 = (int)local_98;
              }
              lVar39 = lVar39 + 1;
            } while (lVar39 < iVar31);
          }
          lVar39 = local_98;
          uVar52 = local_98._4_4_;
          local_98 = (ulong)local_98._4_4_ << 0x20;
          if ((-1 < lVar39) && (local_a0 != (undefined4 *)0x0)) {
            (**(code **)(*(long *)puVar21 + 0x18))(puVar21,local_a0,uVar52 << 2);
          }
          lVar39 = (long)uStack_88;
          uVar52 = uStack_88._4_4_;
          uStack_88 = (undefined *)((ulong)uStack_88._4_4_ << 0x20);
          if ((-1 < lVar39) && (local_90 != (undefined4 *)0x0)) {
            lVar39 = *(long *)puVar21;
            puVar45 = local_90;
            goto LAB_031eabf8;
          }
        }
        else {
          auVar7[9] = (char)((ulong)uVar20 >> 8);
          auVar7._0_9_ = *pVar23;
          auVar7[10] = (char)((ulong)uVar20 >> 0x10);
          auVar7[0xb] = (char)((ulong)uVar20 >> 0x18);
          auVar7[0xc] = (char)((ulong)uVar20 >> 0x20);
          auVar7[0xd] = (char)((ulong)uVar20 >> 0x28);
          auVar7[0xe] = (char)((ulong)uVar20 >> 0x30);
          auVar7[0xf] = (char)((ulong)uVar20 >> 0x38);
          auVar71 = NEON_fmin(auVar7,auVar71,4);
          uStack_88 = auVar71._8_8_;
          local_90 = auVar71._0_8_;
          uVar20 = *(undefined8 *)((long)pVar23 + 0x38);
          auVar71[9] = (char)((ulong)uVar20 >> 8);
          auVar71._0_9_ = *(unkbyte9 *)pfVar29;
          auVar71[10] = (char)((ulong)uVar20 >> 0x10);
          auVar71[0xb] = (char)((ulong)uVar20 >> 0x18);
          auVar71[0xc] = (char)((ulong)uVar20 >> 0x20);
          auVar71[0xd] = (char)((ulong)uVar20 >> 0x28);
          auVar71[0xe] = (char)((ulong)uVar20 >> 0x30);
          auVar71[0xf] = (char)((ulong)uVar20 >> 0x38);
          auVar71 = NEON_fmax(*(undefined1 (*) [16])(pVar23 + 1),auVar71,4);
          uStack_78 = auVar71._8_8_;
          local_80 = auVar71._0_8_;
          local_a0 = (undefined4 *)0x0;
          local_98 = -0x8000000000000000;
          FUN_001d58f0(lVar37,&local_90,&local_a0);
          if ((int)local_98 != 0) {
            lVar39 = (long)(int)local_98 << 2;
            puVar45 = local_a0;
            do {
              FUN_031f01b4(plVar44,CONCAT44(*puVar45,uVar52),&local_d0);
              lVar48 = (long)DAT_0444b53c;
              lVar24 = *(long *)(lVar4 + 0x38d490);
              if (lVar24 == 0) {
                lVar24 = FUN_0333d16c(0,1);
                *(long *)(lVar4 + 0x38d490) = lVar24;
              }
              if (*(long *)(lVar24 + lVar48 * 8 + 0x18) != 0) {
                FUN_0332a954();
              }
              puVar45 = puVar45 + 1;
              lVar39 = lVar39 + -4;
            } while (lVar39 != 0);
          }
          lVar39 = local_98;
          uVar52 = local_98._4_4_;
          local_98 = (ulong)local_98._4_4_ << 0x20;
          if ((-1 < lVar39) && (local_a0 != (undefined4 *)0x0)) {
            lVar39 = *(long *)PTR_PTR_0434a090;
            puVar21 = PTR_PTR_0434a090;
            puVar45 = local_a0;
LAB_031eabf8:
            (**(code **)(lVar39 + 0x18))(puVar21,puVar45,uVar52 << 2);
          }
        }
        local_138 = local_138 + 1;
      } while (local_138 != puVar43);
      lVar19 = *(long *)(param_1 + 0x30);
      lVar33 = *(long *)(param_1 + 0x20);
      local_140 = local_c0;
    }
    local_c0 = local_140;
    if ((int)local_b8 != 0) {
      piVar42 = local_140 + (int)local_b8;
      do {
        iVar18 = *local_140;
        pVar23 = (unkbyte9 *)(lVar19 + (long)iVar18 * 0x50);
        pauVar28 = (undefined1 (*) [16])(pVar23 + 2);
        auVar71 = *pauVar28;
        pfVar29 = (float *)(pVar23 + 3);
        uVar20 = *(undefined8 *)((long)pVar23 + 8);
        iVar70 = -(uint)(auVar71._0_4_ <= *(float *)*(undefined1 (*) [16])(pVar23 + 1));
        iVar72 = -(uint)(auVar71._4_4_ <= *(float *)((long)pVar23 + 0x14));
        iVar73 = -(uint)(auVar71._8_4_ <= *(float *)((long)pVar23 + 0x18));
        iVar31 = -(uint)((float)*(undefined8 *)pVar23 <= (float)*(undefined8 *)pfVar29);
        iVar25 = -(uint)((float)((ulong)*(undefined8 *)pVar23 >> 0x20) <=
                        (float)((ulong)*(undefined8 *)pfVar29 >> 0x20));
        iVar69 = -(uint)((float)uVar20 <= (float)*(undefined8 *)((long)pVar23 + 0x38));
        if ((CONCAT13((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                      CONCAT12((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                               CONCAT11((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar31 >> 8),
                                        (byte)iVar70 & (byte)iVar31))) &
             CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                      CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                               CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar25 >> 8),
                                        (byte)iVar72 & (byte)iVar25))) &
            CONCAT13((byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                     CONCAT12((byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar69 >> 0x10),
                              CONCAT11((byte)((uint)iVar73 >> 8) & (byte)((uint)iVar69 >> 8),
                                       (byte)iVar73 & (byte)iVar69)))) == 0) {
          local_90 = (undefined4 *)0x0;
          uStack_88 = (undefined *)0x8000000000000000;
          local_a0 = (undefined4 *)0x0;
          local_98 = -0x8000000000000000;
          FUN_001d58f0(lVar35,pVar23,&local_90);
          FUN_001d58f0(lVar35,pauVar28,&local_a0);
          if (1 < (int)uStack_88) {
            FUN_031f0380(local_90,0,(int)uStack_88 + -1);
          }
          puVar15 = PTR_PTR_0434a080;
          if ((int)local_98 + -1 != 0 && 0 < (int)local_98) {
            FUN_031f0380(local_a0,0,(int)local_98 + -1);
          }
          iVar31 = 0;
          iVar25 = (int)local_98;
          if ((int)local_98 < 1) {
            iVar69 = 0;
            iVar70 = (int)uStack_88;
            if (0 < (int)uStack_88) goto LAB_031eb5d4;
          }
          else {
            iVar69 = 0;
            if (0 < (int)uStack_88) {
              iVar69 = 0;
              iVar31 = 0;
              do {
                uVar52 = local_90[iVar69];
                uVar51 = local_a0[iVar31];
                if (uVar52 < uVar51) {
                  uVar51 = *(uint *)(param_1 + 0x88);
                  if (0 < (int)uVar51) {
                    lVar24 = *(long *)(param_1 + 0x80);
                    lVar48 = 0;
                    lVar39 = 0;
                    piVar41 = (int *)(lVar24 + 4);
                    do {
                      if ((piVar41[-1] == uVar52) && (*piVar41 == iVar18)) {
                        if ((int)lVar48 != 1) {
                          *(uint *)(param_1 + 0x88) = uVar51 - 1;
                          if (uVar51 + (int)lVar48 != 1) {
                            *(undefined8 *)(lVar24 + (lVar39 >> 0x1d)) =
                                 *(undefined8 *)(lVar24 + (long)(int)(uVar51 - 1) * 8);
                          }
                          FUN_031ed430(param_1,-lVar48 & 0xffffffff);
                          FUN_031ed6b8(param_1,-lVar48 & 0xffffffff);
                        }
                        break;
                      }
                      lVar48 = lVar48 + -1;
                      lVar39 = lVar39 + 0x100000000;
                      piVar41 = piVar41 + 2;
                    } while ((ulong)uVar51 + lVar48 != 0);
                  }
                  iVar69 = iVar69 + 1;
                }
                else {
                  if (uVar51 < uVar52) {
                    puVar22 = (undefined8 *)(lVar33 + (long)(int)uVar51 * 0x50);
                    iVar73 = -(uint)((float)*puVar22 <= *pfVar29);
                    iVar57 = -(uint)((float)((ulong)*puVar22 >> 0x20) <=
                                    *(float *)((long)pVar23 + 0x34));
                    iVar58 = -(uint)((float)puVar22[1] <= *(float *)((long)pVar23 + 0x38));
                    iVar25 = -(uint)((float)*(undefined8 *)*pauVar28 <= (float)puVar22[2]);
                    iVar70 = -(uint)((float)((ulong)*(undefined8 *)*pauVar28 >> 0x20) <=
                                    (float)((ulong)puVar22[2] >> 0x20));
                    iVar72 = -(uint)((float)*(undefined8 *)((long)pVar23 + 0x28) <=
                                    (float)puVar22[3]);
                    uVar52 = CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar73 >> 0x18),
                                      CONCAT12((byte)((uint)iVar25 >> 0x10) &
                                               (byte)((uint)iVar73 >> 0x10),
                                               CONCAT11((byte)((uint)iVar25 >> 8) &
                                                        (byte)((uint)iVar73 >> 8),
                                                        (byte)iVar25 & (byte)iVar73)));
                    auVar55._0_8_ =
                         CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                                  CONCAT16((byte)((uint)iVar70 >> 0x10) &
                                           (byte)((uint)iVar57 >> 0x10),
                                           CONCAT15((byte)((uint)iVar70 >> 8) &
                                                    (byte)((uint)iVar57 >> 8),
                                                    CONCAT14((byte)iVar70 & (byte)iVar57,uVar52))));
                    auVar55[8] = (byte)iVar72 & (byte)iVar58;
                    auVar55[9] = (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar58 >> 8);
                    auVar55[10] = (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar58 >> 0x10);
                    auVar55[0xb] = (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar58 >> 0x18);
                    if ((uVar52 & (uint)((ulong)auVar55._0_8_ >> 0x20) & auVar55._8_4_) != 0) {
                      FUN_031ed2e8(param_1,(long)(int)uVar51,iVar18);
                      iVar70 = *(int *)(param_1 + 0x88);
                      lVar39 = *(long *)(param_1 + 0x80);
                      iVar25 = iVar70 + 1;
                      if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar70) {
                        lVar39 = FUN_031ef8e8(puVar15,iVar25,lVar39,iVar70,param_1 + 0x8c);
                        iVar70 = *(int *)(param_1 + 0x88);
                        *(long *)(param_1 + 0x80) = lVar39;
                      }
                      *(ulong *)(lVar39 + (long)iVar70 * 8) = CONCAT44(iVar18,uVar51);
                      *(int *)(param_1 + 0x88) = iVar25;
                    }
                  }
                  else {
                    FUN_031f01b4(plVar44,CONCAT44(iVar18,uVar52),&local_d0);
                    iVar69 = iVar69 + 1;
                  }
                  iVar31 = iVar31 + 1;
                }
                iVar25 = (int)local_98;
              } while ((iVar69 < (int)uStack_88) && (iVar31 < (int)local_98));
            }
            iVar70 = (int)uStack_88;
            if (iVar69 < (int)uStack_88) {
LAB_031eb5d4:
              lVar39 = (long)iVar69;
              do {
                uVar52 = *(uint *)(param_1 + 0x88);
                if (0 < (int)uVar52) {
                  lVar38 = 0;
                  lVar24 = 0;
                  lVar48 = *(long *)(param_1 + 0x80);
                  piVar41 = (int *)(lVar48 + 4);
                  do {
                    if ((piVar41[-1] == local_90[lVar39]) && (*piVar41 == iVar18)) {
                      if ((int)lVar38 != 1) {
                        *(uint *)(param_1 + 0x88) = uVar52 - 1;
                        if (uVar52 + (int)lVar38 != 1) {
                          *(undefined8 *)(lVar48 + (lVar24 >> 0x1d)) =
                               *(undefined8 *)(lVar48 + (long)(int)(uVar52 - 1) * 8);
                        }
                        FUN_031ed430(param_1,-lVar38 & 0xffffffff);
                        FUN_031ed6b8(param_1,-lVar38 & 0xffffffff);
                        iVar70 = (int)uStack_88;
                      }
                      break;
                    }
                    lVar38 = lVar38 + -1;
                    lVar24 = lVar24 + 0x100000000;
                    piVar41 = piVar41 + 2;
                  } while ((ulong)uVar52 + lVar38 != 0);
                }
                lVar39 = lVar39 + 1;
              } while (lVar39 < iVar70);
              iVar25 = (int)local_98;
            }
          }
          puVar21 = PTR_PTR_0434a090;
          if (iVar31 < iVar25) {
            lVar39 = (long)iVar31;
            do {
              iVar31 = local_a0[lVar39];
              puVar22 = (undefined8 *)(lVar33 + (long)iVar31 * 0x50);
              iVar73 = -(uint)((float)*puVar22 <= *pfVar29);
              iVar57 = -(uint)((float)((ulong)*puVar22 >> 0x20) <= *(float *)((long)pVar23 + 0x34));
              iVar58 = -(uint)((float)puVar22[1] <= *(float *)((long)pVar23 + 0x38));
              iVar69 = -(uint)((float)*(undefined8 *)*pauVar28 <= (float)puVar22[2]);
              iVar70 = -(uint)((float)((ulong)*(undefined8 *)*pauVar28 >> 0x20) <=
                              (float)((ulong)puVar22[2] >> 0x20));
              iVar72 = -(uint)((float)*(undefined8 *)((long)pVar23 + 0x28) <= (float)puVar22[3]);
              uVar52 = CONCAT13((byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar73 >> 0x18),
                                CONCAT12((byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar73 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar69 >> 8) &
                                                   (byte)((uint)iVar73 >> 8),
                                                   (byte)iVar69 & (byte)iVar73)));
              auVar56._0_8_ =
                   CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                            CONCAT16((byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                                     CONCAT15((byte)((uint)iVar70 >> 8) & (byte)((uint)iVar57 >> 8),
                                              CONCAT14((byte)iVar70 & (byte)iVar57,uVar52))));
              auVar56[8] = (byte)iVar72 & (byte)iVar58;
              auVar56[9] = (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar58 >> 8);
              auVar56[10] = (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar58 >> 0x10);
              auVar56[0xb] = (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar58 >> 0x18);
              if ((uVar52 & (uint)((ulong)auVar56._0_8_ >> 0x20) & auVar56._8_4_) != 0) {
                FUN_031ed2e8(param_1,iVar31,iVar18);
                iVar69 = *(int *)(param_1 + 0x88);
                lVar24 = *(long *)(param_1 + 0x80);
                iVar25 = iVar69 + 1;
                if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar69) {
                  lVar24 = FUN_031ef8e8(puVar15,iVar25,lVar24,iVar69,param_1 + 0x8c);
                  iVar69 = *(int *)(param_1 + 0x88);
                  *(long *)(param_1 + 0x80) = lVar24;
                }
                *(ulong *)(lVar24 + (long)iVar69 * 8) = CONCAT44(iVar18,iVar31);
                *(int *)(param_1 + 0x88) = iVar25;
                iVar25 = (int)local_98;
              }
              lVar39 = lVar39 + 1;
            } while (lVar39 < iVar25);
          }
          lVar39 = local_98;
          uVar52 = local_98._4_4_;
          local_98 = (ulong)local_98._4_4_ << 0x20;
          if ((-1 < lVar39) && (local_a0 != (undefined4 *)0x0)) {
            (**(code **)(*(long *)puVar21 + 0x18))(puVar21,local_a0,uVar52 << 2);
          }
          lVar39 = (long)uStack_88;
          uVar52 = uStack_88._4_4_;
          uStack_88 = (undefined *)((ulong)uStack_88._4_4_ << 0x20);
          if ((-1 < lVar39) && (local_90 != (undefined4 *)0x0)) {
            lVar39 = *(long *)puVar21;
            puVar45 = local_90;
            goto LAB_031eb380;
          }
        }
        else {
          auVar5[9] = (char)((ulong)uVar20 >> 8);
          auVar5._0_9_ = *pVar23;
          auVar5[10] = (char)((ulong)uVar20 >> 0x10);
          auVar5[0xb] = (char)((ulong)uVar20 >> 0x18);
          auVar5[0xc] = (char)((ulong)uVar20 >> 0x20);
          auVar5[0xd] = (char)((ulong)uVar20 >> 0x28);
          auVar5[0xe] = (char)((ulong)uVar20 >> 0x30);
          auVar5[0xf] = (char)((ulong)uVar20 >> 0x38);
          auVar71 = NEON_fmin(auVar5,auVar71,4);
          uStack_88 = auVar71._8_8_;
          local_90 = auVar71._0_8_;
          uVar20 = *(undefined8 *)((long)pVar23 + 0x38);
          auVar6[9] = (char)((ulong)uVar20 >> 8);
          auVar6._0_9_ = *(unkbyte9 *)pfVar29;
          auVar6[10] = (char)((ulong)uVar20 >> 0x10);
          auVar6[0xb] = (char)((ulong)uVar20 >> 0x18);
          auVar6[0xc] = (char)((ulong)uVar20 >> 0x20);
          auVar6[0xd] = (char)((ulong)uVar20 >> 0x28);
          auVar6[0xe] = (char)((ulong)uVar20 >> 0x30);
          auVar6[0xf] = (char)((ulong)uVar20 >> 0x38);
          auVar71 = NEON_fmax(*(undefined1 (*) [16])(pVar23 + 1),auVar6,4);
          uStack_78 = auVar71._8_8_;
          local_80 = auVar71._0_8_;
          local_a0 = (undefined4 *)0x0;
          local_98 = -0x8000000000000000;
          FUN_001d58f0(lVar35,&local_90,&local_a0);
          if ((int)local_98 != 0) {
            lVar39 = (long)(int)local_98 << 2;
            puVar45 = local_a0;
            do {
              FUN_031f01b4(plVar44,CONCAT44(iVar18,*puVar45),&local_d0);
              lVar48 = (long)DAT_0444b53c;
              lVar24 = *(long *)(lVar4 + 0x38d490);
              if (lVar24 == 0) {
                lVar24 = FUN_0333d16c(0,1);
                *(long *)(lVar4 + 0x38d490) = lVar24;
              }
              if (*(long *)(lVar24 + lVar48 * 8 + 0x18) != 0) {
                FUN_0332a954();
              }
              puVar45 = puVar45 + 1;
              lVar39 = lVar39 + -4;
            } while (lVar39 != 0);
          }
          lVar39 = local_98;
          uVar52 = local_98._4_4_;
          local_98 = (ulong)local_98._4_4_ << 0x20;
          if ((-1 < lVar39) && (local_a0 != (undefined4 *)0x0)) {
            lVar39 = *(long *)PTR_PTR_0434a090;
            puVar21 = PTR_PTR_0434a090;
            puVar45 = local_a0;
LAB_031eb380:
            (**(code **)(lVar39 + 0x18))(puVar21,puVar45,uVar52 << 2);
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != piVar42);
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    if (0 < (int)local_a8) {
      uVar52 = 0x1eb851e;
      lVar19 = 0;
      do {
        puVar22 = (undefined8 *)(*plVar44 + (long)(int)local_b0[lVar19] * 0x50);
        *(undefined1 *)(puVar22 + 8) = 0;
        puVar22[1] = SUB168(*(undefined1 (*) [16])(puVar22 + 4),8);
        *puVar22 = SUB168(*(undefined1 (*) [16])(puVar22 + 4),0);
        puVar22[3] = puVar22[7];
        puVar22[2] = puVar22[6];
        uVar17 = FUN_001d4c1c(lVar35,puVar22,local_b0[lVar19]);
        *(undefined4 *)((long)puVar22 + 0x44) = uVar17;
        if (uVar52 < 0x1eb851e) {
          lVar39 = (long)DAT_0444b53c;
          lVar33 = *(long *)(lVar4 + 0x38d490);
          if (lVar33 == 0) {
            lVar33 = FUN_0333d16c(0,1);
            *(long *)(lVar4 + 0x38d490) = lVar33;
          }
          if (*(long *)(lVar33 + lVar39 * 8 + 0x18) != 0) {
            FUN_0332a954();
          }
        }
        lVar19 = lVar19 + 1;
        uVar52 = uVar52 + 0x1eb851e;
      } while (lVar19 < (int)local_a8);
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    if (0 < (int)local_b8) {
      uVar52 = 0x1eb851e;
      lVar19 = 0;
      do {
        puVar22 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_c0[lVar19] * 0x50);
        puVar22[1] = SUB168(*(undefined1 (*) [16])(puVar22 + 4),8);
        *puVar22 = SUB168(*(undefined1 (*) [16])(puVar22 + 4),0);
        puVar22[3] = puVar22[7];
        puVar22[2] = puVar22[6];
        *(undefined1 *)(puVar22 + 8) = 0;
        uVar17 = FUN_001d4c1c(lVar37,puVar22,local_c0[lVar19]);
        *(undefined4 *)((long)puVar22 + 0x44) = uVar17;
        if (uVar52 < 0x1eb851e) {
          lVar35 = (long)DAT_0444b53c;
          lVar33 = *(long *)(lVar4 + 0x38d490);
          if (lVar33 == 0) {
            lVar33 = FUN_0333d16c(0,1);
            *(long *)(lVar4 + 0x38d490) = lVar33;
          }
          if (*(long *)(lVar33 + lVar35 * 8 + 0x18) != 0) {
            FUN_0332a954();
          }
        }
        lVar19 = lVar19 + 1;
        uVar52 = uVar52 + 0x1eb851e;
      } while (lVar19 < (int)local_b8);
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uVar26 = local_b8;
    puVar15 = PTR_PTR_0434a090;
    uVar52 = local_b8._4_4_;
    local_b8 = (ulong)local_b8._4_4_ << 0x20;
    if ((-1 < (long)uVar26) && (local_c0 != (int *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_c0,uVar52 << 2);
    }
    uVar26 = local_a8;
    uVar52 = local_a8._4_4_;
    local_a8 = (ulong)local_a8._4_4_ << 0x20;
    if ((-1 < (long)uVar26) && (local_b0 != (uint *)0x0)) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,local_b0,uVar52 << 2);
    }
    lVar33 = (long)DAT_0444b53c;
    lVar19 = *(long *)(lVar4 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
    }
    if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar26 = 0;
      local_f0 = 0;
      do {
        lVar37 = *(long *)(param_1 + 0xa0);
        piVar42 = (int *)(*(long *)(param_1 + 0xb0) + local_f0);
        lVar35 = *(long *)(param_1 + 0x90);
        lVar19 = (long)*piVar42;
        lVar33 = (long)piVar42[1];
        puVar22 = (undefined8 *)(lVar37 + lVar19 * 0x60);
        plVar44 = (long *)*puVar22;
        puVar45 = (undefined4 *)(lVar35 + lVar33 * 0xd0);
        local_d8[0] = *puVar45;
        bVar16 = (**(code **)(*plVar44 + 0x60))(plVar44,local_d8,puVar45 + 8,param_1 + 0x150);
        if (((bVar16 ^ (char)piVar42[2] != '\0') & 1) == 0) {
          if ((bVar16 & 1) != 0) {
            if (((*(char *)(lVar37 + lVar19 * 0x60 + 0x50) != '\0') ||
                (*(char *)(lVar37 + lVar19 * 0x60 + 0x52) != '\0')) ||
               (*(char *)(lVar35 + lVar33 * 0xd0 + 0xca) != '\0')) goto LAB_031eb16c;
            if ((*(char *)(lVar37 + lVar19 * 0x60 + 0x51) != '\0') ||
               (*(char *)(lVar35 + lVar33 * 0xd0 + 0xc9) != '\0')) {
              FUN_032ca864(&local_90,lVar35 + lVar33 * 0xd0 + 0x80,lVar37 + lVar19 * 0x60 + 0x30);
              fVar14 = (float)piVar42[0xc];
              fVar10 = fVar14 * SUB84(local_90,0);
              fVar11 = (float)piVar42[0xd] * (float)((ulong)local_90 >> 0x20);
              uVar59 = (undefined1)((uint)fVar11 >> 8);
              uVar60 = (undefined1)((uint)fVar11 >> 0x10);
              uVar61 = (undefined1)((uint)fVar11 >> 0x18);
              fVar49 = (float)piVar42[0xe] * SUB84(uStack_88,0);
              uVar63 = (undefined1)((uint)fVar49 >> 8);
              uVar64 = (undefined1)((uint)fVar49 >> 0x10);
              uVar65 = (undefined1)((uint)fVar49 >> 0x18);
              fVar12 = (float)piVar42[0xf] * (float)((ulong)uStack_88 >> 0x20);
              uVar66 = (undefined1)((uint)fVar12 >> 8);
              uVar67 = (undefined1)((uint)fVar12 >> 0x10);
              uVar68 = (undefined1)((uint)fVar12 >> 0x18);
              auVar8[4] = SUB41(fVar11,0);
              auVar8._0_4_ = fVar10;
              auVar8[5] = uVar59;
              auVar8[6] = uVar60;
              auVar8[7] = uVar61;
              auVar8[8] = SUB41(fVar49,0);
              auVar8[9] = uVar63;
              auVar8[10] = uVar64;
              auVar8[0xb] = uVar65;
              auVar8[0xc] = SUB41(fVar12,0);
              auVar8[0xd] = uVar66;
              auVar8[0xe] = uVar67;
              auVar8[0xf] = uVar68;
              auVar9[4] = SUB41(fVar11,0);
              auVar9._0_4_ = fVar10;
              auVar9[5] = uVar59;
              auVar9[6] = uVar60;
              auVar9[7] = uVar61;
              auVar9[8] = SUB41(fVar49,0);
              auVar9[9] = uVar63;
              auVar9[10] = uVar64;
              auVar9[0xb] = uVar65;
              auVar9[0xc] = SUB41(fVar12,0);
              auVar9[0xd] = uVar66;
              auVar9[0xe] = uVar67;
              auVar9[0xf] = uVar68;
              auVar71 = NEON_ext(auVar8,auVar9,8,1);
              fVar49 = auVar71._0_4_ + auVar71._4_4_;
              bVar16 = (byte)((uint)(fVar10 + fVar11 + fVar49) >> 0x18);
              bVar62 = (byte)((uint)(fVar10 + fVar11 + fVar49) >> 0x18);
              if (((fVar50 < ABS((float)piVar42[0xf] -
                                 (float)CONCAT13(bVar62 & 0x80 ^ (byte)((ulong)uStack_88 >> 0x38),
                                                 (int3)((ulong)uStack_88 >> 0x20))) ||
                    (fVar50 < ABS((float)piVar42[0xe] -
                                  (float)CONCAT13(bVar16 & 0x80 ^ (byte)((ulong)uStack_88 >> 0x18),
                                                  (int3)uStack_88)) ||
                    (fVar50 < ABS(fVar14 - (float)CONCAT13(bVar16 & 0x80 ^
                                                           (byte)((ulong)local_90 >> 0x18),
                                                           (int3)local_90)) ||
                    fVar50 < ABS((float)piVar42[0xd] -
                                 (float)CONCAT13(bVar62 & 0x80 ^ (byte)((ulong)local_90 >> 0x38),
                                                 (int3)((ulong)local_90 >> 0x20)))))) ||
                  (fVar50 < ABS((float)piVar42[0x12] - (float)uStack_78) ||
                   (fVar50 < ABS((float)piVar42[0x10] - SUB84(local_80,0)) ||
                   fVar50 < ABS((float)piVar42[0x11] - (float)((ulong)local_80 >> 0x20))))) &&
                 (iVar18 = FUN_031f15e0(*puVar22,piVar42 + 0xc,&local_90), iVar18 != 0)) {
                bVar16 = 1;
                goto LAB_031eb19c;
              }
            }
          }
        }
        else {
LAB_031eb16c:
          FUN_032ca864(&local_90,lVar35 + lVar33 * 0xd0 + 0x80,lVar37 + lVar19 * 0x60 + 0x30);
          bVar16 = bVar16 & 1;
LAB_031eb19c:
          FUN_031e7ebc(param_1,uVar26 & 0xffffffff,bVar16,&local_90);
        }
        lVar33 = (long)DAT_0444b53c;
        lVar19 = *(long *)(lVar4 + 0x38d490);
        if (lVar19 == 0) {
          lVar19 = FUN_0333d16c(0,1);
          *(long *)(lVar4 + 0x38d490) = lVar19;
        }
        if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        uVar26 = uVar26 + 1;
        local_f0 = local_f0 + 0x60;
      } while ((long)uVar26 < (long)*(int *)(param_1 + 0xb8));
    }
    iVar18 = *(int *)(param_1 + 0x98);
    if (iVar18 != 0) {
      lVar19 = *(long *)(param_1 + 0x90);
      *(undefined2 *)(lVar19 + 0xc9) = 0;
      if (iVar18 != 1) {
        lVar33 = (long)iVar18 * 0xd0 + -0xd0;
        lVar19 = lVar19 + 0x19a;
        do {
          *(undefined2 *)(lVar19 + -1) = 0;
          lVar33 = lVar33 + -0xd0;
          lVar19 = lVar19 + 0xd0;
        } while (lVar33 != 0);
      }
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      lVar19 = (long)*(int *)(param_1 + 0xa8) * 0x60;
      puVar34 = (undefined1 *)(*(long *)(param_1 + 0xa0) + 0x52);
      do {
        *(undefined2 *)(puVar34 + -2) = 0;
        lVar19 = lVar19 + -0x60;
        *puVar34 = 0;
        puVar34 = puVar34 + 0x60;
      } while (lVar19 != 0);
    }
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 0x188) < 1) {
    if (*(long *)(lVar4 + 0x38d490) == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar19;
      puVar43 = *(uint **)(lVar19 + 0x10);
    }
    else {
      puVar43 = *(uint **)(*(long *)(lVar4 + 0x38d490) + 0x10);
    }
    if (puVar43 != (uint *)0x0) {
      puVar22 = *(undefined8 **)(puVar43 + 2);
      uVar26 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
      if ((uVar26 <= *(ulong *)(puVar43 + 4)) &&
         (*(ulong *)(puVar43 + 2) = uVar26, puVar22 != (undefined8 *)0x0)) {
        *puVar22 = "TtapplyPendingUpdates";
        uVar20 = nn::os::GetSystemTick();
        puVar22[1] = uVar20;
      }
    }
    puVar15 = PTR_PTR_0434a080;
    iVar18 = *(int *)(param_1 + 0xc0);
    local_b0 = puVar43;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < iVar18) {
      lVar19 = FUN_031f044c(PTR_PTR_0434a080,iVar18,*param_2,(int)param_2[1]);
      *param_2 = lVar19;
    }
    iVar31 = (int)param_2[1];
    lVar33 = (long)iVar31;
    lVar19 = (long)iVar18;
    if (iVar31 < iVar18) {
      lVar35 = *param_2;
      lVar39 = lVar35 + lVar33 * 0x38;
      lVar37 = lVar35 + lVar19 * 0x38;
      *(int *)(param_2 + 1) = iVar18;
      *(undefined8 *)(lVar39 + 8) = 0;
      *(undefined8 *)(lVar39 + 0x10) = 0x8000000000000000;
      *(undefined8 *)(lVar39 + 0x18) = 0;
      *(undefined8 *)(lVar39 + 0x20) = 0x8000000000000000;
      *(undefined8 *)(lVar39 + 0x28) = 0;
      *(undefined8 *)(lVar39 + 0x30) = 0x8000000000000000;
      if (lVar39 + 0x38 != lVar37) {
        *(undefined8 *)(lVar39 + 0x40) = 0;
        *(undefined8 *)(lVar39 + 0x48) = 0x8000000000000000;
        *(undefined8 *)(lVar39 + 0x50) = 0;
        *(undefined8 *)(lVar39 + 0x58) = 0x8000000000000000;
        *(undefined8 *)(lVar39 + 0x60) = 0;
        *(undefined8 *)(lVar39 + 0x68) = 0x8000000000000000;
        if (lVar39 + 0x70 != lVar37) {
          lVar37 = lVar33 * -0x38 + lVar19 * 0x38 + -0x70;
          lVar19 = lVar33 * 0x38 + lVar35 + 0xa4;
          do {
            *(undefined8 *)(lVar19 + -0x2c) = 0;
            lVar37 = lVar37 + -0x38;
            *(undefined8 *)(lVar19 + -0x24) = 0x8000000000000000;
            *(undefined8 *)(lVar19 + -0x1c) = 0;
            *(undefined8 *)(lVar19 + -0x14) = 0x8000000000000000;
            *(undefined8 *)(lVar19 + -0xc) = 0;
            *(undefined8 *)(lVar19 + -4) = 0x8000000000000000;
            lVar19 = lVar19 + 0x38;
          } while (lVar37 != 0);
        }
      }
    }
    else if (iVar18 < iVar31) {
      *(int *)(param_2 + 1) = iVar18;
      lVar19 = lVar33 * -0x38 + lVar19 * 0x38;
      puVar45 = (undefined4 *)(*param_2 + lVar33 * 0x38 + -0x18);
      do {
        puVar45[4] = 0;
        if ((-1 < (int)puVar45[5]) && (*(long *)(puVar45 + 2) != 0)) {
          (**(code **)(*(long *)puVar15 + 0x18))
                    (puVar15,*(long *)(puVar45 + 2),((ulong)(uint)puVar45[5] & 0x3fffffff) << 5);
        }
        *(undefined8 *)(puVar45 + 2) = 0;
        puVar45[5] = 0x80000000;
        *puVar45 = 0;
        if ((-1 < (int)puVar45[1]) && (*(long *)(puVar45 + -2) != 0)) {
          (**(code **)(*(long *)puVar15 + 0x18))(puVar15,*(long *)(puVar45 + -2),puVar45[1] << 2);
        }
        *(undefined8 *)(puVar45 + -2) = 0;
        puVar45[1] = 0x80000000;
        puVar45[-4] = 0;
        if ((-1 < (int)puVar45[-3]) && (*(long *)(puVar45 + -6) != 0)) {
          (**(code **)(*(long *)puVar15 + 0x18))(puVar15,*(long *)(puVar45 + -6),puVar45[-3] << 2);
        }
        *(undefined8 *)(puVar45 + -6) = 0;
        lVar19 = lVar19 + 0x38;
        puVar45[-3] = 0x80000000;
        puVar45 = puVar45 + -0xe;
      } while (lVar19 != 0);
    }
    if (((0 < *(int *)(param_1 + 0xc0)) &&
        (*(undefined4 *)*param_2 = 0, 1 < *(int *)(param_1 + 0xc0))) &&
       (*(undefined4 *)(*param_2 + 0x38) = 1, 2 < *(int *)(param_1 + 0xc0))) {
      lVar19 = 2;
      lVar33 = 0x70;
      do {
        *(int *)(*param_2 + lVar33) = (int)lVar19;
        lVar19 = lVar19 + 1;
        lVar33 = lVar33 + 0x38;
      } while (lVar19 < *(int *)(param_1 + 0xc0));
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      piVar42 = *(int **)(param_1 + 0x90);
      piVar41 = piVar42 + (long)*(int *)(param_1 + 0x98) * 0x34;
      do {
        if ((char)piVar42[0x32] != '\0') {
          lVar33 = (long)*piVar42;
          lVar19 = *param_2;
          lVar35 = lVar19 + lVar33 * 0x38;
          puVar43 = (uint *)(lVar35 + 0x34);
          uVar30 = *puVar43;
          uVar51 = piVar42[0x30];
          uVar52 = uVar30 & 0x3fffffff;
          plVar44 = (long *)(lVar35 + 0x28);
          if ((int)uVar52 < (int)uVar51) {
            puVar22 = (undefined8 *)*plVar44;
            uVar32 = *(uint *)(lVar19 + lVar33 * 0x38 + 0x30);
            if (0x3fffffff < (int)uVar51) {
              FUN_032bd0a8(uVar51);
              uVar30 = *puVar43;
              uVar52 = uVar30 & 0x3fffffff;
            }
            uVar30 = (uVar30 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar30) {
              uVar30 = 0x3fffffff;
            }
            if ((int)uVar51 <= (int)uVar30) {
              uVar51 = uVar30;
            }
            local_a0 = (undefined4 *)((ulong)uVar51 << 5);
            local_c0 = (int *)CONCAT44(local_c0._4_4_,uVar51);
            if ((int)uVar51 < (int)uVar52 || 0x3fffffff < (int)uVar51) {
              local_90 = (undefined4 *)0x1;
              local_80 = &local_c0;
              uStack_88 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_90);
            }
            uVar52 = *puVar43;
            puVar47 = (undefined8 *)
                      (**(code **)(*(long *)puVar15 + 0x10))(puVar15,local_a0,&local_a0);
            if (0 < (int)uVar32) {
              uVar20 = puVar22[3];
              puVar47[1] = puVar22[1];
              puVar47[3] = uVar20;
              uVar20 = *puVar22;
              puVar47[2] = puVar22[2];
              *puVar47 = uVar20;
              if (uVar32 != 1) {
                lVar35 = (ulong)uVar32 - 1;
                puVar13 = puVar47;
                puVar36 = puVar22;
                do {
                  uVar20 = puVar36[7];
                  lVar35 = lVar35 + -1;
                  puVar13[5] = puVar36[5];
                  puVar13[7] = uVar20;
                  uVar20 = puVar36[4];
                  puVar13[6] = puVar36[6];
                  puVar13[4] = uVar20;
                  puVar13 = puVar13 + 4;
                  puVar36 = puVar36 + 4;
                } while (lVar35 != 0);
              }
            }
            if (-1 < (int)uVar52) {
              (**(code **)(*(long *)puVar15 + 0x18))
                        (puVar15,puVar22,((ulong)uVar52 & 0x3fffffff) << 5);
            }
            if (local_a0 < (undefined4 *)0x7ffffffe0) {
              uVar52 = (uint)((ulong)local_a0 >> 5);
            }
            else {
              uVar52 = 0x3fffffff;
            }
            *puVar43 = uVar52;
            *plVar44 = (long)puVar47;
            uVar51 = piVar42[0x30];
          }
          uVar26 = (ulong)uVar51;
          lVar35 = *(long *)(piVar42 + 0x2e);
          if (0 < (int)uVar51) {
            puVar40 = (uint *)(lVar19 + lVar33 * 0x38 + 0x30);
            local_158 = 0;
            do {
              lVar35 = lVar35 + local_158 * 0x40;
              if (0 < *(int *)(lVar35 + 0x38)) {
                lVar39 = lVar19 + lVar33 * 0x38;
                piVar1 = (int *)(lVar39 + 0x10);
                piVar2 = (int *)(lVar39 + 0x20);
                lVar37 = 0;
                do {
                  iVar18 = *(int *)(*(long *)(lVar35 + 0x30) + lVar37 * 4);
                  if (*(int *)(*(long *)(piVar42 + 0x2a) + (long)iVar18 * 0x10 + 8) == 0) {
                    iVar25 = *piVar2;
                    iVar31 = iVar25 + 1;
                    lVar24 = *(long *)(lVar39 + 0x18);
                    if ((int)(*(uint *)(lVar39 + 0x24) & 0x3fffffff) <= iVar25) {
                      lVar24 = FUN_0315f314(puVar15,iVar31,lVar24,iVar25,(uint *)(lVar39 + 0x24));
                      *(long *)(lVar39 + 0x18) = lVar24;
                      iVar25 = *piVar2;
                    }
                    piVar27 = piVar2;
                  }
                  else {
                    iVar25 = *piVar1;
                    iVar31 = iVar25 + 1;
                    lVar24 = *(long *)(lVar39 + 8);
                    if ((int)(*(uint *)(lVar39 + 0x14) & 0x3fffffff) <= iVar25) {
                      lVar24 = FUN_0315f314(puVar15,iVar31,lVar24,iVar25,(uint *)(lVar39 + 0x14));
                      *(long *)(lVar39 + 8) = lVar24;
                      iVar25 = *piVar1;
                    }
                    piVar27 = piVar1;
                  }
                  *(int *)(lVar24 + (long)iVar25 * 4) = iVar18;
                  *piVar27 = iVar31;
                  lVar37 = lVar37 + 1;
                } while (lVar37 < *(int *)(lVar35 + 0x38));
              }
              uVar30 = *puVar40;
              uVar32 = *puVar43;
              puVar47 = (undefined8 *)*plVar44;
              uVar52 = uVar30 + 1;
              uVar51 = uVar32 & 0x3fffffff;
              puVar22 = puVar47;
              if ((int)uVar51 <= (int)uVar30) {
                if (0x3ffffffe < (int)uVar30) {
                  FUN_032bd0a8(uVar52);
                  uVar32 = *puVar43;
                  uVar51 = uVar32 & 0x3fffffff;
                }
                uVar32 = (uVar32 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar32) {
                  uVar32 = 0x3fffffff;
                }
                uVar3 = uVar52;
                if ((int)uVar52 <= (int)uVar32) {
                  uVar3 = uVar32;
                }
                local_a0 = (undefined4 *)((ulong)uVar3 << 5);
                local_c0 = (int *)CONCAT44(local_c0._4_4_,uVar3);
                if (((int)uVar3 < (int)uVar51) || (0x3fffffff < (int)uVar3)) {
                  local_90 = (undefined4 *)0x1;
                  local_80 = &local_c0;
                  uStack_88 = &DAT_0411b3b8;
                  FUN_03320b50(0x65816502,
                               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                               ,0x5a,"Invalid requestedCapacity {}",&local_90);
                }
                uVar51 = *puVar43;
                puVar22 = (undefined8 *)
                          (**(code **)(*(long *)puVar15 + 0x10))(puVar15,local_a0,&local_a0);
                if (0 < (int)uVar30) {
                  uVar20 = puVar47[3];
                  puVar22[1] = puVar47[1];
                  puVar22[3] = uVar20;
                  uVar20 = *puVar47;
                  puVar22[2] = puVar47[2];
                  *puVar22 = uVar20;
                  if (uVar30 != 1) {
                    lVar37 = (ulong)uVar30 - 1;
                    puVar36 = puVar22;
                    puVar13 = puVar47;
                    do {
                      uVar20 = puVar13[7];
                      lVar37 = lVar37 + -1;
                      puVar36[5] = puVar13[5];
                      puVar36[7] = uVar20;
                      uVar20 = puVar13[4];
                      puVar36[6] = puVar13[6];
                      puVar36[4] = uVar20;
                      puVar36 = puVar36 + 4;
                      puVar13 = puVar13 + 4;
                    } while (lVar37 != 0);
                  }
                }
                if (-1 < (int)uVar51) {
                  (**(code **)(*(long *)puVar15 + 0x18))
                            (puVar15,puVar47,((ulong)uVar51 & 0x3fffffff) << 5);
                }
                if (local_a0 < (undefined4 *)0x7ffffffe0) {
                  uVar51 = (uint)((ulong)local_a0 >> 5);
                }
                else {
                  uVar51 = 0x3fffffff;
                }
                *puVar43 = uVar51;
                *plVar44 = (long)puVar22;
                uVar30 = *puVar40;
              }
              puVar22 = puVar22 + (long)(int)uVar30 * 4;
              uVar20 = *(undefined8 *)(lVar35 + 0x28);
              puVar22[1] = *(undefined8 *)(lVar35 + 0x18);
              puVar22[3] = uVar20;
              uVar20 = *(undefined8 *)(lVar35 + 0x10);
              puVar22[2] = *(undefined8 *)(lVar35 + 0x20);
              *puVar22 = uVar20;
              *puVar40 = uVar52;
              uVar26 = (ulong)piVar42[0x30];
              lVar35 = *(long *)(piVar42 + 0x2e);
              local_158 = local_158 + 1;
            } while (local_158 < (long)uVar26);
          }
          if ((int)uVar26 != 0) {
            uVar26 = -(uVar26 >> 0x1f & 1) & 0xffffffc000000000 | (uVar26 & 0xffffffff) << 6;
            do {
              lVar37 = lVar35 + uVar26;
              *(undefined4 *)(lVar37 + -8) = 0;
              if ((-1 < *(int *)(lVar37 + -4)) && (*(long *)(lVar37 + -0x10) != 0)) {
                (**(code **)(*(long *)puVar15 + 0x18))
                          (puVar15,*(long *)(lVar37 + -0x10),*(int *)(lVar37 + -4) << 2);
              }
              uVar26 = uVar26 - 0x40;
              *(undefined8 *)(lVar37 + -0x10) = 0;
              *(undefined4 *)(lVar37 + -4) = 0x80000000;
            } while (uVar26 != 0);
          }
          piVar42[0x30] = 0;
          if ((-1 < piVar42[0x31]) && (*(long *)(piVar42 + 0x2e) != 0)) {
            (**(code **)(*(long *)puVar15 + 0x18))
                      (puVar15,*(long *)(piVar42 + 0x2e),
                       ((ulong)(uint)piVar42[0x31] & 0x3fffffff) << 6);
          }
          piVar42[0x2e] = 0;
          piVar42[0x2f] = 0;
          piVar42[0x31] = -0x80000000;
          lVar37 = (long)DAT_0444b53c;
          lVar35 = *(long *)(lVar4 + 0x38d490);
          if (lVar35 == 0) {
            lVar35 = FUN_0333d16c(0,1);
            *(long *)(lVar4 + 0x38d490) = lVar35;
          }
          if (*(long *)(lVar35 + lVar37 * 8 + 0x18) != 0) {
            FUN_0332a954();
          }
          lVar19 = lVar19 + lVar33 * 0x38;
          FUN_031ecd10(lVar19 + 8);
          FUN_031ecd10(lVar19 + 0x18);
          lVar33 = (long)DAT_0444b53c;
          lVar19 = *(long *)(lVar4 + 0x38d490);
          if (lVar19 == 0) {
            lVar19 = FUN_0333d16c(0,1);
            *(long *)(lVar4 + 0x38d490) = lVar19;
          }
          if (*(long *)(lVar19 + lVar33 * 8 + 0x18) != 0) {
            FUN_0332a954();
          }
        }
        piVar42 = piVar42 + 0x34;
      } while (piVar42 != piVar41);
    }
    if (local_b0 != (uint *)0x0) {
      puVar22 = *(undefined8 **)(local_b0 + 2);
      uVar26 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
      if ((uVar26 <= *(ulong *)(local_b0 + 4)) &&
         (*(ulong *)(local_b0 + 2) = uVar26, puVar22 != (undefined8 *)0x0)) {
        *puVar22 = &DAT_0390f40e;
        uVar20 = nn::os::GetSystemTick();
        puVar22[1] = uVar20;
      }
    }
  }
  else {
    FUN_031ec0bc(param_1,param_2);
  }
  if (lVar46 != 0) {
    puVar22 = *(undefined8 **)(lVar46 + 8);
    uVar26 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
    if ((uVar26 <= *(ulong *)(lVar46 + 0x10)) &&
       (*(ulong *)(lVar46 + 8) = uVar26, puVar22 != (undefined8 *)0x0)) {
      *puVar22 = &DAT_0390f40e;
      uVar20 = nn::os::GetSystemTick();
      puVar22[1] = uVar20;
    }
  }
  return;
}


