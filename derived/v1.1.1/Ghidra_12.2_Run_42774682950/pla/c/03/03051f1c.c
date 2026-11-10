/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03051f1c; name: FUN_03051f1c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_03051f1c(long *param_1,long param_2,long *param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7,long *param_8)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  uint *puVar7;
  bool bVar8;
  uint ***pppuVar9;
  undefined8 uVar10;
  uint ***pppuVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  int *piVar31;
  uint *puVar32;
  long **pplVar33;
  int *piVar34;
  uint uVar35;
  uint *puVar36;
  uint *puVar37;
  uint ***pppuVar38;
  ulong uVar39;
  byte *pbVar40;
  long lVar41;
  uint uVar42;
  uint uVar43;
  uint ***pppuVar44;
  byte *pbVar45;
  long lVar46;
  uint *puVar47;
  uint uVar48;
  uint *puVar49;
  uint ***pppuVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  int *piVar55;
  undefined8 *puVar56;
  uint uVar57;
  long lVar58;
  long *plVar59;
  ushort *puVar60;
  uint *puVar61;
  uint ***pppuVar62;
  long *plVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  uint ***local_1260;
  uint ***local_1258;
  uint ***local_1250;
  uint ***local_1248;
  uint ***local_1240;
  uint ***local_1238;
  uint ***local_1230;
  uint ***local_1228;
  uint ***local_1218;
  uint *local_1210;
  long local_11c0;
  undefined8 *local_11b8;
  uint *local_11b0;
  uint local_11a8;
  uint local_11a4;
  undefined1 auStack_1198 [24];
  long *local_1180;
  uint *local_1178;
  uint local_1170;
  undefined8 *local_1168;
  long local_1160;
  long local_1158;
  long *local_1150;
  undefined8 *local_1148;
  uint *local_1140;
  uint local_1138;
  uint local_1134;
  long *local_1128;
  undefined8 *local_1120;
  uint *local_1118;
  uint local_1110;
  uint local_110c;
  long local_1100;
  undefined8 local_10f8;
  uint ***local_10f0;
  undefined8 local_10e8;
  undefined4 local_10e0 [2];
  uint *local_10d8;
  undefined8 local_10d0;
  uint *local_10c8;
  uint local_10c0;
  uint ***local_10b8;
  undefined8 local_10b0;
  uint **appuStack_10a8 [128];
  uint ***local_ca8;
  undefined8 local_ca0;
  uint **local_c98 [128];
  uint ***local_898;
  uint *local_890;
  uint local_888;
  undefined8 local_884;
  uint ***local_878;
  undefined8 local_870;
  uint **appuStack_868 [128];
  uint *local_468 [64];
  uint *local_268;
  undefined8 local_260;
  
  lVar24 = tpidr_el0;
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar22;
    lVar22 = *(long *)(lVar22 + 0x10);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar22 != 0) {
    puVar56 = *(undefined8 **)(lVar22 + 8);
    uVar28 = (long)puVar56 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar22 + 0x10)) &&
       (*(ulong *)(lVar22 + 8) = uVar28, puVar56 != (undefined8 *)0x0)) {
      *puVar56 = "LtDeactivation";
      puVar56[2] = "StIslandMaintenence";
      uVar10 = nn::os::GetSystemTick();
      puVar56[1] = uVar10;
    }
  }
  lVar53 = *param_1;
  lVar22 = (long)&local_10e8 + 4;
  iVar64 = *(int *)(lVar53 + 0x5b8);
  local_10f0 = (uint ***)0x0;
  local_10e8 = 0x8000000000000000;
  local_1100 = 0;
  local_10f8 = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  puVar6 = PTR_PTR_0434a090;
  if (*(int *)(param_4 + 8) != 0) {
    local_1210 = (uint *)**(undefined8 **)(param_4 + 0x10);
    local_10b0 = -0x8000000000000000;
    local_10b8 = (uint ***)0x0;
    if ((*local_1210 & 0xffff) == 0) {
      local_10b0 = -0x8000000000000000;
    }
    else {
      pppuVar62 = (uint ***)0x0;
      uVar20 = 0;
      local_1218 = (uint ***)0x0;
      puVar36 = local_1210 + 8;
      lVar23 = (long)&local_10b0 + 4;
      uVar57 = *local_1210 & 0xffff;
      local_1260 = (uint ***)0x0;
      local_1258 = (uint ***)0x0;
      local_1240 = (uint ***)0x0;
      local_1228 = (uint ***)0x0;
      uVar19 = 0x7fffffff;
      local_1250 = (uint ***)0x0;
      local_1248 = (uint ***)0x0;
      local_1238 = (uint ***)0x0;
      local_1230 = (uint ***)0x0;
      do {
        uVar25 = local_10e8;
        pppuVar11 = local_10f0;
        uVar28 = local_10f8;
        lVar58 = local_1100;
        puVar15 = PTR_PTR_0434a080;
        puVar61 = puVar36 + 1;
        uVar51 = *puVar61;
        uVar39 = (ulong)uVar51 & 0xffffff;
        if ((int)uVar39 != 0xffffff) {
          uVar18 = *puVar36;
          uVar13 = (ulong)uVar18 & 0xffffff;
          if ((int)uVar13 != 0xffffff) {
            lVar54 = *(long *)(lVar53 + 0x38);
            uVar42 = *(uint *)(lVar54 + uVar39 * 0xc0 + 0x54);
            uVar35 = *(uint *)(lVar54 + uVar13 * 0xc0 + 0x54);
            uVar48 = local_10b0._4_4_;
            if ((((uVar42 & 1) == 0) || ((uVar35 & 9) != 0)) &&
               ((uVar42 & 9) != 0 || (uVar35 & 1) == 0)) {
              if (((uVar42 & uVar35) >> 1 & 1) != 0) {
                lVar41 = lVar54 + uVar39 * 0xc0;
                piVar31 = (int *)(lVar41 + 0x80);
                puVar26 = (uint *)(param_1[0x71] + (long)*piVar31 * 0x20 + 0x10);
                uVar2 = *puVar26;
                piVar55 = (int *)(lVar54 + uVar13 * 0xc0 + 0x80);
                uVar43 = *(uint *)(param_1[0x71] + (long)*piVar55 * 0x20 + 0x10);
                if (((*(byte *)(lVar41 + 0x88) & 1) == 0) ||
                   ((*(byte *)(lVar54 + uVar13 * 0xc0 + 0x88) & 1) == 0)) {
                  bVar8 = false;
                }
                else if (*(char *)(*(long *)(param_2 + 0x20) +
                                   (ulong)*(ushort *)(lVar54 + uVar39 * 0xc0 + 0x8a) * 0x50 + 0x18)
                         == '\0') {
                  bVar8 = *(char *)(*(long *)(param_2 + 0x20) +
                                    (ulong)*(ushort *)(lVar54 + uVar13 * 0xc0 + 0x8a) * 0x50 + 0x18)
                          == '\0';
                }
                else {
                  bVar8 = false;
                }
                lVar41 = (long)(int)uVar2;
                lVar46 = (long)(int)uVar43;
                if ((uVar42 >> 3 & 1) == 0) {
                  if ((uVar35 >> 3 & 1) == 0) {
                    if ((uVar43 & uVar2) == 0xffffffff) {
                      if ((int)param_1[0x69] == 0) {
                        lVar58 = *(long *)(lVar24 + 0x38d490);
                        if (lVar58 == 0) {
                          lVar58 = FUN_0333d16c(0,1);
                          *(long *)(lVar24 + 0x38d490) = lVar58;
                        }
                        plVar59 = *(long **)(*(long *)(lVar58 + 8) + 0x58);
                        puVar56 = (undefined8 *)(**(code **)(*plVar59 + 0x10))(plVar59,0x70,0);
                        *(int *)(puVar56 + 4) = (int)param_1[0x74];
                        puVar56[5] = 0xffffffffffffffff;
                        puVar56[6] = puVar56 + 8;
                        *(undefined4 *)(puVar56 + 10) = 0;
                        *puVar56 = 0;
                        puVar56[1] = 0x8000000000000000;
                        puVar56[2] = 0;
                        puVar56[3] = 0x8000000000000000;
                        *(undefined2 *)((long)puVar56 + 0x24) = 0;
                        *(undefined4 *)(puVar56 + 0xd) = 0;
                        puVar56[7] = 0x8000000100000000;
                        puVar56[0xb] = 0;
                        puVar56[0xc] = 0x8000000000000000;
                        uVar18 = *(uint *)((long)param_1 + 0x3a4);
                        iVar21 = (int)param_1[0x74];
                        lVar58 = (long)iVar21;
                        uVar51 = iVar21 + 1;
                        if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
                          lVar54 = param_1[0x73];
                          iVar65 = iVar21;
                        }
                        else {
                          lVar54 = param_1[0x73];
                          if (0x3ffffffe < iVar21) {
                            FUN_032bd0a8(uVar51);
                            uVar18 = *(uint *)((long)param_1 + 0x3a4);
                          }
                          uVar18 = (uVar18 & 0x3fffffff) << 1;
                          if (0x3ffffffe < uVar18) {
                            uVar18 = 0x3fffffff;
                          }
                          uVar42 = uVar51;
                          if ((int)uVar51 <= (int)uVar18) {
                            uVar42 = uVar18;
                          }
                          lVar54 = FUN_032bd1d4(puVar15,uVar42,8,lVar54,iVar21,
                                                (uint *)((long)param_1 + 0x3a4));
                          iVar65 = (int)param_1[0x74];
                          param_1[0x73] = lVar54;
                        }
                        *(undefined8 **)(lVar54 + (long)iVar65 * 8) = puVar56;
                        *(uint *)(param_1 + 0x74) = uVar51;
                      }
                      else {
                        iVar65 = (int)param_1[0x69] + -1;
                        iVar21 = *(int *)(param_1[0x68] + (long)iVar65 * 4);
                        *(int *)(param_1 + 0x69) = iVar65;
                        lVar58 = (long)iVar21;
                        lVar54 = *(long *)(lVar24 + 0x38d490);
                        if (lVar54 == 0) {
                          lVar54 = FUN_0333d16c(0,1);
                          *(long *)(lVar24 + 0x38d490) = lVar54;
                        }
                        plVar59 = *(long **)(*(long *)(lVar54 + 8) + 0x58);
                        puVar56 = (undefined8 *)(**(code **)(*plVar59 + 0x10))(plVar59,0x70,0);
                        *(int *)(puVar56 + 4) = iVar21;
                        puVar56[5] = 0xffffffffffffffff;
                        puVar56[6] = puVar56 + 8;
                        *(undefined2 *)((long)puVar56 + 0x24) = 0;
                        puVar56[7] = 0x8000000100000000;
                        *(undefined4 *)(puVar56 + 10) = 0;
                        *(undefined4 *)(puVar56 + 0xd) = 0;
                        *puVar56 = 0;
                        puVar56[1] = 0x8000000000000000;
                        puVar56[2] = 0;
                        puVar56[3] = 0x8000000000000000;
                        puVar56[0xb] = 0;
                        puVar56[0xc] = 0x8000000000000000;
                        *(undefined8 **)(param_1[0x73] + lVar58 * 8) = puVar56;
                      }
                      plVar59 = *(long **)(param_1[0x73] + lVar58 * 8);
                      *(int *)(param_1[0x71] + (long)*piVar31 * 0x20 + 0x10) = iVar21;
                      *(int *)(param_1[0x71] + (long)*piVar55 * 0x20 + 0x10) = iVar21;
                      lVar54 = *param_1;
                      uVar51 = puVar36[1];
                      puVar61 = (uint *)((long)plVar59 + 0xc);
                      lVar58 = *(long *)(lVar54 + 0x38);
                      uVar28 = (ulong)uVar51 & 0xffffff;
                      bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                      while( true ) {
                        if ((bVar17 & 1) != 0) {
                          iVar21 = (int)plVar59[1];
                          uVar42 = *(uint *)((long)plVar59 + 0xc);
                          uVar18 = iVar21 + 1;
                          if (iVar21 < (int)(uVar42 & 0x3fffffff)) {
                            lVar41 = *plVar59;
                          }
                          else {
                            lVar41 = *plVar59;
                            if (0x3ffffffe < iVar21) {
                              FUN_032bd0a8(uVar18);
                              uVar42 = *puVar61;
                            }
                            uVar42 = (uVar42 & 0x3fffffff) << 1;
                            if (0x3ffffffe < uVar42) {
                              uVar42 = 0x3fffffff;
                            }
                            uVar35 = uVar18;
                            if ((int)uVar18 <= (int)uVar42) {
                              uVar35 = uVar42;
                            }
                            lVar41 = FUN_032bd1d4(puVar15,uVar35,4,lVar41,iVar21,puVar61);
                            iVar21 = (int)plVar59[1];
                            *plVar59 = lVar41;
                          }
                          lVar58 = lVar58 + uVar28 * 0xc0;
                          *(undefined4 *)(lVar41 + (long)iVar21 * 4) =
                               *(undefined4 *)(lVar58 + 0x50);
                          *(uint *)(plVar59 + 1) = uVar18;
                          uVar18 = *(uint *)(lVar58 + 0x50);
                          if (uVar18 < *(uint *)((long)plVar59 + 0x2c)) {
                            *(uint *)((long)plVar59 + 0x2c) = uVar18;
                            *(undefined4 *)(plVar59 + 5) = *(undefined4 *)(lVar54 + 0x5b8);
                          }
                        }
                        lVar58 = *(long *)(lVar54 + 0x38);
                        uVar18 = *(uint *)(lVar58 + uVar28 * 0xc0 + 0x84);
                        if (uVar18 == uVar51) break;
                        uVar28 = (ulong)(uVar18 & 0xffffff);
                        bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                      }
                      lVar54 = *param_1;
                      uVar51 = *puVar36;
                      lVar58 = *(long *)(lVar54 + 0x38);
                      uVar28 = (ulong)uVar51 & 0xffffff;
                      bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                      while( true ) {
                        if ((bVar17 & 1) != 0) {
                          iVar21 = (int)plVar59[1];
                          uVar42 = *(uint *)((long)plVar59 + 0xc);
                          uVar18 = iVar21 + 1;
                          if (iVar21 < (int)(uVar42 & 0x3fffffff)) {
                            lVar41 = *plVar59;
                          }
                          else {
                            lVar41 = *plVar59;
                            if (0x3ffffffe < iVar21) {
                              FUN_032bd0a8(uVar18);
                              uVar42 = *puVar61;
                            }
                            uVar42 = (uVar42 & 0x3fffffff) << 1;
                            if (0x3ffffffe < uVar42) {
                              uVar42 = 0x3fffffff;
                            }
                            uVar35 = uVar18;
                            if ((int)uVar18 <= (int)uVar42) {
                              uVar35 = uVar42;
                            }
                            lVar41 = FUN_032bd1d4(puVar15,uVar35,4,lVar41,iVar21,puVar61);
                            iVar21 = (int)plVar59[1];
                            *plVar59 = lVar41;
                          }
                          lVar58 = lVar58 + uVar28 * 0xc0;
                          *(undefined4 *)(lVar41 + (long)iVar21 * 4) =
                               *(undefined4 *)(lVar58 + 0x50);
                          *(uint *)(plVar59 + 1) = uVar18;
                          uVar18 = *(uint *)(lVar58 + 0x50);
                          if (uVar18 < *(uint *)((long)plVar59 + 0x2c)) {
                            *(uint *)((long)plVar59 + 0x2c) = uVar18;
                            *(undefined4 *)(plVar59 + 5) = *(undefined4 *)(lVar54 + 0x5b8);
                          }
                        }
                        lVar58 = *(long *)(lVar54 + 0x38);
                        uVar18 = *(uint *)(lVar58 + uVar28 * 0xc0 + 0x84);
                        if (uVar18 == uVar51) break;
                        uVar28 = (ulong)(uVar18 & 0xffffff);
                        bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                      }
                      if ((int)plVar59[0xd] == iVar64) {
                        iVar21 = (int)plVar59[0xc];
                      }
                      else {
                        iVar21 = 0;
                        *(undefined4 *)(plVar59 + 0xc) = 0;
                        *(int *)(plVar59 + 0xd) = iVar64;
                      }
                      puVar61 = (uint *)((long)plVar59 + 100);
                      uVar18 = *puVar61;
                      uVar51 = iVar21 + 1;
                      if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
LAB_03057050:
                        lVar58 = plVar59[0xb];
                      }
                      else {
                        lVar58 = plVar59[0xb];
                        if (0x3ffffffe < iVar21) {
                          FUN_032bd0a8(uVar51);
                          uVar18 = *puVar61;
                        }
                        uVar18 = (uVar18 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar18) {
                          uVar18 = 0x3fffffff;
                        }
                        uVar42 = uVar51;
                        if ((int)uVar51 <= (int)uVar18) {
                          uVar42 = uVar18;
                        }
LAB_030574ec:
                        lVar58 = FUN_032bd1d4(puVar15,uVar42,8,lVar58,iVar21,puVar61);
                        iVar21 = (int)plVar59[0xc];
                        plVar59[0xb] = lVar58;
                      }
                      *(undefined8 *)(lVar58 + (long)iVar21 * 8) = *(undefined8 *)puVar36;
                      *(uint *)(plVar59 + 0xc) = uVar51;
                    }
                    else if ((uVar2 == 0xffffffff) || (uVar43 == 0xffffffff)) {
                      if (uVar2 == 0xffffffff) {
                        *puVar26 = uVar43;
                        lVar54 = *param_1;
                        plVar59 = *(long **)(param_1[0x73] + lVar46 * 8);
                        uVar51 = puVar36[1];
                        lVar58 = *(long *)(lVar54 + 0x38);
                        uVar28 = (ulong)uVar51 & 0xffffff;
                        bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                        while( true ) {
                          if ((bVar17 & 1) != 0) {
                            iVar21 = (int)plVar59[1];
                            uVar42 = *(uint *)((long)plVar59 + 0xc);
                            uVar18 = iVar21 + 1;
                            if (iVar21 < (int)(uVar42 & 0x3fffffff)) {
                              lVar46 = *plVar59;
                            }
                            else {
                              lVar46 = *plVar59;
                              if (0x3ffffffe < iVar21) {
                                FUN_032bd0a8(uVar18);
                                uVar42 = *(uint *)((long)plVar59 + 0xc);
                              }
                              uVar42 = (uVar42 & 0x3fffffff) << 1;
                              if (0x3ffffffe < uVar42) {
                                uVar42 = 0x3fffffff;
                              }
                              uVar35 = uVar18;
                              if ((int)uVar18 <= (int)uVar42) {
                                uVar35 = uVar42;
                              }
                              lVar46 = FUN_032bd1d4(PTR_PTR_0434a080,uVar35,4,lVar46,iVar21,
                                                    (uint *)((long)plVar59 + 0xc));
                              iVar21 = (int)plVar59[1];
                              *plVar59 = lVar46;
                            }
                            lVar58 = lVar58 + uVar28 * 0xc0;
                            *(undefined4 *)(lVar46 + (long)iVar21 * 4) =
                                 *(undefined4 *)(lVar58 + 0x50);
                            *(uint *)(plVar59 + 1) = uVar18;
                            uVar18 = *(uint *)(lVar58 + 0x50);
                            if (uVar18 < *(uint *)((long)plVar59 + 0x2c)) {
                              *(uint *)((long)plVar59 + 0x2c) = uVar18;
                              *(undefined4 *)(plVar59 + 5) = *(undefined4 *)(lVar54 + 0x5b8);
                            }
                          }
                          lVar58 = *(long *)(lVar54 + 0x38);
                          uVar18 = *(uint *)(lVar58 + uVar28 * 0xc0 + 0x84);
                          if (uVar18 == uVar51) break;
                          uVar28 = (ulong)(uVar18 & 0xffffff);
                          bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                        }
                        if ((int)plVar59[0xd] == iVar64) {
                          iVar21 = (int)plVar59[0xc];
                        }
                        else {
                          iVar21 = 0;
                          *(undefined4 *)(plVar59 + 0xc) = 0;
                          *(int *)(plVar59 + 0xd) = iVar64;
                        }
                        puVar61 = (uint *)((long)plVar59 + 100);
                        uVar18 = *puVar61;
                        uVar51 = iVar21 + 1;
                        if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
                          lVar58 = plVar59[0xb];
                        }
                        else {
                          lVar58 = plVar59[0xb];
                          if (0x3ffffffe < iVar21) {
                            FUN_032bd0a8(uVar51);
                            uVar18 = *puVar61;
                          }
                          uVar18 = (uVar18 & 0x3fffffff) << 1;
                          if (0x3ffffffe < uVar18) {
                            uVar18 = 0x3fffffff;
                          }
                          uVar42 = uVar51;
                          if ((int)uVar51 <= (int)uVar18) {
                            uVar42 = uVar18;
                          }
                          lVar58 = FUN_032bd1d4(PTR_PTR_0434a080,uVar42,8,lVar58,iVar21,puVar61);
                          iVar21 = (int)plVar59[0xc];
                          plVar59[0xb] = lVar58;
                        }
                        *(undefined8 *)(lVar58 + (long)iVar21 * 8) = *(undefined8 *)puVar36;
                        *(uint *)(plVar59 + 0xc) = uVar51;
                      }
                      if (uVar43 == 0xffffffff) {
                        *(uint *)(param_1[0x71] + (long)*piVar55 * 0x20 + 0x10) = uVar2;
                        plVar59 = *(long **)(param_1[0x73] + lVar41 * 8);
                        lVar54 = *param_1;
                        lVar58 = *(long *)(lVar54 + 0x38);
                        uVar51 = *puVar36;
                        uVar28 = (ulong)uVar51 & 0xffffff;
                        bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                        while( true ) {
                          if ((bVar17 & 1) != 0) {
                            iVar21 = (int)plVar59[1];
                            uVar42 = *(uint *)((long)plVar59 + 0xc);
                            uVar18 = iVar21 + 1;
                            if (iVar21 < (int)(uVar42 & 0x3fffffff)) {
                              lVar41 = *plVar59;
                            }
                            else {
                              lVar41 = *plVar59;
                              if (0x3ffffffe < iVar21) {
                                FUN_032bd0a8(uVar18);
                                uVar42 = *(uint *)((long)plVar59 + 0xc);
                              }
                              uVar42 = (uVar42 & 0x3fffffff) << 1;
                              if (0x3ffffffe < uVar42) {
                                uVar42 = 0x3fffffff;
                              }
                              uVar35 = uVar18;
                              if ((int)uVar18 <= (int)uVar42) {
                                uVar35 = uVar42;
                              }
                              lVar41 = FUN_032bd1d4(PTR_PTR_0434a080,uVar35,4,lVar41,iVar21,
                                                    (uint *)((long)plVar59 + 0xc));
                              iVar21 = (int)plVar59[1];
                              *plVar59 = lVar41;
                            }
                            lVar58 = lVar58 + uVar28 * 0xc0;
                            *(undefined4 *)(lVar41 + (long)iVar21 * 4) =
                                 *(undefined4 *)(lVar58 + 0x50);
                            *(uint *)(plVar59 + 1) = uVar18;
                            uVar18 = *(uint *)(lVar58 + 0x50);
                            if (uVar18 < *(uint *)((long)plVar59 + 0x2c)) {
                              *(uint *)((long)plVar59 + 0x2c) = uVar18;
                              *(undefined4 *)(plVar59 + 5) = *(undefined4 *)(lVar54 + 0x5b8);
                            }
                          }
                          lVar58 = *(long *)(lVar54 + 0x38);
                          uVar18 = *(uint *)(lVar58 + uVar28 * 0xc0 + 0x84);
                          if (uVar18 == uVar51) break;
                          uVar28 = (ulong)(uVar18 & 0xffffff);
                          bVar17 = *(byte *)(lVar58 + uVar28 * 0xc0 + 0x88);
                        }
                        if ((int)plVar59[0xd] == iVar64) {
                          iVar21 = (int)plVar59[0xc];
                        }
                        else {
                          iVar21 = 0;
                          *(undefined4 *)(plVar59 + 0xc) = 0;
                          *(int *)(plVar59 + 0xd) = iVar64;
                        }
                        puVar61 = (uint *)((long)plVar59 + 100);
                        uVar18 = *puVar61;
                        uVar51 = iVar21 + 1;
                        if (iVar21 < (int)(uVar18 & 0x3fffffff)) goto LAB_03057050;
                        lVar58 = plVar59[0xb];
                        if (0x3ffffffe < iVar21) {
                          FUN_032bd0a8(uVar51);
                          uVar18 = *puVar61;
                        }
                        uVar18 = (uVar18 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar18) {
                          uVar18 = 0x3fffffff;
                        }
                        puVar15 = PTR_PTR_0434a080;
                        uVar42 = uVar51;
                        if ((int)uVar51 <= (int)uVar18) {
                          uVar42 = uVar18;
                        }
                        goto LAB_030574ec;
                      }
                    }
                    else if (uVar2 != uVar43) {
                      uVar18 = local_10f8._4_4_;
                      uVar51 = (int)local_10f8 + 1;
                      if ((int)(local_10f8._4_4_ & 0x3fffffff) <= (int)local_10f8) {
                        if (0x3ffffffe < (int)local_10f8) {
                          FUN_032bd0a8(uVar51);
                        }
                        uVar18 = (uVar18 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar18) {
                          uVar18 = 0x3fffffff;
                        }
                        uVar42 = uVar51;
                        if ((int)uVar51 <= (int)uVar18) {
                          uVar42 = uVar18;
                        }
                        local_1100 = FUN_032bd1d4(puVar6,uVar42,8,lVar58,uVar28 & 0xffffffff,
                                                  (long)&local_10f8 + 4);
                      }
                      *(undefined8 *)(local_1100 + (long)(int)local_10f8 * 8) =
                           *(undefined8 *)puVar36;
                      local_10f8 = CONCAT44(local_10f8._4_4_,uVar51);
                      lVar58 = param_1[0x73];
                      lVar54 = *(long *)(lVar58 + lVar41 * 8);
                      if (*(int *)(lVar54 + 0x68) != iVar64) {
                        *(undefined4 *)(lVar54 + 0x60) = 0;
                        *(int *)(lVar54 + 0x68) = iVar64;
                        lVar58 = param_1[0x73];
                      }
                      lVar58 = *(long *)(lVar58 + lVar46 * 8);
                      if (*(int *)(lVar58 + 0x68) != iVar64) {
                        *(undefined4 *)(lVar58 + 0x60) = 0;
                        *(int *)(lVar58 + 0x68) = iVar64;
                        lVar58 = *(long *)(param_1[0x73] + lVar46 * 8);
                      }
                      puVar61 = (uint *)(lVar58 + 100);
                      uVar18 = *puVar61;
                      iVar21 = *(int *)(lVar58 + 0x60);
                      uVar51 = iVar21 + 1;
                      if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
                        lVar54 = *(long *)(lVar58 + 0x58);
                      }
                      else {
                        uVar10 = *(undefined8 *)(lVar58 + 0x58);
                        if (0x3ffffffe < iVar21) {
                          FUN_032bd0a8(uVar51);
                          uVar18 = *puVar61;
                        }
                        uVar18 = (uVar18 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar18) {
                          uVar18 = 0x3fffffff;
                        }
                        uVar42 = uVar51;
                        if ((int)uVar51 <= (int)uVar18) {
                          uVar42 = uVar18;
                        }
                        lVar54 = FUN_032bd1d4(PTR_PTR_0434a080,uVar42,8,uVar10,iVar21,puVar61);
                        iVar21 = *(int *)(lVar58 + 0x60);
                        *(long *)(lVar58 + 0x58) = lVar54;
                      }
                      *(undefined8 *)(lVar54 + (long)iVar21 * 8) = *(undefined8 *)puVar36;
                      *(uint *)(lVar58 + 0x60) = uVar51;
                    }
                  }
                  else {
joined_r0x03053f40:
                    if (bVar8) {
                      cVar5 = *(char *)(lVar54 + uVar39 * 0xc0 + 0x96);
                      cVar4 = *(char *)(lVar54 + uVar13 * 0xc0 + 0x96);
                      if ((((uVar42 >> 3 & 1) == 0) || (cVar4 <= cVar5)) &&
                         (((uVar35 >> 3 & 1) == 0 || (cVar5 <= cVar4)))) {
                        if (((uVar42 >> 3 & 1) == 0) || (uVar43 == 0xffffffff)) {
                          if (uVar2 == 0xffffffff) {
                            uVar35 = uVar20 + 1;
                            if ((uVar42 >> 3 & 1) == 0) {
                              if ((int)(local_10b0._4_4_ & 0x3fffffff) <= (int)uVar20) {
                                if (0x3ffffffe < (int)uVar20) {
                                  FUN_032bd0a8(uVar35);
                                }
                                uVar51 = (uVar48 & 0x3fffffff) << 1;
                                if (0x3ffffffe < uVar51) {
                                  uVar51 = 0x3fffffff;
                                }
                                uVar18 = uVar35;
                                if ((int)uVar35 <= (int)uVar51) {
                                  uVar18 = uVar51;
                                }
                                pppuVar62 = (uint ***)
                                            FUN_032bd1d4(puVar6,uVar18,4,local_1240,uVar20,lVar23);
                                uVar51 = *puVar61;
                                local_1260 = pppuVar62;
                                local_1258 = pppuVar62;
                                local_1250 = pppuVar62;
                                local_1238 = pppuVar62;
                                local_1230 = pppuVar62;
                                local_1218 = pppuVar62;
                                local_10b8 = pppuVar62;
                                uVar20 = (uint)local_10b0;
                              }
                              local_1228 = local_1238;
                              *(uint *)((long)local_1238 + (long)(int)uVar20 * 4) = uVar51;
                              local_1248 = local_1230;
                              local_1240 = local_1230;
                              local_10b0 = CONCAT44(local_10b0._4_4_,uVar35);
                              uVar20 = uVar35;
                            }
                            else {
                              if ((int)(local_10b0._4_4_ & 0x3fffffff) <= (int)uVar20) {
                                if (0x3ffffffe < (int)uVar20) {
                                  FUN_032bd0a8(uVar35);
                                }
                                uVar51 = (uVar48 & 0x3fffffff) << 1;
                                if (0x3ffffffe < uVar51) {
                                  uVar51 = 0x3fffffff;
                                }
                                uVar18 = uVar35;
                                if ((int)uVar35 <= (int)uVar51) {
                                  uVar18 = uVar51;
                                }
                                pppuVar62 = (uint ***)
                                            FUN_032bd1d4(puVar6,uVar18,4,local_1248,uVar20,lVar23);
                                uVar18 = *puVar36;
                                local_1260 = pppuVar62;
                                local_1258 = pppuVar62;
                                local_1250 = pppuVar62;
                                local_1248 = pppuVar62;
                                local_1240 = pppuVar62;
                                local_1238 = pppuVar62;
                                local_1230 = pppuVar62;
                                local_1228 = pppuVar62;
                                local_1218 = pppuVar62;
                                local_10b8 = pppuVar62;
                                uVar20 = (uint)local_10b0;
                              }
                              *(uint *)((long)local_1228 + (long)(int)uVar20 * 4) = uVar18;
                              local_10b0 = CONCAT44(local_10b0._4_4_,uVar35);
                              uVar20 = uVar35;
                            }
                          }
                          else {
                            lVar58 = *(long *)(param_1[0x73] + lVar41 * 8);
                            *(undefined1 *)(lVar58 + 0x24) = 1;
                            if (*(int *)(lVar58 + 0x68) == iVar64) {
                              iVar21 = *(int *)(lVar58 + 0x60);
                            }
                            else {
                              iVar21 = 0;
                              *(undefined4 *)(lVar58 + 0x60) = 0;
                              *(int *)(lVar58 + 0x68) = iVar64;
                            }
                            puVar61 = (uint *)(lVar58 + 100);
                            uVar18 = *puVar61;
                            uVar51 = iVar21 + 1;
                            if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
                              lVar54 = *(long *)(lVar58 + 0x58);
                            }
                            else {
                              uVar10 = *(undefined8 *)(lVar58 + 0x58);
                              if (0x3ffffffe < iVar21) {
                                FUN_032bd0a8(uVar51);
                                uVar18 = *puVar61;
                              }
                              uVar18 = (uVar18 & 0x3fffffff) << 1;
                              if (0x3ffffffe < uVar18) {
                                uVar18 = 0x3fffffff;
                              }
                              uVar42 = uVar51;
                              if ((int)uVar51 <= (int)uVar18) {
                                uVar42 = uVar18;
                              }
                              lVar54 = FUN_032bd1d4(PTR_PTR_0434a080,uVar42,8,uVar10,iVar21,puVar61)
                              ;
                              iVar21 = *(int *)(lVar58 + 0x60);
                              *(long *)(lVar58 + 0x58) = lVar54;
                            }
                            uVar28 = local_10e8;
                            pppuVar11 = local_10f0;
                            *(undefined8 *)(lVar54 + (long)iVar21 * 8) = *(undefined8 *)puVar36;
                            *(uint *)(lVar58 + 0x60) = uVar51;
                            if (*(char *)(lVar58 + 0x25) != '\0') goto LAB_030556b0;
                            uVar18 = local_10e8._4_4_;
                            uVar51 = (int)local_10e8 + 1;
                            if ((int)(local_10e8._4_4_ & 0x3fffffff) <= (int)local_10e8) {
                              if (0x3ffffffe < (int)local_10e8) {
                                FUN_032bd0a8(uVar51);
                              }
                              uVar18 = (uVar18 & 0x3fffffff) << 1;
                              if (0x3ffffffe < uVar18) {
                                uVar18 = 0x3fffffff;
                              }
                              uVar42 = uVar51;
                              if ((int)uVar51 <= (int)uVar18) {
                                uVar42 = uVar18;
                              }
                              local_10f0 = (uint ***)
                                           FUN_032bd1d4(puVar6,uVar42,4,pppuVar11,
                                                        uVar28 & 0xffffffff,lVar22);
                            }
                            *(uint *)((long)local_10f0 + (long)(int)local_10e8 * 4) = uVar2;
                            local_10e8 = CONCAT44(local_10e8._4_4_,uVar51);
                            *(undefined1 *)(lVar58 + 0x25) = 1;
                          }
                        }
                        else {
                          lVar58 = *(long *)(param_1[0x73] + lVar46 * 8);
                          *(undefined1 *)(lVar58 + 0x24) = 1;
                          if (*(int *)(lVar58 + 0x68) == iVar64) {
                            iVar21 = *(int *)(lVar58 + 0x60);
                          }
                          else {
                            iVar21 = 0;
                            *(undefined4 *)(lVar58 + 0x60) = 0;
                            *(int *)(lVar58 + 0x68) = iVar64;
                          }
                          puVar61 = (uint *)(lVar58 + 100);
                          uVar18 = *puVar61;
                          uVar51 = iVar21 + 1;
                          if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
                            lVar54 = *(long *)(lVar58 + 0x58);
                          }
                          else {
                            uVar10 = *(undefined8 *)(lVar58 + 0x58);
                            if (0x3ffffffe < iVar21) {
                              FUN_032bd0a8(uVar51);
                              uVar18 = *puVar61;
                            }
                            uVar18 = (uVar18 & 0x3fffffff) << 1;
                            if (0x3ffffffe < uVar18) {
                              uVar18 = 0x3fffffff;
                            }
                            uVar42 = uVar51;
                            if ((int)uVar51 <= (int)uVar18) {
                              uVar42 = uVar18;
                            }
                            lVar54 = FUN_032bd1d4(PTR_PTR_0434a080,uVar42,8,uVar10,iVar21,puVar61);
                            iVar21 = *(int *)(lVar58 + 0x60);
                            *(long *)(lVar58 + 0x58) = lVar54;
                          }
                          uVar28 = local_10e8;
                          pppuVar11 = local_10f0;
                          *(undefined8 *)(lVar54 + (long)iVar21 * 8) = *(undefined8 *)puVar36;
                          *(uint *)(lVar58 + 0x60) = uVar51;
                          if (*(char *)(lVar58 + 0x25) != '\0') goto LAB_030556b0;
                          uVar18 = local_10e8._4_4_;
                          uVar51 = (int)local_10e8 + 1;
                          if ((int)(local_10e8._4_4_ & 0x3fffffff) <= (int)local_10e8) {
                            if (0x3ffffffe < (int)local_10e8) {
                              FUN_032bd0a8(uVar51);
                            }
                            uVar18 = (uVar18 & 0x3fffffff) << 1;
                            if (0x3ffffffe < uVar18) {
                              uVar18 = 0x3fffffff;
                            }
                            uVar42 = uVar51;
                            if ((int)uVar51 <= (int)uVar18) {
                              uVar42 = uVar18;
                            }
                            local_10f0 = (uint ***)
                                         FUN_032bd1d4(puVar6,uVar42,4,pppuVar11,uVar28 & 0xffffffff,
                                                      lVar22);
                          }
                          *(uint *)((long)local_10f0 + (long)(int)local_10e8 * 4) = uVar43;
                          local_10e8 = CONCAT44(local_10e8._4_4_,uVar51);
                          *(undefined1 *)(lVar58 + 0x25) = 1;
                        }
                      }
                      else {
LAB_030556b0:
                      }
                    }
                  }
                }
                else if ((uVar35 >> 3 & 1) == 0) goto joined_r0x03053f40;
              }
            }
            else if (((((*(byte *)(lVar54 + uVar39 * 0xc0 + 0x88) & 1) != 0) &&
                      ((*(byte *)(lVar54 + uVar13 * 0xc0 + 0x88) & 1) != 0)) &&
                     (*(char *)(*(long *)(param_2 + 0x20) +
                                (ulong)*(ushort *)(lVar54 + uVar39 * 0xc0 + 0x8a) * 0x50 + 0x18) ==
                      '\0')) &&
                    (*(char *)(*(long *)(param_2 + 0x20) +
                               (ulong)*(ushort *)(lVar54 + uVar13 * 0xc0 + 0x8a) * 0x50 + 0x18) ==
                     '\0')) {
              if ((uVar42 & 1) != 0) {
                puVar61 = puVar36;
              }
              uVar51 = *puVar61;
              if ((uVar42 & 1) == 0) {
                uVar18 = *(uint *)(param_1[0x71] +
                                   (long)*(int *)(lVar54 + uVar39 * 0xc0 + 0x80) * 0x20 + 0x10);
LAB_03056540:
                if ((uVar35 & 1) == 0) goto LAB_03052364;
                bVar17 = *(byte *)(lVar54 + uVar13 * 0xc0 + 0x59) >> 3 & 1;
              }
              else {
                uVar18 = *(uint *)(param_1[0x71] +
                                   (long)*(int *)(lVar54 + uVar13 * 0xc0 + 0x80) * 0x20 + 0x10);
                if ((*(byte *)(lVar54 + uVar39 * 0xc0 + 0x59) >> 3 & 1) == 0) goto LAB_03056540;
                bVar17 = 1;
              }
              if ((uVar18 == 0xffffffff) && (bVar8 = bVar17 != 0, bVar17 = 0, bVar8)) {
                uVar18 = uVar20 + 1;
                if ((int)(local_10b0._4_4_ & 0x3fffffff) <= (int)uVar20) {
                  if (0x3ffffffe < (int)uVar20) {
                    FUN_032bd0a8(uVar18);
                  }
                  uVar42 = (uVar48 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar42) {
                    uVar42 = 0x3fffffff;
                  }
                  uVar35 = uVar18;
                  if ((int)uVar18 <= (int)uVar42) {
                    uVar35 = uVar42;
                  }
                  pppuVar62 = (uint ***)FUN_032bd1d4(puVar6,uVar35,4,local_1250,uVar20,lVar23);
                  local_1260 = pppuVar62;
                  local_1258 = pppuVar62;
                  local_1218 = pppuVar62;
                  local_10b8 = pppuVar62;
                  uVar20 = (uint)local_10b0;
                }
                local_1240 = local_1258;
                *(uint *)((long)local_1260 + (long)(int)uVar20 * 4) = uVar51;
                local_10b0 = CONCAT44(local_10b0._4_4_,uVar18);
                local_1250 = local_1258;
                local_1248 = local_1258;
                local_1228 = local_1260;
                local_1238 = local_1260;
                local_1230 = local_1258;
                uVar20 = uVar18;
              }
              else if (bVar17 != 0) {
                lVar58 = *(long *)(param_1[0x73] + (long)(int)uVar18 * 8);
                *(undefined1 *)(lVar58 + 0x24) = 1;
                if (*(char *)(lVar58 + 0x25) == '\0') {
                  uVar51 = (int)local_10e8 + 1;
                  uVar42 = local_10e8._4_4_;
                  if ((int)(local_10e8._4_4_ & 0x3fffffff) <= (int)local_10e8) {
                    if (0x3ffffffe < (int)local_10e8) {
                      FUN_032bd0a8(uVar51);
                    }
                    uVar42 = (uVar42 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar42) {
                      uVar42 = 0x3fffffff;
                    }
                    uVar35 = uVar51;
                    if ((int)uVar51 <= (int)uVar42) {
                      uVar35 = uVar42;
                    }
                    local_10f0 = (uint ***)
                                 FUN_032bd1d4(puVar6,uVar35,4,pppuVar11,uVar25 & 0xffffffff,lVar22);
                  }
                  *(uint *)((long)local_10f0 + (long)(int)local_10e8 * 4) = uVar18;
                  local_10e8 = CONCAT44(local_10e8._4_4_,uVar51);
                  *(undefined1 *)(lVar58 + 0x25) = 1;
                  if (*(int *)(lVar58 + 0x68) == iVar64) {
                    iVar21 = *(int *)(lVar58 + 0x60);
                  }
                  else {
                    iVar21 = 0;
                    *(undefined4 *)(lVar58 + 0x60) = 0;
                    *(int *)(lVar58 + 0x68) = iVar64;
                  }
                  puVar61 = (uint *)(lVar58 + 100);
                  uVar18 = *puVar61;
                  uVar51 = iVar21 + 1;
                  if (iVar21 < (int)(uVar18 & 0x3fffffff)) {
                    lVar54 = *(long *)(lVar58 + 0x58);
                  }
                  else {
                    uVar10 = *(undefined8 *)(lVar58 + 0x58);
                    if (0x3ffffffe < iVar21) {
                      FUN_032bd0a8(uVar51);
                      uVar18 = *puVar61;
                    }
                    uVar18 = (uVar18 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar18) {
                      uVar18 = 0x3fffffff;
                    }
                    uVar42 = uVar51;
                    if ((int)uVar51 <= (int)uVar18) {
                      uVar42 = uVar18;
                    }
                    lVar54 = FUN_032bd1d4(PTR_PTR_0434a080,uVar42,8,uVar10,iVar21,puVar61);
                    iVar21 = *(int *)(lVar58 + 0x60);
                    *(long *)(lVar58 + 0x58) = lVar54;
                  }
                  *(undefined8 *)(lVar54 + (long)iVar21 * 8) = *(undefined8 *)puVar36;
                  *(uint *)(lVar58 + 0x60) = uVar51;
                }
              }
            }
          }
        }
LAB_03052364:
        uVar57 = uVar57 - 1;
        if ((int)uVar57 < 1) {
          if ((uVar19 == 0) || (local_1210 = *(uint **)(local_1210 + 2), local_1210 == (uint *)0x0))
          break;
          uVar57 = *local_1210 & 0xffff;
          if ((int)uVar19 <= (int)(*local_1210 & 0xffff)) {
            uVar57 = uVar19;
          }
          if ((int)uVar57 < 1) break;
          puVar36 = local_1210 + 8;
          uVar19 = uVar19 - uVar57;
          Hint_Prefetch(*(long *)(local_1210 + 2),0,0,0);
          Hint_Prefetch(*(long *)(local_1210 + 2) + 0x40,0,0,0);
          Hint_Prefetch(local_1210 + 0x20,0,0,0);
          Hint_Prefetch(local_1210 + 0x30,0,0,0);
        }
        else {
          puVar36 = puVar36 + 2;
        }
      } while (puVar36 != (uint *)0x0);
      if (uVar20 - 1 != 0 && 0 < (int)uVar20) {
        pppuVar11 = (uint ***)((long)pppuVar62 + (long)(int)(uVar20 - 1) * 4);
        lVar23 = 0;
        local_878 = pppuVar62;
        local_ca8 = pppuVar11;
LAB_03053ad0:
        lVar23 = (long)(int)lVar23;
LAB_03053b74:
        do {
          do {
            pppuVar44 = pppuVar11;
            uVar57 = *(uint *)((long)pppuVar62 + ((long)pppuVar44 - (long)pppuVar62 >> 3) * 4) &
                     0xffffff;
            pppuVar38 = pppuVar44;
            pppuVar9 = pppuVar62;
            do {
              while( true ) {
                while( true ) {
                  pppuVar9 = (uint ***)((long)pppuVar9 + -4);
                  do {
                    pppuVar11 = pppuVar9;
                    pppuVar9 = (uint ***)((long)pppuVar11 + 4);
                  } while ((*(uint *)pppuVar9 & 0xffffff) < uVar57);
                  pppuVar50 = (uint ***)((long)pppuVar38 + -4);
                  uVar19 = *(uint *)pppuVar38;
                  if (uVar57 < (uVar19 & 0xffffff)) {
                    do {
                      pppuVar38 = pppuVar50;
                      pppuVar50 = (uint ***)((long)pppuVar38 + -4);
                      uVar19 = *(uint *)pppuVar38;
                    } while (uVar57 < (uVar19 & 0xffffff));
                  }
                  if (pppuVar9 <= pppuVar38) break;
                  if (pppuVar38 < pppuVar9) goto LAB_03053b60;
                }
                pppuVar11 = pppuVar11 + 1;
                if (pppuVar38 != pppuVar9) break;
                pppuVar38 = pppuVar50;
                pppuVar9 = pppuVar11;
                if (pppuVar50 < pppuVar11) goto LAB_03053b60;
              }
              *(uint *)pppuVar38 = *(uint *)pppuVar9;
              *(uint *)pppuVar9 = uVar19;
              pppuVar38 = pppuVar50;
              pppuVar9 = pppuVar11;
            } while (pppuVar11 <= pppuVar50);
LAB_03053b60:
            if (pppuVar38 <= pppuVar62) {
              pppuVar11 = pppuVar44;
              pppuVar62 = pppuVar9;
              if (pppuVar9 < pppuVar44) goto LAB_03053b74;
              if (0 < (int)lVar23) {
                lVar58 = (long)(int)lVar23;
                lVar23 = lVar58 + -1;
                pppuVar62 = (uint ***)appuStack_868[lVar58 + -3];
                pppuVar11 = (uint ***)local_c98[lVar58 + -3];
                goto LAB_03053ad0;
              }
              uVar20 = (uint)local_10b0;
              pppuVar62 = local_10b8;
              local_1218 = local_10b8;
              goto joined_r0x03053bfc;
            }
            pppuVar11 = pppuVar38;
          } while (pppuVar44 <= pppuVar9);
          pppuVar50 = pppuVar62;
          if ((long)pppuVar44 - (long)pppuVar9 <= (long)pppuVar38 - (long)pppuVar62) {
            pppuVar11 = pppuVar44;
            pppuVar50 = pppuVar9;
            pppuVar44 = pppuVar38;
            pppuVar9 = pppuVar62;
          }
          pppuVar62 = pppuVar50;
          appuStack_868[lVar23 + -2] = (uint **)pppuVar9;
          local_c98[lVar23 + -2] = (uint **)pppuVar44;
          lVar23 = lVar23 + 1;
        } while( true );
      }
joined_r0x03053bfc:
      if (uVar20 != 0) {
        lVar23 = (long)(int)uVar20 << 2;
        do {
          uVar57 = *(uint *)pppuVar62;
          uVar25 = FUN_03030748(*param_1,(ulong)uVar57,0);
          uVar28 = local_10e8;
          pppuVar11 = local_10f0;
          if ((uVar25 & 1) == 0) {
            puVar36 = (uint *)(param_1[0x71] +
                               (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                              ((ulong)uVar57 & 0xffffff) * 0xc0 + 0x80) * 0x20 +
                              0x10);
            uVar57 = *puVar36;
            if ((uVar57 != 0xffffffff) &&
               (lVar58 = *(long *)(param_1[0x73] + (long)(int)uVar57 * 8),
               *(char *)(lVar58 + 0x25) == '\0')) {
              uVar19 = (int)local_10e8 + 1;
              uVar20 = local_10e8._4_4_;
              if ((int)(local_10e8._4_4_ & 0x3fffffff) <= (int)local_10e8) {
                if (0x3ffffffe < (int)local_10e8) {
                  FUN_032bd0a8(uVar19);
                }
                uVar57 = (uVar20 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar57) {
                  uVar57 = 0x3fffffff;
                }
                uVar20 = uVar19;
                if ((int)uVar19 <= (int)uVar57) {
                  uVar20 = uVar57;
                }
                local_10f0 = (uint ***)
                             FUN_032bd1d4(puVar6,uVar20,4,pppuVar11,uVar28 & 0xffffffff,lVar22);
                uVar57 = *puVar36;
              }
              *(uint *)((long)local_10f0 + (long)(int)local_10e8 * 4) = uVar57;
              local_10e8 = CONCAT44(local_10e8._4_4_,uVar19);
              *(undefined1 *)(lVar58 + 0x25) = 1;
            }
          }
          pppuVar62 = (uint ***)((long)pppuVar62 + 4);
          lVar23 = lVar23 + -4;
        } while (lVar23 != 0);
      }
      lVar23 = local_10b0;
      uVar57 = local_10b0._4_4_;
      local_10b0 = (ulong)local_10b0._4_4_ << 0x20;
      if ((-1 < lVar23) && (local_1218 != (uint ***)0x0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_1218,uVar57 << 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar23;
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar23 != 0) {
    puVar56 = *(undefined8 **)(lVar23 + 8);
    uVar28 = (long)puVar56 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar23 + 0x10)) &&
       (*(ulong *)(lVar23 + 8) = uVar28, puVar56 != (undefined8 *)0x0)) {
      *puVar56 = "StActivateAndMerge";
      uVar10 = nn::os::GetSystemTick();
      puVar56[1] = uVar10;
    }
  }
  puVar6 = PTR_PTR_0434a090;
  lVar23 = (long)(int)local_10f8;
  if (0 < (int)local_10f8) {
    lVar58 = 0;
    do {
      uVar28 = *(ulong *)(local_1100 + lVar58 * 8);
      uVar19 = *(uint *)(param_1[0x71] +
                         (long)*(int *)(*(long *)(lVar53 + 0x38) + (uVar28 & 0xffffff) * 0xc0 + 0x80
                                       ) * 0x20 + 0x10);
      uVar57 = *(uint *)(param_1[0x71] +
                         (long)*(int *)(*(long *)(lVar53 + 0x38) +
                                        (uVar28 >> 0x20 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0x10);
      if ((uVar19 == 0xffffffff || uVar57 == 0xffffffff) || uVar57 == uVar19) {
        if ((uVar57 == 0xffffffff) != (uVar19 == 0xffffffff)) {
          uVar57 = uVar57 ^ uVar19 ^ 0xffffffff;
          lVar54 = *(long *)(param_1[0x73] + (long)(int)uVar57 * 8);
          if (*(int *)(lVar54 + 0x68) == iVar64) {
            iVar21 = *(int *)(lVar54 + 0x60);
          }
          else {
            iVar21 = 0;
            *(undefined4 *)(lVar54 + 0x60) = 0;
            *(int *)(lVar54 + 0x68) = iVar64;
          }
          puVar36 = (uint *)(lVar54 + 100);
          uVar20 = *puVar36;
          uVar19 = iVar21 + 1;
          if (iVar21 < (int)(uVar20 & 0x3fffffff)) {
            lVar41 = *(long *)(lVar54 + 0x58);
          }
          else {
            uVar10 = *(undefined8 *)(lVar54 + 0x58);
            if (0x3ffffffe < iVar21) {
              FUN_032bd0a8(uVar19);
              uVar20 = *puVar36;
            }
            uVar20 = (uVar20 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar20) {
              uVar20 = 0x3fffffff;
            }
            uVar51 = uVar19;
            if ((int)uVar19 <= (int)uVar20) {
              uVar51 = uVar20;
            }
            lVar41 = FUN_032bd1d4(PTR_PTR_0434a080,uVar51,8,uVar10,iVar21,puVar36);
            iVar21 = *(int *)(lVar54 + 0x60);
            *(long *)(lVar54 + 0x58) = lVar41;
          }
          uVar25 = local_10e8;
          pppuVar62 = local_10f0;
          *(ulong *)(lVar41 + (long)iVar21 * 8) = uVar28;
          *(uint *)(lVar54 + 0x60) = uVar19;
          *(undefined1 *)(lVar54 + 0x24) = 1;
          if (*(char *)(lVar54 + 0x25) == '\0') {
            uVar20 = local_10e8._4_4_;
            uVar19 = (int)local_10e8 + 1;
            if ((int)(local_10e8._4_4_ & 0x3fffffff) <= (int)local_10e8) {
              if (0x3ffffffe < (int)local_10e8) {
                FUN_032bd0a8(uVar19);
              }
              uVar20 = (uVar20 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar20) {
                uVar20 = 0x3fffffff;
              }
              uVar51 = uVar19;
              if ((int)uVar19 <= (int)uVar20) {
                uVar51 = uVar20;
              }
              local_10f0 = (uint ***)
                           FUN_032bd1d4(puVar6,uVar51,4,pppuVar62,uVar25 & 0xffffffff,lVar22);
            }
            *(uint *)((long)local_10f0 + (long)(int)local_10e8 * 4) = uVar57;
            local_10e8 = CONCAT44(local_10e8._4_4_,uVar19);
            *(undefined1 *)(lVar54 + 0x25) = 1;
          }
        }
      }
      else {
        FUN_0304ee3c(param_1);
      }
      lVar58 = lVar58 + 1;
    } while (lVar23 != lVar58);
  }
  uVar28 = local_10e8;
  pppuVar62 = local_10f0;
  iVar64 = (int)param_1[0x67];
  uVar19 = local_10e8._4_4_;
  lVar53 = (long)(int)local_10e8;
  puVar36 = (uint *)param_1[0x66];
  uVar57 = (int)local_10e8 + iVar64;
  if ((int)(local_10e8._4_4_ & 0x3fffffff) < (int)uVar57) {
    if (0x3fffffff < (int)uVar57) {
      FUN_032bd0a8(uVar57);
    }
    uVar19 = (uVar19 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar19) {
      uVar19 = 0x3fffffff;
    }
    uVar20 = uVar57;
    if ((int)uVar57 <= (int)uVar19) {
      uVar20 = uVar19;
    }
    local_10f0 = (uint ***)FUN_032bd1d4(puVar6,uVar20,4,pppuVar62,uVar28 & 0xffffffff,lVar22);
  }
  if (iVar64 != 0) {
    lVar22 = (long)iVar64 << 2;
    puVar61 = (uint *)((long)local_10f0 + lVar53 * 4);
    do {
      lVar22 = lVar22 + -4;
      *puVar61 = *puVar36;
      puVar61 = puVar61 + 1;
      puVar36 = puVar36 + 1;
    } while (lVar22 != 0);
  }
  local_10e8 = CONCAT44((int)(local_10e8 >> 0x20),uVar57);
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (uVar57 == 0) goto LAB_03052034;
  lVar22 = *(long *)(lVar24 + 0x38d490);
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar22;
  }
  lVar22 = *(long *)(lVar22 + 0x10);
  if (lVar22 != 0) {
    puVar56 = *(undefined8 **)(lVar22 + 8);
    uVar28 = (long)puVar56 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar22 + 0x10)) &&
       (*(ulong *)(lVar22 + 8) = uVar28, puVar56 != (undefined8 *)0x0)) {
      *puVar56 = "StSortActivate";
      uVar10 = nn::os::GetSystemTick();
      puVar56[1] = uVar10;
    }
  }
  lVar22 = (long)(int)local_10e8;
  if (0 < (int)local_10e8) {
    uVar28 = lVar22 - 1;
    if (*(long *)(param_1[0x73] + (long)(int)*(uint *)((long)local_10f0 + uVar28 * 4) * 8) == 0) {
      uVar25 = (long)(int)local_10e8 - 1;
      local_10e8 = CONCAT44(local_10e8._4_4_,(int)uVar25);
      if (uVar28 != (uVar25 & 0xffffffff)) {
        *(uint *)((long)local_10f0 + uVar28 * 4) = *(uint *)((long)local_10f0 + uVar25 * 4);
      }
    }
    if (0 < (long)uVar28) {
      uVar28 = lVar22 - 2;
      if (*(long *)(param_1[0x73] + (long)(int)*(uint *)((long)local_10f0 + uVar28 * 4) * 8) == 0) {
        uVar25 = (long)(int)local_10e8 - 1;
        local_10e8._4_4_ = (uint)(local_10e8 >> 0x20);
        local_10e8 = CONCAT44(local_10e8._4_4_,(int)uVar25);
        if (uVar28 != (uVar25 & 0xffffffff)) {
          *(uint *)((long)local_10f0 + uVar28 * 4) = *(uint *)((long)local_10f0 + uVar25 * 4);
        }
      }
      if (0 < (long)uVar28) {
        uVar28 = lVar22 - 3;
        do {
          if (*(long *)(param_1[0x73] + (long)(int)*(uint *)((long)local_10f0 + uVar28 * 4) * 8) ==
              0) {
            uVar25 = (long)(int)local_10e8 - 1;
            local_10e8 = CONCAT44(local_10e8._4_4_,(int)uVar25);
            if (uVar28 != (uVar25 & 0xffffffff)) {
              *(uint *)((long)local_10f0 + uVar28 * 4) = *(uint *)((long)local_10f0 + uVar25 * 4);
            }
          }
          bVar8 = 0 < (long)uVar28;
          uVar28 = uVar28 - 1;
        } while (bVar8);
      }
    }
    if (1 < (int)local_10e8) {
      pppuVar62 = (uint ***)((long)local_10f0 + (long)((int)local_10e8 + -1) * 4);
      lVar22 = param_1[0x73];
      lVar53 = 0;
      local_878 = local_10f0;
      local_ca8 = pppuVar62;
      pppuVar11 = local_10f0;
LAB_0305375c:
      lVar53 = (long)(int)lVar53;
LAB_03053848:
      do {
        pppuVar44 = pppuVar62;
        do {
          pppuVar62 = pppuVar44;
          uVar57 = *(uint *)((long)pppuVar11 + ((long)pppuVar62 - (long)pppuVar11 >> 3) * 4);
          pppuVar9 = pppuVar11;
          pppuVar44 = pppuVar62;
          do {
            while( true ) {
              while( true ) {
                uVar28 = *(ulong *)(*(long *)(lVar22 + (long)(int)uVar57 * 8) + 0x28);
                pppuVar9 = (uint ***)((long)pppuVar9 + -4);
                do {
                  pppuVar38 = pppuVar9;
                  pppuVar9 = (uint ***)((long)pppuVar38 + 4);
                } while (*(ulong *)(*(long *)(lVar22 + (long)(int)*(uint *)pppuVar9 * 8) + 0x28) <
                         uVar28);
                pppuVar50 = (uint ***)((long)pppuVar44 + -4);
                uVar19 = *(uint *)pppuVar44;
                if (uVar28 < *(ulong *)(*(long *)(lVar22 + (long)(int)uVar19 * 8) + 0x28)) {
                  do {
                    pppuVar44 = pppuVar50;
                    pppuVar50 = (uint ***)((long)pppuVar44 + -4);
                    uVar19 = *(uint *)pppuVar44;
                  } while (uVar28 < *(ulong *)(*(long *)(lVar22 + (long)(int)uVar19 * 8) + 0x28));
                }
                if (pppuVar9 <= pppuVar44) break;
                if (pppuVar44 < pppuVar9) goto LAB_030537fc;
              }
              pppuVar38 = pppuVar38 + 1;
              if (pppuVar44 == pppuVar9) break;
              *(uint *)pppuVar44 = *(uint *)pppuVar9;
              *(uint *)pppuVar9 = uVar19;
              pppuVar9 = pppuVar38;
              pppuVar44 = pppuVar50;
              if (pppuVar50 < pppuVar38) goto LAB_030537fc;
            }
            pppuVar9 = pppuVar38;
            pppuVar44 = pppuVar50;
          } while (pppuVar38 <= pppuVar50);
LAB_030537fc:
          if (pppuVar44 <= pppuVar11) {
            pppuVar11 = pppuVar9;
            if (pppuVar9 < pppuVar62) goto LAB_03053848;
            if ((int)lVar53 < 1) goto LAB_0305243c;
            lVar23 = (long)(int)lVar53;
            lVar53 = lVar23 + -1;
            pppuVar11 = (uint ***)appuStack_868[lVar23 + -3];
            pppuVar62 = (uint ***)local_c98[lVar23 + -3];
            goto LAB_0305375c;
          }
        } while (pppuVar62 <= pppuVar9);
        pppuVar38 = pppuVar44;
        pppuVar50 = pppuVar11;
        if ((long)pppuVar62 - (long)pppuVar9 <= (long)pppuVar44 - (long)pppuVar11) {
          pppuVar38 = pppuVar62;
          pppuVar50 = pppuVar9;
          pppuVar62 = pppuVar44;
          pppuVar9 = pppuVar11;
        }
        appuStack_868[lVar53 + -2] = (uint **)pppuVar9;
        local_c98[lVar53 + -2] = (uint **)pppuVar62;
        pppuVar11 = pppuVar50;
        pppuVar62 = pppuVar38;
        lVar53 = lVar53 + 1;
      } while( true );
    }
  }
LAB_0305243c:
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar22;
    lVar22 = *(long *)(lVar22 + 0x10);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar22 != 0) {
    puVar56 = *(undefined8 **)(lVar22 + 8);
    uVar28 = (long)puVar56 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar22 + 0x10)) &&
       (*(ulong *)(lVar22 + 8) = uVar28, puVar56 != (undefined8 *)0x0)) {
      *puVar56 = "StIslandActivation";
      uVar10 = nn::os::GetSystemTick();
      puVar56[1] = uVar10;
    }
  }
  local_1128 = (long *)0x0;
  local_1150 = (long *)0x0;
  if (param_5 == 0) {
    local_1120 = *(undefined8 **)(param_2 + 0x4e0);
    local_1118 = *(uint **)(param_3[2] + (long)(int)param_3[3] * 8 + -8);
    local_1110 = *local_1118;
    local_110c = *local_1118 & 0xffff;
    local_1150 = param_3 + 0x20;
    *(uint *)(param_3 + 1) = (int)param_3[1] - local_110c;
    local_1148 = *(undefined8 **)(param_2 + 0x4e0);
    puVar36 = *(uint **)(param_3[0x22] + (long)(int)param_3[0x23] * 8 + -8);
    local_1138 = *puVar36 >> 0x10;
    uVar57 = *puVar36 & 0xffff;
    plVar59 = param_3 + 0x21;
    pplVar33 = &local_1150;
    local_1134 = uVar57;
    local_1128 = param_3;
  }
  else {
    FUN_032be7c0(param_1 + 0x22,*(undefined8 *)(param_2 + 0x4e0));
    local_1120 = *(undefined8 **)(param_2 + 0x4e0);
    puVar36 = *(uint **)(param_1[0x24] + (long)(int)param_1[0x25] * 8 + -8);
    local_1110 = *puVar36;
    uVar57 = *puVar36 & 0xffff;
    plVar59 = param_1 + 0x23;
    pplVar33 = &local_1128;
    local_1128 = param_1 + 0x22;
    local_110c = uVar57;
  }
  local_1110 = local_1110 >> 0x10;
  *(uint *)plVar59 = (int)*plVar59 - uVar57;
  pplVar33[2] = (long *)puVar36;
  local_1158 = *(long *)(param_2 + 8) + 0x530;
  local_1160 = *(long *)(*(long *)(param_2 + 8) + 0x500);
  if (*(char *)(local_1160 + 0xaa0) == '\0') {
    local_1160 = 0;
  }
  else {
    local_1160 = local_1160 + 0xab0;
  }
  local_11b8 = *(undefined8 **)(param_2 + 0x4e0);
  local_1180 = param_1 + 0x42;
  local_1170 = 0;
  local_1178 = (uint *)0x0;
  local_11b0 = *(uint **)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) * 8 + -8);
  local_11a8 = *local_11b0 >> 0x10;
  local_11a4 = *local_11b0 & 0xffff;
  *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) - local_11a4;
  local_11c0 = param_4;
  local_1168 = local_11b8;
  if (0 < (int)local_10e8) {
    puVar36 = (uint *)((long)param_1 + 0x34c);
    lVar22 = 0;
    do {
      puVar15 = PTR_PTR_0434a080;
      uVar57 = *(uint *)((long)local_10f0 + lVar22 * 4);
      plVar59 = *(long **)(param_1[0x73] + (long)(int)uVar57 * 8);
      if ((plVar59 != (long *)0x0) && (*(char *)((long)plVar59 + 0x25) != '\0')) {
        if (*(char *)((long)plVar59 + 0x24) == '\0') {
          iVar64 = (int)plVar59[3];
          if (0 < iVar64) {
            iVar21 = 0;
            do {
              lVar53 = plVar59[2];
              lVar23 = *(long *)(lVar53 + (long)iVar21 * 8);
              bVar17 = *(byte *)(lVar23 + 0x18);
              lVar58 = (long)iVar21;
              if ((ulong)bVar17 == 0) {
                iVar64 = iVar64 + -1;
                *(int *)(plVar59 + 3) = iVar64;
                if ((iVar64 != iVar21) &&
                   (*(undefined8 *)(lVar53 + lVar58 * 8) =
                         *(undefined8 *)(lVar53 + (long)iVar64 * 8), iVar21 < (int)plVar59[3])) {
                  *(int *)(*(long *)(plVar59[2] + lVar58 * 8) + 4) = iVar21;
                }
                iVar21 = iVar21 + -1;
              }
              else {
                lVar53 = lVar23 + 0x10;
                uVar19 = *(uint *)(lVar23 + 0x14);
                uVar57 = *(uint *)(lVar23 + 0x10);
                lVar41 = *(long *)(*param_1 + 0x38) + ((ulong)uVar19 & 0xffffff) * 0xc0;
                lVar54 = *(long *)(*param_1 + 0x38) + ((ulong)uVar57 & 0xffffff) * 0xc0;
                uVar3 = *(ushort *)(lVar54 + 0x58) | *(ushort *)(lVar41 + 0x58);
                iVar67 = -(uint)((float)*(undefined8 *)(lVar41 + 0x70) <=
                                (float)*(undefined8 *)(lVar54 + 0x60));
                iVar68 = -(uint)((float)((ulong)*(undefined8 *)(lVar41 + 0x70) >> 0x20) <=
                                (float)((ulong)*(undefined8 *)(lVar54 + 0x60) >> 0x20));
                iVar69 = -(uint)((float)((ulong)*(undefined8 *)(lVar41 + 0x68) >> 0x20) <=
                                (float)*(undefined8 *)(lVar54 + 0x68));
                iVar64 = -(uint)((float)*(undefined8 *)(lVar54 + 0x70) <=
                                (float)*(undefined8 *)(lVar41 + 0x60));
                iVar65 = -(uint)((float)((ulong)*(undefined8 *)(lVar54 + 0x70) >> 0x20) <=
                                (float)((ulong)*(undefined8 *)(lVar41 + 0x60) >> 0x20));
                iVar66 = -(uint)((float)((ulong)*(undefined8 *)(lVar54 + 0x68) >> 0x20) <=
                                (float)*(undefined8 *)(lVar41 + 0x68));
                uVar20 = CONCAT13((byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                                  CONCAT12((byte)((uint)iVar64 >> 0x10) &
                                           (byte)((uint)iVar67 >> 0x10),
                                           CONCAT11((byte)((uint)iVar64 >> 8) &
                                                    (byte)((uint)iVar67 >> 8),
                                                    (byte)iVar64 & (byte)iVar67)));
                if ((uVar20 & (uint)(CONCAT17((byte)((uint)iVar65 >> 0x18) &
                                              (byte)((uint)iVar68 >> 0x18),
                                              CONCAT16((byte)((uint)iVar65 >> 0x10) &
                                                       (byte)((uint)iVar68 >> 0x10),
                                                       CONCAT15((byte)((uint)iVar65 >> 8) &
                                                                (byte)((uint)iVar68 >> 8),
                                                                CONCAT14((byte)iVar65 & (byte)iVar68
                                                                         ,uVar20)))) >> 0x20) &
                    CONCAT13((byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                             CONCAT12((byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar69 >> 0x10),
                                      CONCAT11((byte)((uint)iVar66 >> 8) & (byte)((uint)iVar69 >> 8)
                                               ,(byte)iVar66 & (byte)iVar69)))) == 0 ||
                    (uVar3 & 1) != 0) {
                  local_878 = (uint ***)CONCAT44(local_878._4_4_,0xffffffff);
                  local_ca8 = (uint ***)CONCAT44(local_ca8._4_4_,0xffffffff);
                  plVar12 = *(long **)(*(long *)(param_2 + 0x40) + (ulong)bVar17 * 8 + 0x13b8);
                  (**(code **)(*plVar12 + 0x18))
                            (plVar12,param_2,&local_1160,lVar53,auStack_1198,(uint *)(lVar23 + 0x14)
                             ,lVar53,&local_878,&local_ca8);
                  *(undefined1 *)(lVar23 + 0x18) = 0;
                  lVar53 = (long)(int)plVar59[3] + -1;
                  iVar64 = (int)lVar53;
                  *(int *)(plVar59 + 3) = iVar64;
                  if ((iVar64 != iVar21) &&
                     (*(undefined8 *)(plVar59[2] + lVar58 * 8) =
                           *(undefined8 *)(plVar59[2] + lVar53 * 8), iVar21 < (int)plVar59[3])) {
                    *(int *)(*(long *)(plVar59[2] + lVar58 * 8) + 4) = iVar21;
                  }
                  iVar21 = iVar21 + -1;
                }
                else if (((uVar3 >> 0xb & 1) != 0) && (*(short *)(lVar23 + 0x1a) < 0)) {
                  if (bVar17 == 9) {
                    if ((int)local_11a8 < 0xed9) {
                      puVar61 = (uint *)((long)local_11b0 + (long)(int)local_11a8 + 0x20);
                    }
                    else {
                      puVar61 = (uint *)FUN_032bf82c(&local_11c0);
                    }
                    *puVar61 = uVar57;
                    puVar61[1] = uVar19;
                    local_11a8 = local_11a8 + 8;
                    local_11a4 = local_11a4 + 1;
                  }
                  else {
                    FUN_03051cd0(lVar53,&local_1128,&local_1150,param_5,param_6,auStack_1198,
                                 *(long *)(param_2 + 0x40) + 0x13b8,
                                 *(long *)(param_2 + 0x40) + 0x1448);
                  }
                  *(undefined1 *)(lVar23 + 0x18) = 0;
                  lVar53 = (long)(int)plVar59[3] + -1;
                  iVar64 = (int)lVar53;
                  *(int *)(plVar59 + 3) = iVar64;
                  if ((iVar64 != iVar21) &&
                     (*(undefined8 *)(plVar59[2] + lVar58 * 8) =
                           *(undefined8 *)(plVar59[2] + lVar53 * 8), iVar21 < (int)plVar59[3])) {
                    *(int *)(*(long *)(plVar59[2] + lVar58 * 8) + 4) = iVar21;
                  }
                  iVar21 = iVar21 + -1;
                }
              }
              iVar64 = (int)plVar59[3];
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar64);
          }
          *(undefined1 *)((long)plVar59 + 0x25) = 0;
        }
        else {
          lVar53 = (long)(int)uVar57;
          if ((param_8 == (long *)0x0) || ((int)plVar59[10] != *(int *)(*param_1 + 0x5b8))) {
            iVar64 = (int)plVar59[3];
joined_r0x0305260c:
            if (iVar64 == 0) goto LAB_03052610;
LAB_03053088:
            iVar64 = (int)plVar59[1];
            local_870 = -0x7fffff0000000000;
            uVar19 = iVar64 + 1;
            if (iVar64 < 0x100) {
              local_870._0_4_ = 0;
              local_898 = appuStack_868;
            }
            else {
              local_878 = appuStack_868;
              if (iVar64 < 0x3fffffff) {
                uVar20 = 0x200;
              }
              else {
                FUN_032bd0a8(uVar19);
                uVar20 = (local_870._4_4_ & 0x3fffffff) * 2;
                if (0x3ffffffe < uVar20) {
                  uVar20 = 0x3fffffff;
                }
              }
              uVar51 = uVar19;
              if ((int)uVar19 <= (int)uVar20) {
                uVar51 = uVar20;
              }
              local_898 = (uint ***)
                          FUN_032bd1d4(puVar6,uVar51,4,appuStack_868,0,(long)&local_870 + 4);
            }
            local_888 = (uint)local_870;
            if ((int)(uint)local_870 <= iVar64 || (int)uVar19 < (int)(uint)local_870) {
              local_870 = CONCAT44(local_870._4_4_,uVar19);
              local_888 = uVar19;
            }
            local_890 = (uint *)((long)local_898 + (long)(int)local_888 * 4);
            if ((0 < (int)local_888) && (*(uint *)local_898 = 0xffffffff, 1 < (int)local_888)) {
              lVar23 = 1;
              do {
                *(uint *)((long)local_898 + lVar23 * 4) = 0xffffffff;
                lVar23 = lVar23 + 1;
              } while (lVar23 < (int)local_888);
            }
            local_884 = 0xffffffff00000000;
            lVar23 = *param_1;
            local_878 = local_898;
            if ((int)plVar59[3] < 1) {
              local_1250 = (uint ***)0x0;
              local_1238 = (uint ***)0x0;
              pppuVar62 = (uint ***)0x0;
              uVar28 = 0x80000000;
            }
            else {
              lVar58 = 0;
              uVar19 = 0;
              local_1238 = (uint ***)0x0;
              local_1240 = (uint ***)0x0;
              uVar28 = 0x80000000;
              do {
                uVar25 = (ulong)uVar19;
                lVar54 = *(long *)(plVar59[2] + lVar58 * 8);
                pppuVar62 = (uint ***)uVar25;
                if (*(char *)(lVar54 + 0x18) == '\0') {
LAB_0305297c:
                }
                else {
                  uVar20 = *(uint *)(lVar54 + 0x10);
                  uVar39 = (ulong)uVar20;
                  uVar51 = *(uint *)(lVar54 + 0x14);
                  uVar13 = (ulong)uVar51;
                  uVar52 = uVar13 & 0xffffff;
                  uVar18 = (uint)uVar52;
                  if ((((uVar18 == 0xffffff) ||
                       (uVar42 = *(uint *)(lVar23 + 0x40), uVar42 <= uVar18)) ||
                      (lVar41 = *(long *)(lVar23 + 0x38),
                      (*(byte *)(lVar41 + uVar52 * 0xc0 + 0x54) & 3) == 0)) ||
                     (((*(uint *)(lVar41 + uVar52 * 0xc0 + 0x50) != uVar51 ||
                       ((*(byte *)(lVar41 + (uVar13 & 0xffffff) * 0xc0 + 0x88) & 1) == 0)) ||
                      ((*(byte *)(lVar41 + (uVar13 & 0xffffff) * 0xc0 + 0x58) & 0x11) != 0)))) {
                    uVar14 = uVar39 & 0xffffff;
                    uVar35 = (uint)uVar14;
                    if (uVar35 != 0xffffff) {
                      uVar42 = *(uint *)(lVar23 + 0x40);
                      if (((uVar42 <= uVar35) ||
                          ((*(byte *)(*(long *)(lVar23 + 0x38) + uVar14 * 0xc0 + 0x54) & 3) == 0))
                         || (*(uint *)(*(long *)(lVar23 + 0x38) + uVar14 * 0xc0 + 0x50) != uVar20))
                      goto LAB_030527fc;
                      if ((*(uint *)(lVar23 + 0x5c) < uVar18) ||
                         ((*(byte *)(*(long *)(lVar23 + 0x38) + uVar52 * 0xc0 + 0x59) >> 3 & 1) != 0
                         )) {
                        if (((*(byte *)(*(long *)(lVar23 + 0x38) + uVar14 * 0xc0 + 0x54) & 9) == 0)
                           && ((*(byte *)(lVar54 + 0x1f) >> 3 & 1) != 0)) {
                          if (0 < (int)*(uint *)(plVar59 + 1)) {
                            uVar13 = 0;
                            do {
                              if (*(uint *)(*plVar59 + uVar13 * 4) == uVar20) goto LAB_030545b0;
                              uVar13 = uVar13 + 1;
                            } while (*(uint *)(plVar59 + 1) != uVar13);
                          }
                          uVar13 = 0xffffffff;
LAB_030545b0:
                          uVar42 = *(uint *)local_898;
                          if ((int)*(uint *)local_898 < 0) {
                            uVar35 = 0;
                          }
                          else {
                            do {
                              uVar35 = uVar42;
                              uVar42 = *(uint *)((long)local_898 + (long)(int)uVar35 * 4);
                            } while (-1 < (int)uVar42);
                          }
                          lVar54 = (long)(int)uVar13 + 1;
                          uVar42 = *(uint *)local_898;
                          if ((int)uVar42 < 0) {
                            uVar42 = 0;
                          }
                          else {
                            *(uint *)local_898 = uVar35;
                            puVar61 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                            uVar48 = *puVar61;
                            while (-1 < (int)uVar48) {
                              *puVar61 = uVar35;
                              puVar61 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                              uVar42 = uVar48;
                              uVar48 = *puVar61;
                            }
                          }
                          uVar43 = (uint)lVar54;
                          uVar35 = uVar43;
                          for (uVar48 = *(uint *)((long)local_898 + (long)(int)uVar43 * 4);
                              -1 < (int)uVar48;
                              uVar48 = *(uint *)((long)local_898 + (long)(int)uVar48 * 4)) {
                            uVar35 = uVar48;
                          }
                          uVar48 = *(uint *)((long)local_898 + lVar54 * 4);
                          if (-1 < (int)uVar48) {
                            *(uint *)((long)local_898 + lVar54 * 4) = uVar35;
                            puVar61 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                            uVar43 = uVar48;
                            uVar48 = *puVar61;
                            while (-1 < (int)uVar48) {
                              *puVar61 = uVar35;
                              puVar61 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                              uVar43 = uVar48;
                              uVar48 = *puVar61;
                            }
                          }
                          if (uVar42 != uVar43) {
                            uVar48 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4) + uVar48;
                            if ((int)uVar42 < (int)uVar43) {
                              *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar48;
                              *(uint *)((long)local_898 + (long)(int)uVar43 * 4) = uVar42;
                            }
                            else {
                              *(uint *)((long)local_898 + (long)(int)uVar43 * 4) = uVar48;
                              *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar43;
                            }
                          }
                        }
                        goto joined_r0x0305284c;
                      }
                      if (uVar35 < *(uint *)(lVar23 + 0x40)) goto LAB_03052804;
                      goto LAB_03052a08;
                    }
                    uVar35 = 0xffffff;
joined_r0x03057e30:
                    if (uVar18 != 0xffffff) {
                      uVar42 = *(uint *)(lVar23 + 0x40);
joined_r0x03057d48:
                      if (((((uVar18 < uVar42) &&
                            ((*(byte *)(*(long *)(lVar23 + 0x38) + uVar52 * 0xc0 + 0x54) & 3) != 0))
                           && ((*(uint *)(*(long *)(lVar23 + 0x38) + uVar52 * 0xc0 + 0x50) == uVar51
                               && ((*(uint *)(lVar23 + 0x5c) < uVar35 ||
                                   ((*(byte *)(*(long *)(lVar23 + 0x38) + (ulong)uVar35 * 0xc0 +
                                              0x59) >> 3 & 1) != 0)))))) &&
                          ((*(byte *)(*(long *)(lVar23 + 0x38) + (uVar13 & 0xffffff) * 0xc0 + 0x54)
                           & 9) == 0)) && ((*(byte *)(lVar54 + 0x1f) >> 3 & 1) != 0)) {
                        if (0 < (int)*(uint *)(plVar59 + 1)) {
                          uVar13 = 0;
                          do {
                            if (*(uint *)(*plVar59 + uVar13 * 4) == uVar51) goto LAB_03054c94;
                            uVar13 = uVar13 + 1;
                          } while (*(uint *)(plVar59 + 1) != uVar13);
                        }
                        uVar13 = 0xffffffff;
LAB_03054c94:
                        uVar42 = *(uint *)local_898;
                        if ((int)*(uint *)local_898 < 0) {
                          uVar35 = 0;
                        }
                        else {
                          do {
                            uVar35 = uVar42;
                            uVar42 = *(uint *)((long)local_898 + (long)(int)uVar35 * 4);
                          } while (-1 < (int)uVar42);
                        }
                        lVar54 = (long)(int)uVar13 + 1;
                        uVar42 = *(uint *)local_898;
                        if ((int)uVar42 < 0) {
                          uVar42 = 0;
                        }
                        else {
                          *(uint *)local_898 = uVar35;
                          puVar61 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                          uVar48 = *puVar61;
                          while (-1 < (int)uVar48) {
                            *puVar61 = uVar35;
                            puVar61 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                            uVar42 = uVar48;
                            uVar48 = *puVar61;
                          }
                        }
                        uVar43 = (uint)lVar54;
                        uVar35 = uVar43;
                        for (uVar48 = *(uint *)((long)local_898 + (long)(int)uVar43 * 4);
                            -1 < (int)uVar48;
                            uVar48 = *(uint *)((long)local_898 + (long)(int)uVar48 * 4)) {
                          uVar35 = uVar48;
                        }
                        uVar48 = *(uint *)((long)local_898 + lVar54 * 4);
                        if (-1 < (int)uVar48) {
                          *(uint *)((long)local_898 + lVar54 * 4) = uVar35;
                          puVar61 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                          uVar43 = uVar48;
                          uVar48 = *puVar61;
                          while (-1 < (int)uVar48) {
                            *puVar61 = uVar35;
                            puVar61 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                            uVar43 = uVar48;
                            uVar48 = *puVar61;
                          }
                        }
                        if (uVar42 != uVar43) {
                          uVar48 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4) + uVar48;
                          if ((int)uVar42 < (int)uVar43) {
                            *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar48;
                            *(uint *)((long)local_898 + (long)(int)uVar43 * 4) = uVar42;
                          }
                          else {
                            *(uint *)((long)local_898 + (long)(int)uVar43 * 4) = uVar48;
                            *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar43;
                          }
                        }
                        goto joined_r0x0305284c;
                      }
                      goto LAB_03052850;
                    }
                    goto LAB_0305297c;
                  }
                  uVar14 = (ulong)(uVar20 & 0xffffff);
                  if ((uVar20 & 0xffffff) == 0xffffff) {
                    uVar35 = 0xffffff;
                    goto joined_r0x03057d48;
                  }
LAB_030527fc:
                  if (uVar42 <= (uint)uVar14) {
LAB_03052a08:
                    uVar35 = (uint)uVar14;
                    goto joined_r0x03057e30;
                  }
LAB_03052804:
                  lVar41 = *(long *)(lVar23 + 0x38);
                  if (((((*(byte *)(lVar41 + uVar14 * 0xc0 + 0x54) & 3) == 0) ||
                       (*(uint *)(lVar41 + uVar14 * 0xc0 + 0x50) != uVar20)) ||
                      ((*(byte *)(lVar41 + (uVar39 & 0xffffff) * 0xc0 + 0x88) & 1) == 0)) ||
                     ((*(byte *)(lVar41 + (uVar39 & 0xffffff) * 0xc0 + 0x58) & 0x11) != 0))
                  goto LAB_03052a08;
joined_r0x0305284c:
                  if (uVar18 == 0xffffff) goto LAB_0305297c;
LAB_03052850:
                  if (*(uint *)(lVar23 + 0x40) <= uVar18) goto LAB_0305297c;
                  lVar54 = *(long *)(lVar23 + 0x38);
                  puVar61 = (uint *)(lVar54 + uVar52 * 0xc0 + 0x54);
                  if ((*puVar61 & 3) == 0) goto LAB_0305297c;
                  if (*(uint *)(lVar54 + uVar52 * 0xc0 + 0x50) != uVar51) goto LAB_0305297c;
                  uVar39 = uVar39 & 0xffffff;
                  if ((uint)uVar39 == 0xffffff) goto LAB_0305297c;
                  if (*(uint *)(lVar23 + 0x40) <= (uint)uVar39) goto LAB_0305297c;
                  puVar26 = (uint *)(lVar54 + uVar39 * 0xc0 + 0x54);
                  if ((*puVar26 & 3) == 0) goto LAB_0305297c;
                  if (*(uint *)(lVar54 + uVar39 * 0xc0 + 0x50) != uVar20) goto LAB_0305297c;
                  uVar18 = *(uint *)(plVar59 + 1);
                  if ((int)uVar18 < 1) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    do {
                      if (*(uint *)(*plVar59 + uVar13 * 4) == uVar51) goto LAB_030528e4;
                      uVar13 = uVar13 + 1;
                    } while (uVar18 != uVar13);
                    uVar13 = 0xffffffff;
LAB_030528e4:
                    uVar14 = 0;
                    uVar13 = (ulong)((int)uVar13 + 1);
                    do {
                      if (*(uint *)(*plVar59 + uVar14 * 4) == uVar20) goto LAB_03052908;
                      uVar14 = uVar14 + 1;
                    } while (uVar18 != uVar14);
                  }
                  uVar14 = 0xffffffff;
LAB_03052908:
                  cVar5 = *(char *)(lVar54 + uVar52 * 0xc0 + 0x96);
                  cVar4 = *(char *)(lVar54 + uVar39 * 0xc0 + 0x96);
                  uVar14 = (long)(int)uVar14 + 1;
                  uVar51 = (uint)uVar13;
                  uVar20 = (uint)uVar14;
                  if ((*puVar61 >> 3 & 1) == 0) {
                    if ((*puVar26 >> 3 & 1) != 0) goto LAB_03052af0;
LAB_03052928:
                    bVar17 = *(byte *)puVar61;
                    puVar32 = local_468[0];
                    puVar49 = local_268;
                    lVar41 = local_260;
                  }
                  else {
                    uVar18 = *(uint *)local_898;
                    if ((int)*(uint *)local_898 < 0) {
                      uVar42 = 0;
                      uVar18 = *(uint *)local_898;
                      if (-1 < (int)uVar18) goto LAB_03052c50;
LAB_03052a84:
                      uVar18 = 0;
                    }
                    else {
                      do {
                        uVar42 = uVar18;
                        uVar18 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4);
                      } while (-1 < (int)uVar18);
                      uVar18 = *(uint *)local_898;
                      if ((int)uVar18 < 0) goto LAB_03052a84;
LAB_03052c50:
                      *(uint *)local_898 = uVar42;
                      puVar32 = (uint *)((long)local_898 + (long)(int)uVar18 * 4);
                      uVar35 = *puVar32;
                      while (uVar48 = uVar35, -1 < (int)uVar48) {
                        *puVar32 = uVar42;
                        puVar32 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                        uVar18 = uVar48;
                        uVar35 = *puVar32;
                      }
                    }
                    uVar16 = uVar13;
                    for (uVar42 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                        -1 < (int)uVar42;
                        uVar42 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4)) {
                      uVar16 = (ulong)uVar42;
                    }
                    uVar42 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                    if ((int)uVar42 < 0) {
                      uVar35 = uVar51;
                    }
                    else {
                      *(uint *)((long)local_898 + (long)(int)uVar51 * 4) = (uint)uVar16;
                      puVar32 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                      uVar35 = uVar42;
                      uVar42 = *puVar32;
                      while (-1 < (int)uVar42) {
                        *puVar32 = (uint)uVar16;
                        puVar32 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                        uVar35 = uVar42;
                        uVar42 = *puVar32;
                      }
                    }
                    if (uVar18 != uVar35) {
                      uVar48 = uVar18;
                      if ((int)uVar35 <= (int)uVar18) {
                        uVar48 = uVar35;
                      }
                      uVar43 = uVar18;
                      if ((int)uVar18 <= (int)uVar35) {
                        uVar43 = uVar35;
                      }
                      uVar2 = uVar18;
                      if ((int)uVar35 <= (int)uVar18) {
                        uVar2 = uVar35;
                      }
                      *(uint *)((long)local_898 + (long)(int)uVar48 * 4) =
                           *(uint *)((long)local_898 + (long)(int)uVar18 * 4) + uVar42;
                      *(uint *)((long)local_898 + (long)(int)uVar43 * 4) = uVar2;
                    }
                    if ((*puVar26 >> 3 & 1) == 0) goto LAB_03052928;
LAB_03052af0:
                    uVar18 = *(uint *)local_898;
                    if ((int)*(uint *)local_898 < 0) {
                      uVar42 = 0;
                      uVar18 = *(uint *)local_898;
                      if (-1 < (int)uVar18) goto LAB_03052bc4;
LAB_03052b10:
                      uVar18 = 0;
                    }
                    else {
                      do {
                        uVar42 = uVar18;
                        uVar18 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4);
                      } while (-1 < (int)uVar18);
                      uVar18 = *(uint *)local_898;
                      if ((int)uVar18 < 0) goto LAB_03052b10;
LAB_03052bc4:
                      *(uint *)local_898 = uVar42;
                      puVar32 = (uint *)((long)local_898 + (long)(int)uVar18 * 4);
                      uVar35 = *puVar32;
                      while (uVar48 = uVar35, -1 < (int)uVar48) {
                        *puVar32 = uVar42;
                        puVar32 = (uint *)((long)local_898 + (long)(int)uVar48 * 4);
                        uVar18 = uVar48;
                        uVar35 = *puVar32;
                      }
                    }
                    uVar35 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                    uVar42 = uVar20;
                    while (uVar48 = uVar35, -1 < (int)uVar48) {
                      uVar42 = uVar48;
                      uVar35 = *(uint *)((long)local_898 + (long)(int)uVar48 * 4);
                    }
                    uVar35 = *(uint *)((long)local_898 + uVar14 * 4);
                    if ((int)uVar35 < 0) {
                      uVar48 = uVar20;
                    }
                    else {
                      *(uint *)((long)local_898 + uVar14 * 4) = uVar42;
                      puVar32 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                      uVar48 = uVar35;
                      uVar35 = *puVar32;
                      while (-1 < (int)uVar35) {
                        *puVar32 = uVar42;
                        puVar32 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                        uVar48 = uVar35;
                        uVar35 = *puVar32;
                      }
                    }
                    if (uVar18 == uVar48) goto LAB_03052928;
                    uVar35 = *(uint *)((long)local_898 + (long)(int)uVar18 * 4) + uVar35;
                    puVar32 = local_468[0];
                    puVar49 = local_268;
                    lVar41 = local_260;
                    if ((int)uVar18 < (int)uVar48) {
                      *(uint *)((long)local_898 + (long)(int)uVar18 * 4) = uVar35;
                      *(uint *)((long)local_898 + (long)(int)uVar48 * 4) = uVar18;
                      bVar17 = *(byte *)puVar61;
                    }
                    else {
                      *(uint *)((long)local_898 + (long)(int)uVar48 * 4) = uVar35;
                      *(uint *)((long)local_898 + (long)(int)uVar18 * 4) = uVar48;
                      bVar17 = *(byte *)puVar61;
                    }
                  }
                  local_468[0] = puVar32;
                  local_268 = puVar49;
                  local_260 = lVar41;
                  if ((((((bVar17 >> 1 & 1) == 0) || ((*(byte *)puVar26 >> 1 & 1) == 0)) ||
                       ((*(byte *)(lVar54 + uVar52 * 0xc0 + 0x88) & 1) == 0)) ||
                      (((*(byte *)(lVar54 + uVar39 * 0xc0 + 0x88) & 1) == 0 ||
                       (*(char *)(*(long *)(param_2 + 0x20) +
                                  (ulong)*(ushort *)(lVar54 + uVar52 * 0xc0 + 0x8a) * 0x50 + 0x18)
                        != '\0')))) ||
                     (*(char *)(*(long *)(param_2 + 0x20) +
                                (ulong)*(ushort *)(lVar54 + uVar39 * 0xc0 + 0x8a) * 0x50 + 0x18) !=
                      '\0')) goto LAB_0305297c;
                  if (cVar5 == cVar4) {
                    uVar25 = uVar13;
                    for (uVar19 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                        -1 < (int)uVar19;
                        uVar19 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4)) {
                      uVar25 = (ulong)uVar19;
                    }
                    uVar19 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                    if (-1 < (int)uVar19) {
                      *(uint *)((long)local_898 + (long)(int)uVar51 * 4) = (uint)uVar25;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar19 * 4);
                      uVar51 = *puVar61;
                      if ((int)uVar51 < 0) {
                        uVar13 = (ulong)uVar19;
                      }
                      else {
                        do {
                          *puVar61 = (uint)uVar25;
                          puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                          uVar13 = (ulong)uVar51;
                          uVar51 = *puVar61;
                        } while (-1 < (int)uVar51);
                      }
                    }
                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                    uVar19 = uVar20;
                    while (uVar18 = uVar51, -1 < (int)uVar18) {
                      uVar19 = uVar18;
                      uVar51 = *(uint *)((long)local_898 + (long)(int)uVar18 * 4);
                    }
                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                    if (-1 < (int)uVar51) {
                      *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar19;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                      uVar20 = uVar51;
                      uVar51 = *puVar61;
                      while (-1 < (int)uVar51) {
                        *puVar61 = uVar19;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                        uVar20 = uVar51;
                        uVar51 = *puVar61;
                      }
                    }
                    uVar19 = (uint)uVar13;
                    if (uVar19 != uVar20) {
                      uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4) + uVar51;
                      if ((int)uVar19 < (int)uVar20) {
                        *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar51;
                        *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar19;
                      }
                      else {
                        *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar51;
                        *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar20;
                      }
                    }
                  }
                  else {
                    uVar20 = (uint)uVar28;
                    if (cVar4 < cVar5) {
                      uVar13 = uVar13 | uVar14 << 0x20;
                      uVar51 = uVar20 & 0x3fffffff;
                      pppuVar62 = (uint ***)(ulong)(uVar19 + 1);
                      if ((int)uVar51 <= (int)uVar19) {
                        if (0x3ffffffe < (int)uVar19) {
                          FUN_032bd0a8(pppuVar62);
                        }
                        uVar18 = (uVar20 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar18) {
                          uVar18 = 0x3fffffff;
                        }
                        uVar28 = (ulong)pppuVar62;
                        if ((int)(uVar19 + 1) <= (int)uVar18) {
                          uVar28 = (ulong)uVar18;
                        }
                        local_10b8 = (uint ***)(uVar28 << 3);
                        iVar64 = (int)uVar28;
                        local_268 = (uint *)CONCAT44(local_268._4_4_,iVar64);
                        if ((iVar64 < (int)uVar51) || (0x3fffffff < iVar64)) {
                          local_ca8 = (uint ***)0x1;
                          local_c98[0] = &local_268;
                          local_ca0 = &DAT_0411b3b8;
                          FUN_03320b50(0x65816502,
                                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                       ,0x5a,"Invalid requestedCapacity {}",&local_ca8);
                        }
                        puVar56 = (undefined8 *)
                                  (**(code **)(*(long *)puVar6 + 0x10))
                                            (puVar6,local_10b8,&local_10b8);
                        if (0 < (int)uVar19) {
                          puVar27 = puVar56;
                          do {
                            uVar25 = uVar25 - 1;
                            *puVar27 = *local_1238;
                            puVar27 = puVar27 + 1;
                            local_1238 = local_1238 + 1;
                          } while (uVar25 != 0);
                        }
                        if (-1 < (int)uVar20) {
                          (**(code **)(*(long *)puVar6 + 0x18))
                                    (puVar6,local_1240,(ulong)uVar51 << 3);
                        }
                        local_1240 = (uint ***)puVar56;
                        if (local_10b8 < (uint ***)0x1fffffff8) {
                          uVar28 = (ulong)local_10b8 >> 3;
                        }
                        else {
                          uVar28 = 0x3fffffff;
                        }
                        goto LAB_03056a2c;
                      }
                    }
                    else {
                      uVar13 = uVar14 & 0xffffffff | uVar13 << 0x20;
                      uVar51 = uVar20 & 0x3fffffff;
                      pppuVar62 = (uint ***)(ulong)(uVar19 + 1);
                      if ((int)uVar51 <= (int)uVar19) {
                        if (0x3ffffffe < (int)uVar19) {
                          FUN_032bd0a8(pppuVar62);
                        }
                        uVar18 = (uVar20 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar18) {
                          uVar18 = 0x3fffffff;
                        }
                        uVar28 = (ulong)pppuVar62;
                        if ((int)(uVar19 + 1) <= (int)uVar18) {
                          uVar28 = (ulong)uVar18;
                        }
                        local_10b8 = (uint ***)(uVar28 << 3);
                        iVar64 = (int)uVar28;
                        local_268 = (uint *)CONCAT44(local_268._4_4_,iVar64);
                        if ((iVar64 < (int)uVar51) || (0x3fffffff < iVar64)) {
                          local_ca8 = (uint ***)0x1;
                          local_c98[0] = &local_268;
                          local_ca0 = &DAT_0411b3b8;
                          FUN_03320b50(0x65816502,
                                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                       ,0x5a,"Invalid requestedCapacity {}",&local_ca8);
                        }
                        puVar56 = (undefined8 *)
                                  (**(code **)(*(long *)puVar6 + 0x10))
                                            (puVar6,local_10b8,&local_10b8);
                        if (0 < (int)uVar19) {
                          uVar28 = (ulong)uVar19;
                          puVar27 = puVar56;
                          do {
                            uVar28 = uVar28 - 1;
                            *puVar27 = *local_1238;
                            puVar27 = puVar27 + 1;
                            local_1238 = local_1238 + 1;
                          } while (uVar28 != 0);
                        }
                        if (-1 < (int)uVar20) {
                          (**(code **)(*(long *)puVar6 + 0x18))
                                    (puVar6,local_1240,(ulong)uVar51 << 3);
                        }
                        uVar20 = (uint)((ulong)local_10b8 >> 3);
                        if ((uint ***)0x1fffffff7 < local_10b8) {
                          uVar20 = 0x3fffffff;
                        }
                        uVar28 = (ulong)uVar20;
                        local_1240 = (uint ***)puVar56;
LAB_03056a2c:
                        local_1238 = local_1240;
                      }
                    }
                    local_1238[(int)uVar19] = (uint **)uVar13;
                  }
                }
                lVar58 = lVar58 + 1;
                uVar19 = (uint)pppuVar62;
                local_1250 = local_1240;
              } while (lVar58 < (int)plVar59[3]);
            }
            if (*(int *)(lVar23 + 0x5b8) == (int)plVar59[10]) {
              iVar64 = (int)plVar59[7];
              if (0 < iVar64) {
                lVar58 = *(long *)(lVar23 + 0x488);
                local_1240 = (uint ***)0x0;
                local_1260 = local_1250;
                do {
                  plVar12 = (long *)(plVar59[6] + (long)local_1240 * 0x10);
                  plVar63 = plVar12 + 1;
                  if (0 < (int)*plVar63) {
                    lVar54 = 0;
                    do {
                      uVar19 = *(uint *)(*plVar12 + lVar54 * 0xc + 4);
                      lVar41 = (long)(int)uVar19;
                      if (uVar19 != 0x7fffffff) {
                        if (uVar19 < *(uint *)(lVar58 + 0x10)) {
                          lVar46 = *(long *)(lVar58 + 8);
                          if ((*(byte *)(lVar46 + lVar41 * 0x68 + 0x42) >> 2 & 1) != 0) {
                            if ((~*(uint *)(lVar46 + lVar41 * 0x68 + 8) & 0xffffff) == 0) {
                              if ((~*(uint *)(lVar46 + lVar41 * 0x68 + 0x18) & 0xffffff) == 0)
                              goto LAB_03055cd0;
                            }
                            uVar25 = *(ulong *)(lVar46 + lVar41 * 0x68 + 8);
                            uVar19 = (uint)uVar25;
                            if ((~uVar19 & 0xffffff) != 0) {
                              uVar39 = *(ulong *)(lVar46 + lVar41 * 0x68 + 0x18);
                              uVar20 = (uint)uVar39;
                              if ((~uVar20 & 0xffffff) != 0) {
                                uVar51 = *(uint *)(plVar59 + 1);
                                uVar39 = uVar39 & 0xffffff;
                                lVar41 = *(long *)(lVar23 + 0x38);
                                if ((int)uVar51 < 1) {
                                  uVar13 = 0;
                                }
                                else {
                                  uVar13 = 0;
                                  do {
                                    if (*(uint *)(*plVar59 + uVar13 * 4) == uVar19)
                                    goto LAB_03055da8;
                                    uVar13 = uVar13 + 1;
                                  } while (uVar51 != uVar13);
                                  uVar13 = 0xffffffff;
LAB_03055da8:
                                  uVar52 = 0;
                                  uVar13 = (ulong)((int)uVar13 + 1);
                                  do {
                                    if (*(uint *)(*plVar59 + uVar52 * 4) == uVar20)
                                    goto LAB_03055dd0;
                                    uVar52 = uVar52 + 1;
                                  } while (uVar51 != uVar52);
                                }
                                uVar52 = 0xffffffff;
LAB_03055dd0:
                                lVar46 = lVar41 + (uVar25 & 0xffffff) * 0xc0;
                                uVar25 = (long)(int)uVar52 + 1;
                                pbVar40 = (byte *)(lVar46 + 0x54);
                                cVar5 = *(char *)(lVar46 + 0x96);
                                cVar4 = *(char *)(lVar41 + uVar39 * 0xc0 + 0x96);
                                iVar64 = (int)uVar13;
                                if ((*pbVar40 >> 3 & 1) != 0) {
                                  uVar19 = *(uint *)local_898;
                                  if ((int)*(uint *)local_898 < 0) {
                                    uVar20 = 0;
                                    uVar19 = *(uint *)local_898;
                                    if (-1 < (int)uVar19) goto LAB_03055f68;
LAB_03055e84:
                                    uVar19 = 0;
                                  }
                                  else {
                                    do {
                                      uVar20 = uVar19;
                                      uVar19 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                                    } while (-1 < (int)uVar19);
                                    uVar19 = *(uint *)local_898;
                                    if ((int)uVar19 < 0) goto LAB_03055e84;
LAB_03055f68:
                                    *(uint *)local_898 = uVar20;
                                    puVar61 = (uint *)((long)local_898 + (long)(int)uVar19 * 4);
                                    uVar51 = *puVar61;
                                    while (uVar18 = uVar51, -1 < (int)uVar18) {
                                      *puVar61 = uVar20;
                                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar18 * 4);
                                      uVar19 = uVar18;
                                      uVar51 = *puVar61;
                                    }
                                  }
                                  uVar52 = uVar13;
                                  for (uVar20 = *(uint *)((long)local_898 + (long)iVar64 * 4);
                                      -1 < (int)uVar20;
                                      uVar20 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4)) {
                                    uVar52 = (ulong)uVar20;
                                  }
                                  uVar20 = *(uint *)((long)local_898 + (long)iVar64 * 4);
                                  if ((int)uVar20 < 0) {
                                    uVar14 = uVar13;
                                  }
                                  else {
                                    *(uint *)((long)local_898 + (long)iVar64 * 4) = (uint)uVar52;
                                    puVar61 = (uint *)((long)local_898 + (long)(int)uVar20 * 4);
                                    uVar18 = *puVar61;
                                    uVar51 = uVar20;
                                    while( true ) {
                                      uVar20 = uVar18;
                                      uVar14 = (ulong)uVar51;
                                      if ((int)uVar20 < 0) break;
                                      *puVar61 = (uint)uVar52;
                                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar20 * 4);
                                      uVar18 = *puVar61;
                                      uVar51 = uVar20;
                                    }
                                  }
                                  uVar51 = (uint)uVar14;
                                  if (uVar19 != uVar51) {
                                    uVar20 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4) +
                                             uVar20;
                                    if ((int)uVar19 < (int)uVar51) {
                                      *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar20;
                                      *(uint *)((long)local_898 + (long)(int)uVar51 * 4) = uVar19;
                                    }
                                    else {
                                      *(uint *)((long)local_898 + (long)(int)uVar51 * 4) = uVar20;
                                      *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar51;
                                    }
                                  }
                                }
                                pbVar45 = (byte *)(lVar41 + uVar39 * 0xc0 + 0x54);
                                uVar19 = (uint)uVar25;
                                if ((*pbVar45 >> 3 & 1) == 0) {
LAB_03055dfc:
                                  bVar17 = *pbVar40;
                                  puVar61 = local_468[0];
                                  puVar26 = local_268;
                                  lVar41 = local_260;
                                }
                                else {
                                  uVar20 = *(uint *)local_898;
                                  if ((int)*(uint *)local_898 < 0) {
                                    uVar51 = 0;
                                    uVar20 = *(uint *)local_898;
                                    if (-1 < (int)uVar20) goto LAB_03055fd0;
LAB_03055f04:
                                    uVar20 = 0;
                                  }
                                  else {
                                    do {
                                      uVar51 = uVar20;
                                      uVar20 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                                    } while (-1 < (int)uVar20);
                                    uVar20 = *(uint *)local_898;
                                    if ((int)uVar20 < 0) goto LAB_03055f04;
LAB_03055fd0:
                                    *(uint *)local_898 = uVar51;
                                    puVar61 = (uint *)((long)local_898 + (long)(int)uVar20 * 4);
                                    uVar18 = *puVar61;
                                    while (uVar42 = uVar18, -1 < (int)uVar42) {
                                      *puVar61 = uVar51;
                                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                                      uVar20 = uVar42;
                                      uVar18 = *puVar61;
                                    }
                                  }
                                  uVar18 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                                  uVar51 = uVar19;
                                  while (uVar42 = uVar18, -1 < (int)uVar42) {
                                    uVar51 = uVar42;
                                    uVar18 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4);
                                  }
                                  uVar18 = *(uint *)((long)local_898 + uVar25 * 4);
                                  if ((int)uVar18 < 0) {
                                    uVar42 = uVar19;
                                  }
                                  else {
                                    *(uint *)((long)local_898 + uVar25 * 4) = uVar51;
                                    puVar61 = (uint *)((long)local_898 + (long)(int)uVar18 * 4);
                                    uVar42 = uVar18;
                                    uVar18 = *puVar61;
                                    while (-1 < (int)uVar18) {
                                      *puVar61 = uVar51;
                                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar18 * 4);
                                      uVar42 = uVar18;
                                      uVar18 = *puVar61;
                                    }
                                  }
                                  if (uVar20 == uVar42) goto LAB_03055dfc;
                                  uVar18 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4) +
                                           uVar18;
                                  puVar61 = local_468[0];
                                  puVar26 = local_268;
                                  lVar41 = local_260;
                                  if ((int)uVar20 < (int)uVar42) {
                                    *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar18;
                                    *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar20;
                                    bVar17 = *pbVar40;
                                  }
                                  else {
                                    *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar18;
                                    *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar42;
                                    bVar17 = *pbVar40;
                                  }
                                }
                                local_468[0] = puVar61;
                                local_268 = puVar26;
                                local_260 = lVar41;
                                if (((bVar17 & 1) == 0) && ((*pbVar45 & 1) == 0)) {
                                  if (cVar5 == cVar4) {
                                    uVar25 = uVar13;
                                    for (uVar20 = *(uint *)((long)local_898 + (long)iVar64 * 4);
                                        -1 < (int)uVar20;
                                        uVar20 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4))
                                    {
                                      uVar25 = (ulong)uVar20;
                                    }
                                    uVar20 = *(uint *)((long)local_898 + (long)iVar64 * 4);
                                    if (-1 < (int)uVar20) {
                                      *(uint *)((long)local_898 + (long)iVar64 * 4) = (uint)uVar25;
                                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar20 * 4);
                                      uVar51 = *puVar61;
                                      if ((int)uVar51 < 0) {
                                        uVar13 = (ulong)uVar20;
                                      }
                                      else {
                                        do {
                                          *puVar61 = (uint)uVar25;
                                          puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4
                                                            );
                                          uVar13 = (ulong)uVar51;
                                          uVar51 = *puVar61;
                                        } while (-1 < (int)uVar51);
                                      }
                                    }
                                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                                    uVar20 = uVar19;
                                    while (uVar18 = uVar51, -1 < (int)uVar18) {
                                      uVar20 = uVar18;
                                      uVar51 = *(uint *)((long)local_898 + (long)(int)uVar18 * 4);
                                    }
                                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                                    if (-1 < (int)uVar51) {
                                      *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar20;
                                      uVar19 = uVar51;
                                      while( true ) {
                                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar19 * 4);
                                        uVar51 = *puVar61;
                                        if ((int)uVar51 < 0) break;
                                        *puVar61 = uVar20;
                                        uVar19 = uVar51;
                                      }
                                    }
                                    uVar20 = (uint)uVar13;
                                    if (uVar20 != uVar19) {
                                      uVar51 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4) +
                                               uVar51;
                                      if ((int)uVar20 < (int)uVar19) {
                                        *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar51;
                                        *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar20;
                                      }
                                      else {
                                        *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar51;
                                        *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar19;
                                      }
                                    }
                                  }
                                  else {
                                    uVar19 = (uint)uVar28;
                                    iVar64 = (int)pppuVar62;
                                    if (cVar4 < cVar5) {
                                      local_1250 = (uint ***)(uVar13 | uVar25 << 0x20);
                                      uVar20 = iVar64 + 1;
                                      local_1248 = (uint ***)(ulong)uVar20;
                                      uVar51 = uVar19 & 0x3fffffff;
                                      if ((int)uVar51 <= iVar64) {
                                        if (0x3ffffffe < iVar64) {
                                          FUN_032bd0a8(uVar20);
                                        }
                                        uVar18 = (uVar19 & 0x3fffffff) << 1;
                                        if (0x3ffffffe < uVar18) {
                                          uVar18 = 0x3fffffff;
                                        }
                                        if ((int)uVar20 <= (int)uVar18) {
                                          uVar20 = uVar18;
                                        }
                                        local_10b8 = (uint ***)((ulong)uVar20 << 3);
                                        local_268 = (uint *)CONCAT44(local_268._4_4_,uVar20);
                                        if (((int)uVar20 < (int)uVar51) ||
                                           (0x3fffffff < (int)uVar20)) {
                                          local_ca8 = (uint ***)0x1;
                                          local_c98[0] = &local_268;
                                          local_ca0 = &DAT_0411b3b8;
                                          FUN_03320b50(0x65816502,
                                                                                                              
                                                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                                  ,0x5a,"Invalid requestedCapacity {}",&local_ca8);
                                        }
                                        puVar56 = (undefined8 *)
                                                  (**(code **)(*(long *)puVar6 + 0x10))
                                                            (puVar6,local_10b8,&local_10b8);
                                        if (0 < iVar64) {
                                          puVar27 = puVar56;
                                          do {
                                            pppuVar62 = (uint ***)((long)pppuVar62 - 1);
                                            *puVar27 = *local_1238;
                                            puVar27 = puVar27 + 1;
                                            local_1238 = local_1238 + 1;
                                          } while (pppuVar62 != (uint ***)0x0);
                                        }
                                        if (-1 < (int)uVar19) {
                                          (**(code **)(*(long *)puVar6 + 0x18))
                                                    (puVar6,local_1260,(ulong)uVar51 << 3);
                                        }
                                        local_1260 = (uint ***)puVar56;
                                        if (local_10b8 < (uint ***)0x1fffffff8) {
                                          uVar28 = (ulong)local_10b8 >> 3;
                                        }
                                        else {
                                          uVar28 = 0x3fffffff;
                                        }
                                        goto LAB_030573f8;
                                      }
                                    }
                                    else {
                                      local_1250 = (uint ***)(uVar25 & 0xffffffff | uVar13 << 0x20);
                                      uVar20 = iVar64 + 1;
                                      local_1248 = (uint ***)(ulong)uVar20;
                                      uVar51 = uVar19 & 0x3fffffff;
                                      if ((int)uVar51 <= iVar64) {
                                        if (0x3ffffffe < iVar64) {
                                          FUN_032bd0a8(uVar20);
                                        }
                                        uVar18 = (uVar19 & 0x3fffffff) << 1;
                                        if (0x3ffffffe < uVar18) {
                                          uVar18 = 0x3fffffff;
                                        }
                                        if ((int)uVar20 <= (int)uVar18) {
                                          uVar20 = uVar18;
                                        }
                                        local_10b8 = (uint ***)((ulong)uVar20 << 3);
                                        local_268 = (uint *)CONCAT44(local_268._4_4_,uVar20);
                                        if (((int)uVar20 < (int)uVar51) ||
                                           (0x3fffffff < (int)uVar20)) {
                                          local_ca8 = (uint ***)0x1;
                                          local_c98[0] = &local_268;
                                          local_ca0 = &DAT_0411b3b8;
                                          FUN_03320b50(0x65816502,
                                                                                                              
                                                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                                  ,0x5a,"Invalid requestedCapacity {}",&local_ca8);
                                        }
                                        puVar56 = (undefined8 *)
                                                  (**(code **)(*(long *)puVar6 + 0x10))
                                                            (puVar6,local_10b8,&local_10b8);
                                        if (0 < iVar64) {
                                          puVar27 = puVar56;
                                          do {
                                            pppuVar62 = (uint ***)((long)pppuVar62 - 1);
                                            *puVar27 = *local_1238;
                                            puVar27 = puVar27 + 1;
                                            local_1238 = local_1238 + 1;
                                          } while (pppuVar62 != (uint ***)0x0);
                                        }
                                        if (-1 < (int)uVar19) {
                                          (**(code **)(*(long *)puVar6 + 0x18))
                                                    (puVar6,local_1260,(ulong)uVar51 << 3);
                                        }
                                        uVar19 = (uint)((ulong)local_10b8 >> 3);
                                        if ((uint ***)0x1fffffff7 < local_10b8) {
                                          uVar19 = 0x3fffffff;
                                        }
                                        uVar28 = (ulong)uVar19;
                                        local_1260 = (uint ***)puVar56;
LAB_030573f8:
                                        local_1238 = local_1260;
                                      }
                                    }
                                    local_1238[iVar64] = (uint **)local_1250;
                                    pppuVar62 = local_1248;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_03055cd0:
                      lVar54 = lVar54 + 1;
                    } while (lVar54 < (int)*plVar63);
                    iVar64 = (int)plVar59[7];
                  }
                  local_1240 = (uint ***)((long)local_1240 + 1);
                  local_1250 = local_1260;
                } while ((long)local_1240 < (long)iVar64);
              }
            }
            else {
              *(undefined4 *)(plVar59 + 7) = 0;
            }
            uVar19 = (uint)uVar28;
            if (0 < (int)plVar59[0xc]) {
              lVar58 = 0;
              do {
                puVar61 = (uint *)(plVar59[0xb] + lVar58 * 8);
                uVar19 = puVar61[1];
                lVar54 = *(long *)(lVar23 + 0x38);
                uVar25 = (ulong)uVar19 & 0xffffff;
                uVar20 = *(uint *)(lVar54 + uVar25 * 0xc0 + 0x54);
                if ((uVar20 & 3) == 0) {
LAB_03055294:
                }
                else {
                  uVar51 = *puVar61;
                  uVar39 = (ulong)uVar51 & 0xffffff;
                  puVar61 = (uint *)(lVar54 + uVar39 * 0xc0 + 0x54);
                  uVar18 = *puVar61;
                  if ((((uVar18 & 3) == 0) || (*(uint *)(lVar54 + uVar25 * 0xc0 + 0x50) != uVar19))
                     || (*(uint *)(lVar54 + uVar39 * 0xc0 + 0x50) != uVar51)) goto LAB_03055294;
                  uVar42 = *(uint *)(plVar59 + 1);
                  if ((int)uVar42 < 1) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0;
                    do {
                      if (*(uint *)(*plVar59 + uVar13 * 4) == uVar19) goto LAB_03055064;
                      uVar13 = uVar13 + 1;
                    } while (uVar42 != uVar13);
                    uVar13 = 0xffffffff;
LAB_03055064:
                    uVar52 = 0;
                    uVar13 = (ulong)((int)uVar13 + 1);
                    do {
                      if (*(uint *)(*plVar59 + uVar52 * 4) == uVar51) goto LAB_03055088;
                      uVar52 = uVar52 + 1;
                    } while (uVar42 != uVar52);
                  }
                  uVar52 = 0xffffffff;
LAB_03055088:
                  cVar5 = *(char *)(lVar54 + uVar25 * 0xc0 + 0x96);
                  cVar4 = *(char *)(lVar54 + uVar39 * 0xc0 + 0x96);
                  uVar52 = (long)(int)uVar52 + 1;
                  uVar19 = (uint)uVar13;
                  if ((uVar20 >> 3 & 1) != 0) {
                    uVar20 = *(uint *)local_898;
                    if ((int)*(uint *)local_898 < 0) {
                      uVar51 = 0;
                      uVar20 = *(uint *)local_898;
                      if (-1 < (int)uVar20) goto LAB_030552bc;
LAB_030550cc:
                      uVar20 = 0;
                    }
                    else {
                      do {
                        uVar51 = uVar20;
                        uVar20 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                      } while (-1 < (int)uVar20);
                      uVar20 = *(uint *)local_898;
                      if ((int)uVar20 < 0) goto LAB_030550cc;
LAB_030552bc:
                      *(uint *)local_898 = uVar51;
                      puVar26 = (uint *)((long)local_898 + (long)(int)uVar20 * 4);
                      uVar18 = *puVar26;
                      while (uVar42 = uVar18, -1 < (int)uVar42) {
                        *puVar26 = uVar51;
                        puVar26 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                        uVar20 = uVar42;
                        uVar18 = *puVar26;
                      }
                    }
                    uVar14 = uVar13;
                    for (uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                        -1 < (int)uVar51;
                        uVar51 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4)) {
                      uVar14 = (ulong)uVar51;
                    }
                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                    if ((int)uVar51 < 0) {
                      uVar18 = uVar19;
                    }
                    else {
                      *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = (uint)uVar14;
                      puVar26 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                      uVar18 = uVar51;
                      uVar51 = *puVar26;
                      while (-1 < (int)uVar51) {
                        *puVar26 = (uint)uVar14;
                        puVar26 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                        uVar18 = uVar51;
                        uVar51 = *puVar26;
                      }
                    }
                    if (uVar20 != uVar18) {
                      uVar42 = uVar20;
                      if ((int)uVar18 <= (int)uVar20) {
                        uVar42 = uVar18;
                      }
                      uVar35 = uVar20;
                      if ((int)uVar20 <= (int)uVar18) {
                        uVar35 = uVar18;
                      }
                      uVar48 = uVar20;
                      if ((int)uVar18 <= (int)uVar20) {
                        uVar48 = uVar18;
                      }
                      *(uint *)((long)local_898 + (long)(int)uVar42 * 4) =
                           *(uint *)((long)local_898 + (long)(int)uVar20 * 4) + uVar51;
                      *(uint *)((long)local_898 + (long)(int)uVar35 * 4) = uVar48;
                    }
                    uVar18 = *puVar61;
                  }
                  uVar20 = (uint)uVar52;
                  if ((uVar18 >> 3 & 1) != 0) {
                    uVar51 = *(uint *)local_898;
                    if ((int)*(uint *)local_898 < 0) {
                      uVar18 = 0;
                      uVar51 = *(uint *)local_898;
                      if (-1 < (int)uVar51) goto LAB_03055324;
LAB_03055158:
                      uVar51 = 0;
                    }
                    else {
                      do {
                        uVar18 = uVar51;
                        uVar51 = *(uint *)((long)local_898 + (long)(int)uVar18 * 4);
                      } while (-1 < (int)uVar51);
                      uVar51 = *(uint *)local_898;
                      if ((int)uVar51 < 0) goto LAB_03055158;
LAB_03055324:
                      *(uint *)local_898 = uVar18;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                      uVar42 = *puVar61;
                      while (uVar35 = uVar42, -1 < (int)uVar35) {
                        *puVar61 = uVar18;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                        uVar51 = uVar35;
                        uVar42 = *puVar61;
                      }
                    }
                    uVar42 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                    uVar18 = uVar20;
                    while (uVar35 = uVar42, -1 < (int)uVar35) {
                      uVar18 = uVar35;
                      uVar42 = *(uint *)((long)local_898 + (long)(int)uVar35 * 4);
                    }
                    uVar42 = *(uint *)((long)local_898 + uVar52 * 4);
                    if ((int)uVar42 < 0) {
                      uVar35 = uVar20;
                    }
                    else {
                      *(uint *)((long)local_898 + uVar52 * 4) = uVar18;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                      uVar35 = uVar42;
                      uVar42 = *puVar61;
                      while (-1 < (int)uVar42) {
                        *puVar61 = uVar18;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                        uVar35 = uVar42;
                        uVar42 = *puVar61;
                      }
                    }
                    if (uVar51 != uVar35) {
                      uVar42 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4) + uVar42;
                      if ((int)uVar51 < (int)uVar35) {
                        *(uint *)((long)local_898 + (long)(int)uVar51 * 4) = uVar42;
                        *(uint *)((long)local_898 + (long)(int)uVar35 * 4) = uVar51;
                      }
                      else {
                        *(uint *)((long)local_898 + (long)(int)uVar35 * 4) = uVar42;
                        *(uint *)((long)local_898 + (long)(int)uVar51 * 4) = uVar35;
                      }
                    }
                  }
                  if ((((*(byte *)(lVar54 + uVar25 * 0xc0 + 0x88) & 1) == 0) ||
                      ((*(byte *)(lVar54 + uVar39 * 0xc0 + 0x88) & 1) == 0)) ||
                     ((*(char *)(*(long *)(param_2 + 0x20) +
                                 (ulong)*(ushort *)(lVar54 + uVar25 * 0xc0 + 0x8a) * 0x50 + 0x18) !=
                       '\0' || (*(char *)(*(long *)(param_2 + 0x20) +
                                          (ulong)*(ushort *)(lVar54 + uVar39 * 0xc0 + 0x8a) * 0x50 +
                                         0x18) != '\0')))) goto LAB_03055294;
                  if (cVar5 == cVar4) {
                    uVar25 = uVar13;
                    for (uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                        -1 < (int)uVar51;
                        uVar51 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4)) {
                      uVar25 = (ulong)uVar51;
                    }
                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4);
                    if (-1 < (int)uVar51) {
                      *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = (uint)uVar25;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                      uVar19 = *puVar61;
                      if ((int)uVar19 < 0) {
                        uVar13 = (ulong)uVar51;
                      }
                      else {
                        do {
                          *puVar61 = (uint)uVar25;
                          puVar61 = (uint *)((long)local_898 + (long)(int)uVar19 * 4);
                          uVar13 = (ulong)uVar19;
                          uVar19 = *puVar61;
                        } while (-1 < (int)uVar19);
                      }
                    }
                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                    uVar19 = uVar20;
                    while (uVar18 = uVar51, -1 < (int)uVar18) {
                      uVar19 = uVar18;
                      uVar51 = *(uint *)((long)local_898 + (long)(int)uVar18 * 4);
                    }
                    uVar51 = *(uint *)((long)local_898 + (long)(int)uVar20 * 4);
                    if (-1 < (int)uVar51) {
                      *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar19;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                      uVar20 = uVar51;
                      uVar51 = *puVar61;
                      while (-1 < (int)uVar51) {
                        *puVar61 = uVar19;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar51 * 4);
                        uVar20 = uVar51;
                        uVar51 = *puVar61;
                      }
                    }
                    uVar19 = (uint)uVar13;
                    if (uVar19 != uVar20) {
                      uVar51 = *(uint *)((long)local_898 + (long)(int)uVar19 * 4) + uVar51;
                      if ((int)uVar19 < (int)uVar20) {
                        *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar51;
                        *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar19;
                      }
                      else {
                        *(uint *)((long)local_898 + (long)(int)uVar20 * 4) = uVar51;
                        *(uint *)((long)local_898 + (long)(int)uVar19 * 4) = uVar20;
                      }
                    }
                    goto LAB_03055294;
                  }
                  uVar19 = (uint)uVar28;
                  iVar64 = (int)pppuVar62;
                  if (cVar4 < cVar5) {
                    local_1240 = (uint ***)(uVar13 | uVar52 << 0x20);
                    uVar20 = uVar19 & 0x3fffffff;
                    uVar25 = (ulong)(iVar64 + 1U);
                    if ((int)uVar20 <= iVar64) {
                      if (0x3ffffffe < iVar64) {
                        FUN_032bd0a8(uVar25);
                      }
                      uVar51 = (uVar19 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar51) {
                        uVar51 = 0x3fffffff;
                      }
                      uVar28 = uVar25;
                      if ((int)(iVar64 + 1U) <= (int)uVar51) {
                        uVar28 = (ulong)uVar51;
                      }
                      local_10b8 = (uint ***)(uVar28 << 3);
                      iVar21 = (int)uVar28;
                      local_268 = (uint *)CONCAT44(local_268._4_4_,iVar21);
                      if ((iVar21 < (int)uVar20) || (0x3fffffff < iVar21)) {
                        local_ca8 = (uint ***)0x1;
                        local_c98[0] = &local_268;
                        local_ca0 = &DAT_0411b3b8;
                        FUN_03320b50(0x65816502,
                                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                     ,0x5a,"Invalid requestedCapacity {}",&local_ca8);
                      }
                      puVar56 = (undefined8 *)
                                (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_10b8,&local_10b8)
                      ;
                      if (0 < iVar64) {
                        puVar27 = puVar56;
                        do {
                          pppuVar62 = (uint ***)((long)pppuVar62 - 1);
                          *puVar27 = *local_1238;
                          puVar27 = puVar27 + 1;
                          local_1238 = local_1238 + 1;
                        } while (pppuVar62 != (uint ***)0x0);
                      }
                      if (-1 < (int)uVar19) {
                        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_1250,(ulong)uVar20 << 3);
                      }
                      local_1250 = (uint ***)puVar56;
                      if (local_10b8 < (uint ***)0x1fffffff8) {
                        uVar28 = (ulong)local_10b8 >> 3;
                      }
                      else {
                        uVar28 = 0x3fffffff;
                      }
                      goto LAB_03056d3c;
                    }
                  }
                  else {
                    local_1240 = (uint ***)(uVar52 & 0xffffffff | uVar13 << 0x20);
                    uVar20 = uVar19 & 0x3fffffff;
                    uVar25 = (ulong)(iVar64 + 1U);
                    if ((int)uVar20 <= iVar64) {
                      if (0x3ffffffe < iVar64) {
                        FUN_032bd0a8(uVar25);
                      }
                      uVar51 = (uVar19 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar51) {
                        uVar51 = 0x3fffffff;
                      }
                      uVar28 = uVar25;
                      if ((int)(iVar64 + 1U) <= (int)uVar51) {
                        uVar28 = (ulong)uVar51;
                      }
                      local_10b8 = (uint ***)(uVar28 << 3);
                      iVar21 = (int)uVar28;
                      local_268 = (uint *)CONCAT44(local_268._4_4_,iVar21);
                      if ((iVar21 < (int)uVar20) || (0x3fffffff < iVar21)) {
                        local_ca8 = (uint ***)0x1;
                        local_c98[0] = &local_268;
                        local_ca0 = &DAT_0411b3b8;
                        FUN_03320b50(0x65816502,
                                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                     ,0x5a,"Invalid requestedCapacity {}",&local_ca8);
                      }
                      puVar56 = (undefined8 *)
                                (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_10b8,&local_10b8)
                      ;
                      if (0 < iVar64) {
                        puVar27 = puVar56;
                        do {
                          pppuVar62 = (uint ***)((long)pppuVar62 - 1);
                          *puVar27 = *local_1238;
                          puVar27 = puVar27 + 1;
                          local_1238 = local_1238 + 1;
                        } while (pppuVar62 != (uint ***)0x0);
                      }
                      if (-1 < (int)uVar19) {
                        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_1250,(ulong)uVar20 << 3);
                      }
                      uVar19 = (uint)((ulong)local_10b8 >> 3);
                      if ((uint ***)0x1fffffff7 < local_10b8) {
                        uVar19 = 0x3fffffff;
                      }
                      uVar28 = (ulong)uVar19;
                      local_1250 = (uint ***)puVar56;
LAB_03056d3c:
                      local_1238 = local_1250;
                    }
                  }
                  local_1238[iVar64] = (uint **)local_1240;
                  pppuVar62 = (uint ***)uVar25;
                }
                uVar19 = (uint)uVar28;
                lVar58 = lVar58 + 1;
              } while (lVar58 < (int)plVar59[0xc]);
            }
            uVar28 = (ulong)*(uint *)(plVar59 + 1);
            if (0 < (int)*(uint *)(plVar59 + 1)) {
              lVar58 = 0;
              do {
                uVar20 = *(uint *)(*plVar59 + lVar58 * 4);
                if (0 < (int)uVar28) {
                  uVar25 = 0;
                  do {
                    if (*(uint *)(*plVar59 + uVar25 * 4) == uVar20) goto LAB_03052cc0;
                    uVar25 = uVar25 + 1;
                  } while ((uVar28 & 0xffffffff) != uVar25);
                }
                uVar25 = 0xffffffff;
LAB_03052cc0:
                lVar54 = (long)(int)uVar25 + 1;
                uVar51 = uVar20;
                iVar64 = 0;
                do {
                  if (iVar64 != 0) {
                    if (0 < (int)*(uint *)(plVar59 + 1)) {
                      uVar28 = 0;
                      do {
                        if (*(int *)(*plVar59 + uVar28 * 4) ==
                            *(int *)(*(long *)(lVar23 + 0x38) + (ulong)(uVar51 & 0xffffff) * 0xc0 +
                                    0x50)) goto LAB_03055aa0;
                        uVar28 = uVar28 + 1;
                      } while (*(uint *)(plVar59 + 1) != uVar28);
                    }
                    uVar28 = 0xffffffff;
LAB_03055aa0:
                    uVar42 = (uint)lVar54;
                    uVar35 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4);
                    uVar18 = uVar42;
                    while (uVar48 = uVar35, -1 < (int)uVar48) {
                      uVar18 = uVar48;
                      uVar35 = *(uint *)((long)local_898 + (long)(int)uVar48 * 4);
                    }
                    lVar41 = (long)(int)uVar28 + 1;
                    uVar35 = *(uint *)((long)local_898 + lVar54 * 4);
                    if (-1 < (int)uVar35) {
                      *(uint *)((long)local_898 + lVar54 * 4) = uVar18;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                      uVar42 = uVar35;
                      uVar35 = *puVar61;
                      while (-1 < (int)uVar35) {
                        *puVar61 = uVar18;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                        uVar42 = uVar35;
                        uVar35 = *puVar61;
                      }
                    }
                    uVar48 = (uint)lVar41;
                    uVar18 = uVar48;
                    for (uVar35 = *(uint *)((long)local_898 + (long)(int)uVar48 * 4);
                        -1 < (int)uVar35;
                        uVar35 = *(uint *)((long)local_898 + (long)(int)uVar35 * 4)) {
                      uVar18 = uVar35;
                    }
                    uVar35 = *(uint *)((long)local_898 + lVar41 * 4);
                    if (-1 < (int)uVar35) {
                      *(uint *)((long)local_898 + lVar41 * 4) = uVar18;
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                      uVar48 = uVar35;
                      uVar35 = *puVar61;
                      while (-1 < (int)uVar35) {
                        *puVar61 = uVar18;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar35 * 4);
                        uVar48 = uVar35;
                        uVar35 = *puVar61;
                      }
                    }
                    if (uVar42 != uVar48) {
                      uVar35 = *(uint *)((long)local_898 + (long)(int)uVar42 * 4) + uVar35;
                      if ((int)uVar42 < (int)uVar48) {
                        *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar35;
                        *(uint *)((long)local_898 + (long)(int)uVar48 * 4) = uVar42;
                      }
                      else {
                        *(uint *)((long)local_898 + (long)(int)uVar48 * 4) = uVar35;
                        *(uint *)((long)local_898 + (long)(int)uVar42 * 4) = uVar48;
                      }
                    }
                  }
                  uVar51 = *(uint *)(*(long *)(lVar23 + 0x38) + (ulong)(uVar51 & 0xffffff) * 0xc0 +
                                    0x84);
                  iVar64 = iVar64 + 1;
                } while (uVar51 != uVar20);
                uVar28 = (ulong)(int)plVar59[1];
                lVar58 = lVar58 + 1;
              } while (lVar58 < (long)uVar28);
            }
            do {
              if ((int)pppuVar62 < 1) break;
              bVar8 = false;
              uVar28 = (ulong)(int)pppuVar62;
              do {
                while( true ) {
                  uVar28 = uVar28 - 1;
                  puVar56 = local_1238 + uVar28;
                  uVar20 = *(uint *)((long)puVar56 + 4);
                  iVar64 = FUN_032bccb8(&local_898,*(undefined4 *)puVar56);
                  if (iVar64 != 0) break;
                  lVar23 = (long)(int)uVar20;
                  uVar51 = uVar20;
                  for (uVar18 = *(uint *)((long)local_898 + lVar23 * 4); -1 < (int)uVar18;
                      uVar18 = *(uint *)((long)local_898 + (long)(int)uVar18 * 4)) {
                    uVar51 = uVar18;
                  }
                  uVar18 = *(uint *)((long)local_898 + lVar23 * 4);
                  if ((int)uVar18 < 0) {
LAB_03055bd8:
                    uVar18 = uVar20;
                    uVar20 = *(uint *)local_898;
                    if ((int)*(uint *)local_898 < 0) goto LAB_030577f8;
LAB_03055be0:
                    do {
                      uVar51 = uVar20;
                      uVar20 = *(uint *)((long)local_898 + (long)(int)uVar51 * 4);
                    } while (-1 < (int)uVar20);
                    uVar20 = *(uint *)local_898;
                    if ((int)uVar20 < 0) goto LAB_03055bf4;
LAB_03057804:
                    *(uint *)local_898 = uVar51;
                    uVar42 = uVar20;
                    while( true ) {
                      puVar61 = (uint *)((long)local_898 + (long)(int)uVar42 * 4);
                      uVar20 = *puVar61;
                      if ((int)uVar20 < 0) break;
                      *puVar61 = uVar51;
                      uVar42 = uVar20;
                    }
                  }
                  else {
                    *(uint *)((long)local_898 + lVar23 * 4) = uVar51;
                    puVar61 = (uint *)((long)local_898 + (long)(int)uVar18 * 4);
                    uVar42 = *puVar61;
                    if (-1 < (int)*puVar61) {
                      do {
                        uVar20 = uVar42;
                        *puVar61 = uVar51;
                        puVar61 = (uint *)((long)local_898 + (long)(int)uVar20 * 4);
                        uVar42 = *puVar61;
                      } while (-1 < (int)*puVar61);
                      goto LAB_03055bd8;
                    }
                    uVar20 = *(uint *)local_898;
                    if (-1 < (int)*(uint *)local_898) goto LAB_03055be0;
LAB_030577f8:
                    uVar51 = 0;
                    uVar20 = *(uint *)local_898;
                    if (-1 < (int)uVar20) goto LAB_03057804;
LAB_03055bf4:
                    uVar42 = 0;
                  }
                  if (uVar18 != uVar42) {
                    uVar51 = uVar18;
                    if ((int)uVar42 <= (int)uVar18) {
                      uVar51 = uVar42;
                    }
                    uVar35 = uVar18;
                    if ((int)uVar18 <= (int)uVar42) {
                      uVar35 = uVar42;
                    }
                    uVar48 = uVar18;
                    if ((int)uVar42 <= (int)uVar18) {
                      uVar48 = uVar42;
                    }
                    *(uint *)((long)local_898 + (long)(int)uVar51 * 4) =
                         *(uint *)((long)local_898 + (long)(int)uVar18 * 4) + uVar20;
                    *(uint *)((long)local_898 + (long)(int)uVar35 * 4) = uVar48;
                  }
                  uVar20 = (int)pppuVar62 - 1;
                  pppuVar62 = (uint ***)(ulong)uVar20;
                  if ((uint ***)uVar28 != pppuVar62) {
                    *puVar56 = local_1238[(int)uVar20];
                  }
                  bVar8 = true;
                  if ((long)uVar28 < 1) goto LAB_03055c70;
                }
              } while (0 < (long)uVar28);
LAB_03055c70:
            } while (bVar8);
            if ((local_1238 != (uint ***)0x0) && (-1 < (int)uVar19)) {
              (**(code **)(*(long *)puVar6 + 0x18))
                        (puVar6,local_1250,(ulong)(uVar19 & 0x3fffffff) << 3);
            }
            local_ca8 = local_c98;
            local_ca0 = (undefined *)0x8000010000000000;
            FUN_02f89518(&local_898,&local_ca8);
            uVar19 = local_888;
            uVar28 = (ulong)local_ca0;
            pppuVar62 = local_ca8;
            local_10b0._0_4_ = 0;
            iVar64 = (int)local_ca0;
            uVar25 = (ulong)local_ca0 & 0xffffffff;
            local_10b0 = -0x7fffff0000000000;
            pppuVar11 = appuStack_10a8;
            if (0x100 < (int)local_888) {
              local_10b0._4_4_ = 0x80000100;
              local_10b8 = appuStack_10a8;
              if (0x3fffffff < (int)local_888) {
                FUN_032bd0a8(local_888);
              }
              uVar20 = (local_10b0._4_4_ & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar20) {
                uVar20 = 0x3fffffff;
              }
              uVar51 = uVar19;
              if ((int)uVar19 <= (int)uVar20) {
                uVar51 = uVar20;
              }
              pppuVar11 = (uint ***)
                          FUN_032bd1d4(puVar6,uVar51,4,appuStack_10a8,0,(long)&local_10b0 + 4);
            }
            if ((uint)local_10b0 != uVar19) {
              local_10b0 = CONCAT44(local_10b0._4_4_,uVar19);
            }
            local_10b8 = pppuVar11;
            if (0 < iVar64) {
              local_260 = 0x8000000000000000;
              local_268 = (uint *)0x0;
              if (0x3fffffff < iVar64) {
                FUN_032bd0a8(uVar28 & 0xffffffff);
              }
              local_268 = (uint *)FUN_032bd1d4(puVar6,uVar28 & 0xffffffff,4,0,0,(long)&local_260 + 4
                                              );
              if ((int)local_260 != iVar64) {
                local_260 = local_260 & 0xffffffff00000000;
              }
              uVar13 = local_260;
              uVar39 = uVar28 & 3;
              if (uVar25 - 1 < 3) {
                lVar23 = 0;
                uVar19 = 0;
              }
              else {
                lVar23 = 0;
                uVar19 = 0;
                puVar61 = local_268 + 2;
                pppuVar44 = pppuVar62 + 1;
                do {
                  puVar61[-2] = uVar19;
                  uVar20 = *(uint *)(pppuVar44 + -1);
                  puVar61[-1] = uVar20 + uVar19;
                  uVar19 = *(uint *)((long)pppuVar44 + -4) + uVar20 + uVar19;
                  *puVar61 = uVar19;
                  uVar19 = *(uint *)pppuVar44 + uVar19;
                  puVar61[1] = uVar19;
                  lVar23 = lVar23 + 4;
                  uVar19 = *(uint *)((long)pppuVar44 + 4) + uVar19;
                  puVar61 = puVar61 + 4;
                  pppuVar44 = pppuVar44 + 2;
                } while (uVar25 - uVar39 != lVar23);
              }
              if ((uVar28 & 3) != 0) {
                puVar61 = (uint *)((long)pppuVar62 + lVar23 * 4);
                puVar26 = local_268 + lVar23;
                do {
                  *puVar26 = uVar19;
                  uVar19 = *puVar61 + uVar19;
                  uVar39 = uVar39 - 1;
                  puVar61 = puVar61 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar39 != 0);
              }
              if (0 < (int)local_888) {
                lVar23 = 0;
                do {
                  uVar19 = *(uint *)((long)local_898 + lVar23 * 4);
                  uVar20 = local_268[(int)uVar19];
                  local_268[(int)uVar19] = uVar20 + 1;
                  *(uint *)((long)pppuVar11 + (long)(int)uVar20 * 4) = (uint)lVar23;
                  lVar23 = lVar23 + 1;
                } while (lVar23 < (int)local_888);
              }
              uVar19 = local_260._4_4_;
              local_260 = (ulong)local_260._4_4_ << 0x20;
              if (-1 < (long)uVar13) {
                (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_268,uVar19 << 2);
              }
            }
            *(undefined1 *)(param_1 + 0x6c) = 1;
            uVar19 = *(uint *)local_ca8;
            local_10d8 = (uint *)0x0;
            local_10d0 = 0x8000000000000000;
            local_10c0 = uVar19;
            if (uVar19 == 0) {
              lVar23 = 0;
              uVar19 = 0;
              local_10d8 = (uint *)0x0;
              puVar61 = (uint *)0x0;
              puVar26 = (uint *)0x0;
              local_10c8 = (uint *)0x0;
              local_10d0 = 0x8000000000000000;
            }
            else {
              lVar23 = *(long *)(lVar24 + 0x38d490);
              if (lVar23 == 0) {
                lVar23 = FUN_0333d16c(0,1);
                *(long *)(lVar24 + 0x38d490) = lVar23;
              }
              lVar23 = *(long *)(lVar23 + 8);
              uVar28 = (ulong)(int)(uVar19 * 4 + 0x7f & 0xffffff80);
              if (*(ulong *)(lVar23 + 0x10) < uVar28) {
LAB_03054e20:
                puVar61 = (uint *)FUN_032ce670();
              }
              else {
                puVar61 = *(uint **)(lVar23 + 0x18);
                uVar28 = (long)puVar61 + uVar28;
                if (*(ulong *)(lVar23 + 0x20) < uVar28) goto LAB_03054e20;
                *(ulong *)(lVar23 + 0x18) = uVar28;
              }
              uVar20 = *(uint *)local_ca8;
              local_10d0 = CONCAT44(uVar19,(uint)local_10d0) | 0x8000000000000000;
              puVar26 = puVar61;
              local_10d8 = puVar61;
              local_10c8 = puVar61;
              if ((int)uVar20 < 2) {
                lVar23 = 0;
                uVar19 = 0;
              }
              else {
                uVar19 = 0;
                lVar23 = 1;
                puVar32 = puVar61;
                do {
                  uVar51 = *(uint *)(*plVar59 +
                                     (long)(int)*(uint *)((long)local_10b8 + lVar23 * 4) * 4 + -4);
                  if (*(char *)(param_1[0x71] +
                                (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                               ((ulong)uVar51 & 0xffffff) * 0xc0 + 0x80) * 0x20 +
                               0xe) != '\x02') {
                    uVar20 = local_10d0._4_4_;
                    uVar18 = uVar19 + 1;
                    if ((int)(local_10d0._4_4_ & 0x3fffffff) <= (int)uVar19) {
                      if (0x3ffffffe < (int)uVar19) {
                        FUN_032bd0a8(uVar18);
                      }
                      uVar20 = (uVar20 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar20) {
                        uVar20 = 0x3fffffff;
                      }
                      uVar42 = uVar18;
                      if ((int)uVar18 <= (int)uVar20) {
                        uVar42 = uVar20;
                      }
                      puVar61 = (uint *)FUN_032bd1d4(PTR_PTR_0434a080,uVar42,4,puVar32,uVar19,
                                                     (long)&local_10d0 + 4);
                      puVar32 = puVar61;
                      puVar26 = puVar61;
                      uVar19 = (uint)local_10d0;
                      local_10d8 = puVar61;
                    }
                    puVar32[(int)uVar19] = uVar51;
                    local_10d0 = CONCAT44(local_10d0._4_4_,uVar18);
                    uVar20 = *(uint *)local_ca8;
                    uVar19 = uVar18;
                  }
                  lVar23 = lVar23 + 1;
                } while (lVar23 < (int)uVar20);
                puVar49 = puVar61;
                if (1 < (int)uVar19) {
                  puVar26 = puVar61 + (int)(uVar19 - 1);
                  lVar23 = 0;
                  local_268 = puVar61;
                  local_468[0] = puVar26;
LAB_03053228:
                  lVar23 = (long)(int)lVar23;
LAB_030532cc:
                  do {
                    puVar32 = puVar26;
                    do {
                      puVar26 = puVar32;
                      uVar19 = puVar61[(long)puVar26 - (long)puVar61 >> 3] & 0xffffff;
                      puVar32 = puVar26;
                      puVar49 = puVar61;
                      do {
                        while( true ) {
                          while( true ) {
                            puVar49 = puVar49 + -1;
                            do {
                              puVar37 = puVar49;
                              puVar49 = puVar37 + 1;
                            } while ((*puVar49 & 0xffffff) < uVar19);
                            puVar47 = puVar32 + -1;
                            uVar20 = *puVar32;
                            if (uVar19 < (uVar20 & 0xffffff)) {
                              do {
                                puVar32 = puVar47;
                                puVar47 = puVar32 + -1;
                                uVar20 = *puVar32;
                              } while (uVar19 < (uVar20 & 0xffffff));
                            }
                            if (puVar49 <= puVar32) break;
                            if (puVar32 < puVar49) goto LAB_030532b8;
                          }
                          puVar37 = puVar37 + 2;
                          if (puVar32 != puVar49) break;
                          puVar32 = puVar47;
                          puVar49 = puVar37;
                          if (puVar47 < puVar37) goto LAB_030532b8;
                        }
                        *puVar32 = *puVar49;
                        *puVar49 = uVar20;
                        puVar32 = puVar47;
                        puVar49 = puVar37;
                      } while (puVar37 <= puVar47);
LAB_030532b8:
                      if (puVar32 <= puVar61) {
                        puVar61 = puVar49;
                        if (puVar49 < puVar26) goto LAB_030532cc;
                        iVar64 = (int)lVar23;
                        if (0 < iVar64) {
                          lVar23 = (long)iVar64 + -1;
                          puVar61 = local_468[(long)iVar64 + 0x3f];
                          puVar26 = local_468[lVar23];
                          goto LAB_03053228;
                        }
                        puVar49 = local_10d8;
                        puVar32 = local_10d8;
                        puVar26 = local_10d8;
                        uVar19 = (uint)local_10d0;
                        goto LAB_03054878;
                      }
                    } while (puVar26 <= puVar49);
                    puVar37 = puVar61;
                    puVar7 = puVar32;
                    puVar47 = puVar26;
                    if ((long)puVar26 - (long)puVar49 <= (long)puVar32 - (long)puVar61) {
                      puVar37 = puVar49;
                      puVar49 = puVar61;
                      puVar7 = puVar26;
                      puVar47 = puVar32;
                    }
                    puVar26 = puVar7;
                    local_468[lVar23 + 0x40] = puVar49;
                    local_468[lVar23] = puVar47;
                    lVar23 = lVar23 + 1;
                    puVar61 = puVar37;
                  } while( true );
                }
LAB_03054878:
                puVar61 = puVar32;
                if (uVar19 == 0) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = (long)(int)uVar19;
                  lVar58 = lVar23 << 2;
                  do {
                    lVar54 = *param_1;
                    uVar28 = *(ulong *)(*(long *)(lVar54 + 0x38) +
                                        ((ulong)*puVar49 & 0xffffff) * 0xc0 + 0xb0);
                    if ((long)uVar28 < 0) {
                      uVar28 = uVar28 & 0xffffffff;
                    }
                    else {
                      uVar28 = FUN_032c0fa4(lVar54 + 0x948,uVar28,&local_268);
                      if ((uVar28 & 1) == 0) {
                        uVar28 = 0xffffff;
                      }
                      else {
                        uVar28 = (ulong)local_268 & 0xffffffff;
                      }
                    }
                    FUN_03030748(lVar54,uVar28,0);
                    puVar49 = puVar49 + 1;
                    lVar58 = lVar58 + -4;
                  } while (lVar58 != 0);
                }
              }
            }
            uVar20 = *(uint *)(plVar59 + 1);
            if (uVar19 == uVar20) {
              *(undefined4 *)(plVar59 + 1) = 0;
LAB_03054234:
              if (0 < (int)uVar19) {
                lVar58 = 0;
                do {
                  puVar61 = puVar26 + lVar58;
                  lVar58 = lVar58 + 1;
                  *(undefined4 *)
                   (param_1[0x71] +
                    (long)*(int *)(*(long *)(*param_1 + 0x38) + ((ulong)*puVar61 & 0xffffff) * 0xc0
                                  + 0x80) * 0x20 + 0x10) = 0xffffffff;
                } while (lVar58 < lVar23);
              }
            }
            else if (0 < (int)uVar19) {
              lVar58 = 0;
              do {
                if (0 < (int)uVar20) {
                  uVar28 = 0;
                  do {
                    if (*(uint *)(*plVar59 + uVar28 * 4) == puVar61[lVar58]) goto LAB_03053efc;
                    uVar28 = uVar28 + 1;
                  } while (uVar20 != uVar28);
                }
                uVar28 = 0xffffffff;
LAB_03053efc:
                iVar64 = (int)((long)(int)uVar20 + -1);
                *(int *)(plVar59 + 1) = iVar64;
                if (iVar64 != (int)uVar28) {
                  *(undefined4 *)(*plVar59 + (long)(int)uVar28 * 4) =
                       *(undefined4 *)(*plVar59 + ((long)(int)uVar20 + -1) * 4);
                }
                lVar58 = lVar58 + 1;
                if (lVar23 <= lVar58) goto LAB_03054234;
                uVar20 = *(uint *)(plVar59 + 1);
              } while( true );
            }
            *(undefined1 *)(param_1 + 0x6c) = 0;
            local_260 = 0x8000000000000000;
            local_268 = (uint *)0x0;
            uVar20 = *(uint *)(plVar59 + 3);
            uVar19 = uVar20;
            if (0xf < (int)uVar20) {
              uVar19 = 0x10;
            }
            if (0 < (int)uVar20) {
              local_268 = (uint *)FUN_032bd1d4(puVar6,uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU),8
                                               ,0,0,(long)&local_260 + 4);
              iVar64 = (int)plVar59[3];
              if (0 < iVar64) {
                iVar21 = 0;
                do {
                  uVar28 = local_260;
                  puVar61 = local_268;
                  lVar23 = plVar59[2];
                  lVar58 = (long)iVar21;
                  lVar54 = *(long *)(lVar23 + (long)iVar21 * 8);
                  if (*(char *)(lVar54 + 0x18) == '\0') {
                    iVar64 = iVar64 + -1;
                    *(int *)(plVar59 + 3) = iVar64;
                    if (iVar64 != iVar21) {
                      *(undefined8 *)(lVar23 + lVar58 * 8) =
                           *(undefined8 *)(lVar23 + (long)iVar64 * 8);
LAB_03058b7c:
                      if (iVar21 < (int)plVar59[3]) {
                        *(int *)(*(long *)(plVar59[2] + lVar58 * 8) + 4) = iVar21;
                      }
                    }
LAB_03058a08:
                    iVar21 = iVar21 + -1;
                  }
                  else {
                    uVar19 = *(uint *)(lVar54 + 0x10);
                    uVar20 = *(uint *)(lVar54 + 0x14);
                    uVar39 = (ulong)uVar20 & 0xffffff;
                    lVar23 = *(long *)(*param_1 + 0x38);
                    lVar41 = lVar23 + uVar39 * 0xc0;
                    uVar25 = (ulong)uVar19 & 0xffffff;
                    lVar46 = lVar23 + uVar25 * 0xc0;
                    iVar67 = -(uint)((float)*(undefined8 *)(lVar41 + 0x70) <=
                                    (float)*(undefined8 *)(lVar46 + 0x60));
                    iVar68 = -(uint)((float)((ulong)*(undefined8 *)(lVar41 + 0x70) >> 0x20) <=
                                    (float)((ulong)*(undefined8 *)(lVar46 + 0x60) >> 0x20));
                    iVar69 = -(uint)((float)((ulong)*(undefined8 *)(lVar41 + 0x68) >> 0x20) <=
                                    (float)*(undefined8 *)(lVar46 + 0x68));
                    iVar64 = -(uint)((float)*(undefined8 *)(lVar46 + 0x70) <=
                                    (float)*(undefined8 *)(lVar41 + 0x60));
                    iVar65 = -(uint)((float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20) <=
                                    (float)((ulong)*(undefined8 *)(lVar41 + 0x60) >> 0x20));
                    iVar66 = -(uint)((float)((ulong)*(undefined8 *)(lVar46 + 0x68) >> 0x20) <=
                                    (float)*(undefined8 *)(lVar41 + 0x68));
                    uVar51 = CONCAT13((byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                                      CONCAT12((byte)((uint)iVar64 >> 0x10) &
                                               (byte)((uint)iVar67 >> 0x10),
                                               CONCAT11((byte)((uint)iVar64 >> 8) &
                                                        (byte)((uint)iVar67 >> 8),
                                                        (byte)iVar64 & (byte)iVar67)));
                    if ((uVar51 & (uint)(CONCAT17((byte)((uint)iVar65 >> 0x18) &
                                                  (byte)((uint)iVar68 >> 0x18),
                                                  CONCAT16((byte)((uint)iVar65 >> 0x10) &
                                                           (byte)((uint)iVar68 >> 0x10),
                                                           CONCAT15((byte)((uint)iVar65 >> 8) &
                                                                    (byte)((uint)iVar68 >> 8),
                                                                    CONCAT14((byte)iVar65 &
                                                                             (byte)iVar68,uVar51))))
                                        >> 0x20) &
                        CONCAT13((byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                                 CONCAT12((byte)((uint)iVar66 >> 0x10) &
                                          (byte)((uint)iVar69 >> 0x10),
                                          CONCAT11((byte)((uint)iVar66 >> 8) &
                                                   (byte)((uint)iVar69 >> 8),
                                                   (byte)iVar66 & (byte)iVar69)))) != 0 &&
                        ((*(ushort *)(lVar46 + 0x58) | *(ushort *)(lVar41 + 0x58)) & 1) == 0) {
                      lVar41 = lVar23 + uVar39 * 0xc0;
                      uVar51 = *(uint *)(lVar41 + 0x54);
                      if (((uVar51 >> 3 & 1) == 0) &&
                         (uVar18 = *(uint *)(lVar23 + uVar25 * 0xc0 + 0x54), (uVar18 >> 3 & 1) == 0)
                         ) {
                        if ((((uVar51 & 9) != 0) ||
                            (*(uint *)(param_1[0x71] + (long)*(int *)(lVar41 + 0x80) * 0x20 + 0x10)
                             == uVar57)) &&
                           (((uVar18 & 9) != 0 ||
                            (*(uint *)(param_1[0x71] +
                                       (long)*(int *)(lVar23 + uVar25 * 0xc0 + 0x80) * 0x20 + 0x10)
                             == uVar57)))) goto LAB_03058a0c;
                      }
                      if (*(char *)(lVar54 + 0x18) == '\t') {
                        if ((int)local_11a8 < 0xed9) {
                          puVar61 = (uint *)((long)local_11b0 + (long)(int)local_11a8 + 0x20);
                        }
                        else {
                          puVar61 = (uint *)FUN_032bf82c(&local_11c0);
                        }
                        *puVar61 = uVar19;
                        puVar61[1] = uVar20;
                        local_11a8 = local_11a8 + 8;
                        local_11a4 = local_11a4 + 1;
                      }
                      else {
                        FUN_03051cd0(lVar54 + 0x10,&local_1128,&local_1150,param_5,param_6,
                                     auStack_1198,*(long *)(param_2 + 0x40) + 0x13b8,
                                     *(long *)(param_2 + 0x40) + 0x1448);
                      }
                      *(undefined1 *)(lVar54 + 0x18) = 0;
                      lVar23 = (long)(int)plVar59[3] + -1;
                      iVar64 = (int)lVar23;
                      *(int *)(plVar59 + 3) = iVar64;
                      if (iVar64 != iVar21) {
                        *(undefined8 *)(plVar59[2] + lVar58 * 8) =
                             *(undefined8 *)(plVar59[2] + lVar23 * 8);
                        goto LAB_03058b7c;
                      }
                      goto LAB_03058a08;
                    }
                    uVar20 = local_260._4_4_;
                    uVar19 = (int)local_260 + 1;
                    if ((int)(local_260._4_4_ & 0x3fffffff) <= (int)local_260) {
                      if (0x3ffffffe < (int)local_260) {
                        FUN_032bd0a8(uVar19);
                      }
                      uVar20 = (uVar20 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar20) {
                        uVar20 = 0x3fffffff;
                      }
                      uVar51 = uVar19;
                      if ((int)uVar19 <= (int)uVar20) {
                        uVar51 = uVar20;
                      }
                      local_268 = (uint *)FUN_032bd1d4(puVar6,uVar51,8,puVar61,uVar28 & 0xffffffff,
                                                       (long)&local_260 + 4);
                    }
                    *(long *)(local_268 + (long)(int)local_260 * 2) = lVar54;
                    local_260 = CONCAT44(local_260._4_4_,uVar19);
                  }
LAB_03058a0c:
                  iVar64 = (int)plVar59[3];
                  iVar21 = iVar21 + 1;
                } while (iVar21 < iVar64);
              }
            }
            puVar61 = local_268;
            iVar64 = (int)local_260;
            FUN_0304ecc0(local_268,local_260 & 0xffffffff);
            if (iVar64 != 0) {
              lVar23 = (long)iVar64 << 3;
              do {
                lVar58 = *(long *)puVar61;
                iVar64 = *(int *)(lVar58 + 4);
                local_468[0] = (uint *)CONCAT44(local_468[0]._4_4_,0xffffffff);
                local_10e0[0] = 0xffffffff;
                plVar12 = *(long **)(*(long *)(param_2 + 0x40) + (ulong)*(byte *)(lVar58 + 0x18) * 8
                                    + 0x13b8);
                (**(code **)(*plVar12 + 0x18))
                          (plVar12,param_2,&local_1160,lVar58 + 0x10,auStack_1198,lVar58 + 0x14,
                           lVar58 + 0x10,local_468,local_10e0);
                *(undefined1 *)(lVar58 + 0x18) = 0;
                lVar58 = (long)(int)plVar59[3] + -1;
                iVar21 = (int)lVar58;
                *(int *)(plVar59 + 3) = iVar21;
                if (iVar21 != iVar64) {
                  *(undefined8 *)(plVar59[2] + (long)iVar64 * 8) =
                       *(undefined8 *)(plVar59[2] + lVar58 * 8);
                  if (iVar64 < (int)plVar59[3]) {
                    *(int *)(*(long *)(plVar59[2] + (long)iVar64 * 8) + 4) = iVar64;
                  }
                }
                puVar61 = puVar61 + 2;
                lVar23 = lVar23 + -8;
              } while (lVar23 != 0);
            }
            if ((int)plVar59[1] == 0) {
              uVar20 = *(uint *)((long)param_1 + 0x34c);
              iVar64 = (int)param_1[0x69];
              uVar19 = iVar64 + 1;
              if (iVar64 < (int)(uVar20 & 0x3fffffff)) {
                lVar23 = param_1[0x68];
              }
              else {
                lVar23 = param_1[0x68];
                if (0x3ffffffe < iVar64) {
                  FUN_032bd0a8(uVar19);
                  uVar20 = *puVar36;
                }
                uVar20 = (uVar20 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar20) {
                  uVar20 = 0x3fffffff;
                }
                uVar51 = uVar19;
                if ((int)uVar19 <= (int)uVar20) {
                  uVar51 = uVar20;
                }
                lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar51,4,lVar23,iVar64,puVar36);
                param_1[0x68] = lVar23;
                iVar64 = (int)param_1[0x69];
              }
              *(uint *)(lVar23 + (long)iVar64 * 4) = uVar57;
              lVar23 = param_1[0x73];
              *(uint *)(param_1 + 0x69) = uVar19;
              lVar58 = *(long *)(lVar23 + lVar53 * 8);
              if (lVar58 != 0) {
                FUN_0304f680(lVar58);
                lVar23 = *(long *)(lVar24 + 0x38d490);
                if (lVar23 == 0) {
                  lVar23 = FUN_0333d16c(0,1);
                  *(long *)(lVar24 + 0x38d490) = lVar23;
                }
                plVar59 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
                (**(code **)(*plVar59 + 0x18))(plVar59,lVar58,0x70);
                lVar23 = param_1[0x73];
              }
              *(undefined8 *)(lVar23 + lVar53 * 8) = 0;
            }
            if (0 < (int)param_1[0x6b]) {
              lVar53 = 0;
              do {
                puVar60 = (ushort *)(param_1[0x6a] + lVar53 * 0x20);
                puVar61 = *(uint **)(*(long *)(param_2 + 0x530) +
                                     (long)*(int *)(param_2 + 0x538) * 8 + -8);
                uVar3 = *puVar60;
                puVar56 = *(undefined8 **)(param_2 + 0x4e0);
                uVar57 = *puVar61 >> 0x10;
                iVar64 = 0xee0 - (uint)uVar3;
                if (iVar64 <= (int)uVar57) {
                  puVar26 = puVar61;
                  do {
                    iVar21 = *(int *)(puVar56 + 0xb) + -1;
                    if (*(int *)(puVar56 + 0xb) < 1) {
                      lVar23 = puVar56[1];
                      (**(code **)(*(long *)*puVar56 + 0x20))((long *)*puVar56,lVar23,6);
                      *(undefined4 *)(puVar56 + 0xb) = 5;
                      puVar27 = (undefined8 *)(lVar23 + 0x28);
                    }
                    else {
                      *(int *)(puVar56 + 0xb) = iVar21;
                      puVar27 = (undefined8 *)(puVar56[1] + (long)iVar21 * 8);
                    }
                    puVar61 = (uint *)*puVar27;
                    puVar61[4] = 0;
                    puVar61[5] = 0;
                    puVar61[6] = 0;
                    puVar61[7] = 0;
                    puVar61[0] = 0;
                    puVar61[1] = 0;
                    puVar61[2] = 0;
                    puVar61[3] = 0;
                    puVar61[1] = *(uint *)(param_2 + 0x538);
                    iVar21 = *(int *)(param_2 + 0x538);
                    uVar57 = iVar21 + 1;
                    uVar19 = *(uint *)(param_2 + 0x53c);
                    if (iVar21 < (int)(uVar19 & 0x3fffffff)) {
                      lVar23 = *(long *)(param_2 + 0x530);
                    }
                    else {
                      uVar10 = *(undefined8 *)(param_2 + 0x530);
                      if (0x3ffffffe < iVar21) {
                        FUN_032bd0a8(uVar57);
                        uVar19 = *(uint *)(param_2 + 0x53c);
                      }
                      uVar19 = (uVar19 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar19) {
                        uVar19 = 0x3fffffff;
                      }
                      uVar20 = uVar57;
                      if ((int)uVar57 <= (int)uVar19) {
                        uVar20 = uVar19;
                      }
                      lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar20,8,uVar10,iVar21,
                                            (uint *)(param_2 + 0x53c));
                      iVar21 = *(int *)(param_2 + 0x538);
                      *(long *)(param_2 + 0x530) = lVar23;
                    }
                    *(uint **)(lVar23 + (long)iVar21 * 8) = puVar61;
                    *(uint *)(param_2 + 0x538) = uVar57;
                    *(uint **)(puVar26 + 2) = puVar61;
                    uVar57 = *puVar61 >> 0x10;
                    puVar26 = puVar61;
                  } while (iVar64 <= (int)uVar57);
                }
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar61,0x10);
                  if (bVar8) {
                    *puVar61 = *puVar61 + ((uint)uVar3 << 0x10 | 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                uVar19 = (uint)(uVar3 >> 2);
                *(int *)(param_2 + 0x528) = *(int *)(param_2 + 0x528) + 1;
                if (uVar19 != 0) {
                  puVar30 = (undefined4 *)((long)puVar61 + (ulong)uVar57 + 0x20);
                  uVar57 = uVar3 >> 2 & 7;
                  if (6 < uVar19 - 1) {
                    iVar64 = uVar57 - uVar19;
                    puVar29 = puVar30;
                    do {
                      *puVar29 = *(undefined4 *)puVar60;
                      puVar29[1] = *(undefined4 *)(puVar60 + 2);
                      puVar29[2] = *(undefined4 *)(puVar60 + 4);
                      puVar29[3] = *(undefined4 *)(puVar60 + 6);
                      puVar29[4] = *(undefined4 *)(puVar60 + 8);
                      puVar29[5] = *(undefined4 *)(puVar60 + 10);
                      puVar29[6] = *(undefined4 *)(puVar60 + 0xc);
                      puVar1 = puVar60 + 0xe;
                      puVar60 = puVar60 + 0x10;
                      puVar30 = puVar29 + 8;
                      iVar64 = iVar64 + 8;
                      puVar29[7] = *(undefined4 *)puVar1;
                      puVar29 = puVar30;
                    } while (iVar64 != 0);
                  }
                  if ((uVar3 >> 2 & 7) != 0) {
                    do {
                      uVar57 = uVar57 - 1;
                      *puVar30 = *(undefined4 *)puVar60;
                      puVar30 = puVar30 + 1;
                      puVar60 = puVar60 + 2;
                    } while (uVar57 != 0);
                  }
                }
                lVar53 = lVar53 + 1;
              } while (lVar53 < (int)param_1[0x6b]);
            }
            uVar28 = local_260;
            *(undefined4 *)(param_1 + 0x6b) = 0;
            uVar25 = (ulong)local_260._4_4_;
            local_260 = (ulong)local_260._4_4_ << 0x20;
            if ((-1 < (long)uVar28) && (local_268 != (uint *)0x0)) {
              (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_268,(uVar25 & 0x3fffffff) << 3);
            }
            uVar57 = local_10c0;
            puVar26 = local_10c8;
            puVar61 = local_10d8;
            if (local_10c8 == local_10d8) {
              local_10d0 = local_10d0 & 0xffffffff00000000;
            }
            lVar53 = *(long *)(lVar24 + 0x38d490);
            if (lVar53 == 0) {
              lVar53 = FUN_0333d16c(0,1);
              *(long *)(lVar24 + 0x38d490) = lVar53;
            }
            lVar53 = *(long *)(lVar53 + 8);
            uVar28 = (ulong)(int)(uVar57 * 4 + 0x7f & 0xffffff80);
            if (((*(ulong *)(lVar53 + 0x10) < uVar28) ||
                (*(long *)(lVar53 + 0x18) != uVar28 + (long)puVar26)) ||
               (*(uint **)(lVar53 + 0x28) == puVar26)) {
              if (puVar26 != (uint *)0x0) {
                if (*(ulong *)(lVar53 + 0x10) < uVar28) {
                  *(int *)(*(long *)(lVar53 + 8) + 0x20) =
                       *(int *)(*(long *)(lVar53 + 8) + 0x20) + -1;
                  (**(code **)(**(long **)(lVar53 + 0x40) + 0x18))
                            (*(long **)(lVar53 + 0x40),puVar26);
                }
                else if (*(long *)(lVar53 + 0x18) == uVar28 + (long)puVar26) {
                  *(uint **)(lVar53 + 0x18) = puVar26;
                  FUN_032ce944();
                }
                else {
                  FUN_032ceaf0(lVar53,puVar26);
                }
              }
            }
            else {
              *(uint **)(lVar53 + 0x18) = puVar26;
            }
            uVar25 = local_10d0;
            uVar28 = local_10d0 >> 0x20;
            local_10d0 = local_10d0 & 0xffffffff00000000;
            if ((puVar61 != (uint *)0x0) && (-1 < (long)uVar25)) {
              (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                        (PTR_PTR_0434a080,puVar61,(int)uVar28 << 2);
            }
            lVar53 = local_10b0;
            uVar57 = local_10b0._4_4_;
            local_10b0 = (ulong)local_10b0._4_4_ << 0x20;
            if ((-1 < lVar53) && (local_10b8 != (uint ***)0x0)) {
              (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_10b8,uVar57 << 2);
            }
            uVar28 = (ulong)local_ca0;
            uVar57 = local_ca0._4_4_;
            local_ca0 = (undefined *)((ulong)local_ca0._4_4_ << 0x20);
            if ((-1 < (long)uVar28) && (local_ca8 != (uint ***)0x0)) {
              (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_ca8,uVar57 << 2);
            }
            lVar53 = local_870;
            uVar57 = local_870._4_4_;
            local_870 = (ulong)local_870._4_4_ << 0x20;
            if ((-1 < lVar53) && (local_878 != (uint ***)0x0)) {
              (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_878,uVar57 << 2);
            }
          }
          else {
            if ((int)plVar59[7] < 1) {
              iVar64 = (int)plVar59[3];
              goto joined_r0x0305260c;
            }
            uVar57 = *(uint *)(param_8 + 1);
            lVar23 = 0;
            lVar53 = 0;
            do {
              lVar58 = *param_8;
              iVar64 = (int)((long *)(plVar59[6] + lVar23))[1];
              uVar25 = (ulong)uVar57 + lVar53;
              uVar28 = uVar25 + 1;
              iVar21 = (int)((ulong)(*(long *)(plVar59[6] + lVar23) - param_7) >> 2) * -0x55555555;
              if ((int)(*(uint *)((long)param_8 + 0xc) & 0x3fffffff) <= (int)uVar25) {
                lVar58 = FUN_0305b44c(puVar15,uVar28 & 0xffffffff,lVar58,uVar25,(long)param_8 + 0xc)
                ;
                *param_8 = lVar58;
                uVar25 = (ulong)*(uint *)(param_8 + 1);
              }
              piVar55 = (int *)(lVar58 + (long)(int)uVar25 * 0xc);
              *piVar55 = iVar21;
              piVar55[1] = iVar64 + iVar21;
              piVar55[2] = iVar64;
              *(int *)(param_8 + 1) = (int)uVar28;
              lVar53 = lVar53 + 1;
              lVar23 = lVar23 + 0x10;
            } while (lVar53 < (int)plVar59[7]);
            uVar57 = *(uint *)((long)local_10f0 + lVar22 * 4);
            lVar53 = (long)(int)uVar57;
            plVar59 = *(long **)(param_1[0x73] + (long)(int)uVar57 * 8);
            if ((int)plVar59[3] != 0) goto LAB_03053088;
LAB_03052610:
            iVar64 = (int)plVar59[1];
            while (0 < iVar64) {
              lVar58 = *param_1;
              lVar54 = (long)iVar64 + -1;
              uVar20 = *(uint *)(*plVar59 + lVar54 * 4);
              lVar23 = lVar58;
              uVar19 = uVar20;
              do {
                lVar23 = *(long *)(lVar23 + 0x38) + (ulong)(uVar19 & 0xffffff) * 0xc0;
                *(ushort *)(lVar23 + 0x58) = *(ushort *)(lVar23 + 0x58) | 0x800;
                uVar19 = *(uint *)(*(long *)(lVar58 + 0x38) + (ulong)(uVar19 & 0xffffff) * 0xc0 +
                                  0x84);
                lVar23 = *param_1;
              } while (uVar19 != uVar20);
              uVar28 = (ulong)*(uint *)(*plVar59 + lVar54 * 4);
              lVar58 = (long)*(int *)(*(long *)(lVar23 + 0x38) + (uVar28 & 0xffffff) * 0xc0 + 0x80);
              uVar28 = FUN_03030748(lVar23,uVar28,0);
              iVar64 = (int)lVar54;
              if ((uVar28 & 1) == 0) {
                *(undefined4 *)(param_1[0x71] + lVar58 * 0x20 + 0x10) = 0xffffffff;
                lVar23 = (long)(int)plVar59[1] + -1;
                iVar21 = (int)lVar23;
                *(int *)(plVar59 + 1) = iVar21;
                if (iVar21 != iVar64) {
                  *(undefined4 *)(*plVar59 + lVar54 * 4) = *(undefined4 *)(*plVar59 + lVar23 * 4);
                }
              }
              if ((int)plVar59[1] <= iVar64) {
                iVar64 = (int)plVar59[1];
              }
              *(undefined1 *)(param_1[0x71] + lVar58 * 0x20 + 0xb) = 0xfe;
            }
            uVar20 = *(uint *)((long)param_1 + 0x34c);
            iVar64 = (int)param_1[0x69];
            uVar19 = iVar64 + 1;
            if (iVar64 < (int)(uVar20 & 0x3fffffff)) {
              lVar23 = param_1[0x68];
            }
            else {
              lVar23 = param_1[0x68];
              if (0x3ffffffe < iVar64) {
                FUN_032bd0a8(uVar19);
                uVar20 = *puVar36;
              }
              uVar20 = (uVar20 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar20) {
                uVar20 = 0x3fffffff;
              }
              uVar51 = uVar19;
              if ((int)uVar19 <= (int)uVar20) {
                uVar51 = uVar20;
              }
              lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar51,4,lVar23,iVar64,puVar36);
              param_1[0x68] = lVar23;
              iVar64 = (int)param_1[0x69];
            }
            *(uint *)(lVar23 + (long)iVar64 * 4) = uVar57;
            lVar23 = param_1[0x73];
            *(uint *)(param_1 + 0x69) = uVar19;
            lVar58 = *(long *)(lVar23 + lVar53 * 8);
            if (lVar58 != 0) {
              FUN_0304f680(lVar58);
              lVar23 = *(long *)(lVar24 + 0x38d490);
              if (lVar23 == 0) {
                lVar23 = FUN_0333d16c(0,1);
                *(long *)(lVar24 + 0x38d490) = lVar23;
              }
              plVar59 = *(long **)(*(long *)(lVar23 + 8) + 0x58);
              (**(code **)(*plVar59 + 0x18))(plVar59,lVar58,0x70);
              lVar23 = param_1[0x73];
            }
            *(undefined8 *)(lVar23 + lVar53 * 8) = 0;
            if (0 < (int)param_1[0x6b]) {
              lVar53 = 0;
              do {
                puVar60 = (ushort *)(param_1[0x6a] + lVar53 * 0x20);
                uVar3 = *puVar60;
                puVar61 = *(uint **)(*(long *)(param_2 + 0x530) +
                                     (long)*(int *)(param_2 + 0x538) * 8 + -8);
                puVar56 = *(undefined8 **)(param_2 + 0x4e0);
                uVar57 = *puVar61 >> 0x10;
                iVar64 = 0xee0 - (uint)uVar3;
                if (iVar64 <= (int)uVar57) {
                  puVar26 = puVar61;
                  do {
                    iVar21 = *(int *)(puVar56 + 0xb) + -1;
                    if (*(int *)(puVar56 + 0xb) < 1) {
                      lVar23 = puVar56[1];
                      (**(code **)(*(long *)*puVar56 + 0x20))((long *)*puVar56,lVar23,6);
                      *(undefined4 *)(puVar56 + 0xb) = 5;
                      puVar27 = (undefined8 *)(lVar23 + 0x28);
                    }
                    else {
                      *(int *)(puVar56 + 0xb) = iVar21;
                      puVar27 = (undefined8 *)(puVar56[1] + (long)iVar21 * 8);
                    }
                    puVar61 = (uint *)*puVar27;
                    puVar61[4] = 0;
                    puVar61[5] = 0;
                    puVar61[6] = 0;
                    puVar61[7] = 0;
                    puVar61[0] = 0;
                    puVar61[1] = 0;
                    puVar61[2] = 0;
                    puVar61[3] = 0;
                    puVar61[1] = *(uint *)(param_2 + 0x538);
                    iVar21 = *(int *)(param_2 + 0x538);
                    uVar57 = iVar21 + 1;
                    uVar19 = *(uint *)(param_2 + 0x53c);
                    if (iVar21 < (int)(uVar19 & 0x3fffffff)) {
                      lVar23 = *(long *)(param_2 + 0x530);
                    }
                    else {
                      uVar10 = *(undefined8 *)(param_2 + 0x530);
                      if (0x3ffffffe < iVar21) {
                        FUN_032bd0a8(uVar57);
                        uVar19 = *(uint *)(param_2 + 0x53c);
                      }
                      uVar19 = (uVar19 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar19) {
                        uVar19 = 0x3fffffff;
                      }
                      uVar20 = uVar57;
                      if ((int)uVar57 <= (int)uVar19) {
                        uVar20 = uVar19;
                      }
                      lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar20,8,uVar10,iVar21,
                                            (uint *)(param_2 + 0x53c));
                      *(long *)(param_2 + 0x530) = lVar23;
                      iVar21 = *(int *)(param_2 + 0x538);
                    }
                    *(uint **)(lVar23 + (long)iVar21 * 8) = puVar61;
                    *(uint *)(param_2 + 0x538) = uVar57;
                    *(uint **)(puVar26 + 2) = puVar61;
                    uVar57 = *puVar61 >> 0x10;
                    puVar26 = puVar61;
                  } while (iVar64 <= (int)uVar57);
                }
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar61,0x10);
                  if (bVar8) {
                    *puVar61 = *puVar61 + ((uint)uVar3 << 0x10 | 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                uVar19 = (uint)(uVar3 >> 2);
                *(int *)(param_2 + 0x528) = *(int *)(param_2 + 0x528) + 1;
                if (uVar19 != 0) {
                  puVar30 = (undefined4 *)((long)puVar61 + (ulong)uVar57 + 0x20);
                  uVar57 = uVar3 >> 2 & 7;
                  if (6 < uVar19 - 1) {
                    iVar64 = uVar57 - uVar19;
                    puVar29 = puVar30;
                    do {
                      *puVar29 = *(undefined4 *)puVar60;
                      puVar29[1] = *(undefined4 *)(puVar60 + 2);
                      puVar29[2] = *(undefined4 *)(puVar60 + 4);
                      puVar29[3] = *(undefined4 *)(puVar60 + 6);
                      puVar29[4] = *(undefined4 *)(puVar60 + 8);
                      puVar29[5] = *(undefined4 *)(puVar60 + 10);
                      puVar29[6] = *(undefined4 *)(puVar60 + 0xc);
                      puVar1 = puVar60 + 0xe;
                      puVar60 = puVar60 + 0x10;
                      puVar30 = puVar29 + 8;
                      iVar64 = iVar64 + 8;
                      puVar29[7] = *(undefined4 *)puVar1;
                      puVar29 = puVar30;
                    } while (iVar64 != 0);
                  }
                  if ((uVar3 >> 2 & 7) != 0) {
                    do {
                      uVar57 = uVar57 - 1;
                      *puVar30 = *(undefined4 *)puVar60;
                      puVar30 = puVar30 + 1;
                      puVar60 = puVar60 + 2;
                    } while (uVar57 != 0);
                  }
                }
                lVar53 = lVar53 + 1;
              } while (lVar53 < (int)param_1[0x6b]);
            }
            *(undefined4 *)(param_1 + 0x6b) = 0;
          }
          lVar53 = *(long *)(param_1[0x73] + (long)(int)*(uint *)((long)local_10f0 + lVar22 * 4) * 8
                            );
          if (lVar53 != 0) {
            *(undefined2 *)(lVar53 + 0x24) = 0;
          }
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)local_10e8);
  }
  puVar56 = local_11b8;
  if (local_11a4 == 0) {
    piVar55 = (int *)(local_11c0 + 0x18);
    iVar64 = *piVar55;
    if (iVar64 < 2) goto LAB_03053494;
    lVar53 = *(long *)(*(long *)(local_11c0 + 0x10) + (long)(iVar64 + -2) * 8);
    iVar21 = *(int *)(local_11b8 + 0xb);
    lVar22 = local_11b8[1];
    *(undefined8 *)(lVar22 + (long)iVar21 * 8) =
         *(undefined8 *)(*(long *)(local_11c0 + 0x10) + (long)(iVar64 + -1) * 8);
    *(int *)(local_11b8 + 0xb) = iVar21 + 1;
    if (*(int *)((long)local_11b8 + 0x5c) <= iVar21 + 1) {
      (**(code **)(*(long *)*local_11b8 + 0x28))
                ((long *)*local_11b8,lVar22 + (long)(iVar21 + -5) * 8,6);
      *(int *)(puVar56 + 0xb) = iVar21 + -5;
    }
    *(undefined8 *)(lVar53 + 8) = 0;
    uVar57 = 0xffffffff;
  }
  else {
LAB_03053494:
    piVar55 = (int *)(local_11c0 + 8);
    local_11b0[2] = 0;
    local_11b0[3] = 0;
    *local_11b0 = *local_11b0 & 0xffff0000 | local_11a4 & 0xffff;
    *local_11b0 = *local_11b0 & 0xffff | local_11a8 << 0x10;
    uVar57 = local_11a4;
  }
  puVar56 = local_1168;
  *piVar55 = *piVar55 + uVar57;
  local_11b0 = (uint *)0x0;
  local_11c0 = 0;
  if (local_1170 != 0) {
    if (local_1170 == (*local_1178 & 0xffff)) {
      *(undefined8 *)(local_1180[2] + (long)(int)local_1178[1] * 8) = 0;
      *(undefined1 *)((long)local_1180 + 0xc) = 1;
      iVar64 = *(int *)(local_1168 + 0xb);
      lVar22 = local_1168[1];
      *(uint **)(lVar22 + (long)iVar64 * 8) = local_1178;
      *(int *)(local_1168 + 0xb) = iVar64 + 1;
      if (*(int *)((long)local_1168 + 0x5c) <= iVar64 + 1) {
        (**(code **)(*(long *)*local_1168 + 0x28))
                  ((long *)*local_1168,lVar22 + (long)(iVar64 + -5) * 8,6);
        *(int *)(puVar56 + 0xb) = iVar64 + -5;
      }
    }
    else {
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_1178,0x10);
        if (bVar8) {
          *local_1178 = *local_1178 - local_1170;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_1170 = 0;
    *(undefined1 *)((long)local_1180 + 0xc) = 1;
  }
  puVar56 = local_1120;
  local_1168 = (undefined8 *)0x0;
  local_1180 = (long *)0x0;
  if (local_110c == 0) {
    plVar59 = local_1128 + 3;
    iVar64 = (int)*plVar59;
    if (iVar64 < 2) goto LAB_030534fc;
    lVar53 = *(long *)(local_1128[2] + (long)(iVar64 + -2) * 8);
    iVar21 = *(int *)(local_1120 + 0xb);
    lVar22 = local_1120[1];
    *(undefined8 *)(lVar22 + (long)iVar21 * 8) =
         *(undefined8 *)(local_1128[2] + (long)(iVar64 + -1) * 8);
    *(int *)(local_1120 + 0xb) = iVar21 + 1;
    if (*(int *)((long)local_1120 + 0x5c) <= iVar21 + 1) {
      (**(code **)(*(long *)*local_1120 + 0x28))
                ((long *)*local_1120,lVar22 + (long)(iVar21 + -5) * 8,6);
      *(int *)(puVar56 + 0xb) = iVar21 + -5;
    }
    *(undefined8 *)(lVar53 + 8) = 0;
    uVar57 = 0xffffffff;
  }
  else {
LAB_030534fc:
    plVar59 = local_1128 + 1;
    local_1118[2] = 0;
    local_1118[3] = 0;
    *local_1118 = *local_1118 & 0xffff0000 | local_110c & 0xffff;
    *local_1118 = *local_1118 & 0xffff | local_1110 << 0x10;
    uVar57 = local_110c;
  }
  puVar56 = local_1148;
  *(uint *)plVar59 = (int)*plVar59 + uVar57;
  local_1118 = (uint *)0x0;
  local_1128 = (long *)0x0;
  if (param_5 == 0) {
    if (local_1134 == 0) {
      plVar59 = local_1150 + 3;
      iVar64 = (int)*plVar59;
      if (iVar64 < 2) goto LAB_030536ec;
      lVar53 = *(long *)(local_1150[2] + (long)(iVar64 + -2) * 8);
      iVar21 = *(int *)(local_1148 + 0xb);
      lVar22 = local_1148[1];
      *(undefined8 *)(lVar22 + (long)iVar21 * 8) =
           *(undefined8 *)(local_1150[2] + (long)(iVar64 + -1) * 8);
      *(int *)(local_1148 + 0xb) = iVar21 + 1;
      if (*(int *)((long)local_1148 + 0x5c) <= iVar21 + 1) {
        (**(code **)(*(long *)*local_1148 + 0x28))
                  ((long *)*local_1148,lVar22 + (long)(iVar21 + -5) * 8,6);
        *(int *)(puVar56 + 0xb) = iVar21 + -5;
      }
      *(undefined8 *)(lVar53 + 8) = 0;
      uVar57 = 0xffffffff;
    }
    else {
LAB_030536ec:
      plVar59 = local_1150 + 1;
      local_1140[2] = 0;
      local_1140[3] = 0;
      *local_1140 = *local_1140 & 0xffff0000 | local_1134 & 0xffff;
      *local_1140 = *local_1140 & 0xffff | local_1138 << 0x10;
      uVar57 = local_1134;
    }
    *(uint *)plVar59 = (int)*plVar59 + uVar57;
    local_1140 = (uint *)0x0;
    local_1150 = (long *)0x0;
  }
  puVar56 = local_11b8;
  uVar57 = local_11a4;
  if ((param_8 != (long *)0x0) && (uVar19 = *(uint *)(param_8 + 1), uVar19 != 0)) {
    if (1 < (int)uVar19) {
      FUN_0305b4e0(*param_8,0,uVar19 - 1);
      uVar19 = *(uint *)(param_8 + 1);
    }
    if (uVar19 == 0) {
      iVar64 = 0;
    }
    else {
      if ((int)uVar19 < 2) {
        iVar21 = 0;
      }
      else {
        piVar31 = (int *)*param_8;
        lVar22 = 0;
        lVar53 = (ulong)uVar19 - 1;
        piVar55 = piVar31;
        do {
          piVar34 = piVar55 + 3;
          if (piVar31[(long)(int)lVar22 * 3] != *piVar34) {
            lVar22 = (long)(int)lVar22 + 1;
            uVar10 = *(undefined8 *)piVar34;
            (piVar31 + lVar22 * 3)[2] = piVar55[5];
            *(undefined8 *)(piVar31 + lVar22 * 3) = uVar10;
          }
          iVar21 = (int)lVar22;
          lVar53 = lVar53 + -1;
          piVar55 = piVar34;
        } while (lVar53 != 0);
      }
      iVar64 = iVar21 + 1;
      if ((int)(*(uint *)((long)param_8 + 0xc) & 0x3fffffff) <= iVar21) {
        lVar22 = FUN_0305b44c(PTR_PTR_0434a080,iVar64,*param_8,(int)param_8[1]);
        *param_8 = lVar22;
      }
    }
    puVar56 = local_11b8;
    uVar57 = local_11a4;
    if ((int)param_8[1] < iVar64) {
      *(int *)(param_8 + 1) = iVar64;
    }
    else if (iVar64 < (int)param_8[1]) {
      *(int *)(param_8 + 1) = iVar64;
    }
  }
  local_11b8 = puVar56;
  local_11a4 = uVar57;
  puVar27 = local_1148;
  uVar19 = local_1134;
  if (local_11c0 != 0) {
    if (uVar57 == 0) {
      piVar55 = (int *)(local_11c0 + 0x18);
      iVar64 = *piVar55;
      if (iVar64 < 2) goto LAB_03056adc;
      iVar21 = *(int *)((long)puVar56 + 0x58);
      lVar53 = *(long *)(*(long *)(local_11c0 + 0x10) + (long)(iVar64 + -2) * 8);
      lVar22 = *(long *)((long)puVar56 + 8);
      *(undefined8 *)(lVar22 + (long)iVar21 * 8) =
           *(undefined8 *)(*(long *)(local_11c0 + 0x10) + (long)(iVar64 + -1) * 8);
      *(int *)((long)puVar56 + 0x58) = iVar21 + 1;
      if (*(int *)((long)puVar56 + 0x5c) <= iVar21 + 1) {
        (**(code **)(*(long *)*puVar56 + 0x28))((long *)*puVar56,lVar22 + (long)(iVar21 + -5) * 8,6)
        ;
        *(int *)((long)puVar56 + 0x58) = iVar21 + -5;
      }
      *(undefined8 *)(lVar53 + 8) = 0;
      uVar57 = 0xffffffff;
    }
    else {
LAB_03056adc:
      piVar55 = (int *)(local_11c0 + 8);
      ((uint *)((long)local_11b0 + 8U))[0] = 0;
      ((uint *)((long)local_11b0 + 8U))[1] = 0;
      *local_11b0 = *local_11b0 & 0xffff0000 | uVar57 & 0xffff;
      *local_11b0 = *local_11b0 & 0xffff | local_11a8 << 0x10;
    }
    *piVar55 = *piVar55 + uVar57;
    local_11b0 = (uint *)0x0;
    puVar27 = local_1148;
    uVar19 = local_1134;
  }
  local_11c0 = 0;
  local_1148 = puVar27;
  local_1134 = uVar19;
  puVar56 = local_1120;
  uVar57 = local_110c;
  if (local_1150 != (long *)0x0) {
    if (uVar19 == 0) {
      plVar59 = local_1150 + 3;
      iVar64 = (int)*plVar59;
      if (iVar64 < 2) goto LAB_03056b44;
      iVar21 = *(int *)(puVar27 + 0xb);
      lVar53 = *(long *)(local_1150[2] + (long)(iVar64 + -2) * 8);
      lVar22 = puVar27[1];
      *(undefined8 *)(lVar22 + (long)iVar21 * 8) =
           *(undefined8 *)(local_1150[2] + (long)(iVar64 + -1) * 8);
      *(int *)(puVar27 + 0xb) = iVar21 + 1;
      if (*(int *)((long)puVar27 + 0x5c) <= iVar21 + 1) {
        (**(code **)(*(long *)*puVar27 + 0x28))((long *)*puVar27,lVar22 + (long)(iVar21 + -5) * 8,6)
        ;
        *(int *)(puVar27 + 0xb) = iVar21 + -5;
      }
      *(undefined8 *)(lVar53 + 8) = 0;
      uVar19 = 0xffffffff;
    }
    else {
LAB_03056b44:
      plVar59 = local_1150 + 1;
      local_1140[2] = 0;
      local_1140[3] = 0;
      *local_1140 = *local_1140 & 0xffff0000 | uVar19 & 0xffff;
      *local_1140 = *local_1140 & 0xffff | local_1138 << 0x10;
    }
    *(uint *)plVar59 = (int)*plVar59 + uVar19;
    local_1140 = (uint *)0x0;
    puVar56 = local_1120;
    uVar57 = local_110c;
  }
  local_1150 = (long *)0x0;
  local_1120 = puVar56;
  local_110c = uVar57;
  if (local_1128 != (long *)0x0) {
    if (uVar57 == 0) {
      plVar59 = local_1128 + 3;
      iVar64 = (int)*plVar59;
      if (iVar64 < 2) goto LAB_03056bac;
      iVar21 = *(int *)(puVar56 + 0xb);
      lVar53 = *(long *)(local_1128[2] + (long)(iVar64 + -2) * 8);
      lVar22 = puVar56[1];
      *(undefined8 *)(lVar22 + (long)iVar21 * 8) =
           *(undefined8 *)(local_1128[2] + (long)(iVar64 + -1) * 8);
      *(int *)(puVar56 + 0xb) = iVar21 + 1;
      if (*(int *)((long)puVar56 + 0x5c) <= iVar21 + 1) {
        (**(code **)(*(long *)*puVar56 + 0x28))((long *)*puVar56,lVar22 + (long)(iVar21 + -5) * 8,6)
        ;
        *(int *)(puVar56 + 0xb) = iVar21 + -5;
      }
      *(undefined8 *)(lVar53 + 8) = 0;
      uVar57 = 0xffffffff;
    }
    else {
LAB_03056bac:
      plVar59 = local_1128 + 1;
      local_1118[2] = 0;
      local_1118[3] = 0;
      *local_1118 = *local_1118 & 0xffff0000 | uVar57 & 0xffff;
      *local_1118 = *local_1118 & 0xffff | local_1110 << 0x10;
    }
    *(uint *)plVar59 = (int)*plVar59 + uVar57;
    local_1118 = (uint *)0x0;
    local_1128 = (long *)0x0;
  }
  if (0 < (int)local_10e8) {
    lVar22 = 0;
    iVar64 = (int)local_10e8;
    do {
      uVar57 = *(uint *)((long)local_10f0 + lVar22 * 4);
      plVar59 = *(long **)(param_1[0x73] + (long)(int)uVar57 * 8);
      if ((plVar59 != (long *)0x0) && ((int)plVar59[3] == 0)) {
        if ((0 < (int)plVar59[1]) &&
           ((((*(undefined4 *)
                (param_1[0x71] +
                 (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                ((ulong)*(uint *)*plVar59 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0x10)
                    = 0xffffffff, 1 < (int)plVar59[1] &&
              (*(undefined4 *)
                (param_1[0x71] +
                 (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                ((ulong)*(uint *)(*plVar59 + 4) & 0xffffff) * 0xc0 + 0x80) * 0x20 +
                0x10) = 0xffffffff, 2 < (int)plVar59[1])) &&
             (*(undefined4 *)
               (param_1[0x71] +
                (long)*(int *)(*(long *)(*param_1 + 0x38) +
                               ((ulong)*(uint *)(*plVar59 + 8) & 0xffffff) * 0xc0 + 0x80) * 0x20 +
               0x10) = 0xffffffff, 3 < (int)plVar59[1])) &&
            (*(undefined4 *)
              (param_1[0x71] +
               (long)*(int *)(*(long *)(*param_1 + 0x38) +
                              ((ulong)*(uint *)(*plVar59 + 0xc) & 0xffffff) * 0xc0 + 0x80) * 0x20 +
              0x10) = 0xffffffff, 4 < (int)plVar59[1])))) {
          lVar53 = 4;
          do {
            lVar23 = lVar53 * 4;
            lVar53 = lVar53 + 1;
            *(undefined4 *)
             (param_1[0x71] +
              (long)*(int *)(*(long *)(*param_1 + 0x38) +
                             ((ulong)*(uint *)(*plVar59 + lVar23) & 0xffffff) * 0xc0 + 0x80) * 0x20
             + 0x10) = 0xffffffff;
          } while (lVar53 < (int)plVar59[1]);
        }
        uVar20 = *(uint *)((long)param_1 + 0x34c);
        iVar64 = (int)param_1[0x69];
        uVar19 = iVar64 + 1;
        if (iVar64 < (int)(uVar20 & 0x3fffffff)) {
          lVar53 = param_1[0x68];
        }
        else {
          lVar53 = param_1[0x68];
          if (0x3ffffffe < iVar64) {
            FUN_032bd0a8(uVar19);
            uVar20 = *(uint *)((long)param_1 + 0x34c);
          }
          uVar20 = (uVar20 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          uVar51 = uVar19;
          if ((int)uVar19 <= (int)uVar20) {
            uVar51 = uVar20;
          }
          lVar53 = FUN_032bd1d4(PTR_PTR_0434a080,uVar51,4,lVar53,iVar64,
                                (uint *)((long)param_1 + 0x34c));
          param_1[0x68] = lVar53;
          iVar64 = (int)param_1[0x69];
        }
        *(uint *)(lVar53 + (long)iVar64 * 4) = uVar57;
        lVar53 = param_1[0x73];
        *(uint *)(param_1 + 0x69) = uVar19;
        lVar23 = *(long *)(lVar53 + (long)(int)uVar57 * 8);
        if (lVar23 != 0) {
          FUN_0304f680(lVar23);
          lVar53 = *(long *)(lVar24 + 0x38d490);
          if (lVar53 == 0) {
            lVar53 = FUN_0333d16c(0,1);
            *(long *)(lVar24 + 0x38d490) = lVar53;
          }
          plVar59 = *(long **)(*(long *)(lVar53 + 8) + 0x58);
          (**(code **)(*plVar59 + 0x18))(plVar59,lVar23,0x70);
          lVar53 = param_1[0x73];
        }
        *(undefined8 *)(lVar53 + (long)(int)uVar57 * 8) = 0;
        iVar64 = (int)local_10e8;
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar64);
  }
LAB_03052034:
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar22;
    lVar22 = *(long *)(lVar22 + 0x10);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar22 != 0) {
    puVar56 = *(undefined8 **)(lVar22 + 8);
    uVar28 = (long)puVar56 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar22 + 0x10)) &&
       (*(ulong *)(lVar22 + 8) = uVar28, puVar56 != (undefined8 *)0x0)) {
      *puVar56 = "StFireEvents";
      uVar10 = nn::os::GetSystemTick();
      puVar56[1] = uVar10;
    }
  }
  if (0 < (int)param_1[0x6b]) {
    lVar22 = 0;
    do {
      puVar60 = (ushort *)(param_1[0x6a] + lVar22 * 0x20);
      puVar36 = *(uint **)(*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8);
      uVar3 = *puVar60;
      puVar56 = *(undefined8 **)(param_2 + 0x4e0);
      uVar57 = *puVar36 >> 0x10;
      iVar64 = 0xee0 - (uint)uVar3;
      if (iVar64 <= (int)uVar57) {
        puVar61 = puVar36;
        do {
          iVar21 = *(int *)(puVar56 + 0xb) + -1;
          if (*(int *)(puVar56 + 0xb) < 1) {
            lVar53 = puVar56[1];
            (**(code **)(*(long *)*puVar56 + 0x20))((long *)*puVar56,lVar53,6);
            puVar27 = (undefined8 *)(lVar53 + 0x28);
            *(undefined4 *)(puVar56 + 0xb) = 5;
          }
          else {
            *(int *)(puVar56 + 0xb) = iVar21;
            puVar27 = (undefined8 *)(puVar56[1] + (long)iVar21 * 8);
          }
          puVar36 = (uint *)*puVar27;
          puVar36[4] = 0;
          puVar36[5] = 0;
          puVar36[6] = 0;
          puVar36[7] = 0;
          puVar36[0] = 0;
          puVar36[1] = 0;
          puVar36[2] = 0;
          puVar36[3] = 0;
          puVar36[1] = *(uint *)(param_2 + 0x538);
          uVar19 = *(uint *)(param_2 + 0x53c);
          iVar21 = *(int *)(param_2 + 0x538);
          uVar57 = iVar21 + 1;
          if (iVar21 < (int)(uVar19 & 0x3fffffff)) {
            lVar53 = *(long *)(param_2 + 0x530);
          }
          else {
            uVar10 = *(undefined8 *)(param_2 + 0x530);
            if (0x3ffffffe < iVar21) {
              FUN_032bd0a8(uVar57);
              uVar19 = *(uint *)(param_2 + 0x53c);
            }
            uVar19 = (uVar19 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar19) {
              uVar19 = 0x3fffffff;
            }
            uVar20 = uVar57;
            if ((int)uVar57 <= (int)uVar19) {
              uVar20 = uVar19;
            }
            lVar53 = FUN_032bd1d4(PTR_PTR_0434a080,uVar20,8,uVar10,iVar21,(uint *)(param_2 + 0x53c))
            ;
            *(long *)(param_2 + 0x530) = lVar53;
            iVar21 = *(int *)(param_2 + 0x538);
          }
          *(uint **)(lVar53 + (long)iVar21 * 8) = puVar36;
          *(uint *)(param_2 + 0x538) = uVar57;
          *(uint **)(puVar61 + 2) = puVar36;
          uVar57 = *puVar36 >> 0x10;
          puVar61 = puVar36;
        } while (iVar64 <= (int)uVar57);
      }
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar36,0x10);
        if (bVar8) {
          *puVar36 = *puVar36 + ((uint)uVar3 << 0x10 | 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar19 = (uint)(uVar3 >> 2);
      *(int *)(param_2 + 0x528) = *(int *)(param_2 + 0x528) + 1;
      if (uVar19 != 0) {
        puVar30 = (undefined4 *)((long)puVar36 + (ulong)uVar57 + 0x20);
        uVar57 = uVar3 >> 2 & 7;
        if (6 < uVar19 - 1) {
          iVar64 = uVar57 - uVar19;
          puVar29 = puVar30;
          do {
            *puVar29 = *(undefined4 *)puVar60;
            puVar29[1] = *(undefined4 *)(puVar60 + 2);
            puVar29[2] = *(undefined4 *)(puVar60 + 4);
            puVar29[3] = *(undefined4 *)(puVar60 + 6);
            puVar29[4] = *(undefined4 *)(puVar60 + 8);
            puVar29[5] = *(undefined4 *)(puVar60 + 10);
            puVar29[6] = *(undefined4 *)(puVar60 + 0xc);
            puVar1 = puVar60 + 0xe;
            puVar60 = puVar60 + 0x10;
            puVar30 = puVar29 + 8;
            iVar64 = iVar64 + 8;
            puVar29[7] = *(undefined4 *)puVar1;
            puVar29 = puVar30;
          } while (iVar64 != 0);
        }
        if ((uVar3 >> 2 & 7) != 0) {
          do {
            uVar57 = uVar57 - 1;
            *puVar30 = *(undefined4 *)puVar60;
            puVar30 = puVar30 + 1;
            puVar60 = puVar60 + 2;
          } while (uVar57 != 0);
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)param_1[0x6b]);
  }
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar22;
    lVar24 = *(long *)(lVar22 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar56 = *(undefined8 **)(lVar24 + 8);
    uVar28 = (long)puVar56 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar28, puVar56 != (undefined8 *)0x0)) {
      *puVar56 = &DAT_03922da5;
      uVar10 = nn::os::GetSystemTick();
      puVar56[1] = uVar10;
    }
  }
  uVar28 = local_10f8;
  uVar25 = (ulong)local_10f8._4_4_;
  local_10f8 = (ulong)local_10f8._4_4_ << 0x20;
  if ((-1 < (long)uVar28) && (local_1100 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_1100,(uVar25 & 0x3fffffff) << 3);
  }
  lVar24 = local_10e8;
  uVar57 = local_10e8._4_4_;
  local_10e8 = (ulong)local_10e8._4_4_ << 0x20;
  if ((-1 < lVar24) && (local_10f0 != (uint ***)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_10f0,uVar57 << 2);
  }
  return;
}


