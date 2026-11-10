/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b534c4; name: FUN_02b534c4
 */


void FUN_02b534c4(undefined8 *param_1,undefined8 *param_2)

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
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[7] = 0;
    FUN_02b535fc(param_2);
    FUN_02b536f0(param_2 + 7);
    return;
  }
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[7] = 0;
  FUN_02b535fc(param_2);
  FUN_02b536f0(param_2 + 7);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


