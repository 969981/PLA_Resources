/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017f22f8; name: FUN_017f22f8
 */


uint FUN_017f22f8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint local_44;
  undefined8 *local_40 [2];
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    local_44 = 0;
  }
  else {
    FUN_00cfac20(&local_28);
    if (local_28 == (long *)0x0) {
      local_44 = 0;
    }
    else {
      FUN_01af344c(local_40);
      FUN_0099c748(&local_30,local_40);
      if (local_40[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40[0] + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          local_40[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_18 = *local_40[0];
          FUN_02a44274(lVar6 + 0xd8,&local_18);
        }
      }
      if (local_30 == (long *)0x0) {
        local_44 = 0;
      }
      else {
        uVar5 = (**(code **)(*local_30 + 0x1a8))();
        if ((uVar5 & 1) == 0) {
          local_44 = (**(code **)(*local_30 + 0x1b0))();
          local_44 = local_44 ^ 1;
        }
        else {
          local_44 = 0;
        }
        if (local_30 != (long *)0x0) {
          lVar6 = local_30[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_30 + 0x20))();
          }
        }
      }
      if (local_28 != (long *)0x0) {
        lVar6 = local_28[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
  }
  return local_44 & 1;
}


