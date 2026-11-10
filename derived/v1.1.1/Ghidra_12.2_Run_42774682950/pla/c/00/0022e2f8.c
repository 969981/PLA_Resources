/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022e2f8; name: FUN_0022e2f8
 */


void FUN_0022e2f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0438ef50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438ef50), iVar1 != 0)) {
    DAT_0438ef60 = 0x401;
    DAT_0438ef62 = 5;
    DAT_0438ef63 = 0;
    DAT_0438ef67 = 0;
    DAT_0438ef68 = 0x1040300010401;
    DAT_0438ef70 = 0x5040100080001;
    __cxa_guard_release(&DAT_0438ef50);
  }
  if (((DAT_0438ef58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438ef58), iVar1 != 0)) {
    DAT_0438ef78 = 0x401;
    DAT_0438ef7a = 5;
    DAT_0438ef7b = 0;
    DAT_0438ef7f = 0;
    DAT_0438ef80 = 0x1040300010401;
    DAT_0438ef88 = 0x1010500080001;
    __cxa_guard_release(&DAT_0438ef58);
  }
  *param_1 = &DAT_0438ef60;
  *param_2 = &DAT_0438ef78;
  return;
}


