/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d6220; name: FUN_028d6220
 */


void FUN_028d6220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined8 *)((long)param_2 + 0xa5) = 0;
  *param_2 = &PTR_LAB_04273578;
  param_2[1] = &PTR_LAB_04273598;
  param_2[8] = uVar4;
  param_2[9] = &DAT_cbf29ce484222645;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0x12] = &DAT_03996322;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[10] = &DAT_03996322;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = &DAT_cbf29ce484222645;
  param_2[0xe] = &DAT_03996322;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = &DAT_cbf29ce484222645;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


