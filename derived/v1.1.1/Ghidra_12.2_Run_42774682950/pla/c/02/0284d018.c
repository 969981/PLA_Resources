/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284d018; name: FUN_0284d018
 */


void FUN_0284d018(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_0284c490();
  puVar1 = PTR_DAT_043796d0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = puVar1 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      uVar4 = *(undefined8 *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x19] = &PTR_LAB_04270560;
  param_1[0x1a] = uVar4;
  *param_1 = &PTR_LAB_04270540;
  param_1[0x22] = &PTR_LAB_04270598;
  return;
}


