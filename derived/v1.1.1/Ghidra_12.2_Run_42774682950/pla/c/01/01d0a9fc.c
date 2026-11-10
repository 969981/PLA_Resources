/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d0a9fc; name: FUN_01d0a9fc
 */


void FUN_01d0a9fc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  FUN_01d0ab50();
  *param_1 = &PTR_LAB_0424ece8;
  param_1[9] = &PTR_LAB_0424ed38;
  param_1[10] = &PTR_LAB_0424ed80;
  param_1[0x17] = &DAT_cbf29ce484222645;
  param_1[0x18] = &DAT_03996322;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar2 = PTR_DAT_04379520;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (((*puVar2 & 1) == 0) &&
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
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = lVar5;
  param_1[0x1f] = 0x1745d1745d1745d;
  param_1[0x22] = 0x3f8000003f800000;
  FUN_01d0afe0(param_1,param_2);
  return;
}


