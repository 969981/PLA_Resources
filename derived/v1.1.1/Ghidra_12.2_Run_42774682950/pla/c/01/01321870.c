/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01321870; name: FUN_01321870
 */


void FUN_01321870(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *__s;
  long lVar4;
  long lVar5;
  
  __s = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x53a0,0x10);
  if (__s == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memset(__s,0,0x53a0);
    __s[2] = 0;
    *__s = &PTR_FUN_04205548;
    __s[1] = 0;
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 0x340;
      *(undefined1 *)((long)__s + lVar5 + 0xb0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xb8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xc0) = 0;
      *(undefined1 *)((long)__s + lVar5 + 0x180) = 0;
      *(undefined1 *)((long)__s + lVar5 + 0x250) = 0;
      *(undefined8 *)((long)__s + lVar5 + 600) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x260) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x268) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x270) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x278) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x280) = 0;
      *(undefined1 *)((long)__s + lVar5 + 800) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x328) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x330) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x338) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x340) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x348) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x350) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x2b8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x2b0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x2a8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x2a0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x298) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x290) = 0;
      *(undefined8 *)((long)__s + lVar5 + 200) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xd0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xd8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xe0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x20) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x28) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x30) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x38) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x40) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x48) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x188) = 0;
      *(undefined8 *)((long)__s + lVar5 + 400) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x198) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1a0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1a8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1b0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x110) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x118) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x100) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x108) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xf0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0xf8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1c0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1c8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1d0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1d8) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1e0) = 0;
      *(undefined8 *)((long)__s + lVar5 + 0x1e8) = 0;
      lVar5 = lVar1;
    } while (lVar1 != 0x5140);
    __s[0xa33] = 0;
    __s[0xa32] = 0;
    __s[0xa31] = 0;
    __s[0xa30] = 0;
    __s[0xa2c] = 0;
    __s[0xa2d] = 0;
    __s[0xa2e] = 0;
    __s[0xa43] = 0;
    __s[0xa42] = 0;
    __s[0xa41] = 0;
    __s[0xa40] = 0;
    __s[0xa50] = 0;
    __s[0xa51] = 0;
    __s[0xa52] = 0;
    __s[0xa53] = 0;
    *(undefined4 *)(__s + 0xa60) = 0;
    *(undefined1 *)(__s + 0xa72) = 0;
    __s[0xa65] = 0;
    __s[0xa64] = 0;
    __s[0xa63] = 0;
    __s[0xa62] = 0;
    __s[0xa61] = 0;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x53a0;
    param_1[3] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


