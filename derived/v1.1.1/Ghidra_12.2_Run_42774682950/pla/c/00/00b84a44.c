/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b84a44; name: FUN_00b84a44
 */


void FUN_00b84a44(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar13 = (long *)param_2[3];
  param_1[3] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar13 = (long *)param_2[7];
  param_1[7] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar13 = (long *)param_2[0xb];
  param_1[0xb] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_00b6c8c8(param_1 + 0xc,param_2 + 0xc);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_00b6cb38(param_1 + 0xe,param_2 + 0xe);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00b6cda8(param_1 + 0x10,param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  lVar16 = param_2[0x13];
  param_1[0x13] = lVar16;
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x50);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar4 = param_2[0x14];
  uVar5 = param_2[0x15];
  uVar7 = *(undefined1 *)(param_2 + 0x16);
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x16) = uVar7;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar5;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_2[0x1a] != (code *)0x0) {
    (*(code *)param_2[0x1a])(param_2 + 0x1c,param_1 + 0x1c);
    uVar4 = param_2[0x18];
    uVar5 = param_2[0x19];
    uVar6 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar6;
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar5;
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar2 = PTR_DAT_0437a508 + 0x10;
  param_1[0x2c] = 0;
  param_1[0x2d] = puVar2;
  param_1[0x38] = &DAT_cbf29ce484222645;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = &DAT_cbf29ce484222645;
  puVar2 = PTR_DAT_0437a7c0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar12 != 0)) {
    local_88 = FUN_00938550();
    puVar2 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_88);
    FUN_00100250(PTR_LAB_0437a8d8,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar13 = *(long **)PTR_DAT_0437a7d0;
  param_1[0x39] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  FUN_00b852b0(param_1 + 0x3b);
  FUN_00b852b0(param_1 + 0x48);
  FUN_00b852b0(param_1 + 0x55);
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar10 = PTR_DAT_04379528;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar15 = DAT_043f1798;
  lVar16 = tpidr_el0;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar14 = lVar15;
  }
  param_1[0x65] = lVar14;
  param_1[0x66] = 0x7ffffffffffffff;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
  lVar15 = DAT_043f1798;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar14 = lVar15;
  }
  param_1[0x6b] = lVar14;
  param_1[0x6c] = 0x249249249249249;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
  lVar15 = DAT_043f1798;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar14 = lVar15;
  }
  param_1[0x70] = lVar14;
  param_1[0x71] = 0x249249249249249;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0x3f800000;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
  lVar15 = DAT_043f1798;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar14 = lVar15;
  }
  param_1[0x78] = lVar14;
  param_1[0x79] = 0x249249249249249;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
  lVar15 = DAT_043f1798;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar14 = lVar15;
  }
  param_1[0x7d] = lVar14;
  *(undefined4 *)(param_1 + 0x82) = 0x3f800000;
  param_1[0x7e] = 0x249249249249249;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  FUN_00b78cf4(param_1 + 0x3b,(long)(32.0 / *(float *)(param_1 + 0x47)));
  FUN_00b78cf4(param_1 + 0x48,(long)(32.0 / *(float *)(param_1 + 0x54)));
  FUN_00b78cf4(param_1 + 0x55,(long)(32.0 / *(float *)(param_1 + 0x61)));
  lVar16 = param_1[0x62];
  if ((ulong)(param_1[100] - lVar16 >> 5) < 0x40) {
    puVar3 = param_1 + 0x65;
    lVar14 = param_1[99];
    local_70 = 0;
    puStack_68 = puVar3;
    lVar15 = (**(code **)(*(long *)param_1[0x65] + 0x10))((long *)param_1[0x65],0x800,8);
    if (lVar15 == 0) {
      (**(code **)(*(long *)*puVar3 + 0xb8))();
    }
    lVar16 = lVar15 + (lVar14 - lVar16 >> 5) * 0x20;
    lVar17 = param_1[0x62];
    lVar18 = param_1[99];
    lVar14 = lVar16;
    if (lVar18 == lVar17) {
      local_88 = lVar17;
    }
    else {
      local_88 = lVar15;
      local_80 = lVar16;
      local_78 = lVar16;
      local_70 = lVar15 + 0x800;
      do {
        lVar14 = lVar14 + -0x20;
        lVar18 = lVar18 + -0x20;
        FUN_00b796e4(puVar3,lVar14,lVar18);
      } while (lVar17 != lVar18);
      local_88 = param_1[0x62];
      lVar17 = param_1[99];
    }
    param_1[0x62] = lVar14;
    local_70 = param_1[100];
    param_1[99] = lVar16;
    param_1[100] = lVar15 + 0x800;
    local_80 = local_88;
    local_78 = lVar17;
    FUN_00b79818(&local_88);
  }
  FUN_00b78124(param_1 + 0x69,(long)(32.0 / *(float *)(param_1 + 0x75)));
  for (plVar13 = (long *)param_1[0x6f]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    FUN_00b786a4(plVar13 + 3,(long)(64.0 / *(float *)(plVar13 + 0xf)));
  }
  FUN_00b816c8(param_1 + 0x76,(long)(32.0 / *(float *)(param_1 + 0x82)));
  for (plVar13 = (long *)param_1[0x7c]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    FUN_00b81c48(plVar13 + 3,(long)(512.0 / *(float *)(plVar13 + 0xf)));
  }
  return;
}


