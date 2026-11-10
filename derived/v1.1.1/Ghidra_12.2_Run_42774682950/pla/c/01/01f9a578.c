/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9a578; name: FUN_01f9a578
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f9a578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  long *local_188;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [96];
  long *local_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [96];
  long *local_70 [2];
  
  local_f8 = (long *)0x0;
  FUN_01f9abc4(&local_f0);
  if (local_f0 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else {
    FUN_017e9e98(&local_100);
    plVar12 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar6 = local_f0 + 1;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_70[0] = (long *)*plVar12;
        FUN_02a44274(lVar9 + 0xd8,local_70);
      }
    }
  }
  if (local_100 == (long *)0x0) goto joined_r0x01f9a864;
  if (((*PTR_DAT_04379618 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379618), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  lVar9 = *(long *)PTR_DAT_04379620;
  *(long *)PTR_DAT_04379628 = lVar9;
  plVar12 = *(long **)(lVar9 + 0x100);
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  uVar8 = 0;
  if ((param_9 & 1) == 0) {
    uVar8 = 0x20;
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x110,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_01d19e74(plVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar8);
  plVar6[1] = (long)plVar12;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0x110;
  plVar6[4] = 0x10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01f9ab30;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = local_f8;
  local_f8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  local_f8 = plVar6;
  FUN_01f9addc(&local_f0);
  if (local_f0 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_100);
    plVar12 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar6 = local_f0 + 1;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_70[0] = (long *)*plVar12;
        FUN_02a44274(lVar9 + 0xd8,local_70);
      }
    }
  }
  if (local_100 == (long *)0x0) goto joined_r0x01f9a864;
  local_180 = &LAB_01fa8558;
  local_178 = FUN_01fa8770;
  local_170 = &LAB_01fa8774;
  puStack_168 = &LAB_01fa8778;
  local_f0 = (long *)&LAB_01fa8558;
  local_e8 = FUN_01fa8770;
  local_e0 = &LAB_01fa8774;
  puStack_d8 = &LAB_01fa8778;
  FUN_009ad7f0(local_70,local_100[0xf],1,&local_f8,&local_f0,0);
  pcVar10 = local_e8;
  if (local_e8 == (code *)0x0) {
    pcVar10 = FUN_01fa8770;
LAB_01f9a788:
    local_170 = (undefined1 *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(auStack_160);
  }
  else {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(auStack_d0);
    pcVar10 = local_178;
    if (local_178 != (code *)0x0) goto LAB_01f9a788;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  local_188 = local_70[0];
  if (local_70[0] != (long *)0x0) {
    lVar9 = local_70[0][0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01f9ab30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01cbc9e0(uVar11,&local_188,1);
  if (local_188 != (long *)0x0) {
    lVar9 = local_188[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
    }
  }
  if (local_70[0] != (long *)0x0) {
    lVar9 = local_70[0][0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
joined_r0x01f9a864:
  if (local_f8 != (long *)0x0) {
    lVar9 = local_f8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  return;
}


