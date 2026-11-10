/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02920868; name: FUN_02920868
 */


void FUN_02920868(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *__s;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  size_t __n;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  long *plVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 *puVar28;
  undefined8 uVar29;
  undefined1 *puVar30;
  long *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  char *local_88;
  size_t local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long local_58;
  
  piVar12 = (int *)*param_2;
  puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
  if ((*puVar18 < 0xd) || ((ulong)puVar18[6] == 0)) {
    puVar13 = (uint *)0x0;
  }
  else {
    puVar13 = (uint *)((long)piVar12 + (ulong)puVar18[6]);
    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
  }
  puVar30 = &DAT_cbf29ce484222645;
  if (*puVar13 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    do {
      piVar2 = (int *)((long)(puVar13 + uVar20 + 1) + (ulong)puVar13[uVar20 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar21 = 0;
        bVar6 = DAT_00000004;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar21 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar21 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar6 = *(byte *)(lVar21 + 4);
      }
      if (bVar6 != 0) {
        puVar28 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar21 + 5);
        do {
          puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
        if (puVar28 == (undefined1 *)0xa5d87c9ff14c683c) break;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != *puVar13);
  }
  puVar13 = (uint *)((long)((long)piVar12 + (ulong)puVar18[6]) +
                    (uVar20 & 0xffffffff) * 4 + (ulong)*(uint *)((long)piVar12 + (ulong)puVar18[6])
                    + 4);
  piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
  puVar13 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (8 - (long)*piVar12)));
  piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
  if (*(ushort *)((long)piVar12 - (long)*piVar12) < 5) {
    lVar21 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2];
    lVar21 = 0;
    if (uVar20 != 0) {
      puVar13 = (uint *)((long)piVar12 + uVar20);
      lVar21 = (long)puVar13 + (ulong)*puVar13;
    }
  }
  bVar6 = *(byte *)(lVar21 + 4);
  puVar28 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar28 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar21 + 5);
    do {
      puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  puVar14 = *(undefined1 **)(param_1 + 0x540);
  if (puVar14 == (undefined1 *)0x0) {
    return;
  }
  uVar20 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar20 < 2) {
    puVar22 = (undefined1 *)((ulong)(puVar14 + -1) & (ulong)puVar28);
  }
  else {
    puVar22 = puVar28;
    if (puVar14 <= puVar28) {
      uVar27 = 0;
      if (puVar14 != (undefined1 *)0x0) {
        uVar27 = (ulong)puVar28 / (ulong)puVar14;
      }
      puVar22 = puVar28 + -(uVar27 * (long)puVar14);
    }
  }
  lVar21 = *(long *)(param_1 + 0x538);
  plVar25 = *(long **)(lVar21 + (long)puVar22 * 8);
  if (plVar25 == (long *)0x0) {
    return;
  }
  plVar25 = (long *)*plVar25;
  if (plVar25 == (long *)0x0) {
    return;
  }
  if (uVar20 < 2) {
    do {
      if ((undefined1 *)plVar25[1] == puVar28) {
        if ((undefined1 *)plVar25[2] == puVar28) goto LAB_02920af4;
      }
      else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar14 + -1)) != puVar22) {
        return;
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    puVar26 = (undefined1 *)plVar25[1];
    if (puVar26 == puVar28) {
      if ((undefined1 *)plVar25[2] == puVar28) goto LAB_02920af4;
    }
    else {
      if (puVar14 <= puVar26) {
        uVar27 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar27 = (ulong)puVar26 / (ulong)puVar14;
        }
        puVar26 = puVar26 + -(uVar27 * (long)puVar14);
      }
      if (puVar26 != puVar22) {
        return;
      }
    }
    plVar25 = (long *)*plVar25;
    if (plVar25 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_02920fac:
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar21 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar21;
  (**(code **)(*(long *)plVar25[7] + 0x10))(&local_110);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_02913eb8(&local_70,&local_110);
  if (local_110 != (long *)0x0) {
    plVar25 = local_110 + 1;
    do {
      iVar10 = (int)*plVar25 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar8) {
        *(int *)plVar25 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_58 = *local_110;
      FUN_02a44274(lVar16 + 0xd8,&local_58);
    }
  }
  puVar19 = local_70;
  if (local_70 == (undefined8 *)0x0) {
    uVar29 = 0;
  }
  else {
    piVar12 = (int *)(local_70 + 1);
    uVar29 = *local_70;
    do {
      iVar10 = *piVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar8) {
        *piVar12 = iVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_110 = (long *)*puVar19;
      FUN_02a44274(lVar16 + 0xd8,&local_110);
    }
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  plVar25 = *(long **)(*(long *)(lVar21 + 0x158) + 0x60);
  iVar10 = (**(code **)(*plVar25 + 0xc0))(plVar25,local_88,uVar29,1,&LAB_0290f2d0,lVar21,0,0,0);
  if (iVar10 != 0) {
    FUN_0291629c(*(undefined8 *)(lVar21 + 0x178),&local_90,iVar10,uVar29,&local_110,0,0);
  }
  pcVar9 = local_108;
  if (local_108 == (code *)0x0) {
    local_108 = (code *)0x0;
  }
  else {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(&local_f0);
  }
  if (iVar10 != 0) goto joined_r0x02921420;
  goto LAB_02921234;
LAB_02921520:
  if (uVar20 < 2) {
    puVar28 = (undefined1 *)((ulong)puVar22 & (ulong)puVar28);
  }
  else if (puVar30 <= puVar28) {
    uVar27 = 0;
    if (puVar30 != (undefined1 *)0x0) {
      uVar27 = (ulong)puVar28 / (ulong)puVar30;
    }
    puVar28 = puVar28 + -(uVar27 * (long)puVar30);
  }
  plVar25 = *(long **)(lVar21 + (long)puVar28 * 8);
  do {
    plVar11 = plVar25;
    plVar25 = (long *)*plVar11;
  } while ((long *)*plVar11 != local_110);
  if (plVar11 != (long *)(param_1 + 0x568)) {
    puVar14 = (undefined1 *)plVar11[1];
    if (uVar20 < 2) {
      puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)puVar22);
    }
    else if (puVar30 <= puVar14) {
      uVar27 = 0;
      if (puVar30 != (undefined1 *)0x0) {
        uVar27 = (ulong)puVar14 / (ulong)puVar30;
      }
      puVar14 = puVar14 + -(uVar27 * (long)puVar30);
    }
    if (puVar14 == puVar28) goto LAB_029215e4;
  }
  if (*local_110 != 0) {
    puVar14 = *(undefined1 **)(*local_110 + 8);
    if (uVar20 < 2) {
      puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)puVar22);
    }
    else if (puVar30 <= puVar14) {
      uVar27 = 0;
      if (puVar30 != (undefined1 *)0x0) {
        uVar27 = (ulong)puVar14 / (ulong)puVar30;
      }
      puVar14 = puVar14 + -(uVar27 * (long)puVar30);
    }
    if (puVar14 == puVar28) goto LAB_029215e4;
  }
  *(undefined8 *)(lVar21 + (long)puVar28 * 8) = 0;
LAB_029215e4:
  lVar21 = *local_110;
  if (lVar21 != 0) {
    puVar14 = *(undefined1 **)(lVar21 + 8);
    if (uVar20 < 2) {
      puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)puVar22);
    }
    else if (puVar30 <= puVar14) {
      uVar20 = 0;
      if (puVar30 != (undefined1 *)0x0) {
        uVar20 = (ulong)puVar14 / (ulong)puVar30;
      }
      puVar14 = puVar14 + -(uVar20 * (long)puVar30);
    }
    if (puVar14 != puVar28) {
      *(long **)(*(long *)(param_1 + 0x538) + (long)puVar14 * 8) = plVar11;
      lVar21 = *local_110;
    }
  }
  *plVar11 = lVar21;
  local_108 = (code *)(param_1 + 0x570);
  *local_110 = 0;
  *(long *)(param_1 + 0x590) = *(long *)(param_1 + 0x590) + -1;
  local_100 = CONCAT71(local_100._1_7_,1);
  FUN_0292466c(&local_110);
  return;
LAB_02920af4:
  if (uVar20 < 2) {
    plVar25 = *(long **)(lVar21 + ((ulong)(puVar14 + -1) & (ulong)puVar28) * 8);
    do {
      do {
        plVar25 = (long *)*plVar25;
      } while ((undefined1 *)plVar25[1] != puVar28);
    } while ((undefined1 *)plVar25[2] != puVar28);
  }
  else {
    puVar22 = puVar28;
    if (puVar14 <= puVar28) {
      uVar20 = 0;
      if (puVar14 != (undefined1 *)0x0) {
        uVar20 = (ulong)puVar28 / (ulong)puVar14;
      }
      puVar22 = puVar28 + -(uVar20 * (long)puVar14);
    }
    plVar25 = *(long **)(lVar21 + (long)puVar22 * 8);
    do {
      do {
        plVar25 = (long *)*plVar25;
      } while ((undefined1 *)plVar25[1] != puVar28);
    } while ((undefined1 *)plVar25[2] != puVar28);
  }
  puVar15 = *(undefined8 **)((long)plVar25 + 0x18);
  puVar4 = *(undefined8 **)((long)plVar25 + 0x20);
  puVar19 = puVar15;
  if ((puVar15 != puVar4) && ((undefined8 *)*puVar15 != param_2)) {
    puVar23 = puVar15;
    do {
      puVar19 = puVar4;
      if (puVar4 + -1 == puVar23) break;
      puVar19 = puVar23 + 1;
      puVar1 = puVar23 + 1;
      puVar23 = puVar19;
    } while ((undefined8 *)*puVar1 != param_2);
  }
  if (puVar4 == puVar19) {
    return;
  }
  __n = (long)puVar4 - (long)(puVar19 + 1);
  if (__n != 0) {
    memmove(puVar19,puVar19 + 1,__n);
    puVar15 = *(undefined8 **)((long)plVar25 + 0x18);
  }
  *(undefined8 **)((long)plVar25 + 0x20) = puVar19 + ((long)__n >> 3);
  if (puVar15 != puVar19 + ((long)__n >> 3)) {
    return;
  }
  piVar12 = (int *)*param_2;
  puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
  if ((*puVar18 < 0xd) || ((ulong)puVar18[6] == 0)) {
    puVar13 = (uint *)0x0;
    uVar5 = uRam0000000000000000;
    if (uRam0000000000000000 != 0) goto LAB_02920c1c;
LAB_02920cc0:
    uVar20 = 0;
  }
  else {
    puVar13 = (uint *)((long)piVar12 + (ulong)puVar18[6]);
    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    uVar5 = *puVar13;
    if (*puVar13 == 0) goto LAB_02920cc0;
LAB_02920c1c:
    uVar20 = 0;
    do {
      piVar2 = (int *)((long)(puVar13 + uVar20 + 1) + (ulong)puVar13[uVar20 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar21 = 0;
        bVar6 = DAT_00000004;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar21 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar21 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar6 = *(byte *)(lVar21 + 4);
      }
      if (bVar6 != 0) {
        puVar14 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar21 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
        if (puVar14 == (undefined1 *)0x999b0a7bcbf06bfc) break;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar5);
  }
  puVar13 = (uint *)((long)((long)piVar12 + (ulong)puVar18[6]) +
                    (uVar20 & 0xffffffff) * 4 + (ulong)*(uint *)((long)piVar12 + (ulong)puVar18[6])
                    + 4);
  piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
  puVar13 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar20 == 0)) {
    lVar21 = 0;
  }
  else {
    puVar13 = (uint *)((long)piVar2 + uVar20);
    lVar21 = (long)puVar13 + (ulong)*puVar13;
  }
  __s = (char *)(lVar21 + 4);
  local_80 = strlen(__s);
  bVar6 = *(byte *)(lVar21 + 4);
  local_90 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    local_90 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar21 + 5);
    do {
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  local_78 = (long *)0x0;
  local_88 = __s;
  if (*__s != '\0') {
    puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
    if ((*puVar18 < 0xd) || ((ulong)puVar18[6] == 0)) {
      puVar13 = (uint *)0x0;
      uVar5 = uRam0000000000000000;
      if (uRam0000000000000000 != 0) goto LAB_02920d94;
LAB_02920e38:
      uVar20 = 0;
    }
    else {
      puVar13 = (uint *)((long)piVar12 + (ulong)puVar18[6]);
      puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
      uVar5 = *puVar13;
      if (*puVar13 == 0) goto LAB_02920e38;
LAB_02920d94:
      uVar20 = 0;
      do {
        piVar2 = (int *)((long)(puVar13 + uVar20 + 1) + (ulong)puVar13[uVar20 + 1]);
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
          lVar21 = 0;
          bVar6 = DAT_00000004;
        }
        else {
          uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
          lVar21 = 0;
          if (uVar27 != 0) {
            puVar3 = (uint *)((long)piVar2 + uVar27);
            lVar21 = (long)puVar3 + (ulong)*puVar3;
          }
          bVar6 = *(byte *)(lVar21 + 4);
        }
        if (bVar6 != 0) {
          puVar14 = &DAT_cbf29ce484222645;
          pbVar17 = (byte *)(lVar21 + 5);
          do {
            puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar6 != 0);
          if (puVar14 == (undefined1 *)0x352b79c017918034) break;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar5);
    }
    puVar13 = (uint *)((long)((long)piVar12 + (ulong)puVar18[6]) +
                      (uVar20 & 0xffffffff) * 4 +
                      (ulong)*(uint *)((long)piVar12 + (ulong)puVar18[6]) + 4);
    piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
    puVar13 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (8 - (long)*piVar12)));
    piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar20 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar20 == 0)) {
      lVar21 = 0;
      bVar6 = DAT_00000004;
    }
    else {
      puVar13 = (uint *)((long)piVar12 + uVar20);
      lVar21 = (long)puVar13 + (ulong)*puVar13;
      bVar6 = *(byte *)(lVar21 + 4);
    }
    if (bVar6 == 0) {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar21 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar21;
      uVar29 = *(undefined8 *)(param_1 + 0x430);
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      plVar25 = *(long **)(*(long *)(lVar21 + 0x158) + 0x60);
      iVar10 = (**(code **)(*plVar25 + 0xc0))(plVar25,local_88,uVar29,1,&LAB_0290f2d0,lVar21,0,0,0);
      if (iVar10 != 0) {
        FUN_0291629c(*(undefined8 *)(lVar21 + 0x178),&local_90,iVar10,uVar29,&local_110,0,0);
        pcVar9 = local_108;
        bVar8 = local_108 != (code *)0x0;
        local_108 = (code *)0x0;
        if (bVar8) {
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = (long *)0x0;
          local_108 = (code *)0x0;
          (*pcVar9)(&local_f0);
        }
        goto joined_r0x02921420;
      }
    }
    else {
      puVar14 = &DAT_cbf29ce484222645;
      pbVar17 = (byte *)(lVar21 + 5);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar6 != 0);
      puVar22 = *(undefined1 **)(param_1 + 0x460);
      if (puVar22 != (undefined1 *)0x0) {
        uVar20 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          puVar26 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)puVar14);
        }
        else {
          puVar26 = puVar14;
          if (puVar22 <= puVar14) {
            uVar27 = 0;
            if (puVar22 != (undefined1 *)0x0) {
              uVar27 = (ulong)puVar14 / (ulong)puVar22;
            }
            puVar26 = puVar14 + -(uVar27 * (long)puVar22);
          }
        }
        plVar25 = *(long **)(*(long *)(param_1 + 0x458) + (long)puVar26 * 8);
        if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
          if (uVar20 < 2) {
            do {
              if ((undefined1 *)plVar25[1] == puVar14) {
                if ((undefined1 *)plVar25[2] == puVar14) goto LAB_02920fac;
              }
              else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar22 + -1)) != puVar26) break;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              puVar24 = (undefined1 *)plVar25[1];
              if (puVar24 == puVar14) {
                if ((undefined1 *)plVar25[2] == puVar14) goto LAB_02920fac;
              }
              else {
                if (puVar22 <= puVar24) {
                  uVar20 = 0;
                  if (puVar22 != (undefined1 *)0x0) {
                    uVar20 = (ulong)puVar24 / (ulong)puVar22;
                  }
                  puVar24 = puVar24 + -(uVar20 * (long)puVar22);
                }
                if (puVar24 != puVar26) break;
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
      }
    }
  }
LAB_02921234:
  piVar12 = (int *)*param_2;
  puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
  if ((*puVar18 < 0xd) || ((ulong)puVar18[6] == 0)) {
    puVar13 = (uint *)0x0;
    uVar5 = uRam0000000000000000;
    if (uRam0000000000000000 != 0) goto LAB_02921268;
LAB_0292130c:
    uVar20 = 0;
  }
  else {
    puVar13 = (uint *)((long)piVar12 + (ulong)puVar18[6]);
    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    uVar5 = *puVar13;
    if (*puVar13 == 0) goto LAB_0292130c;
LAB_02921268:
    uVar20 = 0;
    do {
      piVar2 = (int *)((long)(puVar13 + uVar20 + 1) + (ulong)puVar13[uVar20 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar21 = 0;
        bVar6 = DAT_00000004;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar21 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar21 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar6 = *(byte *)(lVar21 + 4);
      }
      if (bVar6 != 0) {
        puVar14 = &DAT_cbf29ce484222645;
        pbVar17 = (byte *)(lVar21 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar6 != 0);
        if (puVar14 == (undefined1 *)0xa5d87c9ff14c683c) break;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar5);
  }
  puVar13 = (uint *)((long)((long)piVar12 + (ulong)puVar18[6]) +
                    (uVar20 & 0xffffffff) * 4 + (ulong)*(uint *)((long)piVar12 + (ulong)puVar18[6])
                    + 4);
  piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
  puVar13 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (8 - (long)*piVar12)));
  piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar20 == 0)) {
    lVar21 = 0;
    bVar6 = DAT_00000004;
  }
  else {
    puVar13 = (uint *)((long)piVar12 + uVar20);
    lVar21 = (long)puVar13 + (ulong)*puVar13;
    bVar6 = *(byte *)(lVar21 + 4);
  }
  if (bVar6 != 0) {
    pbVar17 = (byte *)(lVar21 + 5);
    do {
      puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  for (plVar25 = *(long **)(param_1 + 0x210); plVar25 != *(long **)(param_1 + 0x218);
      plVar25 = plVar25 + 2) {
    puVar19 = (undefined8 *)PTR_DAT_04379c88;
    if (*plVar25 != 0) {
      puVar19 = (undefined8 *)(*plVar25 + 0x58);
    }
    if ((undefined1 *)*puVar19 == puVar30) {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar21 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar21;
      if ((int)plVar25[1] != 0) {
        plVar11 = *(long **)(*(long *)(lVar21 + 0x158) + 0x60);
        (**(code **)(*plVar11 + 200))(plVar11,(int)plVar25[1],0,4);
      }
      break;
    }
  }
joined_r0x02921420:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar30 = *(undefined1 **)(param_1 + 0x540);
  if (puVar30 != (undefined1 *)0x0) {
    uVar20 = (long)puVar30 - ((ulong)puVar30 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar30 + -1) & (ulong)puVar28);
    }
    else {
      puVar14 = puVar28;
      if (puVar30 <= puVar28) {
        uVar27 = 0;
        if (puVar30 != (undefined1 *)0x0) {
          uVar27 = (ulong)puVar28 / (ulong)puVar30;
        }
        puVar14 = puVar28 + -(uVar27 * (long)puVar30);
      }
    }
    lVar21 = *(long *)(param_1 + 0x538);
    puVar19 = *(undefined8 **)(lVar21 + (long)puVar14 * 8);
    if ((puVar19 != (undefined8 *)0x0) && (local_110 = (long *)*puVar19, local_110 != (long *)0x0))
    {
      puVar22 = puVar30 + -1;
      if (uVar20 < 2) {
        do {
          if ((undefined1 *)local_110[1] == puVar28) {
            if ((undefined1 *)local_110[2] == puVar28) goto LAB_02921520;
          }
          else if ((undefined1 *)((ulong)local_110[1] & (ulong)puVar22) != puVar14) {
            return;
          }
          local_110 = (long *)*local_110;
        } while (local_110 != (long *)0x0);
      }
      else {
        do {
          puVar26 = (undefined1 *)local_110[1];
          if (puVar26 == puVar28) {
            if ((undefined1 *)local_110[2] == puVar28) goto LAB_02921520;
          }
          else {
            if (puVar30 <= puVar26) {
              uVar27 = 0;
              if (puVar30 != (undefined1 *)0x0) {
                uVar27 = (ulong)puVar26 / (ulong)puVar30;
              }
              puVar26 = puVar26 + -(uVar27 * (long)puVar30);
            }
            if (puVar26 != puVar14) {
              return;
            }
          }
          local_110 = (long *)*local_110;
        } while (local_110 != (long *)0x0);
      }
    }
  }
  return;
}


