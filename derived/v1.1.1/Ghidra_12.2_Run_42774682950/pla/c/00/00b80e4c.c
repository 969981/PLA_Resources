/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b80e4c; name: FUN_00b80e4c
 */


void FUN_00b80e4c(long param_1,undefined8 *param_2,uint *param_3,int *param_4,int *param_5)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ushort *puVar15;
  uint *puVar16;
  int *piVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  int iVar29;
  uint *puVar30;
  ulong local_138;
  long *local_108;
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined8 local_d8;
  long *plStack_d0;
  long *local_80;
  int *local_78;
  int *piStack_70;
  
  puVar8 = PTR_DAT_0437ae48;
  puVar7 = PTR_DAT_0437ae40;
  if (param_3 == (uint *)0x0) {
    return;
  }
  lVar26 = *(long *)(param_1 + 0x80);
  if (lVar26 == 0) {
    return;
  }
  if (*(int *)(lVar26 + 0xc) == 0) {
    return;
  }
  piVar17 = (int *)(lVar26 + 0xc);
  iVar29 = *(int *)(lVar26 + 0xc);
  do {
    plVar23 = *(long **)(lVar26 + 0x10);
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) {
        return;
      }
      if (plVar23 == (long *)puVar8) break;
      plVar23 = (long *)*plVar23;
    }
    iVar11 = *piVar17;
    if (iVar11 == iVar29) {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar10) {
        *piVar17 = iVar29 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar26 = *(long *)(lVar26 + 0x18);
        plVar23 = (long *)(lVar26 + -0x50);
        if (lVar26 == 0) {
          return;
        }
        puVar27 = param_3 + 1;
        if (*param_3 == 0) goto LAB_00b80f38;
        puVar2 = puVar27 + *param_3;
        lVar28 = (long)param_3 + 9;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar29 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
LAB_00b80f94:
  uVar4 = *puVar27;
  piVar17 = (int *)((long)puVar27 + (ulong)uVar4);
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 7) {
    lVar25 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3];
    lVar25 = 0;
    if (uVar13 != 0) {
      puVar30 = (uint *)((long)piVar17 + uVar13);
      lVar25 = (long)puVar30 + (ulong)*puVar30;
    }
  }
  FUN_00bb6368(&local_80,plVar23,*(undefined8 *)(param_1 + 0xa0),lVar25 + 4);
  if (local_80 != (long *)0x0) {
    if (*(ushort *)((long)piVar17 - (long)*piVar17) < 5) {
      lVar25 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2];
      lVar25 = 0;
      if (uVar13 != 0) {
        puVar30 = (uint *)((long)piVar17 + uVar13);
        lVar25 = (long)puVar30 + (ulong)*puVar30;
      }
    }
    FUN_00b85474(local_80,lVar25 + 4);
    if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 9) ||
       (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[4], uVar13 == 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = *(char *)((long)piVar17 + uVar13) != '\0';
    }
    FUN_00b8547c(local_80,bVar10);
    if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xb) {
      lVar25 = 0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[5];
      lVar25 = 0;
      if (uVar13 != 0) {
        puVar30 = (uint *)((long)piVar17 + uVar13);
        lVar25 = (long)puVar30 + (ulong)*puVar30;
      }
    }
    FUN_00b85488(local_80,lVar25 + 4);
    puVar15 = (ushort *)((long)piVar17 - (long)*piVar17);
    puVar30 = (uint *)((long)piVar17 + (ulong)puVar15[2]);
    uVar13 = (ulong)*puVar30;
    bVar5 = *(byte *)((long)puVar30 + uVar13 + 4);
    puVar14 = &DAT_cbf29ce484222645;
    if (bVar5 != 0) {
      puVar14 = &DAT_cbf29ce484222645;
      pbVar18 = (byte *)(lVar28 + uVar13 + puVar15[2] + (ulong)uVar4);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar5 != 0);
    }
    if ((0xc < *puVar15) && ((ulong)puVar15[6] != 0)) {
      puVar30 = (uint *)((long)piVar17 + (ulong)puVar15[6]);
      puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30);
      if (param_5 == (int *)0x0) goto LAB_00b81104;
LAB_00b814d4:
      uVar13 = (ulong)*(ushort *)((long)param_5 + (8 - (long)*param_5));
      puVar3 = (uint *)((long)param_5 + uVar13);
      uVar19 = (ulong)*puVar3;
      puVar3 = (uint *)((long)puVar3 + uVar19);
      puVar16 = puVar3 + 1;
      uVar4 = *puVar3;
      if (uVar4 != 0) {
        puVar3 = puVar16 + uVar4;
        lVar25 = (long)param_5 + uVar19 + uVar13 + 9;
        do {
          piVar17 = (int *)((long)puVar16 + (ulong)*puVar16);
          puVar15 = (ushort *)((long)piVar17 - (long)*piVar17);
          puVar24 = (uint *)((long)piVar17 + (ulong)puVar15[2]);
          uVar13 = (ulong)*puVar24;
          bVar5 = *(byte *)((long)puVar24 + uVar13 + 4);
          puVar22 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            puVar22 = &DAT_cbf29ce484222645;
            pbVar18 = (byte *)(lVar25 + uVar13 + puVar15[2] + (ulong)*puVar16);
            do {
              puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar5 != 0);
          }
          if (puVar22 == puVar14) goto LAB_00b815e8;
          puVar16 = puVar16 + 1;
          puVar24 = (uint *)0x0;
          lVar25 = lVar25 + 4;
        } while (puVar16 != puVar3);
        goto LAB_00b81130;
      }
      goto LAB_00b8112c;
    }
    puVar30 = (uint *)0x0;
    if (param_5 != (int *)0x0) goto LAB_00b814d4;
LAB_00b81104:
    if (param_4 == (int *)0x0) goto LAB_00b8112c;
    uVar13 = (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4));
    puVar3 = (uint *)((long)param_4 + uVar13);
    uVar19 = (ulong)*puVar3;
    puVar3 = (uint *)((long)puVar3 + uVar19);
    puVar16 = puVar3 + 1;
    uVar4 = *puVar3;
    if (uVar4 == 0) goto LAB_00b8112c;
    puVar3 = puVar16 + uVar4;
    lVar25 = (long)param_4 + uVar19 + uVar13 + 9;
    do {
      piVar17 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar15 = (ushort *)((long)piVar17 - (long)*piVar17);
      puVar24 = (uint *)((long)piVar17 + (ulong)puVar15[2]);
      uVar13 = (ulong)*puVar24;
      bVar5 = *(byte *)((long)puVar24 + uVar13 + 4);
      puVar22 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar22 = &DAT_cbf29ce484222645;
        pbVar18 = (byte *)(lVar25 + uVar13 + puVar15[2] + (ulong)*puVar16);
        do {
          puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar5 != 0);
      }
      if (puVar22 == puVar14) goto LAB_00b815e8;
      puVar16 = puVar16 + 1;
      puVar24 = (uint *)0x0;
      lVar25 = lVar25 + 4;
    } while (puVar16 != puVar3);
    goto LAB_00b81130;
  }
  goto LAB_00b81274;
LAB_00b815e8:
  if ((*puVar15 < 7) || ((ulong)puVar15[3] == 0)) {
LAB_00b8112c:
    puVar24 = (uint *)0x0;
  }
  else {
    puVar24 = (uint *)((long)piVar17 + (ulong)puVar15[3]);
    puVar24 = (uint *)((long)puVar24 + (ulong)*puVar24);
  }
LAB_00b81130:
  local_d8 = 0;
  plStack_d0 = local_80;
  local_100 = FUN_00b82950;
  local_f0 = &LAB_00b82970;
  local_f8 = FUN_00b8296c;
  local_e0 = FUN_00b8550c;
  local_e8 = &LAB_00b82984;
  uVar4 = *puVar30;
  if (uVar4 != 0) {
    puVar16 = puVar30 + 1;
    if (puVar24 == (uint *)0x0) {
      local_78 = (int *)((long)puVar16 + (ulong)*puVar16);
      piStack_70 = (int *)0x0;
      FUN_00b82950(&local_e0,&local_78);
      if (uVar4 != 1) {
        local_78 = (int *)((long)(puVar30 + 2) + (ulong)puVar30[2]);
        piStack_70 = (int *)0x0;
        (*local_100)(&local_e0,&local_78);
        if (uVar4 != 2) {
          local_78 = (int *)((long)(puVar30 + 3) + (ulong)puVar30[3]);
          piStack_70 = (int *)0x0;
          (*local_100)(&local_e0,&local_78);
          if (uVar4 != 3) {
            lVar25 = (ulong)uVar4 - 3;
            puVar30 = puVar30 + 4;
            do {
              local_78 = (int *)((long)puVar30 + (ulong)*puVar30);
              piStack_70 = (int *)0x0;
              (*local_100)(&local_e0,&local_78);
              lVar25 = lVar25 + -1;
              puVar30 = puVar30 + 1;
            } while (lVar25 != 0);
          }
        }
      }
    }
    else {
      local_138 = 0;
      lVar25 = (long)puVar30 + 9;
      do {
        uVar13 = (ulong)puVar16[local_138];
        local_78 = (int *)((long)(puVar16 + local_138) + uVar13);
        uVar19 = (ulong)*(ushort *)((long)local_78 + (4 - (long)*local_78));
        puVar30 = (uint *)((long)local_78 + uVar19);
        uVar21 = (ulong)*puVar30;
        bVar5 = *(byte *)((long)puVar30 + uVar21 + 4);
        puVar14 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar14 = &DAT_cbf29ce484222645;
          pbVar18 = (byte *)(lVar25 + uVar21 + uVar19 + uVar13);
          do {
            puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar5 != 0);
        }
        if (*puVar24 == 0) {
          piStack_70 = (int *)0x0;
        }
        else {
          piVar17 = (int *)0x0;
          lVar20 = (long)puVar24 + 9;
          puVar30 = puVar24 + 1;
          do {
            piStack_70 = (int *)((long)puVar30 + (ulong)*puVar30);
            uVar19 = (ulong)*(ushort *)((long)piStack_70 + (4 - (long)*piStack_70));
            puVar3 = (uint *)((long)piStack_70 + uVar19);
            uVar13 = (ulong)*puVar3;
            bVar5 = *(byte *)((long)puVar3 + uVar13 + 4);
            puVar22 = &DAT_cbf29ce484222645;
            if (bVar5 != 0) {
              puVar22 = &DAT_cbf29ce484222645;
              pbVar18 = (byte *)(lVar20 + uVar13 + uVar19 + (ulong)*puVar30);
              do {
                puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (bVar5 != 0);
            }
            puVar30 = puVar30 + 1;
            if (puVar14 != puVar22) {
              piStack_70 = piVar17;
            }
          } while ((puVar30 != puVar24 + 1 + *puVar24) &&
                  (lVar20 = lVar20 + 4, piVar17 = piStack_70, puVar14 != puVar22));
        }
        (*local_100)(&local_e0,&local_78);
        local_138 = local_138 + 1;
        lVar25 = lVar25 + 4;
      } while (local_138 != uVar4);
    }
  }
  pcVar9 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar9)(&local_e0);
  }
  uVar12 = *param_2;
  local_108 = local_80;
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 10;
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_00bbde98(uVar12,&local_108);
  if (local_108 != (long *)0x0) {
    plVar1 = local_108 + 10;
    do {
      iVar29 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar29;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 10;
    do {
      iVar29 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar29;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
LAB_00b81274:
  puVar27 = puVar27 + 1;
  lVar28 = lVar28 + 4;
  if (puVar27 == puVar2) {
LAB_00b80f38:
    lVar26 = *(long *)(lVar26 + 8);
    piVar17 = (int *)(lVar26 + 0xc);
    do {
      iVar29 = *piVar17;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar10) {
        *piVar17 = iVar29 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar29 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    return;
  }
  goto LAB_00b80f94;
}


