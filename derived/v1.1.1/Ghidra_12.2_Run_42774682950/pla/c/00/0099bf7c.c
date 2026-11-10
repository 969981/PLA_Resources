/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099bf7c; name: FUN_0099bf7c
 */


void FUN_0099bf7c(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long local_a0;
  long lStack_98;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int local_34;
  undefined8 local_28;
  
  lVar6 = param_1 + (long)param_2 * 0x20;
  uStack_58 = *(undefined8 *)(lVar6 + 0x2f8);
  local_60 = *(undefined8 *)(lVar6 + 0x2f0);
  uStack_48 = *(undefined8 *)(lVar6 + 0x308);
  uStack_50 = *(undefined8 *)(lVar6 + 0x300);
  local_34 = param_2;
  FUN_0099c578(&local_68,param_1,&local_34);
  if (local_68 == (long *)0x0) {
    return;
  }
  lVar6 = FUN_009b807c(local_68 + 0x1e,&local_80);
  if (lVar6 == 0) goto LAB_0099c0ec;
  if (param_2 == 0) {
LAB_0099bfd4:
    lStack_98 = 0;
    local_a0 = 0;
  }
  else {
    FUN_01a73650(&local_80,lVar6);
    FUN_00956dac(&local_70,&local_80);
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
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
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *local_80;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (local_70 == (long *)0x0) goto LAB_0099bfd4;
    lStack_98 = local_70[0x1b];
    local_a0 = local_70[0x1a];
    lVar7 = local_70[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,lVar6 + 0x248);
  FUN_0099c748(&local_70,&local_80);
  puVar4 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
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
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  if (local_70 != (long *)0x0) {
    local_80 = (undefined8 *)
               CONCAT44((float)((ulong)local_60 >> 0x20) - (float)((ulong)local_a0 >> 0x20),
                        (float)local_60 - (float)local_a0);
    uStack_78 = CONCAT44((float)((ulong)uStack_58 >> 0x20) - (float)((ulong)lStack_98 >> 0x20),
                         (float)uStack_58 - (float)lStack_98);
    FUN_01a83770(local_70,&local_80,&uStack_50);
    FUN_01a9a6bc(&local_80,local_70);
    if (local_80 == (undefined8 *)0x0) {
      local_88 = (long *)0x0;
    }
    else {
      FUN_009b8474(&local_88);
      puVar4 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
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
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_28 = *puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_28);
        }
      }
    }
    if ((local_88 != (long *)0x0) && (FUN_01827904(), local_88 != (long *)0x0)) {
      lVar6 = local_88[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      lVar6 = local_70[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
LAB_0099c0ec:
  lVar6 = local_68[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
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
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_68 + 0x20))(local_68);
  }
  return;
}


