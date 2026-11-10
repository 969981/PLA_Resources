/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033923e0; name: FUN_033923e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_033923e0(long param_1,long *param_2,int param_3,ulong param_4,long *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined1 *puVar31;
  undefined1 auVar32 [16];
  undefined1 *local_348;
  undefined8 local_340;
  ulong local_338;
  ulong local_330;
  ulong local_328 [7];
  char *local_2f0;
  undefined8 uStack_2e8;
  long local_98;
  uint local_90;
  uint local_8c;
  undefined4 local_70 [4];
  
  local_70[0] = 0x80040200;
  if (*param_2 == 0) {
    if (DAT_04450a40 == '\0') {
      return 0x80040200;
    }
    FUN_03326994(local_328,&DAT_044509f0,1);
    local_2f0 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    uStack_2e8 = 0x703;
    uVar17 = FUN_03326338(local_328,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_04389250,"!topvar"
                          ,local_70);
    FUN_03326338(uVar17,"Trying to serialize empty Var",PTR_DAT_04372528);
  }
  else {
    local_70[0] = 0x80040200;
    uVar16 = FUN_032e2598(param_2[1]);
    if ((uVar16 & 3) == 0) {
      if ((((*param_2 == 0) || (param_2[1] == 0)) ||
          (uVar16 = FUN_032dda60(param_2[1],&DAT_0435a6e8), (uVar16 & 1) == 0)) ||
         (lVar27 = *param_2, lVar27 == 0)) {
        lVar27 = param_1 + 0x160;
        plVar2 = (long *)(param_1 + 8);
        FUN_03392ec4(local_328,param_5,param_1,*(undefined1 *)(param_1 + 0x290),param_1 + 0x1a0);
        auVar32 = FUN_03392db0(param_1,param_2[1],0);
        uVar17 = auVar32._0_8_;
        uVar11 = FUN_032e2188();
        FUN_03392f70(plVar2,uVar11);
        FUN_0339219c(param_1,uVar17,auVar32._8_8_);
        if ((param_4 & 1) == 0) {
          uVar11 = (**(code **)(*param_5 + 0x18))(param_5,param_2);
          FUN_03393090(lVar27,param_3,uVar11,auVar32._8_8_ & 0xffffffff,
                       (long)*(int *)(param_1 + 0x10));
        }
        else {
          uVar11 = *(undefined4 *)(param_1 + 0x10);
          FUN_03397090(param_3,lVar27);
          *(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) = auVar32._8_4_ | 0x10000000;
          *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 4) = uVar11;
          *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 8) = 1;
        }
        uVar18 = FUN_032f7ffc(param_1 + 0x228,param_2[1],uVar17);
        uVar11 = FUN_032e2120(uVar17);
        iVar12 = FUN_032e2120(uVar17);
        puVar9 = PTR_PTR_0434a080;
        puVar25 = (uint *)(param_1 + 0x14);
        uVar20 = *puVar25;
        iVar22 = *(int *)(param_1 + 0x10);
        lVar29 = *(long *)(param_1 + 8);
        uVar15 = iVar22 + iVar12;
        if ((int)(uVar20 & 0x3fffffff) < (int)uVar15) {
          if (0x3fffffff < (int)uVar15) {
            FUN_032bd0a8(uVar15);
            uVar20 = *puVar25;
          }
          uVar20 = (uVar20 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          uVar21 = uVar15;
          if ((int)uVar15 <= (int)uVar20) {
            uVar21 = uVar20;
          }
          lVar29 = FUN_032bd1d4(puVar9,uVar21,1,lVar29,iVar22,puVar25);
          *plVar2 = lVar29;
        }
        *(uint *)(param_1 + 0x10) = uVar15;
        FUN_032c4b00(lVar29 + iVar22,0,uVar11);
        lVar26 = *param_2;
        uVar13 = FUN_032e2120(param_2[1]);
        FUN_0339312c(local_328,uVar18,lVar29 + iVar22,lVar26,uVar13,uVar11,1);
        uVar16 = (ulong)local_90;
        if (0 < (int)local_90) {
          lVar29 = 0;
          do {
            plVar3 = (long *)(local_98 + lVar29 * 0x20);
            uVar16 = plVar3[2];
            lVar26 = *plVar3;
            lVar5 = plVar3[1];
            uVar28 = uVar16 & 1;
            if ((uVar16 & 1) != 0) {
              FUN_032e0c28(uVar16 & 0xfffffffffffffffe);
              if (lVar5 != 0) goto LAB_0339270c;
LAB_03392cf4:
              uVar19 = 0;
              uVar30 = 0;
              goto LAB_03392a50;
            }
            if (lVar5 == 0) goto LAB_03392cf4;
LAB_0339270c:
            iVar22 = *(int *)(local_98 + lVar29 * 0x20 + 0x18);
            uVar19 = FUN_032e35d8(lVar5);
            if ((uVar19 & 0x1f) == 8) {
              if (uVar28 != 0) {
                FUN_032e0c28(uVar16 & 0xfffffffffffffffe);
              }
              uVar30 = uVar16;
              if (lVar26 == 0) goto LAB_033928a8;
              local_338 = 0;
              local_330 = 0;
              local_348 = (undefined1 *)0x0;
              local_340 = 0;
              (**(code **)(*(long *)(uVar16 & 0xfffffffffffffffe) + 0x50))
                        ((long *)(uVar16 & 0xfffffffffffffffe),lVar26,lVar5,&local_348);
              uVar17 = local_340;
              auVar32 = FUN_03392db0(param_1,local_340,0);
              uVar19 = local_338;
              uVar18 = auVar32._0_8_;
              iVar10 = (int)local_338;
              iVar12 = *(int *)(param_1 + 0x224);
              iVar14 = FUN_032e2188();
              if (iVar12 <= iVar14) {
                iVar12 = iVar14;
              }
              FUN_03392f70(plVar2,iVar12,param_1 + 0x368);
              FUN_0339219c(param_1,uVar18,auVar32._8_8_);
              uVar11 = *(undefined4 *)(param_1 + 0x10);
              FUN_03397090(iVar22,lVar27);
              lVar26 = (long)iVar22 * 0xc;
              *(uint *)(*(long *)(param_1 + 0x160) + lVar26) = auVar32._8_4_ | 0x20000000;
              *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar26 + 4) = uVar11;
              *(int *)(*(long *)(param_1 + 0x160) + lVar26 + 8) = iVar10;
              if (iVar10 != 0) {
                uVar11 = FUN_032e2120(uVar17);
                iVar12 = FUN_032e2120(uVar18);
                uVar17 = FUN_032f7ffc(param_1 + 0x228,uVar17,uVar18);
                iVar22 = *(int *)(param_1 + 0x10);
                uVar20 = *(uint *)(param_1 + 0x14);
                lVar26 = *(long *)(param_1 + 8);
                uVar15 = iVar22 + iVar12 * iVar10;
                if ((int)(uVar20 & 0x3fffffff) < (int)uVar15) {
                  if (0x3fffffff < (int)uVar15) {
                    FUN_032bd0a8(uVar15);
                    uVar20 = *puVar25;
                  }
                  uVar20 = (uVar20 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar20) {
                    uVar20 = 0x3fffffff;
                  }
                  uVar21 = uVar15;
                  if ((int)uVar15 <= (int)uVar20) {
                    uVar21 = uVar20;
                  }
                  lVar26 = FUN_032bd1d4(puVar9,uVar21,1,lVar26,iVar22,puVar25);
                  *plVar2 = lVar26;
                }
                *(uint *)(param_1 + 0x10) = uVar15;
                FUN_032c4b00(lVar26 + iVar22,0,iVar12 * iVar10);
                FUN_0339312c(local_328,uVar17,lVar26 + iVar22,local_348,iVar12,uVar11,
                             uVar19 & 0xffffffff);
              }
              if ((local_330 & 1) != 0) {
                FUN_032e0c40(local_330 & 0xfffffffffffffffe);
              }
LAB_03392880:
              bVar6 = false;
              if ((uVar30 & 1) != 0) goto LAB_03392d1c;
LAB_03392888:
              if (uVar28 != 0) goto LAB_03392d28;
LAB_0339288c:
              uVar16 = (ulong)local_90;
              if (bVar6) {
LAB_03392d3c:
                bVar6 = true;
                iVar22 = (int)uVar16;
                goto joined_r0x03392d40;
              }
            }
            else {
              uVar30 = 0;
LAB_033928a8:
              uVar19 = FUN_032e35d8(lVar5);
              if ((uVar19 & 0x1f) == 3) {
                if (uVar28 != 0) {
                  FUN_032e0c28(uVar16 & 0xfffffffffffffffe);
                }
                uVar19 = uVar16;
                if (lVar26 == 0) goto LAB_03392a50;
                auVar32 = FUN_03392db0(param_1,&DAT_0434b9d8,0);
                local_348 = (undefined1 *)0x0;
                (**(code **)(*(long *)(uVar16 & 0xfffffffffffffffe) + 0x38))
                          ((long *)(uVar16 & 0xfffffffffffffffe),lVar26,lVar5,&local_348);
                puVar31 = local_348;
                uVar15 = FUN_032c4900(local_348);
                FUN_0339219c(param_1,auVar32._0_8_,auVar32._8_8_);
                if (*(char *)(param_1 + 0x290) != '\0') {
                  FUN_03392f70(plVar2,2,param_1 + 0x368);
                }
                uVar11 = *(undefined4 *)(param_1 + 0x10);
                FUN_03397090(iVar22,lVar27);
                lVar26 = (long)iVar22 * 0xc;
                *(uint *)(*(long *)(param_1 + 0x160) + lVar26) = auVar32._8_4_ | 0x20000000;
                *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar26 + 4) = uVar11;
                *(uint *)(*(long *)(param_1 + 0x160) + lVar26 + 8) = uVar15 + 1;
                iVar22 = *(int *)(param_1 + 0x10);
                uVar21 = *(uint *)(param_1 + 0x14);
                uVar20 = iVar22 + uVar15 + 1;
                lVar26 = *(long *)(param_1 + 8);
                if ((int)(uVar21 & 0x3fffffff) < (int)uVar20) {
                  if (0x3fffffff < (int)uVar20) {
                    FUN_032bd0a8(uVar20);
                    uVar21 = *puVar25;
                  }
                  uVar21 = (uVar21 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar21) {
                    uVar21 = 0x3fffffff;
                  }
                  uVar8 = uVar20;
                  if ((int)uVar20 <= (int)uVar21) {
                    uVar8 = uVar21;
                  }
                  lVar26 = FUN_032bd1d4(puVar9,uVar8,1,lVar26,iVar22,puVar25);
                  *plVar2 = lVar26;
                }
                if (-1 < (int)uVar15) {
                  puVar4 = (undefined1 *)(lVar26 + iVar22);
                  uVar21 = uVar15 + 1 & 7;
                  if (6 < uVar15) {
                    iVar22 = ~uVar15 + uVar21;
                    puVar24 = puVar4;
                    do {
                      *puVar24 = *puVar31;
                      puVar24[1] = puVar31[1];
                      puVar24[2] = puVar31[2];
                      puVar24[3] = puVar31[3];
                      puVar24[4] = puVar31[4];
                      puVar24[5] = puVar31[5];
                      puVar24[6] = puVar31[6];
                      puVar1 = puVar31 + 7;
                      puVar4 = puVar24 + 8;
                      puVar31 = puVar31 + 8;
                      iVar22 = iVar22 + 8;
                      puVar24[7] = *puVar1;
                      puVar24 = puVar4;
                    } while (iVar22 != 0);
                  }
                  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                    *puVar4 = *puVar31;
                    puVar4 = puVar4 + 1;
                    puVar31 = puVar31 + 1;
                  }
                }
                *(uint *)(param_1 + 0x10) = uVar20;
                uVar7 = false;
                uVar23 = uVar28;
              }
              else {
                uVar19 = 0;
LAB_03392a50:
                local_70[0] = 0x80040200;
                uVar23 = uVar19 & 1;
                uVar7 = true;
              }
              if (uVar23 != 0) {
                FUN_032e0c40(uVar19 & 0xfffffffffffffffe);
              }
              if (!(bool)uVar7) goto LAB_03392880;
              bVar6 = true;
              if ((uVar30 & 1) == 0) goto LAB_03392888;
LAB_03392d1c:
              FUN_032e0c40(uVar30 & 0xfffffffffffffffe);
              if (uVar28 == 0) goto LAB_0339288c;
LAB_03392d28:
              FUN_032e0c40(uVar16 & 0xfffffffffffffffe);
              uVar16 = (ulong)local_90;
              if (bVar6) goto LAB_03392d3c;
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 < (int)uVar16);
        }
        bVar6 = false;
        iVar22 = (int)uVar16;
joined_r0x03392d40:
        if (iVar22 != 0) {
          lVar27 = local_98 + -0x10;
          uVar16 = -(uVar16 >> 0x1f) & 0xffffffe000000000 | uVar16 << 5;
          do {
            while (uVar28 = *(ulong *)(lVar27 + uVar16), (uVar28 & 1) != 0) {
              FUN_032e0c40(uVar28 & 0xfffffffffffffffe);
              uVar16 = uVar16 - 0x20;
              if (uVar16 == 0) goto LAB_03392b2c;
            }
            uVar16 = uVar16 - 0x20;
          } while (uVar16 != 0);
        }
LAB_03392b2c:
        local_90 = 0;
        if ((-1 < (int)local_8c) && (local_98 != 0)) {
          (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_98,((ulong)local_8c & 0x3fffffff) << 5)
          ;
        }
        if (bVar6) {
          return local_70[0];
        }
      }
      else {
        FUN_032e41bc(local_328,lVar27);
        if (local_328[0] < 2) {
          auVar32 = FUN_03392db0(param_1,lVar27,1);
          FUN_03392e5c(param_1 + 0x160,param_3,auVar32._8_8_ & 0xffffffff);
          FUN_0339219c(param_1,auVar32._0_8_,auVar32._8_8_);
        }
        else {
          uVar17 = FUN_032e2530();
          auVar32 = FUN_03392db0(param_1,uVar17,1);
          FUN_0339219c(param_1,auVar32._0_8_,auVar32._8_8_);
          uVar11 = FUN_0339222c(param_1,local_328[0],auVar32._0_8_,auVar32._8_8_);
          FUN_03397090(param_3,param_1 + 0x160);
          *(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) = auVar32._8_4_ | 0x50000000;
          *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 4) = 0xffffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 8) = uVar11;
        }
      }
      return 0;
    }
    if (DAT_04450a40 == '\0') {
      return local_70[0];
    }
    FUN_03326994(local_328,&DAT_044509f0,1);
    local_2f0 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    uStack_2e8 = 0x704;
    uVar17 = FUN_03326338(local_328,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_0436f128,
                          "!topvar.getType()->isSerializable()",local_70);
    local_348 = (undefined1 *)param_2[1];
    FUN_03326338(uVar17,"Trying to serialize instance of non-serializable type \'{}\'",
                 PTR_DAT_043892a0,&local_348);
  }
  FUN_033269dc(local_328);
  return local_70[0];
}


