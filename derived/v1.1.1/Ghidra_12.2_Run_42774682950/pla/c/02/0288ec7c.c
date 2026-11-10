/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0288ec7c; name: FUN_0288ec7c
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_0288ec7c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *__s;
  
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
  __s = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1d8,8);
  if (__s == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    memset((void *)0x0,0,0x1d8);
    FUN_0288ee3c(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  memset(__s,0,0x1d8);
  FUN_0288ee3c(__s);
  *__s = &PTR_LAB_04271b58;
  __s[9] = &PTR_LAB_04271b88;
  __s[10] = 0;
  __s[0xb] = 0;
  __s[0xc] = 0;
  FUN_0288f170(__s + 0xd);
  FUN_0288f258(__s + 0x11);
  __s[0x2a] = 0;
  __s[0x2b] = 0;
  __s[0x1f] = 0;
  __s[0x28] = 0;
  __s[0x29] = 0;
  __s[0x26] = 0;
  __s[0x27] = 0;
  __s[0x24] = 0;
  __s[0x25] = 0;
  __s[0x22] = 0;
  __s[0x23] = 0;
  __s[0x20] = 0;
  __s[0x21] = 0;
  __s[0x1e] = 0;
  FUN_0288f468();
  __s[0x2e] = 0;
  __s[0x2f] = 0;
  __s[0x2d] = 0;
  FUN_0288f170(__s + 0x30);
  nn::os::InitializeLightEvent((long)__s + 0x1a4,0,1);
  __s[0x36] = 0;
  nn::os::InitializeLightEvent((long)__s + 0x1bc,0,1);
  __s[0x39] = 0;
  __s[0x3a] = 0;
  __s[1] = param_1;
  __s[2] = __s;
  __s[3] = 0x1d8;
  __s[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


