/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00993990; name: FUN_00993990
 */


/* WARNING: Removing unreachable block (ram,0x00993b68) */

void FUN_00993990(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  long *local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  long *local_d0;
  long *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_38;
  
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,1);
  local_38 = param_2;
  plVar7 = (long *)FUN_00993d60(param_1 + 0xd0,&local_c0);
  plVar8 = (long *)*plVar7;
  *plVar7 = 0;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  *plVar7 = 0;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar9 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar9;
  FUN_0098f80c(&local_d0,lVar9 + 0xd8);
  FUN_0199c304(&local_c0,local_d0);
  if (local_c0 == (undefined8 *)0x0) {
    local_c8 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_c8);
    puVar4 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_e0._0_8_ = *puVar4;
        FUN_02a44274(lVar9 + 0xd8,local_e0);
      }
    }
  }
  if (local_d0 != (long *)0x0) {
    lVar9 = local_d0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 8);
  local_e0 = FUN_0098fad4(param_1 + 800);
  local_f4 = 0;
  local_f0 = 0x5e64874601bdd38d;
  uStack_e8 = 0x5e64874601bdd38d;
  local_c0 = (undefined8 *)0x5e64874601bdd38d;
  local_b8 = (code *)0x3907654;
  local_b0 = (undefined1 *)0xe;
  FUN_00993f9c(&local_d0,uVar10,param_1 + 0x310,local_e0,&uStack_e8,&local_38,&local_c0,&local_f0,
               &local_f4);
  local_158 = 1;
  uStack_98 = CONCAT44(uStack_154,1);
  local_c0 = (undefined8 *)&LAB_009af80c;
  local_b8 = FUN_009af874;
  local_b0 = &LAB_009aff78;
  puStack_a8 = &LAB_009aff84;
  local_160 = param_1;
  local_a0 = param_1;
  FUN_009ad7f0(&local_100,local_c8[0xf],1,&local_d0,&local_c0,0);
  pcVar5 = local_b8;
  if (local_b8 == (code *)0x0) {
    local_b8 = (code *)0x0;
  }
  else {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined8 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(&local_a0);
  }
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  FUN_009af874(&local_160);
  if (local_d0 != (long *)0x0) {
    lVar9 = local_d0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  if (local_c8 != (long *)0x0) {
    lVar9 = local_c8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  return;
}


