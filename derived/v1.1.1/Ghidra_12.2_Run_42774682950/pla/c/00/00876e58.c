/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876e58; name: FUN_00876e58
 */


void FUN_00876e58(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_00877050();
  *(undefined1 *)(param_1 + 0x601) = 1;
  *(byte *)((long)param_1 + 0x3009) = *(byte *)((long)param_1 + 0x3009) | 1;
  *param_1 = param_2;
  uVar1 = FUN_0087c080(param_2);
  *(undefined4 *)((long)param_1 + 0x300c) = uVar1;
  return;
}


