/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008254e4; name: FUN_008254e4
 */


void FUN_008254e4(long *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(PTR_DAT_04377ca8 + 0x10);
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  FUN_00824760(param_1 + 8);
  param_1[0x10] = 0;
  nn::os::SdkAllocateTlsSlot((TlsSlot *)(param_1 + 0x11),(_func_void_ulong *)0x0);
  return;
}


