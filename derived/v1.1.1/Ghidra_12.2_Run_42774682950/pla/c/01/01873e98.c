/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01873e98; name: FUN_01873e98
 */


void FUN_01873e98(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


