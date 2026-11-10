/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b72990; name: FUN_02b72990
 */


void FUN_02b72990(undefined8 *param_1,undefined8 *param_2)

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
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &DAT_cbf29ce484222645;
  param_2[1] = &DAT_03996322;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = &DAT_cbf29ce484222645;
  param_2[5] = &DAT_03996322;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar4 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
  param_2[10] = *(undefined8 *)PTR_DAT_0437a120;
  param_2[0xb] = uVar4;
  uVar4 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  param_2[0xc] = *(undefined8 *)PTR_DAT_04379570;
  param_2[0xd] = uVar4;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


