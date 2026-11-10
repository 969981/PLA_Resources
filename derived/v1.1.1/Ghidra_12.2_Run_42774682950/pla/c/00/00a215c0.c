/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a215c0; name: FUN_00a215c0
 */


long * FUN_00a215c0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar2 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar3 = PTR_DAT_043796d0;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)(plVar6 + 6) = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6[4] = 0;
  plVar6[5] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar6 + 10) = 0;
  *plVar6 = (long)&PTR_LAB_041c8710;
  plVar6[1] = lVar8;
  plVar6[9] = (long)&PTR_LAB_041c8750;
  *(undefined4 *)((long)plVar6 + 0x54) = *param_3;
  *plVar6 = (long)&PTR_LAB_041c86a0;
  plVar6[1] = (long)param_2;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0x58;
  plVar6[9] = (long)&PTR_LAB_041c86e0;
  plVar6[4] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


