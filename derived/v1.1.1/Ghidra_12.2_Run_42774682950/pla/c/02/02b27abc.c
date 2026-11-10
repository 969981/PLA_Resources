/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b27abc; name: FUN_02b27abc
 */


void FUN_02b27abc(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_042843c0;
  param_1[1] = lVar5;
  param_1[9] = (long)&PTR_LAB_042843f8;
  param_1[0xb] = *param_2;
  param_1[0xc] = param_2[1];
  param_1[0xd] = param_2[2];
  plVar4 = (long *)param_2[3];
  param_1[0xe] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  FUN_02b27c28(param_1 + 0xf);
  param_1[0x18] = 0;
  param_1[0x19] = param_1[1];
  param_1[0x1f] = 0;
  param_1[0x20] = param_1[1];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x1a] = 0x13b13b13b13b13b;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0x492492492492492;
  param_1[0x22] = 0;
  return;
}


