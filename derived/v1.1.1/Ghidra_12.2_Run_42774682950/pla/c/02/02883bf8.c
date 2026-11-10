/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02883bf8; name: FUN_02883bf8
 */


void FUN_02883bf8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  FUN_02883d68();
  puVar1 = PTR_DAT_0437a508;
  *param_1 = &PTR_LAB_04271568;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[9] = &PTR_LAB_04271598;
  param_1[10] = puVar1 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = &DAT_cbf29ce484222645;
  param_1[0x11] = &DAT_03996322;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = &DAT_cbf29ce484222645;
  param_1[0x15] = &DAT_03996322;
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_04379520;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar3 = DAT_043f1798;
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x20);
    if (*(long *)(lVar2 + 0x20) == 0) {
      *(long *)(lVar2 + 0x20) = DAT_043f1798;
      lVar5 = lVar3;
    }
  }
  param_1[0x1b] = lVar5;
  param_1[0x1c] = 0x7ffffffffffffff;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3f80000000000003;
  puVar1 = PTR_DAT_0437e470 + 0x10;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = puVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return;
}


