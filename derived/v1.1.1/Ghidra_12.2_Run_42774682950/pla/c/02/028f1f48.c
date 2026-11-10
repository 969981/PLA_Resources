/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f1f48; name: FUN_028f1f48
 */


void FUN_028f1f48(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_60;
  undefined8 local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar11 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar11;
  FUN_02a44e0c(&local_60,uVar11,param_2);
  if ((local_60 != (undefined8 *)0x0) &&
     (puVar12 = (undefined8 *)local_60[2], puVar12 != (undefined8 *)0x0)) {
    puVar14 = (undefined8 *)PTR_DAT_04388030;
    if ((*PTR_DAT_04388028 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04388028);
      puVar8 = PTR_DAT_04379d18;
      puVar14 = (undefined8 *)PTR_DAT_04388030;
      if (iVar10 != 0) {
        if (((*PTR_DAT_04379d10 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379d10), puVar9 = PTR_DAT_04379d28, iVar10 != 0))
        {
          if (((*PTR_DAT_04379d20 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379d20), puVar7 = PTR_DAT_043794d8, iVar10 != 0
             )) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar11;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar9 = puVar7;
            __cxa_guard_release(PTR_DAT_04379d20);
          }
          *(undefined **)puVar8 = puVar9;
          __cxa_guard_release(PTR_DAT_04379d10);
        }
        puVar14 = (undefined8 *)PTR_DAT_04388030;
        *(undefined **)PTR_DAT_04388030 = puVar8;
        __cxa_guard_release(PTR_DAT_04388028);
        if (puVar12 != puVar14) goto LAB_028f1fd4;
LAB_028f20d4:
        puVar12 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            puVar12[2] = 0;
            if (((*puVar4 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)puVar5;
            *(long *)puVar6 = lVar13;
            local_58 = *puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        puVar12 = local_60;
        local_60 = (undefined8 *)0x0;
        *param_1 = puVar12;
        goto LAB_028f212c;
      }
    }
    do {
      if (puVar12 == puVar14) goto LAB_028f20d4;
LAB_028f1fd4:
      puVar12 = (undefined8 *)*puVar12;
    } while (puVar12 != (undefined8 *)0x0);
  }
  puVar12 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_2 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 == 1) {
      puVar12[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)puVar5;
      *(long *)puVar6 = lVar13;
      local_58 = *puVar12;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
    param_2 = 0;
  }
LAB_028f212c:
  puVar12 = local_60;
  param_1[1] = param_2;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_60[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)puVar5;
      *(long *)puVar6 = lVar13;
      local_58 = *puVar12;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  return;
}


