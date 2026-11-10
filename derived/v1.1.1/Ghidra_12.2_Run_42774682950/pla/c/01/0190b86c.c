/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190b86c; name: FUN_0190b86c
 */


uint FUN_0190b86c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  uint local_44;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  local_44 = 0;
  if ((*param_1 == 0) || (local_44 = 0, *(int *)(*param_1 + 0xc) == 0)) goto LAB_0190b8a0;
  if (param_1[2] == 0) {
    local_44 = 0;
    goto LAB_0190b8a0;
  }
  FUN_009b3e90(&local_28);
  local_44 = 0;
  if (local_28 == (long *)0x0) goto LAB_0190b8a0;
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_009ab200(&local_40,local_28 + 0x68);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
LAB_0190b8e0:
    if (local_30 != (long *)0x0) goto LAB_0190b8e8;
LAB_0190b9e0:
    local_44 = 0;
  }
  else {
    FUN_00b907c8(&local_30);
    puVar4 = local_40;
    if (local_40 == (undefined8 *)0x0) goto LAB_0190b8e0;
    piVar1 = (int *)(local_40 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0190b8e0;
    local_40[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar6 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar6;
    local_18 = *puVar4;
    FUN_02a44274(lVar6 + 0xd8,&local_18);
    if (local_30 == (long *)0x0) goto LAB_0190b9e0;
LAB_0190b8e8:
    local_44 = FUN_01a73b70();
    if (local_30 != (long *)0x0) {
      lVar6 = local_30[0xb];
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
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
LAB_0190b8a0:
  return local_44 & 1;
}


