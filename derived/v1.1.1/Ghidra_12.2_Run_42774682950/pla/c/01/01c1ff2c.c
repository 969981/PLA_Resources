/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1ff2c; name: FUN_01c1ff2c
 */


void FUN_01c1ff2c(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  uint *puVar20;
  undefined4 local_d0 [2];
  long *local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  undefined8 local_68;
  
  local_d0[0] = *param_2;
  local_c8 = *(long **)(param_2 + 2);
  if (local_c8 != (long *)0x0) {
    lVar15 = local_c8[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar7;
    }
    piVar9 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = *piVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_00b645bc(&local_c0,param_2 + 4);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01a0372c(&local_b0,param_2 + 8);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_0095aa3c(&local_a0,param_2 + 0xc);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_01a02354(&local_88,param_2 + 0x12);
  uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x5e) >> 0x10);
  uStack_78 = (undefined6)*(undefined8 *)(param_2 + 0x16);
  local_72 = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x30);
  FUN_019fbd44(param_1,local_d0);
  puVar1 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar9 = (int *)(local_88 + 1);
    do {
      iVar6 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  puVar1 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar9 = (int *)(local_a0 + 1);
    do {
      iVar6 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  puVar1 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar9 = (int *)(local_b0 + 1);
    do {
      iVar6 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  puVar1 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar9 = (int *)(local_c0 + 1);
    do {
      iVar6 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (local_c8 != (long *)0x0) {
    lVar15 = local_c8[0xb];
    piVar9 = (int *)(lVar15 + 0xc);
    do {
      iVar6 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  *param_1 = &PTR_LAB_042495d0;
  param_1[0x85] = 0;
  param_1[0x58] = &PTR_LAB_04249848;
  param_1[0x70] = &PTR_LAB_04249888;
  param_1[9] = &PTR_LAB_04249740;
  param_1[10] = &PTR_FUN_04249820;
  param_1[0x86] = 0;
  FUN_009ab200(param_1 + 0x85,param_2 + 0x1a);
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  FUN_018310a4(param_1 + 0x87,param_2 + 0x1e);
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  FUN_00aead04(param_1 + 0x89,param_2 + 0x22);
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  FUN_01aabb3c(param_1 + 0x8b,param_2 + 0x26);
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  FUN_00b64344(param_1 + 0x8d,param_2 + 0x2a);
  puVar11 = *(undefined4 **)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x8f) = *puVar11;
  *(undefined2 *)((long)param_1 + 0x47c) = *(undefined2 *)(puVar11 + 1);
  *(undefined4 *)(param_1 + 0x90) = puVar11[2];
  *(undefined1 *)((long)param_1 + 0x484) = *(undefined1 *)(puVar11 + 3);
  *(undefined1 *)((long)param_1 + 0x485) = *(undefined1 *)((long)puVar11 + 0xd);
  *(undefined4 *)(param_1 + 0x91) = puVar11[4];
  *(undefined4 *)((long)param_1 + 0x48c) = puVar11[5];
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((long)param_1 + 0x491) = *(undefined1 *)((long)param_2 + 0xc1);
  *(undefined1 *)((long)param_1 + 0x492) = *(undefined1 *)((long)param_2 + 0xc2);
  *(undefined1 *)((long)param_1 + 0x493) = *(undefined1 *)((long)param_2 + 0xc3);
  *(undefined1 *)((long)param_1 + 0x494) = *(undefined1 *)(param_2 + 0x31);
  *(undefined4 *)(param_1 + 0x93) = param_2[0x32];
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar10 = DAT_043f1798;
  lVar15 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar15 + 0x20), *(long *)(lVar15 + 0x20) == 0)) {
    *(long *)(lVar15 + 0x20) = DAT_043f1798;
    lVar8 = lVar10;
  }
  param_1[0x9f] = lVar8;
  param_1[0xa0] = 0x3fffffffffffffff;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined4 *)(param_1 + 0xa3) = param_2[0x33];
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar7 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar7;
  piVar9 = (int *)FUN_010aa4a0(uVar7,*(undefined4 *)(param_1 + 0x8f),
                               *(undefined2 *)((long)param_1 + 0x47c),
                               *(undefined4 *)(param_1 + 0x90));
  puVar2 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (0x18 - (long)*piVar9)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar12 = (ulong)*puVar2;
  if (uVar12 != 0) {
    puVar2 = puVar20 + uVar12;
    puVar1 = param_1 + 0x9f;
    do {
      local_68 = CONCAT44(local_68._4_4_,*puVar20);
      lVar10 = param_1[0x9d];
      if (lVar10 == param_1[0x9e]) {
        uVar14 = param_1[0xa0];
        lVar10 = lVar10 - param_1[0x9c] >> 2;
        uVar12 = lVar10 + 1;
        if (0x7ffffffffffffffe < uVar14) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 < uVar12) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = param_1[0x9e] - param_1[0x9c];
        uVar13 = lVar8 >> 1;
        if (uVar12 <= uVar13) {
          uVar12 = uVar13;
        }
        if ((ulong)(lVar8 >> 2) < uVar14 >> 1) {
          uVar14 = uVar12;
        }
        if (uVar14 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 << 2,4);
          if (lVar8 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar17 = lVar8 + lVar10 * 4;
        FUN_018c2c08(puVar1,lVar17,&local_68);
        lVar16 = param_1[0x9c];
        lVar10 = lVar17 + 4;
        lVar18 = param_1[0x9d];
        if (lVar18 != lVar16) {
          do {
            lVar17 = lVar17 + -4;
            lVar18 = lVar18 + -4;
            FUN_018c2ce0(puVar1,lVar17,lVar18);
          } while (lVar16 != lVar18);
          lVar16 = param_1[0x9c];
        }
        lVar18 = param_1[0x9e];
        param_1[0x9c] = lVar17;
        param_1[0x9d] = lVar10;
        param_1[0x9e] = lVar8 + uVar14 * 4;
        if (lVar16 != 0) {
          plVar19 = (long *)*puVar1;
          uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar15 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar15 + 0x38d488) = 1;
              *(undefined8 *)(lVar15 + 0x38d478) = 0;
              *(undefined8 *)(lVar15 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar15 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar16,lVar18 - lVar16,4);
              goto LAB_01c20520;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar18 - lVar16,4);
        }
      }
      else {
        FUN_018c2c08(puVar1,lVar10,&local_68);
        param_1[0x9d] = param_1[0x9d] + 4;
      }
LAB_01c20520:
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  param_1[0x46] = param_1 + 0x9c;
  return;
}


