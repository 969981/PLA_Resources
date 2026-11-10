/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d6344; name: FUN_028d6344
 */


void FUN_028d6344(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  uVar4 = *param_3;
  param_2[0x38] = 0;
  *param_2 = &PTR_FUN_04273558;
  param_2[1] = &PTR_LAB_04273598;
  param_2[6] = 0;
  param_2[7] = &PTR_LAB_04273578;
  *(undefined1 *)(param_2 + 0x39) = 0;
  param_2[0x10] = &PTR_LAB_04273578;
  param_2[0x11] = &PTR_LAB_04273598;
  param_2[0x18] = uVar4;
  param_2[0x19] = &PTR_LAB_04273578;
  param_2[0x22] = &PTR_LAB_04273578;
  param_2[0x23] = &PTR_LAB_04273598;
  param_2[8] = &PTR_LAB_04273598;
  param_2[9] = 0;
  param_2[0x1a] = &PTR_LAB_04273598;
  param_2[0x1b] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = uVar4;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = uVar4;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = uVar4;
  param_2[0x2b] = &DAT_cbf29ce484222645;
  param_2[0x2c] = &DAT_03996322;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = &DAT_cbf29ce484222645;
  param_2[0x30] = &DAT_03996322;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = &DAT_cbf29ce484222645;
  param_2[0x34] = &DAT_03996322;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


