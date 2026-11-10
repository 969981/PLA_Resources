/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a488e4; name: FUN_01a488e4
 */


void FUN_01a488e4(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar3 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar3;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x538) == '\0') {
      cVar1 = *(char *)(lVar3 + 0x610);
    }
    else {
      *(undefined1 *)(lVar3 + 0x538) = 0;
      cVar1 = *(char *)(lVar3 + 0x610);
    }
    if (cVar1 != '\0') {
      *(undefined1 *)(lVar3 + 0x610) = 0;
    }
    *(undefined1 *)(param_1 + 0xecd8) = 0;
  }
  return;
}


