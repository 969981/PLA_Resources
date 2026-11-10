/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab6ce4; name: FUN_00ab6ce4
 */


long * FUN_00ab6ce4(undefined4 param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                   uint param_5)

{
  long *plVar1;
  int *piVar2;
  char *__s;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  size_t sVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *unaff_x26;
  undefined8 *puVar21;
  ulong uVar22;
  uint *local_1918;
  long *local_1910 [2];
  undefined8 *local_1900;
  undefined8 uStack_18f8;
  undefined8 local_18f0;
  undefined8 local_18e8;
  undefined8 local_18e0;
  undefined8 uStack_18d8;
  undefined4 local_18d0;
  undefined8 local_18c0 [4];
  undefined4 local_18a0 [4];
  ulong local_1890 [6];
  undefined4 local_1860 [2];
  undefined8 local_1858;
  undefined4 local_1850 [3];
  undefined1 local_1844 [4];
  undefined2 local_1840 [2];
  undefined4 local_183c;
  undefined8 local_1838 [2];
  undefined4 local_1828 [3];
  undefined1 local_181c [4];
  undefined2 local_1818 [2];
  undefined4 local_1814;
  undefined8 local_1810 [746];
  undefined **local_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_68;
  
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379578), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar17 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar17;
  puVar21 = (undefined8 *)PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  lVar17 = *(long *)(lVar17 + 0xd8);
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar2 = (int *)(lVar17 + 0xc);
    iVar11 = *(int *)(lVar17 + 0xc);
    do {
      plVar20 = *(long **)(lVar17 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *puVar21 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        unaff_x26 = puVar21;
        if (plVar20 == (long *)0x0) goto LAB_00ab6d50;
        if (plVar20 == puVar21) break;
        plVar20 = (long *)*plVar20;
      }
      iVar12 = *piVar2;
      if (iVar12 == iVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            local_88 = (undefined8 *)0x0;
            uStack_80 = 0;
            FUN_00cf98c8(&local_88,lVar17 + 200);
            lVar18 = *(long *)(lVar17 + 8);
            piVar2 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))((long *)(lVar17 + -0x50));
            }
            goto LAB_00ab6d60;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_00ab6d50:
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00cf98c8(&local_88,0x118);
  puVar21 = unaff_x26;
LAB_00ab6d60:
  local_c0[0] = &PTR_FUN_04287c08;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = param_1;
  memset(local_18c0,0,0x1800);
  puVar10 = PTR_DAT_0437a658;
  puVar9 = PTR_DAT_0437a650;
  puVar8 = PTR_DAT_0437a648;
  lVar17 = 0;
  do {
    lVar18 = lVar17 + 0xc0;
    *(undefined8 *)((long)local_1890 + lVar17) = 0;
    *(undefined8 *)((long)local_1890 + lVar17 + 0x10) = 0;
    *(undefined8 *)((long)local_1890 + lVar17 + 0x18) = 0;
    *(undefined4 *)((long)local_1860 + lVar17) = 0x7f7fffee;
    *(undefined8 *)((long)local_1860 + lVar17 + 8) = 0xffffffffffffffff;
    *(undefined4 *)((long)local_1850 + lVar17) = 0xffffff;
    *(undefined4 *)((long)local_1850 + lVar17 + 8) = 0xffffffff;
    local_1844[lVar17] = 0xf;
    *(undefined2 *)((long)local_1840 + lVar17) = 0xffff;
    *(undefined4 *)((long)local_1840 + lVar17 + 4) = 0;
    *(undefined4 *)((long)local_1828 + lVar17) = 0xffffff;
    *(undefined4 *)((long)local_1828 + lVar17 + 8) = 0xffffffff;
    local_181c[lVar17] = 0xf;
    *(undefined2 *)((long)local_1818 + lVar17) = 0xffff;
    *(undefined4 *)((long)local_1818 + lVar17 + 4) = 0;
    *(undefined8 *)((long)local_1890 + lVar17 + 0x20) = 0;
    *(undefined8 *)((long)local_1890 + lVar17 + 0x28) = 0;
    *(undefined8 *)((long)local_1810 + lVar17) = 0;
    *(undefined8 *)((long)local_1810 + lVar17 + 8) = 0;
    *(undefined8 *)((long)local_1838 + lVar17) = 0;
    *(undefined8 *)((long)local_1838 + lVar17 + 8) = 0xffffffffffffffff;
    lVar17 = lVar18;
  } while (lVar18 != 0x1800);
  if ((local_88 != (undefined8 *)0x0) &&
     (puVar21 = (undefined8 *)(ulong)*(uint *)((long)local_88 + 0xc),
     *(uint *)((long)local_88 + 0xc) != 0)) {
    local_1918 = (uint *)((long)local_88 + 0xc);
    puVar19 = local_88;
    goto LAB_00ab70e8;
  }
LAB_00ab6e20:
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
    FUN_00100250(&LAB_00ab938c,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar17 = *(long *)puVar9;
  *(long *)puVar10 = lVar17;
  param_3 = FUN_02bf65bc(*(undefined8 *)(lVar17 + 0x230),local_c0,param_2,param_3,param_5,local_18c0
                         ,0x20,1);
  param_3 = param_3 & 0xffffffff;
LAB_00ab6e58:
  uVar13 = (uint)param_3;
joined_r0x00ab6e58:
  if (uVar13 == 0) {
    plVar20 = (long *)0x0;
LAB_00ab6e60:
    FUN_00ab75fc(local_18c0);
    puVar21 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_88 + 1);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_18c0[0] = *puVar21;
        FUN_02a44274(lVar17 + 0xd8,local_18c0);
      }
    }
    return plVar20;
  }
  uVar22 = 0;
  plVar20 = (long *)0x0;
  local_1918 = (uint *)tpidr_el0;
  while (puVar7 = PTR_PTR_0434a080, uVar22 != 0x20) {
    local_18e0 = local_18c0[uVar22 * 0x18 + 2];
    uStack_18d8 = local_18c0[uVar22 * 0x18 + 3];
    local_18f0 = local_18c0[uVar22 * 0x18];
    local_18e8 = local_18c0[uVar22 * 0x18 + 1];
    local_18d0 = local_18a0[uVar22 * 0x30];
    uVar4 = local_18a0[uVar22 * 0x30 + 1];
    __s = (char *)(local_1890[uVar22 * 0x18] & 0xfffffffffffffffe);
    if (__s == (char *)0x0) {
      bVar3 = *puVar8;
      puVar19 = (undefined8 *)0x0;
    }
    else {
      sVar14 = strlen(__s);
      uVar13 = (int)sVar14 + 1;
      puVar21 = (undefined8 *)
                (**(code **)(*(long *)puVar7 + 0x10))
                          (puVar7,(long)((sVar14 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar21 = puVar7;
      *(uint *)(puVar21 + 1) = uVar13;
      memcpy(puVar21 + 2,__s,(ulong)uVar13);
      puVar19 = (undefined8 *)((ulong)(puVar21 + 2) | 1);
      bVar3 = *puVar8;
    }
    if (((bVar3 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      FUN_00100250(&LAB_00ab938c,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar8);
    }
    lVar17 = *(long *)puVar9;
    *(long *)puVar10 = lVar17;
    FUN_02bf7d30(local_1910,*(undefined8 *)(lVar17 + 0x230),uVar4);
    local_1900 = (undefined8 *)0x0;
    uStack_18f8 = 0;
    FUN_00ab944c(&local_1900,local_1910);
    plVar15 = local_1910[0];
    if (local_1910[0] != (long *)0x0) {
      plVar1 = local_1910[0] + 1;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_1910[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_68 = *plVar15;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
    FUN_00ab5ae0(local_1910,&local_1900);
    puVar21 = local_1900;
    if (local_1910[0] == (long *)0x0) {
      uVar13 = 4;
    }
    else {
      if ((1 << (ulong)(*(uint *)(local_1910[0] + 0x16) & 0x1f) & param_5) == 0) {
        uVar13 = 0;
      }
      else {
        param_4[1] = local_18e8;
        uVar13 = 2;
        plVar20 = (long *)0x1;
        *param_4 = local_18f0;
      }
      lVar17 = local_1910[0][0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_1910[0] + 0x20))();
        puVar21 = local_1900;
      }
    }
    local_1900 = puVar21;
    if (puVar21 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar21 + 1);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        puVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_1910[0] = (long *)*puVar21;
        FUN_02a44274(lVar17 + 0xd8,local_1910);
      }
    }
    param_2 = puVar19;
    puVar21 = puVar19;
    if (((ulong)puVar19 & 1) != 0) {
      puVar21 = (undefined8 *)(ulong)uVar13;
      lVar17 = *(long *)(local_1918 + 0xe3524);
      if (lVar17 == 0) {
        lVar17 = FUN_0333d16c(0,1);
        *(long *)(local_1918 + 0xe3524) = lVar17;
      }
      plVar15 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
      param_2 = (undefined8 *)((long)puVar19 + -0x11);
      *param_2 = 0;
      (**(code **)(*plVar15 + 0x18))(plVar15,param_2,(long)*(int *)((long)puVar19 + -9) + 0x10);
    }
    if (((uVar13 | 4) != 4) || (uVar22 = uVar22 + 1, uVar22 == param_3)) goto LAB_00ab6e60;
  }
  FUN_00ab9440();
  puVar19 = (undefined8 *)&DAT_00000020;
LAB_00ab753c:
  iVar11 = __cxa_guard_acquire(PTR_DAT_0437a668);
  if (iVar11 != 0) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
      uVar16 = FUN_0087f8f0();
      *(undefined8 *)PTR_DAT_043794d8 = uVar16;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
    __cxa_guard_release(PTR_DAT_0437a668);
  }
joined_r0x00ab757c:
  while( true ) {
    if (plVar20 == (long *)0x0) goto LAB_00ab6e20;
    if (plVar20 == (long *)PTR_DAT_0437a660) break;
    plVar20 = (long *)*plVar20;
  }
  uVar13 = *local_1918;
  if (uVar13 == (uint)puVar21) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(local_1918,0x10);
    if (bVar6) {
      *local_1918 = (uint)puVar21 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto code_r0x00ab7130;
  }
  else {
    ClearExclusiveLocal();
  }
  puVar21 = (undefined8 *)(ulong)uVar13;
  if (uVar13 == 0) goto LAB_00ab6e20;
LAB_00ab70e8:
  plVar20 = (long *)puVar19[2];
  if ((*PTR_DAT_0437a668 & 1) == 0) goto LAB_00ab753c;
  goto joined_r0x00ab757c;
code_r0x00ab7130:
  puVar21 = (undefined8 *)puVar19[3];
  if (puVar21 == (undefined8 *)0x0) goto LAB_00ab6e20;
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
    FUN_00100250(&LAB_00ab938c,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar17 = *(long *)puVar9;
  *(long *)puVar10 = lVar17;
  uVar13 = FUN_02bf65bc(*(undefined8 *)(lVar17 + 0x230),local_c0,param_2,param_3,param_5,local_18c0,
                        0x20,1);
  lVar17 = puVar21[1];
  param_3 = (ulong)uVar13;
  piVar2 = (int *)(lVar17 + 0xc);
  do {
    iVar11 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 + -1 != 0) goto LAB_00ab6e58;
  *(undefined8 *)(lVar17 + 0x18) = 0;
  (**(code **)(puVar21[-10] + 0x20))(puVar21 + -10);
  goto joined_r0x00ab6e58;
}


