/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cf0720; name: FUN_00cf0720
 */


void FUN_00cf0720(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  undefined8 local_38;
  
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  local_38 = (long *)param_2[2];
  if (local_38 == (long *)0x0) {
    FUN_00cea9e4(param_1,uVar2,&local_38);
  }
  else {
    lVar18 = local_38[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_00cf0a8c;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar13;
    }
    plVar10 = local_38;
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_00cea9e4(param_1,uVar2,&local_38);
    if (plVar10 != (long *)0x0) {
      lVar18 = plVar10[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  *param_1 = &PTR_FUN_041e8838;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = &PTR_LAB_041e8a70;
  param_1[9] = &PTR_LAB_041e8968;
  param_1[10] = &PTR_LAB_041e8a48;
  uVar13 = *param_2;
  param_1[0x4f] = param_2[1];
  param_1[0x4e] = uVar13;
  lVar18 = param_2[2];
  param_1[0x50] = lVar18;
  if (lVar18 != 0) {
    lVar18 = *(long *)(lVar18 + 0x58);
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_00cf0a8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  puVar7 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar8 = PTR_DAT_04379528;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar9 = DAT_043f1798;
  lVar18 = tpidr_el0;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar18 + 0x20), *(long *)(lVar18 + 0x20) == 0)) {
    *(long *)(lVar18 + 0x20) = DAT_043f1798;
    lVar14 = lVar9;
  }
  param_1[0x53] = lVar14;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  if (((*puVar7 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  lVar9 = DAT_043f1798;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar18 + 0x20), *(long *)(lVar18 + 0x20) == 0)) {
    *(long *)(lVar18 + 0x20) = DAT_043f1798;
    lVar14 = lVar9;
  }
  param_1[0x57] = lVar14;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)((long)param_1 + 0x2e4) = 0;
  uVar11 = local_38._4_4_;
  local_38 = (long *)CONCAT44(local_38._4_4_,0x3dcccccd);
  if (*(float *)(param_1 + 0x4e) < 0.1) {
    puVar15 = &local_38;
  }
  else {
    puVar15 = param_1 + 0x4e;
  }
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)puVar15;
  uVar6 = (ulong)local_38._4_4_;
  local_38 = (long *)(uVar6 << 0x20);
  pfVar16 = (float *)((long)param_1 + 0x274);
  if (*(float *)((long)param_1 + 0x274) < 0.0) {
    pfVar17 = (float *)&local_38;
  }
  else {
    pfVar17 = pfVar16;
  }
  fVar3 = *pfVar17;
  *(float *)((long)param_1 + 0x274) = fVar3;
  local_38 = (long *)CONCAT44(uVar11,0x3f800000);
  if (1.0 < fVar3) {
    pfVar16 = (float *)&local_38;
  }
  *(float *)((long)param_1 + 0x274) = *pfVar16;
  local_38 = (long *)(uVar6 << 0x20);
  if (*(float *)(param_1 + 0x4f) < 0.0) {
    puVar15 = &local_38;
  }
  else {
    puVar15 = param_1 + 0x4f;
  }
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)puVar15;
  return;
}


