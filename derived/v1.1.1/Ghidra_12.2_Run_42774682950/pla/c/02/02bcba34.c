/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcba34; name: FUN_02bcba34
 */


void FUN_02bcba34(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (((DAT_043f1168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f1168), iVar1 != 0)) {
    if (((DAT_043f1370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f1370), iVar1 != 0)) {
      FUN_027a65f0(&DAT_043f1170,0x10,0x8005,1);
      __cxa_guard_release(&DAT_043f1370);
    }
    DAT_043f1160 = &DAT_043f1170;
    __cxa_guard_release(&DAT_043f1168);
  }
  if (param_3 != 0) {
    uVar2 = param_3;
    if ((param_3 & 1) != 0) {
      uVar2 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
  }
  return;
}


