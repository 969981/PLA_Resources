/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab5160; name: FUN_00ab5160
 */


uint * FUN_00ab5160(undefined8 *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  long *plVar1;
  int *piVar2;
  char *__s;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong extraout_x8;
  ulong uVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  long *local_18d0 [2];
  undefined8 *local_18c0;
  undefined8 uStack_18b8;
  undefined8 local_18b0 [4];
  undefined4 local_1890 [4];
  ulong local_1880 [6];
  undefined4 local_1850 [2];
  undefined8 local_1848;
  undefined4 local_1840 [3];
  undefined1 local_1834 [4];
  undefined2 local_1830 [2];
  undefined4 local_182c;
  undefined8 local_1828 [2];
  undefined4 local_1818 [3];
  undefined1 local_180c [4];
  undefined2 local_1808 [2];
  undefined4 local_1804;
  undefined8 local_1800 [746];
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80 [2];
  
  fVar25 = (float)*param_1;
  fVar26 = (float)((ulong)*param_1 >> 0x20);
  fVar29 = (float)param_1[1];
  fVar28 = (float)((ulong)param_1[1] >> 0x20);
  uStack_88 = CONCAT44(fVar28 + 0.0,fVar29 + 0.0);
  local_a0 = CONCAT44(fVar26 - (float)param_4,fVar25 - 0.0);
  uStack_98 = CONCAT44(fVar28 - 0.0,fVar29 - 0.0);
  uStack_90 = CONCAT44((float)param_4 + fVar26,fVar25 + 0.0);
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar14 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar14;
  puVar20 = *(undefined8 **)(lVar14 + 0xd8);
  if ((puVar20 != (undefined8 *)0x0) && (uVar8 = *(uint *)((long)puVar20 + 0xc), uVar8 != 0)) {
    puVar23 = (uint *)((long)puVar20 + 0xc);
    pbVar17 = PTR_DAT_043794d0;
    pbVar19 = PTR_DAT_043796e0;
    puVar24 = (undefined8 *)PTR_DAT_043796e8;
    goto LAB_00ab5760;
  }
LAB_00ab51e0:
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_00cf98c8(&local_b0,0x118);
  do {
    memset(local_18b0,0,0x1800);
    puVar18 = local_b0;
    puVar7 = PTR_DAT_0437a660;
    puVar24 = (undefined8 *)PTR_DAT_0437a648;
    lVar14 = 0;
    do {
      lVar15 = lVar14 + 0xc0;
      *(undefined8 *)((long)local_1880 + lVar14) = 0;
      *(undefined8 *)((long)local_1880 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)local_1880 + lVar14 + 0x18) = 0;
      *(undefined4 *)((long)local_1850 + lVar14) = 0x7f7fffee;
      *(undefined8 *)((long)local_1850 + lVar14 + 8) = 0xffffffffffffffff;
      *(undefined4 *)((long)local_1840 + lVar14) = 0xffffff;
      *(undefined4 *)((long)local_1840 + lVar14 + 8) = 0xffffffff;
      local_1834[lVar14] = 0xf;
      *(undefined2 *)((long)local_1830 + lVar14) = 0xffff;
      *(undefined4 *)((long)local_1830 + lVar14 + 4) = 0;
      *(undefined4 *)((long)local_1818 + lVar14) = 0xffffff;
      *(undefined4 *)((long)local_1818 + lVar14 + 8) = 0xffffffff;
      local_180c[lVar14] = 0xf;
      *(undefined2 *)((long)local_1808 + lVar14) = 0xffff;
      *(undefined4 *)((long)local_1808 + lVar14 + 4) = 0;
      *(undefined8 *)((long)local_1880 + lVar14 + 0x20) = 0;
      *(undefined8 *)((long)local_1880 + lVar14 + 0x28) = 0;
      *(undefined8 *)((long)local_1800 + lVar14) = 0;
      *(undefined8 *)((long)local_1800 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_1828 + lVar14) = 0;
      *(undefined8 *)((long)local_1828 + lVar14 + 8) = 0xffffffffffffffff;
      lVar14 = lVar15;
    } while (lVar15 != 0x1800);
    if (local_b0 != (undefined8 *)0x0) {
      if (*(int *)((long)local_b0 + 0xc) != 0) {
        piVar2 = (int *)((long)local_b0 + 0xc);
        iVar9 = *(int *)((long)local_b0 + 0xc);
        do {
          puVar21 = (undefined8 *)puVar18[2];
          if (((*PTR_DAT_0437a668 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar7 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a668);
          }
          while( true ) {
            puVar20 = param_2;
            if (puVar21 == (undefined8 *)0x0) goto LAB_00ab5290;
            if (puVar21 == (undefined8 *)puVar7) break;
            puVar21 = (undefined8 *)*puVar21;
          }
          iVar10 = *piVar2;
          if (iVar10 == iVar9) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00ab5860;
            lVar14 = puVar18[3];
            if (lVar14 != 0) {
              if (((*(byte *)puVar24 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar9 != 0)) {
                FUN_00100250(&LAB_00ab938c,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a648);
              }
              lVar15 = *(long *)PTR_DAT_0437a650;
              *(long *)PTR_DAT_0437a658 = lVar15;
              uVar8 = FUN_02bf48bc(*(undefined8 *)(lVar15 + 0x230),&uStack_90,&local_a0,param_3,
                                   local_18b0,0x20,1);
              lVar15 = *(long *)(lVar14 + 8);
              piVar2 = (int *)(lVar15 + 0xc);
              do {
                iVar9 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
              }
              goto joined_r0x00ab5940;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_00ab5860:
          iVar9 = iVar10;
        } while (iVar10 != 0);
      }
    }
LAB_00ab5290:
    if (((*(byte *)puVar24 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar9 != 0)
       ) {
      FUN_00100250(&LAB_00ab938c,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar14 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar14;
    uVar8 = FUN_02bf48bc(*(undefined8 *)(lVar14 + 0x230),&uStack_90,&local_a0,param_3,local_18b0,
                         0x20,1);
joined_r0x00ab5940:
    if (uVar8 == 0) {
      puVar23 = (uint *)0x0;
LAB_00ab5948:
      FUN_00ab5c44(local_18b0);
      puVar20 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_b0 + 1);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_18b0[0] = *puVar20;
          FUN_02a44274(lVar14 + 0xd8,local_18b0);
        }
      }
      return puVar23;
    }
    fVar25 = 0.0;
    puVar18 = (undefined8 *)0x0;
    puVar23 = (uint *)0x0;
    lVar14 = tpidr_el0;
    while( true ) {
      puVar7 = PTR_PTR_0434a080;
      pbVar17 = (byte *)(ulong)param_3;
      if (puVar18 == (undefined8 *)&DAT_00000020) break;
      uVar27 = local_18b0[(long)puVar18 * 0x18 + 1];
      uVar13 = local_18b0[(long)puVar18 * 0x18];
      uVar4 = local_1890[(long)puVar18 * 0x30];
      __s = (char *)(local_1880[(long)puVar18 * 0x18] & 0xfffffffffffffffe);
      if (__s == (char *)0x0) {
        bVar3 = *(byte *)puVar24;
        puVar21 = (undefined8 *)0x0;
      }
      else {
        sVar11 = strlen(__s);
        uVar22 = (int)sVar11 + 1;
        puVar20 = (undefined8 *)
                  (**(code **)(*(long *)puVar7 + 0x10))
                            (puVar7,(long)((sVar11 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar20 = puVar7;
        *(uint *)(puVar20 + 1) = uVar22;
        memcpy(puVar20 + 2,__s,(ulong)uVar22);
        puVar21 = (undefined8 *)((ulong)(puVar20 + 2) | 1);
        bVar3 = *(byte *)puVar24;
      }
      if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar24), iVar9 != 0)) {
        FUN_00100250(&LAB_00ab938c,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar24);
      }
      lVar15 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar15;
      FUN_02bf7d30(local_18d0,*(undefined8 *)(lVar15 + 0x230),uVar4);
      local_18c0 = (undefined8 *)0x0;
      uStack_18b8 = 0;
      FUN_00ab944c(&local_18c0,local_18d0);
      plVar12 = local_18d0[0];
      if (local_18d0[0] != (long *)0x0) {
        plVar1 = local_18d0[0] + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          local_18d0[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_80[0] = *plVar12;
          FUN_02a44274(lVar15 + 0xd8,local_80);
        }
      }
      FUN_00ab5ae0(local_18d0,&local_18c0);
      puVar20 = local_18c0;
      if (local_18d0[0] == (long *)0x0) {
        uVar22 = 4;
      }
      else {
        if ((1 << (ulong)(*(uint *)(local_18d0[0] + 0x16) & 0x1f) & param_3) == 0) {
          uVar22 = 0;
        }
        else {
          fVar28 = (float)((ulong)uVar13 >> 0x20);
          fVar29 = *(float *)((long)param_1 + 4);
          fVar26 = ABS(fVar28 - fVar29);
          if ((fVar26 < fVar25) || ((int)puVar23 != 1)) {
            param_2[1] = uVar27;
            *param_2 = uVar13;
            fVar25 = fVar26;
            if (fVar28 - fVar29 < 1.0) {
              puVar23 = (uint *)0x1;
              uVar22 = 2;
              goto LAB_00ab5428;
            }
          }
          uVar22 = 0;
          puVar23 = (uint *)0x1;
        }
LAB_00ab5428:
        lVar15 = local_18d0[0][0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_18d0[0] + 0x20))();
          puVar20 = local_18c0;
        }
      }
      local_18c0 = puVar20;
      if (puVar20 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar20 + 1);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          puVar20[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_18d0[0] = (long *)*puVar20;
          FUN_02a44274(lVar15 + 0xd8,local_18d0);
        }
      }
      puVar20 = puVar21;
      if (((ulong)puVar21 & 1) != 0) {
        lVar15 = *(long *)(lVar14 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar15;
        }
        plVar12 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
        puVar20 = (undefined8 *)((long)puVar21 + -0x11);
        *puVar20 = 0;
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar20,(long)*(int *)((long)puVar21 + -9) + 0x10);
      }
      if (((uVar22 | 4) != 4) ||
         (puVar18 = (undefined8 *)((long)puVar18 + 1), puVar18 == (undefined8 *)(ulong)uVar8))
      goto LAB_00ab5948;
    }
    FUN_00ab9440();
    pbVar19 = &DAT_00000020;
    uVar16 = extraout_x8;
    param_2 = (undefined8 *)(ulong)uVar8;
LAB_00ab5750:
    ClearExclusiveLocal();
    do {
      uVar8 = (uint)uVar16;
      if (uVar8 == 0) goto LAB_00ab51e0;
LAB_00ab5760:
      plVar12 = (long *)puVar20[2];
      if (((*pbVar19 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar19), iVar9 != 0)) {
        if (((*pbVar17 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar17), iVar9 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(pbVar17);
        }
        *puVar24 = PTR_DAT_043794d8;
        __cxa_guard_release(pbVar19);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_00ab51e0;
        if (plVar12 == puVar24) break;
        plVar12 = (long *)*plVar12;
      }
      uVar16 = (ulong)*puVar23;
      if (*puVar23 != uVar8) goto LAB_00ab5750;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar23,0x10);
      if (bVar6) {
        *puVar23 = uVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar14 = puVar20[3];
    if (lVar14 == 0) goto LAB_00ab51e0;
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_00cf98c8(&local_b0,lVar14 + 200);
    lVar15 = *(long *)(lVar14 + 8);
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
    }
  } while( true );
}


