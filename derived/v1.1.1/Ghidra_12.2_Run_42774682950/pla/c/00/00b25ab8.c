/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b25ab8; name: FUN_00b25ab8
 */


undefined1  [16] FUN_00b25ab8(undefined2 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)CONCAT14(*(int *)(param_1 + 4) == 1,CONCAT22(param_1[2],*param_1)) |
                 (ulong)*(byte *)((long)param_1 + 0xd) << 0x21;
  return auVar1;
}


