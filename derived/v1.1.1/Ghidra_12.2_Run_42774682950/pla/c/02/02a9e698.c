/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9e698; name: FUN_02a9e698
 */


void FUN_02a9e698(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar3 = DAT_043f1798;
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar1 = tpidr_el0;
    lVar5 = *(long *)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(long *)(lVar1 + 0x20) = DAT_043f1798;
      lVar5 = lVar3;
    }
  }
  param_1[3] = lVar5;
  param_1[4] = 0x1fffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


