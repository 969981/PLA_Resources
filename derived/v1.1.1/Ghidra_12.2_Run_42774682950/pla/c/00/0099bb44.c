/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099bb44; name: FUN_0099bb44
 */


void FUN_0099bb44(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  long *local_28;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  FUN_0098f80c(&local_28,lVar8 + 0xd8);
  plVar9 = (long *)local_28[0x13];
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x158))(&local_28,plVar9);
    fVar10 = (float)local_28[0x1a] - *(float *)(param_1 + 0x530);
    fVar11 = (float)local_28[0x1b] - *(float *)(param_1 + 0x538);
    fVar12 = (float)((ulong)local_28[0x1b] >> 0x20) - *(float *)(param_1 + 0x53c);
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    auVar13._4_4_ = 0;
    auVar13._0_4_ = fVar10;
    auVar13._8_4_ = fVar11;
    auVar13._12_4_ = fVar12;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar10;
    auVar4._8_4_ = fVar11;
    auVar4._12_4_ = fVar12;
    auVar13 = NEON_ext(auVar13,auVar4,8,1);
    fVar10 = SQRT(auVar13._0_4_ + fVar10 + auVar13._4_4_ + 0.0);
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(fVar10,PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar8 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar8;
    plVar7 = *(long **)(*(long *)(lVar8 + 0x158) + 0x60);
    (**(code **)(*plVar7 + 0x88))(fVar10,plVar7,"BGM_BATTLE_DISTANCE",0xffffffffffffffff,0,4,0);
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return;
}


