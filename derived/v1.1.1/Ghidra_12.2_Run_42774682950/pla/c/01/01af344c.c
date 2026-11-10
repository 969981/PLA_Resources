/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af344c; name: FUN_01af344c
 */


void FUN_01af344c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00cf9db0(&local_48,param_2 + 0x788);
  if (local_48 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_38);
    puVar4 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
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
        local_48[2] = 0;
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
  if (local_38 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ac3fa4(param_1,param_2 + 0x248);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ac3fa4(param_1,local_38 + 0x49);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[0xb];
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
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


