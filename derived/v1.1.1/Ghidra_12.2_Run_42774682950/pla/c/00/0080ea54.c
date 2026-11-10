/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080ea54; name: FUN_0080ea54
 */


void FUN_0080ea54(long param_1)

{
  FUN_008023a8();
  FUN_007e4488(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x524) = 0;
  memset((void *)(param_1 + 0xa0),0,0x480);
  *(undefined4 *)(param_1 + 0x520) = 0xffffffff;
  return;
}


