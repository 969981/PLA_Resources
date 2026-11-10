/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a864c; name: FUN_016a864c
 */


undefined8 FUN_016a864c(long param_1,ulong *param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long *plVar18;
  ushort *puVar19;
  uint *puVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined1 *puVar23;
  int *piVar24;
  int iVar25;
  undefined1 *puVar26;
  long lVar27;
  long lVar28;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  long *local_70;
  
  uVar17 = *(ulong *)(param_1 + 0xa0);
  if (uVar17 != 0) {
    uVar14 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar22 = uVar17 - 1 & uVar11;
    }
    else if (uVar11 < uVar17) {
      uVar22 = uVar11;
    }
    else {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = uVar11 / uVar17;
      }
      uVar22 = uVar11 - uVar22 * uVar17;
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x98) + uVar22 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_016a8770;
          }
          else if ((plVar15[1] & uVar17 - 1) != uVar22) {
            return 0;
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar14 = plVar15[1];
        if (uVar14 == uVar11) {
          if (plVar15[2] == uVar11) goto LAB_016a8770;
        }
        else {
          if (uVar17 <= uVar14) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar14 / uVar17;
            }
            uVar14 = uVar14 - uVar8 * uVar17;
          }
          if (uVar14 != uVar22) {
            return 0;
          }
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  return 0;
LAB_016a8770:
  puVar26 = (undefined1 *)plVar15[3];
  if (puVar26 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return 0;
  }
  if (puVar26 == &DAT_cbf29ce484222645) {
    return 0;
  }
  piVar24 = (int *)plVar15[5];
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar12;
  plVar15 = *(long **)(lVar12 + 0x290);
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar16 = (undefined1 *)plVar15[0xe];
  bVar7 = false;
  if (puVar16 == (undefined1 *)0x0) goto LAB_016a8928;
  uVar17 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar17 < 2) {
    puVar13 = (undefined1 *)((ulong)(puVar16 + -1) & (ulong)puVar26);
  }
  else {
    puVar13 = puVar26;
    if (puVar16 <= puVar26) {
      uVar14 = 0;
      if (puVar16 != (undefined1 *)0x0) {
        uVar14 = (ulong)puVar26 / (ulong)puVar16;
      }
      puVar13 = puVar26 + -(uVar14 * (long)puVar16);
    }
  }
  plVar18 = *(long **)(plVar15[0xd] + (long)puVar13 * 8);
  if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
    if (uVar17 < 2) {
      do {
        if ((undefined1 *)plVar18[1] == puVar26) {
          if ((undefined1 *)plVar18[2] == puVar26) goto LAB_016a890c;
        }
        else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar16 + -1)) != puVar13)
        goto LAB_016a8a00;
        plVar18 = (long *)*plVar18;
        bVar7 = false;
        if (plVar18 == (long *)0x0) goto LAB_016a8928;
      } while( true );
    }
    do {
      puVar23 = (undefined1 *)plVar18[1];
      if (puVar23 == puVar26) {
        if ((undefined1 *)plVar18[2] == puVar26) goto LAB_016a890c;
      }
      else {
        if (puVar16 <= puVar23) {
          uVar17 = 0;
          if (puVar16 != (undefined1 *)0x0) {
            uVar17 = (ulong)puVar23 / (ulong)puVar16;
          }
          puVar23 = puVar23 + -(uVar17 * (long)puVar16);
        }
        if (puVar23 != puVar13) break;
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
LAB_016a8a00:
  do {
    bVar7 = false;
LAB_016a8928:
    puVar19 = (ushort *)((long)piVar24 - (long)*piVar24);
    uVar5 = *puVar19;
    if (uVar5 < 0x15) {
      lVar12 = 0;
      puVar16 = *(undefined1 **)(param_1 + 0x140);
    }
    else {
      lVar12 = 0;
      if ((ulong)puVar19[10] != 0) {
        puVar20 = (uint *)((long)piVar24 + (ulong)puVar19[10]);
        lVar12 = (long)puVar20 + (ulong)*puVar20;
      }
      puVar16 = *(undefined1 **)(param_1 + 0x140);
    }
    if (puVar16 != (undefined1 *)0x0) {
      uVar17 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar13 = (undefined1 *)((ulong)(puVar16 + -1) & (ulong)puVar26);
      }
      else {
        puVar13 = puVar26;
        if (puVar16 <= puVar26) {
          uVar14 = 0;
          if (puVar16 != (undefined1 *)0x0) {
            uVar14 = (ulong)puVar26 / (ulong)puVar16;
          }
          puVar13 = puVar26 + -(uVar14 * (long)puVar16);
        }
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x138) + (long)puVar13 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if ((undefined1 *)plVar18[1] == puVar26) {
              if ((undefined1 *)plVar18[2] == puVar26) goto LAB_016a8a5c;
            }
            else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar16 + -1)) != puVar13) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            puVar23 = (undefined1 *)plVar18[1];
            if (puVar23 == puVar26) {
              if ((undefined1 *)plVar18[2] == puVar26) goto LAB_016a8a5c;
            }
            else {
              if (puVar16 <= puVar23) {
                uVar17 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar17 = (ulong)puVar23 / (ulong)puVar16;
                }
                puVar23 = puVar23 + -(uVar17 * (long)puVar16);
              }
              if (puVar23 != puVar13) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    FUN_016ae810();
  } while( true );
LAB_016a890c:
  cVar6 = (char)plVar18[3];
  if (cVar6 == '\0') goto LAB_016a8a00;
  if ((cVar6 == '\x01') || (cVar6 != -1)) {
    bVar7 = true;
    goto LAB_016a8928;
  }
LAB_016a9170:
  uVar10 = 0;
  goto joined_r0x016a9174;
LAB_016a8a5c:
  uVar3 = *(uint *)(plVar18 + 3);
  uVar17 = (ulong)uVar3;
  if (param_3 == 1) {
    if (bVar7) goto LAB_016a9170;
    if ((uVar5 < 0x13) || ((ulong)puVar19[9] == 0)) {
      puVar20 = (uint *)0x0;
    }
    else {
      puVar20 = (uint *)((long)piVar24 + (ulong)puVar19[9]);
      puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20);
    }
    if (uVar3 < *puVar20) {
      do {
        piVar24 = (int *)((long)(puVar20 + uVar17 + 1) + (ulong)puVar20[uVar17 + 1]);
        local_108 = &DAT_cbf29ce484222645;
        pcStack_100 = "";
        local_f8 = 0;
        local_f0 = (long *)0x0;
        local_e8 = &DAT_cbf29ce484222645;
        pcStack_e0 = "";
        local_d8 = 0;
        local_d0 = (long *)0x0;
        local_c8 = &DAT_cbf29ce484222645;
        pcStack_c0 = "";
        local_b8 = 0;
        local_b0 = (long *)0x0;
        local_a8 = &DAT_cbf29ce484222645;
        puStack_a0 = &DAT_03996322;
        local_98 = 0;
        local_90 = (long *)0x0;
        local_88 = &DAT_cbf29ce484222645;
        puStack_80 = &DAT_03996322;
        local_78 = 0;
        local_70 = (long *)0x0;
        if (*(ushort *)((long)piVar24 - (long)*piVar24) < 5) {
          local_118 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
          local_118 = 0;
          if (uVar14 != 0) {
            local_118 = *(undefined8 *)((long)piVar24 + uVar14);
          }
        }
        if (*(ushort *)((long)piVar24 - (long)*piVar24) < 7) {
          local_110 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[3];
          local_110 = 0;
          if (uVar14 != 0) {
            local_110 = *(undefined8 *)((long)piVar24 + uVar14);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 9) ||
           (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar14 == 0)) {
          lVar27 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar24 + uVar14);
          lVar27 = (long)puVar2 + (ulong)*puVar2;
        }
        local_f8 = strlen((char *)(lVar27 + 4));
        bVar4 = *(byte *)(lVar27 + 4);
        local_108 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          local_108 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar27 + 5);
          do {
            local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar4 != 0);
        }
        local_f0 = (long *)0x0;
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 0xb) ||
           (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[5], uVar14 == 0)) {
          lVar28 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar24 + uVar14);
          lVar28 = (long)puVar2 + (ulong)*puVar2;
        }
        pcStack_100 = (char *)(lVar27 + 4);
        local_d8 = strlen((char *)(lVar28 + 4));
        bVar4 = *(byte *)(lVar28 + 4);
        local_e8 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          local_e8 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar28 + 5);
          do {
            local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar4 != 0);
        }
        local_d0 = (long *)0x0;
        if (*(ushort *)((long)piVar24 - (long)*piVar24) < 0xd) {
          lVar27 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[6];
          if (uVar14 == 0) {
            lVar27 = 0;
          }
          else {
            puVar2 = (uint *)((long)piVar24 + uVar14);
            lVar27 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        pcStack_e0 = (char *)(lVar28 + 4);
        local_b8 = strlen((char *)(lVar27 + 4));
        bVar4 = *(byte *)(lVar27 + 4);
        local_c8 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          local_c8 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar27 + 5);
          do {
            local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar4 != 0);
        }
        local_b0 = (long *)0x0;
        pcStack_c0 = (char *)(lVar27 + 4);
        uVar14 = FUN_0165ff30(&local_118);
        if ((uVar14 & 1) == 0) {
          iVar25 = 1;
          iVar9 = 1;
        }
        else if ((uVar17 + 1 < (ulong)*puVar20) && (*(int *)(lVar12 + 4 + (uVar17 + 1) * 4) != 0)) {
          iVar25 = 2;
          iVar9 = 2;
        }
        else {
          iVar25 = 0;
          iVar9 = 0;
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
          iVar9 = iVar25;
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (iVar9 != 0) {
          if (iVar9 != 2) {
            uVar10 = 0;
            goto joined_r0x016a9174;
          }
          break;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < *puVar20);
    }
  }
  else {
    if (((uVar5 < 0x19) || ((ulong)puVar19[0xc] == 0)) ||
       (puVar20 = (uint *)((long)piVar24 + (ulong)puVar19[0xc]),
       puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20), puVar20 == (uint *)0x0))
    goto LAB_016a9170;
    if (uVar3 < *puVar20) {
      do {
        piVar24 = (int *)((long)(puVar20 + uVar17 + 1) + (ulong)puVar20[uVar17 + 1]);
        local_108 = &DAT_cbf29ce484222645;
        pcStack_100 = "";
        local_f8 = 0;
        local_f0 = (long *)0x0;
        local_e8 = &DAT_cbf29ce484222645;
        pcStack_e0 = "";
        local_d8 = 0;
        local_d0 = (long *)0x0;
        local_c8 = &DAT_cbf29ce484222645;
        pcStack_c0 = "";
        local_b8 = 0;
        local_b0 = (long *)0x0;
        local_a8 = &DAT_cbf29ce484222645;
        puStack_a0 = &DAT_03996322;
        local_98 = 0;
        local_90 = (long *)0x0;
        local_88 = &DAT_cbf29ce484222645;
        puStack_80 = &DAT_03996322;
        local_78 = 0;
        local_70 = (long *)0x0;
        if (*(ushort *)((long)piVar24 - (long)*piVar24) < 5) {
          local_118 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
          local_118 = 0;
          if (uVar14 != 0) {
            local_118 = *(undefined8 *)((long)piVar24 + uVar14);
          }
        }
        if (*(ushort *)((long)piVar24 - (long)*piVar24) < 7) {
          local_110 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[3];
          local_110 = 0;
          if (uVar14 != 0) {
            local_110 = *(undefined8 *)((long)piVar24 + uVar14);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 9) ||
           (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar14 == 0)) {
          lVar27 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar24 + uVar14);
          lVar27 = (long)puVar2 + (ulong)*puVar2;
        }
        local_f8 = strlen((char *)(lVar27 + 4));
        bVar4 = *(byte *)(lVar27 + 4);
        local_108 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          local_108 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar27 + 5);
          do {
            local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar4 != 0);
        }
        local_f0 = (long *)0x0;
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 0xb) ||
           (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[5], uVar14 == 0)) {
          lVar28 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar24 + uVar14);
          lVar28 = (long)puVar2 + (ulong)*puVar2;
        }
        pcStack_100 = (char *)(lVar27 + 4);
        local_d8 = strlen((char *)(lVar28 + 4));
        bVar4 = *(byte *)(lVar28 + 4);
        local_e8 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          local_e8 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar28 + 5);
          do {
            local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar4 != 0);
        }
        local_d0 = (long *)0x0;
        if (*(ushort *)((long)piVar24 - (long)*piVar24) < 0xd) {
          lVar27 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[6];
          if (uVar14 == 0) {
            lVar27 = 0;
          }
          else {
            puVar2 = (uint *)((long)piVar24 + uVar14);
            lVar27 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        pcStack_e0 = (char *)(lVar28 + 4);
        local_b8 = strlen((char *)(lVar27 + 4));
        bVar4 = *(byte *)(lVar27 + 4);
        local_c8 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          local_c8 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar27 + 5);
          do {
            local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar4 != 0);
        }
        local_b0 = (long *)0x0;
        pcStack_c0 = (char *)(lVar27 + 4);
        uVar14 = FUN_0165ff30(&local_118);
        if ((uVar14 & 1) == 0) {
          iVar25 = 1;
          iVar9 = 1;
        }
        else {
          if (uVar17 + 1 < (ulong)*puVar20) {
            iVar25 = 5;
            iVar9 = 5;
            if (*(int *)(lVar12 + 4 + (uVar17 + 1) * 4) != 0) goto joined_r0x016a9118;
          }
          iVar25 = 0;
          iVar9 = 0;
        }
joined_r0x016a9118:
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
          iVar9 = iVar25;
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (iVar9 != 0) {
          if (iVar9 == 5) goto joined_r0x016a9168;
          goto LAB_016a9170;
        }
        uVar17 = uVar17 + 1;
        uVar10 = 1;
      } while (uVar17 < *puVar20);
      goto joined_r0x016a9174;
    }
  }
joined_r0x016a9168:
  uVar10 = 1;
joined_r0x016a9174:
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0xb];
    piVar24 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar24;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar7) {
        *piVar24 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return uVar10;
}


