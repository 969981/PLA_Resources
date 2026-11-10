/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4a0dc; name: FUN_01e4a0dc
 */


void FUN_01e4a0dc(long param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 *local_50 [2];
  long *local_40;
  undefined8 local_38;
  
  *(undefined1 *)(param_1 + 0x324) = 1;
  iVar6 = *param_2;
  if (iVar6 == 1) {
    if (*(int *)(param_1 + 800) == 1) goto LAB_01e4a240;
    *(undefined8 *)(param_1 + 0x328) = 0;
    FUN_02be88ac(local_50,param_1,0);
    FUN_00ab5ae0(&local_40,local_50);
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *local_50[0];
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    if (local_40 == (long *)0x0) goto LAB_01e4a240;
    FUN_02bdbb94(local_40,param_1 + 0x330,param_1 + 0x340);
    fVar8 = (float)*(undefined8 *)(param_1 + 0x330);
    fVar12 = fVar8 * fVar8;
    fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20);
    fVar13 = fVar9 * fVar9;
    fVar10 = (float)*(undefined8 *)(param_1 + 0x338);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x338) >> 0x20);
    auVar14._4_4_ = fVar13;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = fVar10 * fVar10;
    auVar14._12_4_ = fVar11 * fVar11;
    auVar4._4_4_ = fVar13;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = fVar10 * fVar10;
    auVar4._12_4_ = fVar11 * fVar11;
    auVar14 = NEON_ext(auVar14,auVar4,8,1);
    *(ulong *)(param_1 + 0x338) = CONCAT44(fVar11 * 0.2,fVar10 * 0.2);
    *(ulong *)(param_1 + 0x330) = CONCAT44(fVar9 * 0.2,fVar8 * 0.2);
    *(float *)(param_1 + 0x32c) = SQRT(auVar14._0_4_ + fVar12 + auVar14._4_4_ + fVar13) * 0.02;
    *(ulong *)(param_1 + 0x348) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x348) * 0.1);
    *(ulong *)(param_1 + 0x340) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x340) * 0.1);
    FUN_02bdb238(local_40,param_1 + 0x330,param_1 + 0x340);
    if (local_40 == (long *)0x0) goto LAB_01e4a240;
    lVar7 = local_40[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      bVar5 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else if (iVar6 == 2) {
    if (*(int *)(param_1 + 800) == 2) goto LAB_01e4a240;
    *(undefined8 *)(param_1 + 0x328) = 0;
    FUN_02be88ac(local_50,param_1,0);
    FUN_00ab5ae0(&local_40,local_50);
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *local_50[0];
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    if (local_40 == (long *)0x0) goto LAB_01e4a240;
    FUN_02bdbb94(local_40,param_1 + 0x330,param_1 + 0x340);
    *(ulong *)(param_1 + 0x338) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x338) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x338) * 0.1);
    *(ulong *)(param_1 + 0x330) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x330) * 0.1);
    *(ulong *)(param_1 + 0x348) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x348) * 0.1);
    *(ulong *)(param_1 + 0x340) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x340) * 0.1);
    FUN_02bdb238(local_40,param_1 + 0x330,param_1 + 0x340);
    if (local_40 == (long *)0x0) goto LAB_01e4a240;
    lVar7 = local_40[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      bVar5 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if ((iVar6 != 3) || (*(int *)(param_1 + 800) == 3)) goto LAB_01e4a240;
    *(undefined8 *)(param_1 + 0x328) = 0;
    FUN_02be88ac(local_50,param_1,0);
    FUN_00ab5ae0(&local_40,local_50);
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *local_50[0];
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    if (local_40 == (long *)0x0) goto LAB_01e4a240;
    FUN_02bdbb94(local_40,param_1 + 0x330,param_1 + 0x340);
    *(ulong *)(param_1 + 0x338) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x338) >> 0x20) * 0.0,
                  (float)*(undefined8 *)(param_1 + 0x338) * 0.0);
    *(ulong *)(param_1 + 0x330) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20) * 0.0,
                  (float)*(undefined8 *)(param_1 + 0x330) * 0.0);
    *(ulong *)(param_1 + 0x348) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x348) * 0.1);
    *(ulong *)(param_1 + 0x340) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20) * 0.1,
                  (float)*(undefined8 *)(param_1 + 0x340) * 0.1);
    FUN_02bdb238(local_40,param_1 + 0x330,param_1 + 0x340);
    if (local_40 == (long *)0x0) goto LAB_01e4a240;
    lVar7 = local_40[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      bVar5 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (bVar5) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_40 + 0x20))();
  }
LAB_01e4a240:
  *(int *)(param_1 + 800) = *param_2;
  return;
}


