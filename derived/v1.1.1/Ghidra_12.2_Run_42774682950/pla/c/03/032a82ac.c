/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a82ac; name: FUN_032a82ac
 */


undefined8
FUN_032a82ac(uint *param_1,long param_2,undefined4 param_3,undefined4 param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined1 *local_178;
  uint local_170;
  uint local_16c;
  undefined1 auStack_168 [264];
  
  uVar14 = param_1[2];
  if (uVar14 != 0) {
    uVar13 = param_1[1];
    local_184 = 0;
    uVar15 = uVar13;
    do {
      if (uVar15 != 0) {
        uVar14 = *param_1;
        local_180 = 0;
        do {
          if (uVar14 != 0) {
            uVar13 = 0;
            do {
              uVar14 = *(uint *)(param_2 + 0xc) >> (ulong)(uVar13 & 0x1f);
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              uVar15 = *(uint *)(param_2 + 0x10) >> (ulong)(uVar13 & 0x1f);
              if (uVar15 < 2) {
                uVar15 = 1;
              }
              uVar5 = FUN_032b552c(param_3);
              uVar6 = FUN_032b5544(param_3);
              uVar16 = param_1[3] >> (ulong)(uVar13 & 0x1f);
              if (uVar16 < 2) {
                uVar16 = 1;
              }
              uVar7 = FUN_032b552c(param_1[6]);
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = (uVar16 - 1) / uVar7;
              }
              uVar16 = param_1[4] >> (ulong)(uVar13 & 0x1f);
              if (uVar16 < 2) {
                uVar16 = 1;
              }
              iVar1 = uVar3 + 1;
              uVar8 = FUN_032b5544(param_1[6]);
              uVar7 = *(uint *)(param_2 + 0xc) >> (ulong)(uVar13 & 0x1f);
              if (uVar7 < 2) {
                uVar7 = 1;
              }
              uVar10 = FUN_032b5574(*(undefined4 *)(param_2 + 0x18),uVar7);
              uVar11 = FUN_032b5430(param_4);
              uVar19 = (uint)(uVar11 >> 3) & 0x1fffffff;
              uVar11 = FUN_032b54dc(param_3);
              local_16c = 0x80000100;
              uVar7 = iVar1 * uVar5 * uVar19 * uVar6;
              local_178 = auStack_168;
              if (0x100 < (int)uVar7) {
                if (0x3fffffff < (int)uVar7) {
                  FUN_032bd0a8(uVar7);
                }
                uVar18 = (local_16c & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar18) {
                  uVar18 = 0x3fffffff;
                }
                uVar2 = uVar7;
                if ((int)uVar7 <= (int)uVar18) {
                  uVar2 = uVar18;
                }
                local_178 = (undefined1 *)
                            FUN_032bd1d4(PTR_PTR_0434a080,uVar2,1,auStack_168,0,&local_16c);
              }
              local_170 = 0;
              if (uVar7 != 0) {
                local_170 = uVar7;
              }
              uVar7 = 0;
              if (uVar8 != 0) {
                uVar7 = (uVar16 - 1) / uVar8;
              }
              local_17c = 0;
              do {
                uVar16 = 0;
                do {
                  lVar12 = FUN_032a8714(param_1,uVar13,local_180,local_184,uVar16,local_17c);
                  iVar9 = (**(code **)(*param_5 + 0x20))
                                    (param_5,lVar12,
                                     lVar12 + (ulong)(uint)((int)((uVar11 & 0xffffffff) >> 3) *
                                                           iVar1),local_178,
                                     local_178 + (int)local_170,iVar1,param_3,param_4);
                  if (iVar9 < 0) {
                    bVar4 = true;
                    goto LAB_032a8610;
                  }
                  iVar9 = uVar16 * uVar6;
                  uVar8 = uVar6;
                  if (uVar15 - iVar9 <= uVar6) {
                    uVar8 = uVar15 - iVar9;
                  }
                  if (uVar8 == 0) {
                    iVar20 = 0;
                    uVar8 = 0xffffffff;
                    do {
                      FUN_032addbc(param_2,uVar13,local_180,local_184,iVar20,iVar9,local_17c);
                      iVar20 = iVar20 + uVar5;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar3);
                  }
                  else {
                    iVar20 = 0;
                    uVar18 = 0;
                    do {
                      lVar12 = FUN_032addbc(param_2,uVar13,local_180,local_184,uVar18 * uVar5,iVar9,
                                            local_17c);
                      uVar17 = uVar14 - uVar18 * uVar5;
                      uVar2 = uVar5;
                      if (uVar17 <= uVar5) {
                        uVar2 = uVar17;
                      }
                      uVar17 = 0;
                      iVar21 = iVar20;
                      do {
                        FUN_032c4a00(lVar12,local_178 + iVar21,uVar2 * uVar19);
                        uVar17 = uVar17 + 1;
                        lVar12 = lVar12 + (uVar10 & 0xffffffff);
                        iVar21 = iVar21 + uVar19 * uVar6;
                      } while (uVar17 < uVar8);
                      bVar4 = uVar18 < uVar3;
                      uVar18 = uVar18 + 1;
                      iVar20 = iVar20 + uVar6 * uVar5 * uVar19;
                    } while (bVar4);
                  }
                  bVar4 = uVar16 < uVar7;
                  uVar16 = uVar16 + 1;
                } while (bVar4);
                uVar16 = param_1[5] >> (ulong)(uVar13 & 0x1f);
                local_17c = local_17c + 1;
                if (uVar16 < 2) {
                  uVar16 = 1;
                }
              } while (local_17c < uVar16);
              bVar4 = false;
LAB_032a8610:
              if ((-1 < (int)local_16c) && (local_178 != (undefined1 *)0x0)) {
                (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                          (PTR_PTR_0434a080,local_178,local_16c & 0x3fffffff);
              }
              if (bVar4) {
                return 0x80040200;
              }
              uVar14 = *param_1;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar14);
            uVar13 = param_1[1];
          }
          local_180 = local_180 + 1;
        } while (local_180 < uVar13);
        uVar14 = param_1[2];
        uVar15 = uVar13;
      }
      local_184 = local_184 + 1;
    } while (local_184 < uVar14);
  }
  return 0;
}


