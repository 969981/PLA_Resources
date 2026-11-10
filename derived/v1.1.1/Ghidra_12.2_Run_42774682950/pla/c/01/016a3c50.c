/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a3c50; name: FUN_016a3c50
 */


void FUN_016a3c50(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
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
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_042246b0;
  param_1[1] = lVar6;
  param_1[9] = (long)&PTR_LAB_042246e8;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_016ad718(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_016ad800(param_1 + 0x13);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar5 = DAT_043f1798;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar1 = tpidr_el0;
    lVar6 = *(long *)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(long *)(lVar1 + 0x20) = DAT_043f1798;
      lVar6 = lVar5;
    }
  }
  param_1[0x25] = 0;
  param_1[0x23] = lVar6;
  param_1[0x24] = 0x1fffffffffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0;
  FUN_016ada10(param_1 + 0x27);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_016ada50(param_1 + 0x3c);
  param_1[0x40] = (long)&DAT_cbf29ce484222645;
  param_1[0x41] = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x46] = (long)&DAT_cbf29ce484222645;
  param_1[0x47] = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = (long)&DAT_cbf29ce484222645;
  param_1[0x4d] = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x54] = (long)&DAT_cbf29ce484222645;
  return;
}


