/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00938020; name: FUN_00938020
 */


void FUN_00938020(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_58;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar10 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar10;
  FUN_02a44e0c(&local_58,uVar10,param_2);
  if ((local_58 != (undefined8 *)0x0) &&
     (puVar13 = (undefined8 *)local_58[2], puVar13 != (undefined8 *)0x0)) {
    puVar12 = (undefined8 *)PTR_DAT_04379d18;
    if (((*PTR_DAT_04379d10 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d10), puVar8 = PTR_DAT_04379d28,
       puVar12 = (undefined8 *)PTR_DAT_04379d18, iVar9 != 0)) {
      if (((*PTR_DAT_04379d20 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d20), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = puVar7;
        __cxa_guard_release(PTR_DAT_04379d20);
      }
      puVar12 = (undefined8 *)PTR_DAT_04379d18;
      *(undefined **)PTR_DAT_04379d18 = puVar8;
      __cxa_guard_release(PTR_DAT_04379d10);
      if (puVar13 != puVar12) goto LAB_009382e0;
LAB_0093816c:
      puVar13 = (undefined8 *)*param_1;
      *param_1 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_48 = *puVar13;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      puVar13 = local_58;
      local_58 = (undefined8 *)0x0;
      *param_1 = (long)puVar13;
      goto LAB_009380d8;
    }
    do {
      if (puVar13 == puVar12) goto LAB_0093816c;
LAB_009382e0:
      puVar13 = (undefined8 *)*puVar13;
    } while (puVar13 != (undefined8 *)0x0);
  }
  puVar13 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_2 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 1) {
      puVar13[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_48 = *puVar13;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
    param_2 = 0;
  }
LAB_009380d8:
  puVar13 = local_58;
  param_1[1] = param_2;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_48 = *puVar13;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  return;
}


