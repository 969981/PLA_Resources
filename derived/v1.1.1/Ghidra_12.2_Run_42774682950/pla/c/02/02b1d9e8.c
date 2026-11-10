/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1d9e8; name: FUN_02b1d9e8
 */


void FUN_02b1d9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04379520;
  uVar9 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar4 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x17] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &DAT_cbf29ce484222645;
  param_2[1] = &DAT_03996322;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = &DAT_cbf29ce484222645;
  param_2[5] = &DAT_03996322;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar9 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
  param_2[8] = *(undefined8 *)PTR_DAT_0437a120;
  param_2[9] = uVar9;
  uVar9 = *(undefined8 *)PTR_DAT_04379570;
  uVar1 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[10] = uVar9;
  param_2[0xb] = uVar1;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  FUN_00b6e968();
  FUN_00b6e968(param_2 + 0x17);
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  if (((*puVar3 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar5 = DAT_043f1798;
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar2 = tpidr_el0;
    lVar8 = *(long *)(lVar2 + 0x20);
    if (*(long *)(lVar2 + 0x20) == 0) {
      *(long *)(lVar2 + 0x20) = DAT_043f1798;
      lVar8 = lVar5;
    }
  }
  param_2[0x21] = lVar8;
  param_2[0x22] = 0x7ffffffffffffff;
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


