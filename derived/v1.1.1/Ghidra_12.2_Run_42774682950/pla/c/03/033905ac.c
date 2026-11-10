/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033905ac; name: FUN_033905ac
 */


void FUN_033905ac(long param_1)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  uint *puVar21;
  uint *puVar22;
  long *plVar23;
  uint *puVar24;
  long lVar25;
  undefined8 local_2e8;
  undefined8 local_2e0;
  long local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [256];
  undefined8 local_78;
  uint local_70 [4];
  
  local_78 = *(undefined8 *)(param_1 + 0x360);
  local_188 = auStack_178;
  local_180 = -0x7ffffff000000000;
  FUN_03398be8(&local_188,0,0x54414730);
  FUN_032c4d3c(&local_2e8);
  FUN_032c53d8(&local_2e8,&DAT_03952942,0x1343b08);
  FUN_03398d1c(&local_188,0x53444b56,local_2e8,(uint)local_2e0 + -1);
  FUN_032c4ce8(&local_2e8);
  puVar6 = PTR_PTR_0434a090;
  local_198 = 0;
  local_190 = 0x8000000000000000;
  plVar3 = (long *)(param_1 + 0x160);
  local_198 = FUN_032bd1d4(PTR_PTR_0434a090,*(undefined4 *)(param_1 + 0x168),4,0,0,
                           (long)&local_190 + 4);
  iVar18 = (int)local_190 + 1;
  *(undefined4 *)(local_198 + (long)(int)local_190 * 4) = 0;
  iVar8 = *(int *)(param_1 + 0x168);
  local_190._0_4_ = iVar18;
  if (1 < iVar8) {
    uVar7 = 1;
    do {
      puVar14 = (uint *)(*plVar3 + (long)(int)uVar7 * 0xc);
      if ((*puVar14 >> 0x1c == 0) && (*(int *)(*plVar3 + (long)(int)uVar7 * 0xc + 8) == 0)) {
        *(int *)(param_1 + 0x168) = iVar8 + -1;
        if ((int)uVar7 < iVar8 + -1) {
          uVar13 = iVar8 + ~uVar7 & 3;
          if (2 < (iVar8 - uVar7) - 2) {
            iVar18 = ((uVar7 + uVar13) - iVar8) + 1;
            puVar24 = puVar14;
            do {
              *(undefined8 *)puVar24 = *(undefined8 *)(puVar24 + 3);
              puVar24[2] = puVar24[5];
              *(undefined8 *)(puVar24 + 3) = *(undefined8 *)(puVar24 + 6);
              puVar24[5] = puVar24[8];
              *(undefined8 *)(puVar24 + 6) = *(undefined8 *)(puVar24 + 9);
              puVar24[8] = puVar24[0xb];
              puVar14 = puVar24 + 0xc;
              *(undefined8 *)(puVar24 + 9) = *(undefined8 *)puVar14;
              puVar24[0xb] = puVar24[0xe];
              iVar18 = iVar18 + 4;
              puVar24 = puVar14;
            } while (iVar18 != 0);
          }
          if (uVar13 != 0) {
            do {
              *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + 3);
              puVar14[2] = puVar14[5];
              uVar13 = uVar13 - 1;
              puVar14 = puVar14 + 3;
            } while (uVar13 != 0);
          }
        }
        uVar13 = uVar7 - 1;
        uVar7 = 0;
      }
      else {
        uVar13 = uVar7;
      }
      *(uint *)(local_198 + (long)(int)local_190 * 4) = uVar7;
      local_190._0_4_ = (int)local_190 + 1;
      iVar8 = *(int *)(param_1 + 0x168);
      uVar7 = uVar13 + 1;
    } while ((int)uVar7 < iVar8);
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    lVar10 = (long)*(int *)(param_1 + 0x198) * 0x10;
    plVar23 = (long *)(*(long *)(param_1 + 400) + 8);
    while( true ) {
      lVar10 = lVar10 + -0x10;
      iVar18 = *(int *)((long)plVar23 + -4);
      if (iVar18 < (int)local_190) {
        iVar18 = *(int *)(local_198 + (long)iVar18 * 4);
      }
      else {
        iVar18 = (iVar18 - (int)local_190) + *(int *)(param_1 + 0x168);
      }
      if (iVar18 != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(plVar23 + -1));
        uVar7 = FUN_032e2598(*plVar23);
        if (((uVar7 >> 0xd & 1) == 0) || (*(char *)(param_1 + 0x290) == '\0')) {
          *(int *)plVar4 = iVar18;
        }
        else {
          lVar19 = *(long *)(param_1 + 0x160);
          lVar25 = *plVar23;
          lVar15 = *(long *)(param_1 + 8) + (ulong)*(uint *)(lVar19 + (long)iVar18 * 0xc + 4);
          uVar11 = FUN_032e35d8(lVar25);
          if ((lVar25 == 0) || ((uVar11 & 0x1f) != 6)) {
            iVar8 = FUN_032e2120(*plVar23);
            if (iVar8 == 8) {
              *(int *)plVar4 = (int)lVar15 - (int)plVar4;
              *(int *)((long)plVar4 + 4) = *(int *)(lVar19 + (long)iVar18 * 0xc + 8);
            }
            else {
              iVar8 = FUN_032e2120(*plVar23);
              if ((iVar8 == 0xc) || (iVar8 = FUN_032e2120(*plVar23), iVar8 == 0x10)) {
                *plVar4 = lVar15 - (long)plVar4;
                *(int *)(plVar4 + 1) = *(int *)(lVar19 + (long)iVar18 * 0xc + 8);
              }
              else if ((1 < DAT_04450a40) || (uVar11 = FUN_03327170(), (uVar11 & 1) != 0)) {
                uVar11 = FUN_03327170();
                if ((uVar11 & 1) == 0) {
                  FUN_03326994(&local_2e8,&DAT_044509f0,2);
                  lVar15 = FUN_03326338(&local_2e8,"Unknown relative offset fixup {}",
                                        PTR_DAT_043891f8,plVar23);
                  *(char **)(lVar15 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
                  ;
                  *(undefined8 *)(lVar15 + 0x40) = 0x552;
                  FUN_033269dc(&local_2e8);
                }
                else {
                  FUN_03326a7c(&local_2e8,&DAT_044509f0,2);
                  lVar15 = FUN_03326338(&local_2e8,"Unknown relative offset fixup {}",
                                        PTR_DAT_043891f8,plVar23);
                  *(char **)(lVar15 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
                  ;
                  *(undefined8 *)(lVar15 + 0x40) = 0x552;
                  FUN_03326adc(&local_2e8);
                }
              }
            }
          }
          else {
            *plVar4 = lVar15 - (long)plVar4;
          }
        }
      }
      if (lVar10 == 0) break;
      plVar23 = plVar23 + 2;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_03398be8(&local_188,1,0x44415441);
    FUN_032afb80(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 8),
                 (long)*(int *)(param_1 + 0x10));
    iVar18 = *(int *)(param_1 + 0x368);
    if (*(int *)(param_1 + 0x368) <= *(int *)(param_1 + 0x220)) {
      iVar18 = *(int *)(param_1 + 0x220);
    }
    FUN_033902a0(*(undefined8 *)(param_1 + 0x360),iVar18,param_1 + 0x368,&DAT_03ab1eaa);
    FUN_03398cb8(&local_188);
  }
  if (*(int *)(param_1 + 0x370) == 0) {
    if (*(int *)(param_1 + 0x1f8) == 0) {
      FUN_0338fd30(param_1,&local_188,*(undefined8 *)(param_1 + 0x360));
      iVar18 = *(int *)(param_1 + 0x168);
    }
    else {
      FUN_03398be8(&local_188,1,0x54435246);
      puVar14 = (uint *)FUN_033901e4(param_1 + 0x18);
      FUN_03390fe0(param_1 + 0x1c8,puVar14);
      local_2e8 = puVar14;
      FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,8);
      if (*(char *)(param_1 + 0x290) != '\0') {
        FUN_033221c0(*(undefined8 *)(param_1 + 0x360),(long)*(int *)(param_1 + 0x220) << 1);
      }
      FUN_03398cb8(&local_188);
      iVar18 = *(int *)(param_1 + 0x168);
    }
    if (iVar18 != 0) {
      FUN_03398be8(&local_188,0,0x494e4458);
      FUN_03398be8(&local_188,1,0x4954454d);
      if (0 < *(int *)(param_1 + 0x168)) {
        lVar15 = 0;
        lVar10 = 0;
        do {
          puVar14 = (uint *)(*(long *)(param_1 + 0x160) + lVar15);
          local_2e8._0_4_ = *puVar14;
          FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,4);
          local_2e8._0_4_ = puVar14[1];
          FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,4);
          if (*puVar14 >> 0x1c == 0 || (*puVar14 & 0xf0000000) == 0x30000000) {
            uVar9 = *(undefined8 *)(param_1 + 0x360);
            uVar7 = *(uint *)(local_198 + (long)(int)puVar14[2] * 4);
          }
          else {
            uVar9 = *(undefined8 *)(param_1 + 0x360);
            uVar7 = puVar14[2];
          }
          local_2e8 = (uint *)CONCAT44(local_2e8._4_4_,uVar7);
          FUN_032afb80(uVar9,&local_2e8,4);
          lVar10 = lVar10 + 1;
          lVar15 = lVar15 + 0xc;
        } while (lVar10 < *(int *)(param_1 + 0x168));
      }
      FUN_03398cb8(&local_188);
      if ((*(char *)(param_1 + 0x290) != '\0') &&
         (((*(int *)(param_1 + 0x178) != 0 || (*(int *)(param_1 + 0x188) != 0)) ||
          (*(char *)(param_1 + 0x1c0) != '\0')))) {
        FUN_03398be8(&local_188,1,0x50544348);
        iVar18 = *(int *)(param_1 + 0x178);
        if (iVar18 != 0) {
          if (1 < iVar18) {
            FUN_03397750(*(undefined8 *)(param_1 + 0x170),0,iVar18 + -1);
            iVar18 = *(int *)(param_1 + 0x178);
          }
          if (iVar18 != 0) {
            piVar20 = *(int **)(param_1 + 0x170);
            piVar1 = piVar20 + (long)iVar18 * 2;
            do {
              piVar17 = piVar20 + 2;
              iVar18 = *piVar20;
              if (piVar17 == piVar1) {
                piVar16 = piVar1;
              }
              else {
                piVar16 = piVar17;
                if (*piVar17 == iVar18) {
                  piVar16 = piVar20 + 4;
                  do {
                    piVar17 = piVar16;
                    if (piVar1 == piVar17) {
                      piVar17 = piVar1;
                      goto LAB_03390d58;
                    }
                    piVar16 = piVar17 + 2;
                  } while (*piVar17 == iVar18);
LAB_03390d58:
                  piVar16 = piVar17;
                }
              }
              local_2e8._0_4_ = iVar18;
              FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,4);
              iVar18 = (int)((ulong)((long)piVar17 - (long)piVar20) >> 3);
              local_2e8 = (uint *)CONCAT44(local_2e8._4_4_,iVar18);
              FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,4);
              for (piVar17 = piVar20; piVar17 != piVar16; piVar17 = piVar17 + 2) {
                local_2e8._4_4_ = (undefined4)((ulong)local_2e8 >> 0x20);
                local_2e8 = (uint *)CONCAT44(local_2e8._4_4_,piVar17[1]);
                FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,4);
              }
              piVar20 = piVar20 + (long)iVar18 * 2;
            } while (piVar1 != piVar20);
          }
        }
        if (*(int *)(param_1 + 0x188) != 0) {
          local_2e8 = (uint *)((ulong)local_2e8 & 0xffffffff00000000);
          FUN_032afb80(*(undefined8 *)(param_1 + 0x360),&local_2e8,4);
          iVar18 = *(int *)(param_1 + 0x188);
          if (1 < iVar18) {
            FUN_03397850(*(undefined8 *)(param_1 + 0x180),0,iVar18 + -1,param_1);
            iVar18 = *(int *)(param_1 + 0x188);
          }
          if (iVar18 != 0) {
            puVar24 = *(uint **)(param_1 + 0x180);
            puVar14 = puVar24 + (long)iVar18 * 2;
            do {
              uVar7 = *puVar24;
              puVar21 = (uint *)0x0;
              local_2e8 = (uint *)0x0;
              local_2e0._0_4_ = 0;
              local_2e0._4_4_ = 0x80000000;
              do {
                puVar22 = puVar24 + 2;
                lVar10 = *(long *)(param_1 + 8);
                uVar13 = *(uint *)(lVar10 + (ulong)puVar24[1]);
                if ((puVar22 != puVar14) && (*(uint *)(lVar10 + (ulong)puVar24[3]) == uVar13)) {
                  puVar12 = puVar24 + 4;
                  do {
                    puVar22 = puVar12;
                    if (puVar14 == puVar22) {
                      puVar22 = puVar14;
                      goto LAB_03390e48;
                    }
                    puVar12 = puVar22 + 2;
                  } while (*(uint *)(lVar10 + (ulong)puVar22[1]) == uVar13);
                }
LAB_03390e48:
                uVar2 = (uint)local_2e0 + 1;
                if ((local_2e0._4_4_ & 0x3fffffff) <= (uint)local_2e0) {
                  puVar21 = (uint *)FUN_033979d0(puVar6,uVar2,puVar21,(uint)local_2e0,
                                                 (long)&local_2e0 + 4);
                  local_2e8 = puVar21;
                }
                puVar12 = puVar21 + (long)(int)(uint)local_2e0 * 6;
                *puVar12 = uVar13;
                *(uint **)(puVar12 + 2) = puVar24;
                *(uint **)(puVar12 + 4) = puVar22;
                puVar24 = puVar24 + (long)(int)((ulong)((long)puVar22 - (long)puVar24) >> 3) * 2;
                local_2e0._0_4_ = uVar2;
                if (puVar24 == puVar14) {
                  puVar24 = puVar14;
                  break;
                }
              } while (*puVar24 == uVar7);
              local_70[0] = uVar7;
              FUN_032afb80(*(undefined8 *)(param_1 + 0x360),local_70,4);
              local_70[0] = uVar2;
              FUN_032afb80(*(undefined8 *)(param_1 + 0x360),local_70,4);
              puVar22 = puVar21;
              do {
                local_70[0] = *puVar22;
                FUN_032afb80(*(undefined8 *)(param_1 + 0x360),local_70,4);
                local_70[0] = (uint)((ulong)(*(long *)(puVar22 + 4) - *(long *)(puVar22 + 2)) >> 3);
                FUN_032afb80(*(undefined8 *)(param_1 + 0x360),local_70,4);
                lVar15 = *(long *)(puVar22 + 4);
                uVar7 = local_2e0._4_4_;
                for (lVar10 = *(long *)(puVar22 + 2); local_2e0._4_4_ = uVar7, lVar10 != lVar15;
                    lVar10 = lVar10 + 8) {
                  local_70[0] = *(uint *)(lVar10 + 4);
                  FUN_032afb80(*(undefined8 *)(param_1 + 0x360),local_70,4);
                  uVar7 = local_2e0._4_4_;
                }
                puVar22 = puVar22 + 6;
              } while (puVar22 != puVar21 + (ulong)uVar2 * 6);
              local_2e0 = (ulong)uVar7 << 0x20;
              if ((puVar21 != (uint *)0x0) && (-1 < (int)uVar7)) {
                (**(code **)(*(long *)puVar6 + 0x18))
                          (puVar6,puVar21,((ulong)uVar7 & 0x3fffffff) * 0x18);
              }
            } while (puVar14 != puVar24);
          }
        }
        FUN_03398cb8(&local_188);
      }
      FUN_03398cb8(&local_188);
    }
  }
  FUN_03398cb8(&local_188);
  *(undefined8 *)(param_1 + 0x360) = 0;
  puVar5 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,*(long *)(param_1 + 8),*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_0339587c(plVar3);
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x1b0);
  uVar7 = local_190._4_4_;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  local_190 = (ulong)local_190._4_4_ << 0x20;
  if ((-1 < (int)uVar7) && (local_198 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_198,uVar7 << 2);
  }
  lVar10 = local_180;
  uVar11 = (ulong)local_180._4_4_;
  local_180 = (ulong)local_180._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_188 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_188,(uVar11 & 0x3fffffff) << 4);
  }
  return;
}


