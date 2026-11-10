/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e2740; name: FUN_013e2740
 */


void FUN_013e2740(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *__s;
  long lVar3;
  
  __s = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x760,8);
  if (__s == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
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
    memset(__s,0,0x760);
    __s[2] = 0;
    __s[3] = 0;
    __s[4] = 0;
    __s[5] = 0;
    puVar1 = PTR_DAT_0437a508 + 0x10;
    __s[6] = 0;
    *__s = &PTR_LAB_0420be70;
    __s[1] = puVar1;
    *(undefined1 *)(__s + 7) = 0;
    *(undefined2 *)((long)__s + 0x3a) = 0;
    memset(__s + 8,0,0x71c);
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x760;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


