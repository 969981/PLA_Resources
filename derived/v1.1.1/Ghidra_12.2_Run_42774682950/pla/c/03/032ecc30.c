/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ecc30; name: FUN_032ecc30
 */


/* WARNING: Removing unreachable block (ram,0x032ed3b8) */
/* WARNING: Type propagation algorithm not settling */

int FUN_032ecc30(long *param_1,long *param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  short *psVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  short *psVar21;
  int iVar22;
  char *pcVar23;
  long *plVar24;
  long *plVar25;
  byte *pbVar26;
  ulong *puVar27;
  long *plVar28;
  undefined8 *local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  byte *local_90;
  ulong local_88;
  long local_80;
  byte *local_78;
  undefined8 local_70;
  ulong local_68;
  
  local_b4 = 0;
  plVar25 = (long *)0x0;
  plVar24 = (long *)0x0;
  local_c0 = (undefined8 *)0x0;
LAB_032ecc84:
  do {
    do {
      do {
        do {
          plVar24 = plVar24 + 1;
          if (plVar25 <= plVar24) {
            if (local_c0 == param_3) {
              return local_b4;
            }
            uVar10 = (uint)*param_3;
            if ((uVar10 >> 0x17 & 1) == 0) {
              puVar14 = (undefined8 *)0x0;
              psVar16 = (short *)0x0;
            }
            else {
              uVar10 = (uVar10 & 0x7fffff) - (uVar10 >> 1 & 0x155555);
              uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
              psVar16 = (short *)param_3[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                0x18) + 2];
              if (psVar16 == (short *)0x0) {
                puVar14 = (undefined8 *)0x0;
              }
              else {
                bVar4 = (int)psVar16[1] + (int)*psVar16 != 0;
                puVar14 = (undefined8 *)0x0;
                if (bVar4) {
                  puVar14 = param_3;
                }
                psVar21 = (short *)0x0;
                if (bVar4) {
                  psVar21 = psVar16;
                }
                psVar16 = psVar21;
              }
            }
            for (puVar19 = (undefined8 *)param_3[1]; puVar19 != local_c0;
                puVar19 = (undefined8 *)puVar19[1]) {
              uVar10 = (uint)*puVar19;
              if (((uVar10 >> 0x17 & 1) != 0) &&
                 (uVar10 = (uVar10 & 0x7fffff) - (uVar10 >> 1 & 0x155555),
                 uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
                 psVar21 = (short *)puVar19[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101
                                                   >> 0x18) + 2], psVar21 != (short *)0x0)) {
                if ((int)psVar21[1] + (int)*psVar21 != 0) {
                  psVar16 = psVar21;
                  puVar14 = puVar19;
                }
              }
            }
            if (puVar14 == (undefined8 *)0x0) {
              return local_b4;
            }
            plVar24 = (long *)(psVar16 + 4);
            plVar25 = plVar24 + (long)psVar16[1] + (long)*psVar16;
            local_c0 = puVar14;
          }
          uVar10 = (uint)*(undefined8 *)*plVar24;
        } while (((uVar10 >> 0x11 & 1) == 0) ||
                (uVar10 = (uVar10 & 0x1ffff) - (uVar10 >> 1 & 0x5555),
                uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
                (*(ushort *)
                  (*plVar24 +
                  (ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) >> 5
                & 1) == 0));
        puVar27 = (ulong *)*plVar24;
        uVar11 = *puVar27;
        uVar10 = (uint)uVar11;
        puVar15 = puVar27;
        if ((uVar11 & 1) == 0) {
          puVar15 = (ulong *)puVar27[1];
          bVar2 = (byte)*puVar15;
          while ((bVar2 & 1) == 0) {
            puVar15 = (ulong *)puVar15[1];
            bVar2 = (byte)*puVar15;
          }
        }
        if ((puVar27 != (ulong *)0x0) && ((puVar15[2] & 0x1f) == 8)) {
          puVar15 = puVar27;
          do {
            puVar18 = puVar27;
            if ((*puVar15 & 1) != 0) {
              if ((puVar15 != (ulong *)0x0) && (0 < (int)(puVar15[2] >> 8))) goto LAB_032ecc84;
              break;
            }
            puVar15 = (ulong *)puVar15[1];
          } while (puVar15 != (ulong *)0x0);
          do {
            if ((uVar10 >> 0x10 & 1) != 0) goto LAB_032eceb0;
            if (((uVar11 & 1) != 0) || (puVar18 = (ulong *)puVar18[1], puVar18 == (ulong *)0x0)) {
              pcVar23 = (char *)0x0;
              lVar12 = *param_2;
              goto joined_r0x032ed390;
            }
            uVar11 = *puVar18;
            uVar10 = (uint)uVar11;
          } while( true );
        }
        puVar15 = puVar27;
        if ((uVar11 & 1) == 0) {
          puVar15 = (ulong *)puVar27[1];
          bVar2 = (byte)*puVar15;
          while ((bVar2 & 1) == 0) {
            puVar15 = (ulong *)puVar15[1];
            bVar2 = (byte)*puVar15;
          }
        }
      } while ((puVar27 == (ulong *)0x0) || ((puVar15[2] & 0x1f) != 7));
      FUN_032e2c7c(&local_80,puVar27,&DAT_04357f30);
      lVar12 = local_80;
      if ((local_70 & 1) != 0) {
        FUN_032e0c40(local_70 & 0xfffffffffffffffe);
      }
    } while (lVar12 == 0);
    puVar15 = puVar27;
    do {
      uVar10 = (uint)*puVar15;
      if ((uVar10 >> 0x10 & 1) != 0) {
        uVar10 = (uVar10 & 0xffff) - (uVar10 >> 1 & 0x5555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        pcVar23 = (char *)puVar15[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                  + 2];
        lVar12 = *param_2;
        goto joined_r0x032ed1b4;
      }
    } while (((*puVar15 & 1) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
    pcVar23 = (char *)0x0;
    lVar12 = *param_2;
joined_r0x032ed1b4:
    if (lVar12 == 0) {
LAB_032ed3d4:
      local_a8 = 0;
      local_a0 = 0;
      local_b0 = 0;
    }
    else {
      lVar12 = param_2[1];
      if (pcVar23 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        sVar7 = strlen(pcVar23);
        pcVar9 = pcVar23 + sVar7;
      }
      uVar11 = FUN_032e2950(lVar12,pcVar23,pcVar9,1);
      if (uVar11 < 2) goto LAB_032ed3d4;
      FUN_032e4868(&local_b0,param_2,uVar11);
    }
    uVar10 = (uint)*puVar27;
    if ((uVar10 >> 0x11 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uVar10 & 0x1ffff) - (uVar10 >> 1 & 0x5555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar10 = (uint)(ushort)puVar27[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                            0x18) + 2];
    }
    iVar5 = FUN_032ecc30(param_1,&local_b0,puVar27,uVar10 + param_4,param_5);
    local_b4 = iVar5 + local_b4;
    if ((local_a0 & 1) != 0) {
      FUN_032e0c40(local_a0 & 0xfffffffffffffffe);
    }
  } while( true );
LAB_032eceb0:
  uVar10 = (uVar10 & 0xffff) - (uVar10 >> 1 & 0x5555);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  pcVar23 = (char *)puVar18[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
  lVar12 = *param_2;
joined_r0x032ed390:
  if (lVar12 == 0) {
LAB_032ed394:
    uVar11 = 0;
    pbVar26 = (byte *)0x0;
    lVar12 = 0;
  }
  else {
    lVar12 = param_2[1];
    if (pcVar23 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      sVar7 = strlen(pcVar23);
      pcVar9 = (char *)((long)pcVar23 + sVar7);
    }
    uVar11 = FUN_032e2950(lVar12,pcVar23,pcVar9,1);
    if (uVar11 < 2) goto LAB_032ed394;
    FUN_032e4868(&local_80,param_2,uVar11);
    pbVar26 = local_78;
    lVar12 = local_80;
    if (local_78 == (byte *)0x0) {
LAB_032ed418:
      lVar12 = 0;
      uVar11 = 0;
    }
    else {
      pbVar13 = local_78;
      if ((*local_78 & 1) == 0) {
        pbVar13 = *(byte **)(local_78 + 8);
        bVar2 = *pbVar13;
        while ((bVar2 & 1) == 0) {
          pbVar13 = *(byte **)(pbVar13 + 8);
          bVar2 = *pbVar13;
        }
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 8) {
        pbVar26 = (byte *)0x0;
        goto LAB_032ed418;
      }
      uVar11 = local_70;
      if ((local_70 & 1) != 0) {
        FUN_032e0c28(local_70 & 0xfffffffffffffffe);
        uVar11 = local_70;
      }
    }
    if ((local_70 & 1) != 0) {
      FUN_032e0c40(local_70 & 0xfffffffffffffffe);
    }
  }
  local_70 = 0;
  local_68 = 0;
  plVar28 = (long *)(uVar11 & 0xfffffffffffffffe);
  local_80 = 0;
  local_78 = (byte *)0x0;
  (**(code **)(*plVar28 + 0x50))(plVar28,lVar12,pbVar26,&local_80);
  iVar5 = (int)local_70;
  if ((local_68 & 1) != 0) {
    FUN_032e0c40(local_68 & 0xfffffffffffffffe);
  }
  if (0 < iVar5) {
    iVar5 = *(int *)((long)param_1 + 0x114);
    puVar15 = puVar27;
    do {
      uVar17 = *puVar15;
      if (((uint)uVar17 >> 2 & 1) != 0) {
        uVar17 = puVar15[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
        goto LAB_032ecfec;
      }
      puVar15 = (ulong *)puVar15[1];
    } while (puVar15 != (ulong *)0x0);
    uVar17 = 0;
LAB_032ecfec:
    puVar15 = (ulong *)PTR_DAT_04389210;
    do {
      uVar20 = *puVar15;
      if (((uint)uVar20 >> 2 & 1) != 0) {
        uVar20 = puVar15[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
        goto LAB_032ed01c;
      }
      puVar15 = (ulong *)puVar15[1];
    } while (puVar15 != (ulong *)0x0);
    uVar20 = 0;
LAB_032ed01c:
    puVar15 = puVar27;
    if (uVar20 == uVar17) {
      do {
        uVar10 = (uint)*puVar15;
        if ((uVar10 >> 0x10 & 1) != 0) {
          uVar10 = (uVar10 & 0xffff) - (uVar10 >> 1 & 0x5555);
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
          uVar17 = puVar15[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
          goto LAB_032ed080;
        }
      } while (((*puVar15 & 1) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
      uVar17 = 0;
LAB_032ed080:
      uVar8 = 0;
    }
    else {
      do {
        uVar17 = *puVar15;
        if (((uint)uVar17 >> 2 & 1) != 0) {
          uVar17 = puVar15[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
          break;
        }
        puVar15 = (ulong *)puVar15[1];
        uVar17 = 0;
      } while (puVar15 != (ulong *)0x0);
      puVar15 = (ulong *)PTR_DAT_04389218;
      do {
        uVar20 = *puVar15;
        if (((uint)uVar20 >> 2 & 1) != 0) {
          if (puVar15[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2] == uVar17) goto LAB_032ed2f8;
          goto joined_r0x032ed0f4;
        }
        puVar15 = (ulong *)puVar15[1];
      } while (puVar15 != (ulong *)0x0);
      if (uVar17 != 0) goto joined_r0x032ed0f4;
LAB_032ed2f8:
      puVar15 = puVar27;
      do {
        uVar10 = (uint)*puVar15;
        if ((uVar10 >> 0x10 & 1) != 0) {
          uVar10 = (uVar10 & 0xffff) - (uVar10 >> 1 & 0x5555);
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
          uVar17 = puVar15[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
          goto LAB_032ed350;
        }
      } while (((*puVar15 & 1) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
      uVar17 = 0;
LAB_032ed350:
      uVar8 = 1;
    }
    FUN_032c3534(param_1,uVar8,param_2,param_3,uVar17,param_5 + param_4);
    local_b4 = local_b4 + 1;
    do {
      if (((byte)*puVar27 >> 1 & 1) != 0) {
        uVar17 = puVar27[3];
        goto LAB_032ed0c0;
      }
      puVar27 = (ulong *)puVar27[1];
    } while (puVar27 != (ulong *)0x0);
    uVar17 = 0;
LAB_032ed0c0:
    FUN_032e2c7c(&local_80,uVar17,&DAT_04357f30);
    lVar3 = local_80;
    if ((local_70 & 1) != 0) {
      FUN_032e0c40(local_70 & 0xfffffffffffffffe);
    }
    if (lVar3 != 0) {
      iVar1 = *(int *)(*param_1 + (long)(int)param_1[1] * 0x10 + -8);
      local_70 = 0;
      local_68 = 0;
      local_80 = 0;
      local_78 = (byte *)0x0;
      (**(code **)(*plVar28 + 0x50))(plVar28,lVar12,pbVar26,&local_80);
      if (0 < (int)local_70) {
        iVar22 = 0;
        do {
          local_98 = local_80 + (long)local_70._4_4_ * (long)iVar22;
          local_90 = local_78;
          local_88 = local_68;
          if ((local_68 & 1) != 0) {
            FUN_032e0c28(local_68 & 0xfffffffffffffffe);
          }
          iVar6 = FUN_032ecc30(param_1,&local_98,uVar17,0,iVar5);
          local_b4 = iVar6 + local_b4;
          if ((local_88 & 1) != 0) {
            FUN_032e0c40(local_88 & 0xfffffffffffffffe);
          }
          iVar5 = iVar5 + iVar1;
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)local_70);
      }
      if ((local_68 & 1) != 0) {
        FUN_032e0c40(local_68 & 0xfffffffffffffffe);
      }
    }
  }
joined_r0x032ed0f4:
  if ((uVar11 & 1) != 0) {
    FUN_032e0c40(plVar28);
  }
  goto LAB_032ecc84;
}


