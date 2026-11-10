/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cf4858; name: FUN_00cf4858
 */


void FUN_00cf4858(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 local_4c;
  undefined8 local_48;
  
  uVar3 = *(undefined4 *)(param_2 + 9);
  local_48 = (long *)param_2[10];
  if (local_48 == (long *)0x0) {
    FUN_00cea9e4(param_1,uVar3,&local_48);
  }
  else {
    lVar15 = local_48[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00cf4c9c;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    plVar10 = local_48;
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_00cea9e4(param_1,uVar3,&local_48);
    if (plVar10 != (long *)0x0) {
      lVar15 = plVar10[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  *param_1 = &PTR_FUN_041e8b10;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[9] = &PTR_LAB_041e8c50;
  param_1[10] = &PTR_LAB_041e8d30;
  param_1[0x4b] = &PTR_LAB_041e8d58;
  uVar12 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 2);
  param_1[0x4f] = uVar2;
  param_1[0x4e] = uVar12;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_00cf98c8(param_1 + 0x51,param_2 + 3);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  FUN_00ac3fa4(param_1 + 0x53,param_2 + 5);
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  FUN_00b636fc(param_1 + 0x55,param_2 + 7);
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 9);
  lVar15 = param_2[10];
  param_1[0x58] = lVar15;
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_00cf4c9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_2 + 0xb);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  puVar7 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar8 = PTR_DAT_04379528;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar9 = DAT_043f1798;
  lVar15 = tpidr_el0;
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar15 + 0x20), *(long *)(lVar15 + 0x20) == 0)) {
    *(long *)(lVar15 + 0x20) = DAT_043f1798;
    lVar13 = lVar9;
  }
  param_1[0x5c] = lVar13;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  if (((*puVar7 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  lVar9 = DAT_043f1798;
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
      (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
     (lVar13 = *(long *)(lVar15 + 0x20), *(long *)(lVar15 + 0x20) == 0)) {
    *(long *)(lVar15 + 0x20) = DAT_043f1798;
    lVar13 = lVar9;
  }
  param_1[0x60] = lVar13;
  param_1[0x69] = &DAT_cbf29ce484222645;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x32c) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_48 = (long *)CONCAT44(local_48._4_4_,0x3dcccccd);
  if (*(float *)(param_1 + 0x4e) < 0.1) {
    puVar14 = &local_48;
  }
  else {
    puVar14 = param_1 + 0x4e;
  }
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)puVar14;
  local_4c = 0x3f800000;
  uVar6 = (ulong)local_48._4_4_;
  local_48 = (long *)(uVar6 << 0x20);
  puVar14 = (undefined8 *)&local_4c;
  if (*(float *)((long)param_1 + 0x274) <= 1.0) {
    puVar14 = (undefined8 *)((long)param_1 + 0x274);
  }
  if (*(float *)((long)param_1 + 0x274) < 0.0) {
    puVar14 = &local_48;
  }
  *(undefined4 *)((long)param_1 + 0x274) = *(undefined4 *)puVar14;
  local_4c = 0x43b40000;
  local_48 = (long *)(uVar6 << 0x20);
  puVar14 = (undefined8 *)&local_4c;
  if (*(float *)(param_1 + 0x4f) <= 360.0) {
    puVar14 = param_1 + 0x4f;
  }
  if (*(float *)(param_1 + 0x4f) < 0.0) {
    puVar14 = &local_48;
  }
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)puVar14;
  local_4c = 0x43b40000;
  local_48 = (long *)(uVar6 << 0x20);
  puVar14 = (undefined8 *)&local_4c;
  if (*(float *)((long)param_1 + 0x27c) <= 360.0) {
    puVar14 = (undefined8 *)((long)param_1 + 0x27c);
  }
  if (*(float *)((long)param_1 + 0x27c) < 0.0) {
    puVar14 = &local_48;
  }
  *(undefined4 *)((long)param_1 + 0x27c) = *(undefined4 *)puVar14;
  local_48 = (long *)(uVar6 << 0x20);
  if (*(float *)(param_1 + 0x50) < 0.0) {
    puVar14 = &local_48;
  }
  else {
    puVar14 = param_1 + 0x50;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)puVar14;
  FUN_00cf98c8(param_1 + 0x51,param_2 + 3);
  return;
}


