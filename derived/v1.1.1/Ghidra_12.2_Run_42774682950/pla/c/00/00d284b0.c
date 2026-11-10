/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d284b0; name: FUN_00d284b0
 */


void FUN_00d284b0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_50;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar8 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar8;
  FUN_02a44e0c(&local_50,uVar8,param_2);
  if ((local_50 != (undefined8 *)0x0) && (plVar12 = (long *)local_50[2], plVar12 != (long *)0x0)) {
    plVar9 = (long *)FUN_00d28740();
    do {
      if (plVar12 == plVar9) {
        puVar10 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar10 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar10[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_48 = *puVar10;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        puVar10 = local_50;
        local_50 = (undefined8 *)0x0;
        *param_1 = (long)puVar10;
        goto LAB_00d2857c;
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  puVar10 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_2 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 1) {
      puVar10[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_48 = *puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
    param_2 = 0;
  }
LAB_00d2857c:
  puVar10 = local_50;
  param_1[1] = param_2;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_50[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_48 = *puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  return;
}


