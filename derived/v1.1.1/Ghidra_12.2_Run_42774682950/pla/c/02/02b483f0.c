/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b483f0; name: FUN_02b483f0
 */


void FUN_02b483f0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_48;
  undefined8 local_38;
  
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
  FUN_02a44e0c(&local_48,uVar8,param_2);
  if ((local_48 != (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)local_48[2], puVar9 != (undefined8 *)0x0)) {
    puVar11 = (undefined8 *)PTR_DAT_04388158;
    if ((*PTR_DAT_04388150 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04388150);
      puVar11 = (undefined8 *)PTR_DAT_04388158;
      if (iVar7 != 0) {
        uVar8 = FUN_00986b1c();
        *(undefined8 *)PTR_DAT_04388158 = uVar8;
        __cxa_guard_release(PTR_DAT_04388150);
        puVar11 = (undefined8 *)PTR_DAT_04388158;
        if (puVar9 != (undefined8 *)PTR_DAT_04388158) goto LAB_02b48478;
LAB_02b48564:
        puVar9 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar9 + 1);
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
            puVar9[2] = 0;
            if ((*puVar4 & 1) == 0) {
              iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar7 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar10 = *(long *)puVar5;
            *(long *)puVar6 = lVar10;
            local_38 = *puVar9;
            FUN_02a44274(lVar10 + 0xd8,&local_38);
          }
        }
        puVar9 = local_48;
        local_48 = (undefined8 *)0x0;
        *param_1 = (long)puVar9;
        goto LAB_02b485bc;
      }
    }
    do {
      if (puVar9 == puVar11) goto LAB_02b48564;
LAB_02b48478:
      puVar9 = (undefined8 *)*puVar9;
    } while (puVar9 != (undefined8 *)0x0);
  }
  puVar9 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_2 = 0;
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_38 = *puVar9;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
    param_2 = 0;
  }
LAB_02b485bc:
  puVar9 = local_48;
  param_1[1] = param_2;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
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
      local_48[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_38 = *puVar9;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  return;
}


