/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02842be4; name: FUN_02842be4
 */


void FUN_02842be4(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  FUN_02a76058();
  *param_1 = &PTR_LAB_0426f670;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[9] = &PTR_LAB_0426f6d0;
  param_1[10] = &PTR_LAB_0426f718;
  puVar2 = PTR_DAT_04379520;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
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
  param_1[0x52] = lVar5;
  param_1[0x53] = 0x7ffffffffffffff;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  FUN_02843da4(param_1 + 0x56);
  return;
}


