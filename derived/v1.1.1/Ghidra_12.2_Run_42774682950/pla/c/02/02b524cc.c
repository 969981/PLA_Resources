/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b524cc; name: FUN_02b524cc
 */


void FUN_02b524cc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04379520;
  uVar9 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  memset(param_2 + 8,0,0x130);
  param_2[0x11] = 0;
  *param_2 = &DAT_cbf29ce484222645;
  param_2[1] = &DAT_03996322;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = &DAT_cbf29ce484222645;
  param_2[5] = &DAT_03996322;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar5 = DAT_043f1798;
  lVar1 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar8 = lVar5;
  }
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0x12] = lVar8;
  param_2[0x13] = 0x249249249249249;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar5 = DAT_043f1798;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar8 = lVar5;
  }
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  param_2[0x19] = lVar8;
  param_2[0x1a] = 0x492492492492492;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar5 = DAT_043f1798;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar8 = lVar5;
  }
  param_2[0x20] = lVar8;
  param_2[0x21] = 0x1fffffffffffffff;
  param_2[0x22] = 0;
  *(undefined4 *)(param_2 + 0x23) = 0;
  param_2[0x26] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar5 = DAT_043f1798;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar8 = lVar5;
  }
  param_2[0x29] = 0;
  param_2[0x27] = lVar8;
  param_2[0x28] = 0x666666666666666;
  *(undefined4 *)(param_2 + 0x2a) = 0;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


