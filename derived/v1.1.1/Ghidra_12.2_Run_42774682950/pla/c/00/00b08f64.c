/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b08f64; name: FUN_00b08f64
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00b08f64(long *param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  undefined1 *puVar24;
  long *plVar25;
  int *piVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  uint *puVar30;
  long *local_1e8;
  undefined1 *local_1e0;
  long *local_1d8;
  undefined1 *puStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  undefined4 local_1b0;
  long *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  long *local_188;
  undefined4 local_180;
  undefined1 *local_178;
  char *pcStack_170;
  size_t local_168;
  long *local_160;
  undefined1 *local_158;
  char *pcStack_150;
  size_t local_148;
  long *local_140;
  undefined1 local_138;
  undefined1 local_137;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  ulong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70 [2];
  
  puVar7 = PTR_DAT_0437a708;
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  puVar9 = PTR_DAT_0437a718;
  puVar8 = PTR_DAT_0437a710;
  lVar22 = *(long *)PTR_DAT_0437a710;
  *(long *)PTR_DAT_0437a718 = lVar22;
  uVar19 = *(ulong *)(lVar22 + 0x4f10);
  if (uVar19 == 0) {
    return;
  }
  lVar15 = param_1[0x12];
  uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
  uVar17 = (ulong)*(uint *)(lVar15 + 0x160) << 0x20 | (ulong)*(ushort *)(lVar15 + 0x164) << 0x10 |
           (ulong)*(byte *)(lVar15 + 0x17d);
  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar20 < 2) {
    uVar21 = uVar17 & uVar19 - 1;
  }
  else if (uVar17 < uVar19) {
    uVar21 = uVar17;
  }
  else {
    uVar21 = 0;
    if (uVar19 != 0) {
      uVar21 = uVar17 / uVar19;
    }
    uVar21 = uVar17 - uVar21 * uVar19;
  }
  plVar23 = *(long **)(*(long *)(lVar22 + 0x4f08) + uVar21 * 8);
  if (plVar23 == (long *)0x0) {
    return;
  }
  plVar23 = (long *)*plVar23;
  if (plVar23 == (long *)0x0) {
    return;
  }
  if (1 < uVar20) {
    do {
      uVar20 = plVar23[1];
      if (uVar20 == uVar17) {
        if (plVar23[2] == uVar17) goto LAB_00b09084;
      }
      else {
        if (uVar19 <= uVar20) {
          uVar5 = 0;
          if (uVar19 != 0) {
            uVar5 = uVar20 / uVar19;
          }
          uVar20 = uVar20 - uVar5 * uVar19;
        }
        if (uVar20 != uVar21) {
          return;
        }
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar23[1] == uVar17) {
      if (plVar23[2] == uVar17) break;
    }
    else if ((plVar23[1] & uVar19 - 1) != uVar21) {
      return;
    }
    plVar23 = (long *)*plVar23;
    if (plVar23 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_00b09084:
  if ((param_1[0x10] == 0) || (param_1[0x37] != 0)) {
LAB_00b09098:
    bVar3 = *puVar7;
  }
  else {
    lVar22 = FUN_00b13424(*param_2,*(undefined8 *)(*param_2 + 8),lVar15 + 0x68);
    if (lVar22 != 0) {
      lVar15 = *(long *)(lVar22 + 0x58);
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00b0ade0;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar13;
      }
      piVar26 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar10) {
          *piVar26 = *piVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar23 = (long *)param_1[0x37];
    param_1[0x37] = lVar22;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[0xb];
      piVar26 = (int *)(lVar22 + 0xc);
      do {
        iVar11 = *piVar26;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar10) {
          *piVar26 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))();
      }
    }
    lVar22 = param_1[0x37];
    (**(code **)(*(long *)param_1[0x10] + 0x18))(&local_f8);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_0087f944(&local_80,&local_f8);
    puVar6 = local_f8;
    if (local_f8 != (undefined8 *)0x0) {
      piVar26 = (int *)(local_f8 + 1);
      do {
        iVar11 = *piVar26;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar10) {
          *piVar26 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        local_f8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_1a8 = (long *)*puVar6;
        FUN_02a44274(lVar15 + 0xd8,&local_1a8);
      }
    }
    FUN_00d804f8(lVar22,&local_80,1);
    puVar6 = local_80;
    if (local_80 == (undefined8 *)0x0) goto LAB_00b09098;
    piVar26 = (int *)(local_80 + 1);
    do {
      iVar11 = *piVar26;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar10) {
        *piVar26 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 != 0) goto LAB_00b09098;
    local_80[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar22 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar22;
    local_f8 = (undefined8 *)*puVar6;
    FUN_02a44274(lVar22 + 0xd8,&local_f8);
    bVar3 = *puVar7;
  }
  if (((bVar3 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  lVar22 = *(long *)puVar8;
  *(long *)puVar9 = lVar22;
  uVar19 = *(ulong *)(lVar22 + 0x4f10);
  if (uVar19 != 0) {
    lVar15 = param_1[0x12];
    uVar17 = (ulong)*(uint *)(lVar15 + 0x160) << 0x20 | (ulong)*(ushort *)(lVar15 + 0x164) << 0x10 |
             (ulong)*(byte *)(lVar15 + 0x17d);
    uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = uVar17 & uVar19 - 1;
    }
    else if (uVar17 < uVar19) {
      uVar21 = uVar17;
    }
    else {
      uVar21 = 0;
      if (uVar19 != 0) {
        uVar21 = uVar17 / uVar19;
      }
      uVar21 = uVar17 - uVar21 * uVar19;
    }
    plVar23 = *(long **)(*(long *)(lVar22 + 0x4f08) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == uVar17) {
            if (plVar23[2] == uVar17) goto LAB_00b094a4;
          }
          else if ((plVar23[1] & uVar19 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == uVar17) {
            if (plVar23[2] == uVar17) goto LAB_00b094a4;
          }
          else {
            if (uVar19 <= uVar20) {
              uVar5 = 0;
              if (uVar19 != 0) {
                uVar5 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar5 * uVar19;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  plVar23 = *(long **)(lVar22 + 0x4f38);
LAB_00b094a4:
  local_a0 = (long *)param_1[0x14];
  piVar26 = (int *)plVar23[3];
  local_a8 = (long *)0x0;
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_88 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  local_98 = 0x222222222222222;
  uStack_90 = 0;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_1a8);
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  FUN_0087f944(&local_130,&local_1a8);
  plVar23 = local_1a8;
  if (local_1a8 != (long *)0x0) {
    plVar25 = local_1a8 + 1;
    do {
      iVar11 = (int)*plVar25 + -1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *(int *)plVar25 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_1a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1d8 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_1d8);
    }
  }
  FUN_0087fcf0(&local_f8,&local_130);
  plVar23 = local_130;
  if (local_130 != (long *)0x0) {
    plVar25 = local_130 + 1;
    do {
      iVar11 = (int)*plVar25 + -1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *(int *)plVar25 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1a8 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_1a8);
    }
  }
  local_1a8 = (long *)0x0;
  local_1a0 = (undefined1 *)0x0;
  FUN_008802f0(&local_1a8,*param_3 + 0x58);
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  FUN_00aa03f0(&local_130,&local_1a8);
  plVar23 = local_1a8;
  if (local_1a8 != (long *)0x0) {
    plVar25 = local_1a8 + 1;
    do {
      iVar11 = (int)*plVar25 + -1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *(int *)plVar25 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_1a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1d8 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_1d8);
    }
  }
  FUN_00ab166c(&local_e8,&local_130);
  plVar23 = local_130;
  if (local_130 != (long *)0x0) {
    plVar25 = local_130 + 1;
    do {
      iVar11 = (int)*plVar25 + -1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *(int *)plVar25 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1a8 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_1a8);
    }
  }
  FUN_00aead04(&local_d8,param_1[0x12] + 0x188);
  local_c8 = *(undefined8 *)(param_1[0x12] + 0x68);
  uStack_c0 = *(undefined8 *)(param_1[0x12] + 0x70);
  local_118 = (long *)param_1[0x14];
  local_120 = (long *)0x0;
  local_100 = 0;
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  local_110 = 0x222222222222222;
  local_108 = 0;
  puVar1 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (10 - (long)*piVar26)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  puVar30 = puVar1 + 1;
  uVar19 = (ulong)*puVar1;
  lVar22 = tpidr_el0;
  if (uVar19 != 0) {
    puVar1 = puVar30 + uVar19;
    do {
      local_1a8 = (long *)0x0;
      local_1a0 = &DAT_cbf29ce484222645;
      piVar26 = (int *)((long)puVar30 + (ulong)*puVar30);
      local_198 = &DAT_03996322;
      local_180 = 0;
      local_190 = 0;
      local_188 = (long *)0x0;
      local_178 = &DAT_cbf29ce484222645;
      pcStack_170 = "";
      local_168 = 0;
      local_160 = (long *)0x0;
      local_158 = &DAT_cbf29ce484222645;
      pcStack_150 = "";
      local_148 = 0;
      local_140 = (long *)0x0;
      if (*(ushort *)((long)piVar26 - (long)*piVar26) < 5) {
        local_138 = false;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2];
        local_138 = false;
        if (uVar19 != 0) {
          local_138 = *(char *)((long)piVar26 + uVar19) != '\0';
        }
      }
      if (*(ushort *)((long)piVar26 - (long)*piVar26) < 7) {
        local_137 = false;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[3];
        local_137 = false;
        if (uVar19 != 0) {
          local_137 = *(char *)((long)piVar26 + uVar19) != '\0';
        }
      }
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 0xb) ||
         (uVar19 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[5], uVar19 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar26 + uVar19);
        lVar15 = (long)puVar2 + (ulong)*puVar2;
      }
      local_168 = strlen((char *)(lVar15 + 4));
      bVar3 = *(byte *)(lVar15 + 4);
      local_178 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_178 = &DAT_cbf29ce484222645;
        pbVar18 = (byte *)(lVar15 + 5);
        do {
          local_178 = (undefined1 *)(((ulong)local_178 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar3 != 0);
      }
      local_160 = (long *)0x0;
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 9) ||
         (uVar19 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[4], uVar19 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar26 + uVar19);
        lVar16 = (long)puVar2 + (ulong)*puVar2;
      }
      pcStack_170 = (char *)(lVar15 + 4);
      local_148 = strlen((char *)(lVar16 + 4));
      bVar3 = *(byte *)(lVar16 + 4);
      local_158 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_158 = &DAT_cbf29ce484222645;
        pbVar18 = (byte *)(lVar16 + 5);
        do {
          local_158 = (undefined1 *)(((ulong)local_158 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar3 != 0);
      }
      local_140 = (long *)0x0;
      if (*(char *)(param_1[0x12] + 0x16c) == '\0') {
        if (*(ushort *)((long)piVar26 - (long)*piVar26) < 0xd) goto LAB_00b0a4d0;
        uVar19 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[6];
        lVar15 = 0;
        if (uVar19 != 0) goto LAB_00b098e8;
      }
      else if (*(ushort *)((long)piVar26 - (long)*piVar26) < 0xf) {
LAB_00b0a4d0:
        lVar15 = 0;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[7];
        if (uVar19 == 0) {
          lVar15 = 0;
        }
        else {
LAB_00b098e8:
          lVar15 = (long)((long)piVar26 + uVar19) + (ulong)*(uint *)((long)piVar26 + uVar19);
        }
      }
      local_70[0] = (long *)(lVar15 + 4);
      pcStack_150 = (char *)(lVar16 + 4);
      FUN_009f1b84(&local_1d8,local_70);
      plVar23 = local_1a8;
      local_1a8 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))();
      }
      plVar25 = local_188;
      plVar23 = local_1b8;
      local_1a8 = local_1d8;
      local_1d8 = (long *)0x0;
      local_1a0 = puStack_1d0;
      local_198 = (undefined1 *)local_1c8;
      local_190 = uStack_1c0;
      local_188 = (long *)0x0;
      if (plVar25 == (long *)0x0) {
        local_1b8 = (long *)0x0;
        local_188 = plVar23;
        local_180 = local_1b0;
      }
      else {
        (**(code **)(*plVar25 + 0x20))();
        local_188 = local_1b8;
        local_1b8 = (long *)0x0;
        local_180 = local_1b0;
        if (local_1d8 != (long *)0x0) {
          (**(code **)(*local_1d8 + 0x20))();
        }
      }
      if (local_128 == local_120) {
        lVar15 = (long)local_128 - (long)local_130 >> 3;
        uVar19 = local_110;
        if (0x7ffffffffffffffe < local_110) {
          uVar19 = 0x7fffffffffffffff;
        }
        uVar20 = lVar15 * -0x1111111111111111 + 1;
        if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = (long)local_120 - (long)local_130 >> 3;
        if ((ulong)(lVar16 * -0x1111111111111111) < uVar19 >> 1) {
          uVar17 = lVar16 * -0x2222222222222222;
          uVar19 = uVar20;
          if (uVar20 <= uVar17) {
            uVar19 = uVar17;
          }
        }
        if (uVar19 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (**(code **)(*local_118 + 0x10))(local_118,uVar19 * 0x78,8);
          if (lVar16 == 0) {
            (**(code **)(*local_118 + 0xb8))();
          }
        }
        plVar27 = (long *)(lVar16 + lVar15 * 8);
        plVar29 = (long *)(lVar16 + uVar19 * 0x78);
        FUN_00b1663c(&local_118,plVar27,&local_1a8);
        plVar12 = local_128;
        plVar25 = local_130;
        plVar23 = plVar27 + 0xf;
        if (local_128 == local_130) {
          plVar12 = local_130;
        }
        else {
          plVar27 = plVar27 + -0xf;
          plVar28 = local_128 + -0xf;
          FUN_00b1663c(&local_118,plVar27,plVar28);
          if (plVar28 != plVar25) {
            do {
              plVar27 = plVar27 + -0xf;
              FUN_00b1663c(&local_118,plVar27,plVar12 + -0x1e);
              plVar12 = plVar12 + -0xf;
            } while (plVar25 + 0xf != plVar12);
          }
          plVar25 = local_130;
          plVar12 = local_128;
        }
        plVar28 = local_120;
        local_130 = plVar27;
        local_128 = plVar23;
        local_120 = plVar29;
        if (plVar12 != plVar25) {
          if ((long *)plVar12[-2] != (long *)0x0) {
            (**(code **)(*(long *)plVar12[-2] + 0x20))();
          }
          plVar23 = plVar12 + -0xf;
          if ((long *)plVar12[-6] != (long *)0x0) {
            (**(code **)(*(long *)plVar12[-6] + 0x20))();
          }
          if ((long *)plVar12[-0xb] != (long *)0x0) {
            (**(code **)(*(long *)plVar12[-0xb] + 0x20))();
          }
          if ((long *)*plVar23 != (long *)0x0) {
            (**(code **)(*(long *)*plVar23 + 0x20))();
          }
          while (plVar23 != plVar25) {
            if ((long *)plVar23[-2] != (long *)0x0) {
              (**(code **)(*(long *)plVar23[-2] + 0x20))();
            }
            if ((long *)plVar23[-6] != (long *)0x0) {
              (**(code **)(*(long *)plVar23[-6] + 0x20))();
            }
            if ((long *)plVar23[-0xb] != (long *)0x0) {
              (**(code **)(*(long *)plVar23[-0xb] + 0x20))();
            }
            plVar12 = plVar23 + -0xf;
            plVar23 = plVar23 + -0xf;
            if ((long *)*plVar12 != (long *)0x0) {
              (**(code **)(*(long *)*plVar12 + 0x20))();
            }
          }
        }
        plVar23 = local_118;
        if (plVar25 != (long *)0x0) {
          uVar19 = (**(code **)(*local_118 + 0xc0))(local_118);
          if ((uVar19 & 1) != 0) {
            if (*(char *)(lVar22 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar22 + 0x38d488) = 1;
              *(undefined8 *)(lVar22 + 0x38d478) = 0;
              *(undefined8 *)(lVar22 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar22 + 0x38d480)) {
              FUN_02bcc824(plVar23,plVar25,(long)plVar28 - (long)plVar25,8);
              goto joined_r0x00b0a56c;
            }
          }
          (**(code **)(*plVar23 + 0x18))(plVar23,plVar25,(long)plVar28 - (long)plVar25,8);
        }
      }
      else {
        FUN_00b1663c(&local_118,local_128,&local_1a8);
        local_128 = local_128 + 0xf;
      }
joined_r0x00b0a56c:
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      puVar30 = puVar30 + 1;
    } while (puVar30 != puVar1);
  }
  if (local_a0 != local_118) {
    FUN_00b103e0(&local_b8,local_b8);
    plVar25 = local_a0;
    plVar23 = local_b8;
    lVar15 = (long)local_a8 - (long)local_b8;
    uVar19 = (**(code **)(*local_a0 + 0xc0))(local_a0);
    if ((uVar19 & 1) == 0) {
LAB_00b0a63c:
      (**(code **)(*plVar25 + 0x18))(plVar25,plVar23,lVar15,8);
    }
    else {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar22 + 0x38d480) < 1) goto LAB_00b0a63c;
      FUN_02bcc824(plVar25,plVar23,lVar15,8);
    }
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
  }
  plVar25 = local_128;
  plVar23 = local_130;
  local_a0 = local_118;
  local_88 = local_100;
  local_98 = local_110;
  uStack_90 = local_108;
  uVar19 = ((long)local_128 - (long)local_130 >> 3) * -0x1111111111111111;
  if ((ulong)(((long)local_a8 - (long)local_b8 >> 3) * -0x1111111111111111) < uVar19) {
    if (local_b8 != (long *)0x0) {
      FUN_00b103e0(&local_b8,local_b8);
      plVar27 = local_a0;
      plVar12 = local_b8;
      lVar15 = (long)local_a8 - (long)local_b8;
      uVar20 = (**(code **)(*local_a0 + 0xc0))(local_a0);
      if ((uVar20 & 1) == 0) {
LAB_00b0a708:
        (**(code **)(*plVar27 + 0x18))(plVar27,plVar12,lVar15,8);
      }
      else {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar22 + 0x38d480) < 1) goto LAB_00b0a708;
        FUN_02bcc824(plVar27,plVar12,lVar15,8);
      }
      local_b0 = (long *)0x0;
      local_a8 = (long *)0x0;
      local_b8 = (long *)0x0;
    }
    uVar20 = local_98;
    if (0x7ffffffffffffffe < local_98) {
      uVar20 = 0x7fffffffffffffff;
    }
    if (uVar20 < uVar19) {
LAB_00b0add4:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(((long)local_a8 >> 3) * -0x1111111111111111) < uVar20 >> 1) {
      uVar17 = ((long)local_a8 >> 3) * -0x2222222222222222;
      if (uVar19 <= uVar17) {
        uVar19 = uVar17;
      }
      bVar10 = uVar20 < uVar19;
      uVar20 = uVar19;
      if (bVar10) goto LAB_00b0add4;
    }
    plVar12 = (long *)(**(code **)(*local_a0 + 0x10))(local_a0,uVar20 * 0x78,8);
    if (plVar12 == (long *)0x0) {
      (**(code **)(*local_a0 + 0xb8))();
    }
    local_a8 = plVar12 + uVar20 * 0xf;
    local_b8 = plVar12;
    local_b0 = plVar12;
    if (plVar23 != plVar25) {
      FUN_00aeaf7c(&local_a0,plVar12,plVar23);
      local_b0 = local_b0 + 0xf;
      if (plVar23 + 0xf != plVar25) {
        FUN_00aeaf7c(&local_a0);
        local_b0 = local_b0 + 0xf;
        if (plVar23 + 0x1e != plVar25) {
          FUN_00aeaf7c(&local_a0);
          for (plVar23 = plVar23 + 0x2d; local_b0 = local_b0 + 0xf, plVar23 != plVar25;
              plVar23 = plVar23 + 0xf) {
            FUN_00aeaf7c(&local_a0,local_b0,plVar23);
          }
        }
      }
    }
  }
  else {
    plVar23 = (long *)((long)local_130 + ((long)local_b0 - (long)local_b8));
    uVar20 = ((long)local_b0 - (long)local_b8 >> 3) * -0x1111111111111111;
    plVar27 = local_130;
    plVar29 = local_b8;
    plVar12 = plVar23;
    if (uVar19 <= uVar20) {
      plVar12 = local_128;
    }
    while (plVar12 != plVar27) {
      plVar28 = (long *)*plVar27;
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
      plVar14 = (long *)*plVar29;
      *plVar29 = (long)plVar28;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      plVar29[1] = plVar27[1];
      plVar29[2] = plVar27[2];
      plVar29[3] = plVar27[3];
      plVar28 = (long *)plVar27[4];
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
      plVar14 = (long *)plVar29[4];
      plVar29[4] = (long)plVar28;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      *(int *)(plVar29 + 5) = (int)plVar27[5];
      plVar29[6] = plVar27[6];
      plVar29[7] = plVar27[7];
      plVar29[8] = plVar27[8];
      plVar28 = (long *)plVar27[9];
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
      plVar14 = (long *)plVar29[9];
      plVar29[9] = (long)plVar28;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      plVar29[10] = plVar27[10];
      plVar29[0xb] = plVar27[0xb];
      plVar29[0xc] = plVar27[0xc];
      plVar28 = (long *)plVar27[0xd];
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
      plVar14 = (long *)plVar29[0xd];
      plVar29[0xd] = (long)plVar28;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      *(short *)(plVar29 + 0xe) = (short)plVar27[0xe];
      plVar27 = plVar27 + 0xf;
      plVar29 = plVar29 + 0xf;
    }
    if (uVar20 < uVar19) {
      if (plVar12 != plVar25) {
        FUN_00aeaf7c(&local_a0,local_b0,plVar23);
        local_b0 = local_b0 + 0xf;
        if (plVar23 + 0xf != plVar25) {
          FUN_00aeaf7c(&local_a0,local_b0,plVar23 + 0xf);
          local_b0 = local_b0 + 0xf;
          if (plVar23 + 0x1e != plVar25) {
            FUN_00aeaf7c(&local_a0,local_b0,plVar23 + 0x1e);
            for (plVar23 = plVar23 + 0x2d; local_b0 = local_b0 + 0xf, plVar23 != plVar25;
                plVar23 = plVar23 + 0xf) {
              FUN_00aeaf7c(&local_a0,local_b0,plVar23);
            }
          }
        }
      }
    }
    else {
      FUN_00b103e0(&local_b8,plVar29);
    }
  }
  (**(code **)(*param_1 + 0x48))(&local_1a8,param_1);
  uVar19 = FUN_00b1255c(local_1a8 + 10);
  if (local_1a8 != (long *)0x0) {
    lVar15 = local_1a8[0xb];
    piVar26 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar26;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar10) {
        *piVar26 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_1a8 + 0x20))();
    }
  }
  if ((uVar19 & 1) != 0) {
    plVar23 = (long *)FUN_00b167d0(*param_2 + 0xf0,&local_1a8);
    if (plVar23 == (long *)0x0) {
      plVar23 = (long *)param_1[0x14];
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar7 = PTR_DAT_04379528;
        if (iVar11 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar22 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar23;
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
      lVar22 = (**(code **)(*plVar23 + 0x10))(plVar23,0x2c0,0x10);
      if (lVar22 == 0) {
        (**(code **)(*plVar23 + 0xb8))(plVar23);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02a4c0f4(lVar22,0);
    }
    lVar15 = plVar23[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_00b0ade0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar26 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar10) {
        *piVar26 = *piVar26 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar15 = param_1[0x45];
    (**(code **)(*plVar23 + 0x10))(&local_1a8,plVar23);
    puVar7 = PTR_DAT_04379498;
    local_1e8 = (long *)0x0;
    local_1e0 = (undefined1 *)0x0;
    do {
      puVar24 = local_1a0;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(&local_1a0,0x10);
      if (bVar10) {
        local_1a0 = (undefined1 *)0x0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar9 = PTR_DAT_043794a8;
    puVar8 = PTR_DAT_043794a0;
    uVar13 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar13;
    FUN_02a44e0c(local_70,uVar13,puVar24);
    plVar25 = local_1a8;
    local_1a8 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      plVar12 = plVar25 + 1;
      do {
        iVar11 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        plVar25[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar8;
        *(long *)puVar9 = lVar16;
        local_1d8 = (long *)*plVar25;
        FUN_02a44274(lVar16 + 0xd8,&local_1d8);
      }
    }
    plVar25 = local_1e8;
    local_1e8 = (long *)0x0;
    if (local_70[0] == (long *)0x0) {
      if (plVar25 != (long *)0x0) {
        plVar12 = plVar25 + 1;
        do {
          lVar16 = *plVar12;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar10) {
            *(int *)plVar12 = (int)lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar16 == 1) {
          plVar25[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar8;
          *(long *)puVar9 = lVar16;
          local_1d8 = (long *)*plVar25;
          FUN_02a44274(lVar16 + 0xd8,&local_1d8);
        }
      }
      puVar24 = (undefined1 *)0x0;
    }
    else {
      plVar12 = local_70[0];
      if (plVar25 != (long *)0x0) {
        plVar12 = plVar25 + 1;
        do {
          iVar11 = (int)*plVar12 + -1;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar10) {
            *(int *)plVar12 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          plVar25[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar8;
          *(long *)puVar9 = lVar16;
          local_1d8 = (long *)*plVar25;
          FUN_02a44274(lVar16 + 0xd8,&local_1d8);
        }
        plVar12 = local_70[0];
      }
      local_70[0] = (long *)0x0;
      local_1e8 = plVar12;
    }
    plVar25 = local_70[0];
    local_1e0 = puVar24;
    if (local_70[0] != (long *)0x0) {
      plVar12 = local_70[0] + 1;
      do {
        iVar11 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_70[0][2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar8;
        *(long *)puVar9 = lVar16;
        local_1d8 = (long *)*plVar25;
        FUN_02a44274(lVar16 + 0xd8,&local_1d8);
      }
    }
    plVar25 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      plVar12 = local_1a8 + 1;
      do {
        iVar11 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_1a8[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar8;
        *(long *)puVar9 = lVar16;
        local_1d8 = (long *)*plVar25;
        FUN_02a44274(lVar16 + 0xd8,&local_1d8);
      }
    }
    FUN_00b1b920(lVar15 + 0x268,&local_1e8);
    plVar25 = local_1e8;
    if (local_1e8 != (long *)0x0) {
      plVar12 = local_1e8 + 1;
      do {
        iVar11 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_1e8[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar8;
        *(long *)puVar9 = lVar15;
        local_1a8 = (long *)*plVar25;
        FUN_02a44274(lVar15 + 0xd8,&local_1a8);
      }
    }
    if (plVar23 != (long *)0x0) {
      lVar15 = plVar23[0xb];
      piVar26 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar26;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar10) {
          *piVar26 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
    }
  }
  if (local_130 != (long *)0x0) {
    FUN_00b103e0(&local_130);
    plVar25 = local_118;
    plVar23 = local_130;
    lVar15 = (long)local_120 - (long)local_130;
    uVar19 = (**(code **)(*local_118 + 0xc0))(local_118);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar25,plVar23,lVar15,8);
        goto joined_r0x00b0a2b4;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,plVar23,lVar15,8);
  }
joined_r0x00b0a2b4:
  puVar6 = local_d8;
  if (local_b8 != (long *)0x0) {
    FUN_00b103e0(&local_b8);
    plVar25 = local_a0;
    plVar23 = local_b8;
    lVar15 = (long)local_a8 - (long)local_b8;
    uVar19 = (**(code **)(*local_a0 + 0xc0))(local_a0);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar25,plVar23,lVar15,8);
        puVar6 = local_d8;
        goto joined_r0x00b0a5ac;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,plVar23,lVar15,8);
    puVar6 = local_d8;
  }
joined_r0x00b0a5ac:
  local_d8 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    piVar26 = (int *)(puVar6 + 1);
    do {
      iVar11 = *piVar26;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar10) {
        *piVar26 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1a8 = (long *)*puVar6;
      FUN_02a44274(lVar22 + 0xd8,&local_1a8);
    }
  }
  puVar6 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    piVar26 = (int *)(local_e8 + 1);
    do {
      iVar11 = *piVar26;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar10) {
        *piVar26 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1a8 = (long *)*puVar6;
      FUN_02a44274(lVar22 + 0xd8,&local_1a8);
    }
  }
  puVar6 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    piVar26 = (int *)(local_f8 + 1);
    do {
      iVar11 = *piVar26;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar10) {
        *piVar26 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      local_f8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_1a8 = (long *)*puVar6;
      FUN_02a44274(lVar22 + 0xd8,&local_1a8);
    }
  }
  return;
}


