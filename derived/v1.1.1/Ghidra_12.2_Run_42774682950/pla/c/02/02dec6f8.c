/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dec6f8; name: FUN_02dec6f8
 */


uint * FUN_02dec6f8(long *param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  ulong local_70;
  undefined1 local_68;
  int local_64;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 != 0) {
    uVar15 = *(uint *)(param_2 + 0x90);
    uVar17 = 0;
    if (uVar9 != 0) {
      uVar17 = uVar15 / uVar9;
    }
    for (puVar10 = *(uint **)(*param_1 + (ulong)(uVar15 - uVar17 * uVar9) * 8);
        puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
      if (*puVar10 == uVar15) {
        puVar10[0x1c] = puVar10[0x1c] + 1;
        puVar10 = puVar10 + 0x1e;
        goto LAB_02dec8c8;
      }
    }
  }
  puVar7 = (uint *)(*DAT_0442d138)(5,0xc0);
  if (puVar7 != (uint *)0x0) {
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar16 = puVar7 + 0x14;
    puVar16[0] = 0;
    puVar16[1] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x2f] = 0;
    puVar7[0x24] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x19] = *(uint *)(param_2 + 0x8c);
    uVar4 = *(undefined1 *)(param_2 + 0x60);
    uVar9 = 1 << (ulong)(*(byte *)(param_2 + 0x94) & 0x1f);
    uVar15 = 1 << (ulong)(*(byte *)(param_2 + 0x95) & 0x1f);
    puVar10 = puVar7 + 0x1e;
    *puVar10 = uVar9;
    puVar7[0x2e] = 0;
    puVar7[0x2f] = 0;
    puVar7[0x24] = 0;
    puVar7[0x25] = 0;
    puVar7[0x1f] = uVar15;
    puVar7[0x2a] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2d] = 0;
    puVar7[0x26] = 0;
    puVar7[0x27] = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
    puVar7[0x22] = 0;
    puVar7[0x23] = 0;
    if ((((int)uVar15 < 0x2001) && (0x3f < (int)uVar9)) && ((int)uVar9 <= (int)uVar15)) {
      local_70 = *param_4 & 0xfffffffffffffffc;
      uVar9 = (uint)*param_4 & 3;
      local_64 = (int)param_4[1] + uVar9;
      local_68 = (undefined1)(uVar9 << 3);
      iVar6 = FUN_02df5460(puVar7,uVar4,&local_70);
      if (iVar6 == 0) {
        puVar7[0x1c] = puVar7[0x1c] + 1;
        uVar9 = *(uint *)(param_2 + 0x90);
        *puVar7 = uVar9;
        uVar15 = *(uint *)(param_1 + 1);
        if (uVar15 == 0) {
LAB_02dec90c:
          uVar18 = 0x1d;
          goto LAB_02dec910;
        }
        fVar19 = (float)NEON_ucvtf((int)param_1[2]);
        if (0.9 < fVar19 / (float)uVar15) {
          if (uVar15 < 0x1d) goto LAB_02dec90c;
          if (uVar15 < 0x35) {
            uVar18 = 0x35;
LAB_02dec910:
            lVar14 = *param_1;
            uVar2 = *(undefined4 *)((long)param_1 + 0xc);
            *param_1 = 0;
            param_1[1] = 0;
            lVar11 = (*DAT_0442d148)(0,0,uVar18 << 3);
            if (lVar11 != 0) {
              uVar17 = (uint)uVar18;
              *param_1 = lVar11;
              *(uint *)((long)param_1 + 0xc) = uVar17;
              uVar9 = uVar17;
              while( true ) {
                uVar9 = uVar9 - 1;
                uVar3 = *(uint *)(param_1 + 1);
                if (uVar3 < (uint)uVar18) {
                  puVar1 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
                  *(uint *)(param_1 + 1) = uVar3 + 1;
                  if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = 0;
                  }
                }
                if (uVar9 == 0) break;
                uVar18 = (ulong)*(uint *)((long)param_1 + 0xc);
              }
              if (uVar15 != 0) {
                uVar18 = 0;
                do {
                  puVar5 = *(uint **)(lVar14 + uVar18 * 8);
                  while (puVar5 != (uint *)0x0) {
                    uVar9 = 0;
                    if (uVar17 != 0) {
                      uVar9 = *puVar5 / uVar17;
                    }
                    puVar13 = *(uint **)(puVar5 + 2);
                    lVar11 = (ulong)(*puVar5 - uVar9 * uVar17) * 8;
                    *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(*param_1 + lVar11);
                    *(uint **)(*param_1 + lVar11) = puVar5;
                    puVar5 = puVar13;
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar18 != uVar15);
              }
              if (lVar14 != 0) {
                (*DAT_0442d150)(0,lVar14);
              }
              goto LAB_02dec998;
            }
            if (*param_1 != 0) {
              *(undefined4 *)(param_1 + 1) = 0;
              (*DAT_0442d150)(0);
              *param_1 = 0;
              *(undefined4 *)((long)param_1 + 0xc) = 0;
            }
            *param_1 = lVar14;
            *(uint *)(param_1 + 1) = uVar15;
            *(undefined4 *)((long)param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar15 < 0x61) {
              uVar18 = 0x61;
              goto LAB_02dec910;
            }
            if (uVar15 < 0xc1) {
              uVar18 = 0xc1;
              goto LAB_02dec910;
            }
            if (uVar15 < 0x185) {
              uVar18 = 0x185;
              goto LAB_02dec910;
            }
            if (uVar15 < 0x301) {
              uVar18 = 0x301;
              goto LAB_02dec910;
            }
            if (uVar15 < 0x607) {
              uVar18 = 0x607;
              goto LAB_02dec910;
            }
            if (uVar15 < 0xc07) {
              uVar18 = 0xc07;
              goto LAB_02dec910;
            }
            uVar18 = 0x1807;
            if (uVar15 < 0x1807) goto LAB_02dec910;
            if (uVar15 < 0x3001) {
              uVar18 = 0x3001;
              goto LAB_02dec910;
            }
            uVar18 = 0x6011;
            if (((uVar15 < 0x6011) || (uVar18 = 0xc005, uVar15 < 0xc005)) ||
               ((uVar18 = 0x1800d, uVar15 < 0x1800d ||
                ((uVar18 = 0x30005, uVar15 < 0x30005 || (uVar18 = 0x60019, uVar15 < 0x60019))))))
            goto LAB_02dec910;
            if (uVar15 < 0xc0001) {
              uVar18 = 0xc0001;
              goto LAB_02dec910;
            }
            uVar18 = 0x180005;
            if (((((((uVar15 < 0x180005) || (uVar18 = 0x30000b, uVar15 < 0x30000b)) ||
                   (uVar18 = 0x60000d, uVar15 < 0x60000d)) ||
                  ((uVar18 = 0xc00005, uVar15 < 0xc00005 || (uVar18 = 0x1800013, uVar15 < 0x1800013)
                   ))) || ((uVar18 = 0x3000005, uVar15 < 0x3000005 ||
                           ((uVar18 = 0x6000017, uVar15 < 0x6000017 ||
                            (uVar18 = 0xc000013, uVar15 < 0xc000013)))))) ||
                (uVar18 = 0x18000005, uVar15 < 0x18000005)) ||
               ((uVar18 = 0x30000059, uVar15 < 0x30000059 ||
                (uVar18 = 0x60000005, uVar15 < 0x60000005)))) goto LAB_02dec910;
LAB_02dec998:
            uVar15 = *(uint *)(param_1 + 1);
          }
          if (uVar15 == 0) goto LAB_02dec9d8;
          uVar9 = *puVar7;
        }
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar9 / uVar15;
        }
        lVar11 = (ulong)(uVar9 - uVar17 * uVar15) * 8;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(*param_1 + lVar11);
        *(uint **)(*param_1 + lVar11) = puVar7;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        goto LAB_02dec8c8;
      }
    }
LAB_02dec9d8:
    plVar8 = *(long **)(puVar7 + 0x2e);
    if (plVar8 != (long *)0x0) {
      if (0 < (int)puVar7[0x24]) {
        lVar14 = 0;
        lVar11 = 0;
        lVar12 = *plVar8;
        while( true ) {
          if (lVar12 != 0) {
            (*DAT_0442d150)(5,lVar12);
            plVar8 = *(long **)(puVar7 + 0x2e);
          }
          lVar12 = *(long *)((long)plVar8 + lVar14 + 0x10);
          if (lVar12 != 0) {
            (*DAT_0442d158)(5,lVar12);
            plVar8 = *(long **)(puVar7 + 0x2e);
          }
          lVar11 = lVar11 + 1;
          lVar14 = lVar14 + 0x20;
          if ((int)puVar7[0x24] <= lVar11) break;
          lVar12 = *(long *)((long)plVar8 + lVar14);
        }
        if (plVar8 == (long *)0x0) goto LAB_02deca74;
      }
      (*DAT_0442d150)(5);
    }
LAB_02deca74:
    if (*(long *)puVar16 != 0) {
      (*DAT_0442d150)(5);
      puVar7[0x16] = 0;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      puVar7[0x19] = 0;
      puVar16[0] = 0;
      puVar16[1] = 0;
    }
    if (*(long *)(puVar7 + 0x10) != 0) {
      (*DAT_0442d150)(5);
    }
    if (*(long *)(puVar7 + 0xc) != 0) {
      (*DAT_0442d150)(5);
    }
    if (*(long *)(puVar7 + 8) != 0) {
      (*DAT_0442d150)(5);
    }
    if (*(long *)(puVar7 + 4) != 0) {
      (*DAT_0442d150)(5);
    }
    (*DAT_0442d150)(5,puVar7);
  }
  puVar10 = (uint *)0x0;
LAB_02dec8c8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return puVar10;
}


