/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a07820; name: FUN_01a07820
 */


void FUN_01a07820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,byte param_8,byte param_9,
                 undefined8 *param_10)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_00b645bc(&local_58,param_3);
  local_68 = (long *)0x0;
  uStack_60 = 0;
  FUN_01a0372c(&local_68,param_4);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_019d1ef8(&local_80,&local_98);
  local_70 = local_88;
  FUN_01c342d8(param_1,6,&local_58,&local_68,&local_80,param_7 & 1,0);
  plVar11 = local_80;
  if (local_80 != (long *)0x0) {
    plVar12 = local_80 + 1;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = *plVar11;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  plVar11 = local_68;
  if (local_68 != (long *)0x0) {
    plVar12 = local_68 + 1;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = *plVar11;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  plVar11 = local_58;
  if (local_58 != (long *)0x0) {
    plVar12 = local_58 + 1;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = *plVar11;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  param_1[0x58] = &PTR_LAB_04236a40;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  puVar7 = local_98;
  lVar13 = DAT_043f1798;
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar5 = tpidr_el0;
    lVar10 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(long *)(lVar5 + 0x20) = DAT_043f1798;
      lVar10 = lVar13;
    }
  }
  param_1[0x5c] = lVar10;
  param_1[0x5d] = 0x1ffffffffffffff;
  *param_1 = &PTR_FUN_04236a80;
  param_1[9] = &PTR_LAB_04236bc8;
  param_1[10] = &PTR_LAB_04236ca8;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x58] = &PTR_LAB_04236cd0;
  param_1[0x70] = &PTR_LAB_04236d10;
  if (local_98 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_98 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_80 = (long *)*puVar7;
      FUN_02a44274(lVar13 + 0xd8,&local_80);
    }
  }
  *param_1 = &PTR_LAB_04236760;
  param_1[0x71] = 0;
  param_1[9] = &PTR_LAB_042368b0;
  param_1[10] = &PTR_LAB_04236990;
  param_1[0x70] = &PTR_LAB_042369f8;
  *(undefined1 *)(param_1 + 0x72) = 1;
  param_1[0x78] = &DAT_cbf29ce484222645;
  param_1[0x58] = &PTR_LAB_042369b8;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = &DAT_03996322;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  FUN_00aead04(param_1 + 0x73,param_5);
  FUN_00befc74(&local_80,param_6);
  plVar11 = (long *)param_1[0x71];
  param_1[0x71] = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  param_1[0x71] = local_80;
  *(byte *)(param_1 + 0x77) = param_8 & 1;
  *(byte *)(param_1 + 0x72) = param_9 & 1;
  param_1[0x78] = *param_10;
  param_1[0x79] = param_10[1];
  param_1[0x7a] = param_10[2];
  plVar11 = (long *)param_10[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar12 = (long *)param_1[0x7b];
  param_1[0x7b] = plVar11;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  if ((param_1[0x41] != 0) && (FUN_01a0408c(&local_58), plVar11 = local_58, local_58 != (long *)0x0)
     ) {
    plVar12 = param_1 + 0x70;
    (**(code **)(*plVar12 + 0x20))(&local_80,plVar12);
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_01800100(&local_b0,&local_80);
    plVar8 = local_80;
    if (local_80 != (long *)0x0) {
      plVar1 = local_80 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_98 = (undefined8 *)*plVar8;
        FUN_02a44274(lVar13 + 0xd8,&local_98);
      }
    }
    local_a0 = plVar12;
    FUN_01f38820(plVar11,&local_b0);
    puVar7 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_b0 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_80 = (long *)*puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_80);
      }
    }
    if (local_58 != (long *)0x0) {
      lVar13 = local_58[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


