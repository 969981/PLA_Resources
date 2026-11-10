/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9aff4; name: FUN_01f9aff4
 */


void FUN_01f9aff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long *local_198;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [108];
  undefined4 local_104;
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
    plVar5 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar2 = local_f0 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_70[0] = (long *)*plVar5;
        FUN_02a44274(lVar9 + 0xd8,local_70);
      }
    }
  }
  if (local_100 == (long *)0x0) goto joined_r0x01f9b250;
  uVar7 = FUN_017d1b40(local_100,4);
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  local_104 = 0;
  if ((param_9 & 1) == 0) {
    local_104 = 0x20;
  }
  FUN_01f9b4b4(&local_f0,uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_104);
  plVar5 = local_f8;
  local_f8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  local_f8 = local_f0;
  FUN_01f9addc(&local_f0);
  if (local_f0 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_100);
    plVar5 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar2 = local_f0 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_70[0] = (long *)*plVar5;
        FUN_02a44274(lVar9 + 0xd8,local_70);
      }
    }
  }
  if (local_100 == (long *)0x0) goto joined_r0x01f9b250;
  local_190 = &LAB_01fa88ec;
  local_188 = FUN_01fa8b04;
  local_180 = &LAB_01fa8b08;
  puStack_178 = &LAB_01fa8b0c;
  local_f0 = (long *)&LAB_01fa88ec;
  local_e8 = FUN_01fa8b04;
  local_e0 = &LAB_01fa8b08;
  puStack_d8 = &LAB_01fa8b0c;
  FUN_01f81218(local_70,local_100[0xf],2,&local_f8,&local_f0,0);
  pcVar10 = local_e8;
  if (local_e8 == (code *)0x0) {
    pcVar10 = FUN_01fa8b04;
LAB_01f9b174:
    local_180 = (undefined1 *)0x0;
    puStack_178 = (undefined1 *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar10)(auStack_170);
  }
  else {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(auStack_d0);
    pcVar10 = local_188;
    if (local_188 != (code *)0x0) goto LAB_01f9b174;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  local_198 = local_70[0];
  if (local_70[0] != (long *)0x0) {
    lVar9 = local_70[0][0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01cbc9e0(uVar7,&local_198,1);
  if (local_198 != (long *)0x0) {
    lVar9 = local_198[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
  if (local_70[0] != (long *)0x0) {
    lVar9 = local_70[0][0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
joined_r0x01f9b250:
  if (local_f8 != (long *)0x0) {
    lVar9 = local_f8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  return;
}


