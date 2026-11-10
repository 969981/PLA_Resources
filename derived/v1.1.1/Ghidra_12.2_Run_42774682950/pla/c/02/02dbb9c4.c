/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dbb9c4; name: FUN_02dbb9c4
 */


void FUN_02dbb9c4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_48;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  lVar14 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar5 = PTR_DAT_043794a8;
  plVar15 = (long *)PTR_DAT_043794a0;
  uVar8 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar8;
  FUN_02a44e0c(&local_48,uVar8,lVar14);
  if (local_48 == (undefined8 *)0x0) {
    return;
  }
  puVar13 = (undefined8 *)local_48[2];
  puVar10 = local_48;
  if (puVar13 != (undefined8 *)0x0) {
    if (((DAT_04408e80 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04408e80), iVar7 != 0)) {
      if (((*PTR_DAT_04379d10 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379d10), iVar7 != 0)) {
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar7 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
            uVar8 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar8;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        *(undefined **)PTR_DAT_04379d18 = PTR_DAT_04379d28;
        __cxa_guard_release(PTR_DAT_04379d10);
      }
      DAT_04408e78 = PTR_DAT_04379d18;
      __cxa_guard_release(&DAT_04408e80);
    }
    do {
      puVar10 = local_48;
      if ((undefined **)puVar13 == &DAT_04408e78) {
        if (local_48 == (undefined8 *)0x0) {
          return;
        }
        if (*(int *)((long)local_48 + 0xc) == 0) goto LAB_02dbbc70;
        piVar1 = (int *)((long)local_48 + 0xc);
        iVar7 = *(int *)((long)local_48 + 0xc);
        goto LAB_02dbba8c;
      }
      puVar13 = (undefined8 *)*puVar13;
    } while (puVar13 != (undefined8 *)0x0);
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
  }
  piVar1 = (int *)(puVar10 + 1);
  do {
    iVar7 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_02dbbc84;
  while (iVar7 = iVar6, iVar6 != 0) {
LAB_02dbba8c:
    puVar13 = (undefined8 *)local_48[2];
    if (((DAT_04408e80 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04408e80), iVar6 != 0)) {
      if (((*PTR_DAT_04379d10 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d10), iVar6 != 0)) {
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar8 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar8;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        *(undefined **)PTR_DAT_04379d18 = PTR_DAT_04379d28;
        __cxa_guard_release(PTR_DAT_04379d10);
      }
      DAT_04408e78 = PTR_DAT_04379d18;
      __cxa_guard_release(&DAT_04408e80);
      plVar15 = (long *)PTR_DAT_043794a0;
    }
    while( true ) {
      if (puVar13 == (undefined8 *)0x0) goto LAB_02dbbc70;
      if ((undefined **)puVar13 == &DAT_04408e78) break;
      puVar13 = (undefined8 *)*puVar13;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar11 = local_48[3];
        if (lVar11 != 0) {
          plVar9 = (long *)*param_1;
          *param_1 = 0;
          if (plVar9 != (long *)0x0) {
            lVar12 = plVar9[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
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
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          *param_1 = lVar11 + -0x50;
          param_1[1] = lVar14;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_02dbbc70:
  piVar1 = (int *)(local_48 + 1);
  do {
    iVar7 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02dbbc84:
  if (iVar7 == 0) {
    puVar10[2] = 0;
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar14 = *plVar15;
    *(long *)puVar5 = lVar14;
    local_38 = *puVar10;
    FUN_02a44274(lVar14 + 0xd8,&local_38);
  }
  return;
}


