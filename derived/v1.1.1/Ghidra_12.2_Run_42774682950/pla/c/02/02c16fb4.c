/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c16fb4; name: FUN_02c16fb4
 */


void FUN_02c16fb4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  puVar4 = PTR_DAT_0437a518;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
  }
  param_1[9] = (long)&PTR_LAB_04288b38;
  lVar6 = *(long *)(puVar4 + 0x28);
  param_1[0x22] = *(long *)(puVar4 + 0x20);
  param_1[0x23] = lVar6;
  lVar6 = *(long *)(puVar4 + 0x38);
  param_1[0x24] = *(long *)(puVar4 + 0x30);
  param_1[0x25] = lVar6;
  lVar6 = *(long *)(puVar4 + 8);
  param_1[0x1e] = *(long *)puVar4;
  param_1[0x1f] = lVar6;
  lVar6 = *(long *)(puVar4 + 0x10);
  lVar1 = *(long *)(puVar4 + 0x18);
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04288b00;
  param_1[1] = (long)plVar7;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x1c] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x40] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x20] = lVar6;
  param_1[0x21] = lVar1;
  param_1[0xc] = (long)&LAB_02c18620;
  param_1[0xd] = (long)&LAB_02c18628;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0xe] = (long)&LAB_02c1862c;
  param_1[0xf] = (long)&LAB_02c18630;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,200,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


