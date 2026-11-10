/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a7d0c; name: FUN_032a7d0c
 */


undefined8
FUN_032a7d0c(uint *param_1,long param_2,undefined4 param_3,undefined4 param_4,long *param_5,
            long *param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined **local_230;
  long local_228;
  long lStack_220;
  long local_218;
  long lStack_210;
  uint local_208;
  uint local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  long *local_1f8;
  uint local_1f0;
  char local_1ec;
  undefined1 auStack_1d8 [12];
  uint local_1cc;
  uint local_1c8;
  undefined4 local_1c0;
  long *local_1b8;
  long local_a8;
  long local_a0;
  undefined1 auStack_88 [12];
  uint local_7c;
  uint local_78;
  undefined4 local_70;
  
  uVar19 = param_1[2];
  if (uVar19 != 0) {
    uVar18 = param_1[1];
    uVar24 = 0;
    uVar20 = uVar18;
    do {
      if (uVar20 != 0) {
        uVar20 = *param_1;
        uVar19 = 0;
        do {
          if (uVar20 != 0) {
            uVar18 = 0;
            do {
              uVar20 = param_1[3] >> (ulong)(uVar18 & 0x1f);
              if (uVar20 < 2) {
                uVar20 = 1;
              }
              uVar4 = param_1[4] >> (ulong)(uVar18 & 0x1f);
              if (uVar4 < 2) {
                uVar4 = 1;
              }
              uVar5 = *(uint *)(param_2 + 0xc) >> (ulong)(uVar18 & 0x1f);
              if (uVar5 < 2) {
                uVar5 = 1;
              }
              uVar10 = FUN_032b552c(*(undefined4 *)(param_2 + 0x18));
              uVar8 = 0;
              if (uVar10 != 0) {
                uVar8 = (uVar5 - 1) / uVar10;
              }
              uVar5 = *(uint *)(param_2 + 0x10) >> (ulong)(uVar18 & 0x1f);
              if (uVar5 < 2) {
                uVar5 = 1;
              }
              uVar10 = uVar8 + 1;
              uVar11 = FUN_032b5544(*(undefined4 *)(param_2 + 0x18));
              uVar9 = 0;
              if (uVar11 != 0) {
                uVar9 = (uVar5 - 1) / uVar11;
              }
              uVar5 = uVar9 + 1;
              iVar12 = FUN_032b552c(param_4);
              uVar6 = iVar12 * uVar10;
              iVar12 = FUN_032b5544(param_4);
              uVar7 = iVar12 * uVar5;
              uVar11 = param_1[3] >> (ulong)(uVar18 & 0x1f);
              if (uVar11 < 2) {
                uVar11 = 1;
              }
              uVar13 = FUN_032b5574(param_1[6],uVar11);
              uVar14 = FUN_032b5430(param_3);
              uVar15 = FUN_032b54dc(param_4);
              FUN_032a6024(auStack_88);
              local_7c = uVar6;
              local_78 = uVar7;
              local_70 = param_3;
              FUN_032a6040(auStack_1d8);
              FUN_032a6078(auStack_1d8,auStack_88);
              uVar4 = uVar4 - 1;
              uVar11 = 0;
              do {
                if (uVar7 != 0) {
                  if (uVar20 < uVar6) {
                    local_254 = 0;
                    do {
                      uVar23 = local_254;
                      if (uVar4 <= local_254) {
                        uVar23 = uVar4;
                      }
                      uVar21 = local_1cc;
                      if (local_1cc < 2) {
                        uVar21 = 1;
                      }
                      uVar2 = local_1c8;
                      if (local_1c8 < 2) {
                        uVar2 = 1;
                      }
                      lVar1 = local_a8 + *local_1b8;
                      uVar16 = FUN_032b55e8(local_1c0,uVar21,uVar2,0,local_254,0);
                      uVar17 = FUN_032a68ac(param_1,uVar18,uVar19,uVar24,0,uVar23,uVar11);
                      FUN_032c4a00(lVar1 + (uVar16 & 0xffffffff),uVar17,uVar13);
                      uVar21 = uVar20;
                      do {
                        uVar2 = local_1cc;
                        if (local_1cc < 2) {
                          uVar2 = 1;
                        }
                        uVar3 = local_1c8;
                        if (local_1c8 < 2) {
                          uVar3 = 1;
                        }
                        lVar1 = local_a8 + *local_1b8;
                        uVar16 = FUN_032b55e8(local_1c0,uVar2,uVar3,uVar21,local_254,0);
                        uVar17 = FUN_032a68ac(param_1,uVar18,uVar19,uVar24,uVar20 - 1,uVar23,uVar11)
                        ;
                        FUN_032c4a00(lVar1 + (uVar16 & 0xffffffff),uVar17,
                                     (uint)(uVar14 >> 3) & 0x1fffffff);
                        uVar21 = uVar21 + 1;
                      } while (uVar21 < uVar6);
                      local_254 = local_254 + 1;
                    } while (local_254 != uVar7);
                  }
                  else {
                    uVar23 = 0;
                    do {
                      uVar21 = uVar23;
                      if (uVar4 <= uVar23) {
                        uVar21 = uVar4;
                      }
                      uVar2 = local_1cc;
                      if (local_1cc < 2) {
                        uVar2 = 1;
                      }
                      uVar3 = local_1c8;
                      if (local_1c8 < 2) {
                        uVar3 = 1;
                      }
                      lVar1 = local_a8 + *local_1b8;
                      uVar16 = FUN_032b55e8(local_1c0,uVar2,uVar3,0,uVar23,0);
                      uVar17 = FUN_032a68ac(param_1,uVar18,uVar19,uVar24,0,uVar21,uVar11);
                      FUN_032c4a00(lVar1 + (uVar16 & 0xffffffff),uVar17,uVar13);
                      uVar23 = uVar23 + 1;
                    } while (uVar23 != uVar7);
                  }
                }
                local_230 = &PTR_LAB_04346258;
                local_218 = 0;
                lStack_210 = 0;
                lStack_220 = local_a0 + local_a8;
                local_228 = local_a8;
                local_218 = FUN_032a87e4(param_2,uVar18,uVar19,uVar24,uVar11);
                lStack_210 = local_218 +
                             (ulong)(uVar5 * uVar10 * ((uint)(uVar15 >> 3) & 0x1fffffff));
                local_1ec = '\0';
                local_208 = uVar10;
                local_204 = uVar5;
                local_200 = param_3;
                local_1fc = param_4;
                local_1f8 = param_5;
                if ((param_6 == (long *)0x0) ||
                   (uVar16 = (**(code **)(*param_5 + 0x18))(param_5), (uVar16 & 1) == 0)) {
                  local_240 = 0;
                  uStack_238 = 0;
                  local_250 = 0;
                  uStack_248 = 0;
                  local_1f0 = uVar5;
                  FUN_032a8878(&local_230,&local_250);
                }
                else {
                  uVar23 = 0;
                  if (uVar10 != 0) {
                    uVar23 = 0x80 / uVar10;
                  }
                  if (0x7f < uVar8) {
                    uVar23 = 1;
                  }
                  uVar21 = 0;
                  if (uVar23 != 0) {
                    uVar21 = uVar5 / uVar23;
                  }
                  if (0x1f < uVar21) {
                    uVar21 = 0x20;
                  }
                  if (uVar5 < uVar23) {
                    uVar21 = 1;
                  }
                  local_1f0 = 0;
                  if (uVar21 != 0) {
                    local_1f0 = uVar9 / uVar21;
                  }
                  local_1f0 = local_1f0 + 1;
                  uVar23 = 0;
                  if (local_1f0 != 0) {
                    uVar23 = uVar9 / local_1f0;
                  }
                  (**(code **)(*param_6 + 0x18))(param_6,&local_250,1,8);
                  (**(code **)(*param_6 + 0x28))(param_6,local_250,&local_230,0x40);
                  (**(code **)(*param_6 + 0x38))(param_6,local_250,uVar23 + 1,0);
                  (**(code **)(*param_6 + 0x50))(param_6,&local_250,1,0,8);
                  (**(code **)(*param_6 + 0xa8))(param_6,local_250);
                }
                if (local_1ec != '\0') {
                  bVar22 = false;
                  goto LAB_032a8240;
                }
                uVar23 = param_1[5] >> (ulong)(uVar18 & 0x1f);
                uVar11 = uVar11 + 1;
                if (uVar23 < 2) {
                  uVar23 = 1;
                }
              } while (uVar11 < uVar23);
              bVar22 = true;
LAB_032a8240:
              FUN_032a61d4(auStack_1d8);
              if (!bVar22) {
                return 0x80040200;
              }
              uVar20 = *param_1;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar20);
            uVar18 = param_1[1];
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar18);
        uVar19 = param_1[2];
        uVar20 = uVar18;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar19);
  }
  return 0;
}


