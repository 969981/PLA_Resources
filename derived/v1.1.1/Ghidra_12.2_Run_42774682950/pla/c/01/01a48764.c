/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a48764; name: FUN_01a48764
 */


void FUN_01a48764(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_043796b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_043796b8);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
  }
  lVar2 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x580) = *(undefined8 *)(lVar2 + 0x518);
    *(undefined8 *)(lVar2 + 0x588) = *(undefined8 *)(lVar2 + 0x520);
    *(undefined8 *)(lVar2 + 0x598) = *(undefined8 *)(lVar2 + 0x530);
    *(undefined8 *)(lVar2 + 0x568) = *(undefined8 *)(lVar2 + 0x500);
    *(undefined8 *)(lVar2 + 0x570) = *(undefined8 *)(lVar2 + 0x508);
    *(undefined8 *)(lVar2 + 0x578) = *(undefined8 *)(lVar2 + 0x510);
    *(undefined8 *)(lVar2 + 0x540) = *(undefined8 *)(lVar2 + 0x4d8);
    *(undefined8 *)(lVar2 + 0x548) = *(undefined8 *)(lVar2 + 0x4e0);
    *(undefined8 *)(lVar2 + 0x590) = *(undefined8 *)(lVar2 + 0x528);
    *(undefined8 *)(lVar2 + 0x560) = *(undefined8 *)(lVar2 + 0x4f8);
    *(undefined8 *)(lVar2 + 0x550) = *(undefined8 *)(lVar2 + 0x4e8);
    *(undefined8 *)(lVar2 + 0x558) = *(undefined8 *)(lVar2 + 0x4f0);
    if (*(char *)(lVar2 + 0x538) == '\0') {
      *(undefined1 *)(lVar2 + 0x538) = 1;
    }
    *(undefined8 *)(lVar2 + 0x658) = *(undefined8 *)(lVar2 + 0x5f0);
    *(undefined8 *)(lVar2 + 0x660) = *(undefined8 *)(lVar2 + 0x5f8);
    *(undefined8 *)(lVar2 + 0x670) = *(undefined8 *)(lVar2 + 0x608);
    *(undefined8 *)(lVar2 + 0x640) = *(undefined8 *)(lVar2 + 0x5d8);
    *(undefined8 *)(lVar2 + 0x648) = *(undefined8 *)(lVar2 + 0x5e0);
    *(undefined8 *)(lVar2 + 0x650) = *(undefined8 *)(lVar2 + 0x5e8);
    *(undefined8 *)(lVar2 + 0x618) = *(undefined8 *)(lVar2 + 0x5b0);
    *(undefined8 *)(lVar2 + 0x620) = *(undefined8 *)(lVar2 + 0x5b8);
    *(undefined8 *)(lVar2 + 0x668) = *(undefined8 *)(lVar2 + 0x600);
    *(undefined8 *)(lVar2 + 0x638) = *(undefined8 *)(lVar2 + 0x5d0);
    *(undefined8 *)(lVar2 + 0x628) = *(undefined8 *)(lVar2 + 0x5c0);
    *(undefined8 *)(lVar2 + 0x630) = *(undefined8 *)(lVar2 + 0x5c8);
    if (*(char *)(lVar2 + 0x610) == '\0') {
      *(undefined1 *)(lVar2 + 0x610) = 1;
    }
    *(undefined1 *)(param_1 + 0xecd8) = 1;
  }
  return;
}


