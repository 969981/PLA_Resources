/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb55e4; name: FUN_02cb55e4
 */


void FUN_02cb55e4(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar2 = DAT_043f1798;
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (plVar5 = *(long **)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), plVar5 == (long *)0x0)) {
    lVar4 = tpidr_el0;
    plVar5 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)plVar5;
  param_1[4] = 0x276276276276276;
  if (param_2 != 0) {
    if (0x276276276276276 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2 * 0x68,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = lVar4 + param_2 * 0x68;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    do {
      FUN_02cb5768(param_1 + 3,lVar4);
      lVar4 = param_1[1] + 0x68;
      param_2 = param_2 - 1;
      param_1[1] = lVar4;
    } while (param_2 != 0);
  }
  return;
}


