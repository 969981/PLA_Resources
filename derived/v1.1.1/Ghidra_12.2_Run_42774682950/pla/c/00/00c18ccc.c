/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c18ccc; name: FUN_00c18ccc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_00c18ccc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *__s;
  
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,0x1a0,0x10);
  if (__s == (void *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    memset((void *)0x0,0,0x1a0);
    FUN_00c18e24(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x1a0;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = param_1;
  }
  else {
    memset(__s,0,0x1a0);
    FUN_00c18e24(__s);
    *(long **)((long)__s + 8) = param_1;
    *(void **)((long)__s + 0x10) = __s;
    *(undefined8 *)((long)__s + 0x18) = 0x1a0;
    *(undefined8 *)((long)__s + 0x20) = 0x10;
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


