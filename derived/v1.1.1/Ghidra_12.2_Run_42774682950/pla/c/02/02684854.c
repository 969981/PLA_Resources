/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02684854; name: FUN_02684854
 */


bool FUN_02684854(long param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_28;
  
  if (*(long *)(param_1 + 0x678) == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_02685c9c(&local_28);
    if (local_28 != (long *)0x0) {
      if (local_28[0x19c] != 0) {
        FUN_0269251c(&local_68,local_28[0x19c]);
        if (local_68 != (long *)0x0) {
          lVar10 = local_68[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          cVar2 = *(char *)((long)local_68 + 0xc69);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
          if (cVar2 != '\0') {
            if (local_28 == (long *)0x0) {
              return false;
            }
            lVar10 = local_28[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_28 + 0x20))();
              return false;
            }
            return false;
          }
        }
        if (local_28 == (long *)0x0) goto LAB_02684878;
      }
      lVar10 = local_28[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
        lVar10 = *(long *)(param_1 + 0x688);
        goto joined_r0x026848f0;
      }
    }
  }
LAB_02684878:
  lVar10 = *(long *)(param_1 + 0x688);
joined_r0x026848f0:
  if (lVar10 == 0) {
    return false;
  }
  FUN_026874cc(&local_38);
  plVar6 = local_38;
  if (local_38 == (long *)0x0) {
    return false;
  }
  local_68 = (long *)local_38[0x51];
  lStack_60 = local_38[0x52];
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00b63974(&local_58,local_38 + 0x53);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_019c86bc(&local_48,plVar6 + 0x55);
  puVar5 = local_48;
  bVar7 = local_68._4_1_ == '\0';
  bVar8 = (int)local_68 == 3;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = (long *)*puVar5;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  puVar5 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = (long *)*puVar5;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return bVar7 && bVar8;
}


