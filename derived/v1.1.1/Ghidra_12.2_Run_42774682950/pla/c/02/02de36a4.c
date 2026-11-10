/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de36a4; name: FUN_02de36a4
 */


void FUN_02de36a4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  
  puVar9 = PTR_DAT_0437a0d0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar12 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar10 = PTR_DAT_0437a0d8;
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = *(undefined8 *)(puVar10 + 8);
  param_1[2] = *(undefined8 *)(puVar10 + 0x10);
  plVar13 = *(long **)(puVar10 + 0x18);
  param_1[3] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437a0f8;
  uVar5 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  uVar3 = *(undefined8 *)PTR_DAT_0437a100;
  uVar6 = *(undefined8 *)(PTR_DAT_0437a100 + 8);
  param_1[8] = 0x4234000042340000;
  param_1[9] = 0x41f0000041f00000;
  param_1[10] = 0;
  param_1[6] = uVar3;
  param_1[7] = uVar6;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar12 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  param_1[0xe] = *(undefined8 *)puVar10;
  param_1[0xf] = *(undefined8 *)(puVar10 + 8);
  plVar13 = *(long **)(puVar10 + 0x18);
  param_1[0x10] = *(undefined8 *)(puVar10 + 0x10);
  param_1[0x11] = plVar13;
  if (plVar13 == (long *)0x0) {
    bVar1 = *puVar9;
  }
  else {
    (**(code **)(*plVar13 + 0x18))();
    bVar1 = *puVar9;
  }
  if (((bVar1 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar12 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  param_1[0x12] = *(undefined8 *)puVar10;
  param_1[0x13] = *(undefined8 *)(puVar10 + 8);
  plVar13 = *(long **)(puVar10 + 0x18);
  param_1[0x14] = *(undefined8 *)(puVar10 + 0x10);
  param_1[0x15] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar11 = DAT_043f1798;
  if (((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
     (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) {
    lVar8 = tpidr_el0;
    lVar14 = *(long *)(lVar8 + 0x20);
    if (*(long *)(lVar8 + 0x20) == 0) {
      *(long *)(lVar8 + 0x20) = DAT_043f1798;
      lVar14 = lVar11;
    }
  }
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar9 = PTR_DAT_04379570;
  param_1[0x19] = lVar14;
  param_1[0x1a] = 0x1fffffffffffffff;
  uVar4 = *(undefined8 *)puVar9;
  uVar7 = *(undefined8 *)(puVar9 + 8);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar7;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((long)param_1 + 0x1dd) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x6b] = 0;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x67] = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  param_1[0x6c] = uVar2;
  param_1[0x6d] = uVar5;
  param_1[0x6f] = uVar5;
  param_1[0x6e] = uVar2;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = uVar2;
  param_1[0x77] = uVar5;
  param_1[0x79] = uVar6;
  param_1[0x78] = uVar3;
  param_1[0x7a] = uVar2;
  param_1[0x7b] = uVar5;
  param_1[0x7c] = 0;
  param_1[0x7f] = uVar5;
  param_1[0x7e] = uVar2;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0x42340000;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  param_1[0x86] = uVar2;
  param_1[0x87] = uVar5;
  param_1[0x89] = uVar5;
  param_1[0x88] = uVar2;
  return;
}


