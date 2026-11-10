/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01096640; name: FUN_01096640
 */


float FUN_01096640(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  size_t sVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  int *piVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  long *plVar22;
  undefined1 *puVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 *local_140;
  char *pcStack_138;
  size_t local_130;
  long *local_128;
  undefined1 *local_120;
  char *pcStack_118;
  size_t local_110;
  long *local_108;
  undefined1 *local_100;
  char *pcStack_f8;
  size_t local_f0;
  long *local_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  size_t local_d0;
  long *local_c8;
  undefined1 *local_c0;
  char *pcStack_b8;
  size_t local_b0;
  long *local_a8;
  float local_9c [11];
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x5f) ||
     (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x2f], uVar11 == 0)) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar11);
    piVar14 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  puVar23 = &DAT_cbf29ce484222645;
  local_140 = &DAT_cbf29ce484222645;
  pcStack_138 = "";
  local_130 = 0;
  local_128 = (long *)0x0;
  local_120 = &DAT_cbf29ce484222645;
  pcStack_118 = "";
  local_110 = 0;
  local_108 = (long *)0x0;
  local_100 = &DAT_cbf29ce484222645;
  pcStack_f8 = "";
  local_f0 = 0;
  local_e8 = (long *)0x0;
  local_e0 = &DAT_cbf29ce484222645;
  pcStack_d8 = "";
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_c0 = &DAT_cbf29ce484222645;
  pcStack_b8 = "";
  local_b0 = 0;
  local_a8 = (long *)0x0;
  puVar12 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar3 = *puVar12;
  if (uVar3 < 5) {
    local_150 = (undefined1 *)0x0;
LAB_01097244:
    local_148 = 0;
LAB_01097248:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar17 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar21 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar10 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar22 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    local_150 = (undefined1 *)0x0;
    if ((ulong)puVar12[2] != 0) {
      puVar17 = *(undefined1 **)((long)piVar14 + (ulong)puVar12[2]);
      local_150 = (undefined1 *)0x344570c1301a7584;
      if (puVar17 != &DAT_cbf29ce484222645) {
        local_150 = puVar17;
      }
    }
    if (uVar3 < 7) goto LAB_01097244;
    local_148 = 0;
    if ((ulong)puVar12[3] != 0) {
      local_148 = *(undefined8 *)((long)piVar14 + (ulong)puVar12[3]);
    }
    if ((uVar3 < 9) || (uVar11 = (ulong)puVar12[4], uVar11 == 0)) goto LAB_01097248;
    puVar1 = (uint *)((long)piVar14 + uVar11);
    uVar24 = (ulong)*puVar1;
    pcVar21 = (char *)((long)puVar1 + uVar24 + 4);
    sVar10 = strlen(pcVar21);
    bVar2 = *(byte *)((long)puVar1 + uVar24 + 4);
    if (bVar2 == 0) {
      plVar22 = (long *)0x0;
      puVar17 = &DAT_cbf29ce484222645;
    }
    else {
      puVar17 = &DAT_cbf29ce484222645;
      pbVar15 = (byte *)((long)piVar14 + uVar24 + uVar11 + 5);
      do {
        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      plVar22 = (long *)0x0;
    }
  }
  plVar8 = local_128;
  local_128 = (long *)0x0;
  local_140 = puVar17;
  pcStack_138 = pcVar21;
  local_130 = sVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_128 = plVar22;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xb) ||
     (uVar11 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[5], uVar11 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar17 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar21 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar10 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar22 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    puVar1 = (uint *)((long)piVar14 + uVar11);
    uVar24 = (ulong)*puVar1;
    pcVar21 = (char *)((long)puVar1 + uVar24 + 4);
    sVar10 = strlen(pcVar21);
    bVar2 = *(byte *)((long)puVar1 + uVar24 + 4);
    if (bVar2 == 0) {
      plVar22 = (long *)0x0;
      puVar17 = &DAT_cbf29ce484222645;
    }
    else {
      puVar17 = &DAT_cbf29ce484222645;
      pbVar15 = (byte *)((long)piVar14 + uVar24 + uVar11 + 5);
      do {
        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      plVar22 = (long *)0x0;
    }
  }
  plVar8 = local_108;
  local_108 = (long *)0x0;
  local_120 = puVar17;
  pcStack_118 = pcVar21;
  local_110 = sVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_108 = plVar22;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xd) ||
     (uVar11 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar11 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar17 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar21 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar10 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar22 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    puVar1 = (uint *)((long)piVar14 + uVar11);
    uVar24 = (ulong)*puVar1;
    pcVar21 = (char *)((long)puVar1 + uVar24 + 4);
    sVar10 = strlen(pcVar21);
    bVar2 = *(byte *)((long)puVar1 + uVar24 + 4);
    if (bVar2 == 0) {
      plVar22 = (long *)0x0;
      puVar17 = &DAT_cbf29ce484222645;
    }
    else {
      puVar17 = &DAT_cbf29ce484222645;
      pbVar15 = (byte *)((long)piVar14 + uVar24 + uVar11 + 5);
      do {
        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      plVar22 = (long *)0x0;
    }
  }
  plVar8 = local_e8;
  local_e8 = (long *)0x0;
  local_100 = puVar17;
  pcStack_f8 = pcVar21;
  local_f0 = sVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_e8 = plVar22;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xf) ||
     (uVar11 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[7], uVar11 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar17 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar21 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar10 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar22 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    puVar1 = (uint *)((long)piVar14 + uVar11);
    uVar24 = (ulong)*puVar1;
    pcVar21 = (char *)((long)puVar1 + uVar24 + 4);
    sVar10 = strlen(pcVar21);
    bVar2 = *(byte *)((long)puVar1 + uVar24 + 4);
    if (bVar2 == 0) {
      plVar22 = (long *)0x0;
      puVar17 = &DAT_cbf29ce484222645;
    }
    else {
      puVar17 = &DAT_cbf29ce484222645;
      pbVar15 = (byte *)((long)piVar14 + uVar24 + uVar11 + 5);
      do {
        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      plVar22 = (long *)0x0;
    }
  }
  plVar8 = local_c8;
  local_c8 = (long *)0x0;
  local_e0 = puVar17;
  pcStack_d8 = pcVar21;
  local_d0 = sVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_c8 = plVar22;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0x11) ||
     (uVar11 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[8], uVar11 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar23 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcVar21 = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar10 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar22 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    puVar1 = (uint *)((long)piVar14 + uVar11);
    uVar24 = (ulong)*puVar1;
    pcVar21 = (char *)((long)puVar1 + uVar24 + 4);
    sVar10 = strlen(pcVar21);
    bVar2 = *(byte *)((long)puVar1 + uVar24 + 4);
    if (bVar2 != 0) {
      pbVar15 = (byte *)((long)piVar14 + uVar24 + uVar11 + 5);
      do {
        puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
    }
    plVar22 = (long *)0x0;
  }
  plVar8 = local_a8;
  local_a8 = (long *)0x0;
  local_c0 = puVar23;
  pcStack_b8 = pcVar21;
  local_b0 = sVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_a8 = plVar22;
  uVar11 = FUN_0165ff30(&local_150);
  puVar7 = PTR_DAT_0437a718;
  puVar6 = PTR_DAT_0437a710;
  puVar5 = PTR_DAT_0437a708;
  if ((uVar11 & 1) == 0) {
    fVar26 = 0.0;
    goto joined_r0x01096be4;
  }
  puVar12 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar12;
  fVar26 = 0.0;
  if (uVar3 < 5) {
    uVar11 = 0;
LAB_01097284:
    uVar24 = 0;
    piVar14 = (int *)0x0;
  }
  else {
    if ((ulong)puVar12[2] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)*(uint *)((long)param_1 + (ulong)puVar12[2]);
    }
    if (uVar3 < 0xb) goto LAB_01097284;
    if ((ulong)puVar12[5] == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = (ulong)*(uint *)((long)param_1 + (ulong)puVar12[5]);
    }
    if (uVar3 < 0x3f) {
LAB_01096bd4:
      piVar14 = (int *)0x0;
    }
    else {
      iVar9 = 0;
      if ((ulong)puVar12[0x1f] != 0) {
        iVar9 = *(int *)((long)param_1 + (ulong)puVar12[0x1f]);
      }
      fVar26 = (float)iVar9;
      if (uVar3 < 0x5f) goto LAB_01096bd4;
      piVar14 = (int *)0x0;
      if ((ulong)puVar12[0x2f] != 0) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar12[0x2f]);
        piVar14 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
  }
  puVar12 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar3 = *puVar12;
  if (uVar3 < 0x13) {
    local_9c[0] = 0.0;
LAB_01097294:
    local_9c[1] = 0.0;
LAB_01097298:
    local_9c[2] = 0.0;
    local_9c[3] = 0.0;
  }
  else {
    if ((ulong)puVar12[9] == 0) {
      local_9c[0] = 0.0;
    }
    else {
      local_9c[0] = *(float *)((long)piVar14 + (ulong)puVar12[9]);
    }
    if (uVar3 < 0x15) goto LAB_01097294;
    if ((ulong)puVar12[10] == 0) {
      local_9c[1] = 0.0;
    }
    else {
      local_9c[1] = *(float *)((long)piVar14 + (ulong)puVar12[10]);
    }
    if (uVar3 < 0x17) goto LAB_01097298;
    local_9c[3] = 0.0;
    local_9c[2] = 0.0;
    if ((ulong)puVar12[0xb] != 0) {
      local_9c[2] = *(float *)((long)piVar14 + (ulong)puVar12[0xb]);
    }
    if ((0x18 < uVar3) && ((ulong)puVar12[0xc] != 0)) {
      local_9c[3] = *(float *)((long)piVar14 + (ulong)puVar12[0xc]);
    }
  }
  if ((3 < param_2) || (fVar25 = local_9c[param_2], ABS(-1.0 - fVar25) < 1.1920929e-07)) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    uVar18 = *(ulong *)(lVar13 + 0x4c38);
    if (uVar18 != 0) {
      uVar16 = uVar11 << 0x20 | (uVar24 & 0xffff) << 0x10;
      uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar20 = uVar18 - 1 & uVar16;
      }
      else if (uVar16 < uVar18) {
        uVar20 = uVar16;
      }
      else {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar16 / uVar18;
        }
        uVar20 = uVar16 - uVar20 * uVar18;
      }
      plVar22 = *(long **)(*(long *)(lVar13 + 0x4c30) + uVar20 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar22[1] == uVar16) {
              if (plVar22[2] == uVar16) goto LAB_01096c78;
            }
            else if ((plVar22[1] & uVar18 - 1) != uVar20) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar22[1];
            if (uVar19 == uVar16) {
              if (plVar22[2] == uVar16) goto LAB_01096c78;
            }
            else {
              if (uVar18 <= uVar19) {
                uVar4 = 0;
                if (uVar18 != 0) {
                  uVar4 = uVar19 / uVar18;
                }
                uVar19 = uVar19 - uVar4 * uVar18;
              }
              if (uVar19 != uVar20) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    plVar22 = *(long **)(lVar13 + 0x4c60);
LAB_01096c78:
    piVar14 = (int *)plVar22[3];
    puVar12 = (ushort *)((long)piVar14 - (long)*piVar14);
    uVar3 = *puVar12;
    if (uVar3 < 9) {
      local_9c[0] = 0.0;
LAB_010972f8:
      local_9c[1] = 0.0;
LAB_010972fc:
      local_9c[2] = 0.0;
      local_9c[3] = 0.0;
    }
    else {
      if ((ulong)puVar12[4] == 0) {
        local_9c[0] = 0.0;
      }
      else {
        local_9c[0] = *(float *)((long)piVar14 + (ulong)puVar12[4]);
      }
      if (uVar3 < 0xb) goto LAB_010972f8;
      if ((ulong)puVar12[5] == 0) {
        local_9c[1] = 0.0;
      }
      else {
        local_9c[1] = *(float *)((long)piVar14 + (ulong)puVar12[5]);
      }
      if (uVar3 < 0xd) goto LAB_010972fc;
      local_9c[3] = 0.0;
      local_9c[2] = 0.0;
      if ((ulong)puVar12[6] != 0) {
        local_9c[2] = *(float *)((long)piVar14 + (ulong)puVar12[6]);
      }
      if ((0xe < uVar3) && ((ulong)puVar12[7] != 0)) {
        local_9c[3] = *(float *)((long)piVar14 + (ulong)puVar12[7]);
      }
    }
    if ((param_2 < 4) && (fVar25 = local_9c[param_2], 1.1920929e-07 <= ABS(-1.0 - fVar25)))
    goto LAB_01096d14;
  }
  else {
LAB_01096d14:
    fVar26 = fVar26 * fVar25;
  }
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0x5f) {
    piVar14 = (int *)0x0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x2f];
    piVar14 = (int *)0x0;
    if (uVar18 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar18);
      piVar14 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  local_9c[0] = -1.0;
  puVar12 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar3 = *puVar12;
  if (uVar3 < 0x1b) {
    local_9c[1] = 0.0;
LAB_010972b0:
    local_9c[2] = 0.0;
LAB_010972b4:
    local_9c[3] = 0.0;
LAB_010972b8:
    local_9c[4] = 0.0;
LAB_010972bc:
    local_9c[5] = 0.0;
LAB_010972c0:
    local_9c[6] = 0.0;
LAB_010972c4:
    local_9c[7] = 0.0;
    local_9c[8] = 0.0;
  }
  else {
    if ((ulong)puVar12[0xd] == 0) {
      local_9c[1] = 0.0;
    }
    else {
      local_9c[1] = *(float *)((long)piVar14 + (ulong)puVar12[0xd]);
    }
    if (uVar3 < 0x1d) goto LAB_010972b0;
    if ((ulong)puVar12[0xe] == 0) {
      local_9c[2] = 0.0;
    }
    else {
      local_9c[2] = *(float *)((long)piVar14 + (ulong)puVar12[0xe]);
    }
    if (uVar3 < 0x1f) goto LAB_010972b4;
    if ((ulong)puVar12[0xf] == 0) {
      local_9c[3] = 0.0;
    }
    else {
      local_9c[3] = *(float *)((long)piVar14 + (ulong)puVar12[0xf]);
    }
    if (uVar3 < 0x21) goto LAB_010972b8;
    if ((ulong)puVar12[0x10] == 0) {
      local_9c[4] = 0.0;
    }
    else {
      local_9c[4] = *(float *)((long)piVar14 + (ulong)puVar12[0x10]);
    }
    if (uVar3 < 0x23) goto LAB_010972bc;
    if ((ulong)puVar12[0x11] == 0) {
      local_9c[5] = 0.0;
    }
    else {
      local_9c[5] = *(float *)((long)piVar14 + (ulong)puVar12[0x11]);
    }
    if (uVar3 < 0x25) goto LAB_010972c0;
    if ((ulong)puVar12[0x12] == 0) {
      local_9c[6] = 0.0;
    }
    else {
      local_9c[6] = *(float *)((long)piVar14 + (ulong)puVar12[0x12]);
    }
    if (uVar3 < 0x27) goto LAB_010972c4;
    local_9c[8] = 0.0;
    local_9c[7] = 0.0;
    if ((ulong)puVar12[0x13] != 0) {
      local_9c[7] = *(float *)((long)piVar14 + (ulong)puVar12[0x13]);
    }
    if ((0x28 < uVar3) && ((ulong)puVar12[0x14] != 0)) {
      local_9c[8] = *(float *)((long)piVar14 + (ulong)puVar12[0x14]);
    }
  }
  if ((8 < param_3) || (fVar25 = local_9c[(int)param_3], ABS(-1.0 - fVar25) < 1.1920929e-07)) {
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    uVar18 = *(ulong *)(lVar13 + 0x4c38);
    if (uVar18 != 0) {
      uVar24 = uVar11 << 0x20 | (uVar24 & 0xffff) << 0x10;
      uVar11 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar19 = uVar18 - 1 & uVar24;
      }
      else if (uVar24 < uVar18) {
        uVar19 = uVar24;
      }
      else {
        uVar19 = 0;
        if (uVar18 != 0) {
          uVar19 = uVar24 / uVar18;
        }
        uVar19 = uVar24 - uVar19 * uVar18;
      }
      plVar22 = *(long **)(*(long *)(lVar13 + 0x4c30) + uVar19 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar22[1] == uVar24) {
              if (plVar22[2] == uVar24) goto LAB_01096f8c;
            }
            else if ((plVar22[1] & uVar18 - 1) != uVar19) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar22[1];
            if (uVar11 == uVar24) {
              if (plVar22[2] == uVar24) goto LAB_01096f8c;
            }
            else {
              if (uVar18 <= uVar11) {
                uVar16 = 0;
                if (uVar18 != 0) {
                  uVar16 = uVar11 / uVar18;
                }
                uVar11 = uVar11 - uVar16 * uVar18;
              }
              if (uVar11 != uVar19) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    plVar22 = *(long **)(lVar13 + 0x4c60);
LAB_01096f8c:
    piVar14 = (int *)plVar22[3];
    local_9c[0] = -1.0;
    puVar12 = (ushort *)((long)piVar14 - (long)*piVar14);
    uVar3 = *puVar12;
    if (uVar3 < 0x11) {
      local_9c[1] = 0.0;
LAB_010972d4:
      local_9c[2] = 0.0;
LAB_010972d8:
      local_9c[3] = 0.0;
LAB_010972dc:
      local_9c[4] = 0.0;
LAB_010972e0:
      local_9c[5] = 0.0;
LAB_010972e4:
      local_9c[6] = 0.0;
LAB_010972e8:
      local_9c[7] = 0.0;
      local_9c[8] = 0.0;
    }
    else {
      if ((ulong)puVar12[8] == 0) {
        local_9c[1] = 0.0;
      }
      else {
        local_9c[1] = *(float *)((long)piVar14 + (ulong)puVar12[8]);
      }
      if (uVar3 < 0x13) goto LAB_010972d4;
      if ((ulong)puVar12[9] == 0) {
        local_9c[2] = 0.0;
      }
      else {
        local_9c[2] = *(float *)((long)piVar14 + (ulong)puVar12[9]);
      }
      if (uVar3 < 0x15) goto LAB_010972d8;
      if ((ulong)puVar12[10] == 0) {
        local_9c[3] = 0.0;
      }
      else {
        local_9c[3] = *(float *)((long)piVar14 + (ulong)puVar12[10]);
      }
      if (uVar3 < 0x17) goto LAB_010972dc;
      if ((ulong)puVar12[0xb] == 0) {
        local_9c[4] = 0.0;
      }
      else {
        local_9c[4] = *(float *)((long)piVar14 + (ulong)puVar12[0xb]);
      }
      if (uVar3 < 0x19) goto LAB_010972e0;
      if ((ulong)puVar12[0xc] == 0) {
        local_9c[5] = 0.0;
      }
      else {
        local_9c[5] = *(float *)((long)piVar14 + (ulong)puVar12[0xc]);
      }
      if (uVar3 < 0x1b) goto LAB_010972e4;
      if ((ulong)puVar12[0xd] == 0) {
        local_9c[6] = 0.0;
      }
      else {
        local_9c[6] = *(float *)((long)piVar14 + (ulong)puVar12[0xd]);
      }
      if (uVar3 < 0x1d) goto LAB_010972e8;
      local_9c[8] = 0.0;
      local_9c[7] = 0.0;
      if ((ulong)puVar12[0xe] != 0) {
        local_9c[7] = *(float *)((long)piVar14 + (ulong)puVar12[0xe]);
      }
      if ((0x1e < uVar3) && ((ulong)puVar12[0xf] != 0)) {
        local_9c[8] = *(float *)((long)piVar14 + (ulong)puVar12[0xf]);
      }
    }
    if ((8 < param_3) || (fVar25 = local_9c[(int)param_3], ABS(-1.0 - fVar25) < 1.1920929e-07))
    goto joined_r0x01096be4;
  }
  local_9c[0] = -1.0;
  fVar26 = fVar26 * fVar25;
joined_r0x01096be4:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  return fVar26;
}


