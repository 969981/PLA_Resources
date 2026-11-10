/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03375238; name: FUN_03375238
 */


void FUN_03375238(undefined8 *param_1)

{
  int iVar1;
  
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3f7d70a4;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x14) = 0x100;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x33d6bf953f7fbe77;
  if ((DAT_04450560 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04450560);
    if (iVar1 != 0) {
      DAT_04450558 = &PTR_LAB_0436df88;
      __cxa_guard_release(&DAT_04450560);
    }
  }
  if ((DAT_04450570 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04450570);
    if (iVar1 != 0) {
      DAT_04450568 = &PTR_LAB_0436dff8;
      __cxa_guard_release(&DAT_04450570);
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = 0x200000000;
  param_1[1] = 0x3f80000000000000;
  param_1[0xd] = 0x7fffffff00000000;
  param_1[0xe] = 0x38d1b7173f7fff58;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0xf] = 0x3a03126f3f7d70a4;
  param_1[0x10] = 0x3a83126f00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0x37fffffff;
  param_1[0x11] = 0x38d1b7173a83126f;
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(DAT_0444b130 + 0x18);
  param_1[0x13] = 0x80;
  param_1[0x18] = &DAT_04450550;
  param_1[0x16] = 0;
  param_1[0x17] = &DAT_04450548;
  return;
}


