/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b39890; name: FUN_01b39890
 */


undefined1  [16] FUN_01b39890(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined8 extraout_d0;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 in_q3 [16];
  undefined8 uVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  auVar20._8_8_ = uStack_88;
  auVar20._0_8_ = local_90;
  uVar22 = in_q3._8_8_;
  uVar21 = in_q3._0_8_;
  local_78 = (long *)0x0;
  uStack_70 = 0;
  local_90 = FUN_00ac3fa4(&local_78,param_1 + 0x248);
  plVar9 = local_78;
  puVar13 = PTR_DAT_04379e90;
  puVar12 = PTR_DAT_04379e88;
  puVar11 = PTR_DAT_043795e0;
  puVar10 = PTR_DAT_043794d0;
  if (local_78 == (long *)0x0) goto LAB_01b398d0;
  if (*(int *)((long)local_78 + 0xc) != 0) {
    piVar1 = (int *)((long)local_78 + 0xc);
    iVar15 = *(int *)((long)local_78 + 0xc);
    do {
      plVar19 = (long *)plVar9[2];
      if (((*puVar12 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(puVar12), local_90 = extraout_d0, iVar14 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
          if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar17;
            __cxa_guard_release(puVar10);
          }
          *(undefined **)puVar11 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar13 = puVar11;
        local_90 = __cxa_guard_release(puVar12);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01b39a20;
        if (plVar19 == (long *)puVar13) break;
        plVar19 = (long *)*plVar19;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar18 = plVar9[3];
          plVar9 = (long *)0x0;
          plVar19 = local_78;
          if (lVar18 != 0) {
            plVar9 = (long *)(lVar18 + -0x50);
          }
          goto joined_r0x01b399ec;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar14;
    } while (iVar14 != 0);
  }
LAB_01b39a20:
  plVar9 = (long *)0x0;
  plVar19 = local_78;
joined_r0x01b399ec:
  local_78 = plVar19;
  if (plVar19 != (long *)0x0) {
    plVar2 = plVar19 + 1;
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 == 0) {
      plVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_68 = *plVar19;
      local_90 = FUN_02a44274(lVar18 + 0xd8,&local_68);
    }
  }
  if (plVar9 == (long *)0x0) goto LAB_01b398d0;
  FUN_01a9b800(&local_78,plVar9);
  if (local_78 == (long *)0x0) {
LAB_01b39b44:
    bVar4 = true;
  }
  else {
    uVar16 = FUN_02a43a8c();
    plVar19 = local_78;
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 1;
      do {
        iVar15 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_68 = *plVar19;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
    if ((uVar16 & 1) != 0) goto LAB_01b39b44;
    auVar20 = FUN_01a9a884(plVar9,param_2);
    bVar4 = false;
  }
  local_90 = auVar20._0_8_;
  lVar18 = plVar9[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (!bVar4) {
    return auVar20;
  }
LAB_01b398d0:
  FUN_009c69bc(&local_78,local_90,param_1);
  if (local_78 == (long *)0x0) {
    auVar6 = ZEXT816(0);
  }
  else {
    (**(code **)(*local_78 + 0x40))();
    auVar8._8_8_ = uVar22;
    auVar8._0_8_ = uVar21;
    auVar7._8_8_ = uVar22;
    auVar7._0_8_ = uVar21;
    auVar6._8_8_ = uVar22;
    auVar6._0_8_ = uVar21;
    if (local_78 != (long *)0x0) {
      lVar18 = local_78[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      auVar6 = auVar7;
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
        auVar6 = auVar8;
      }
    }
  }
  return auVar6;
}


