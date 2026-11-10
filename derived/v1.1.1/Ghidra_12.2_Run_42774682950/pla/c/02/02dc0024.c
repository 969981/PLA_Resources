/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc0024; name: FUN_02dc0024
 */


void FUN_02dc0024(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_0437ace8 + 0x10);
  FUN_00b57f6c(param_2 + 1,param_3 + 8);
  lVar4 = *(long *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = 0;
  param_2[3] = lVar4;
  lVar4 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  param_2[4] = lVar4;
  lVar4 = *(long *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = 0;
  param_2[5] = lVar4;
  *param_2 = (long)&PTR_LAB_04299e30;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


