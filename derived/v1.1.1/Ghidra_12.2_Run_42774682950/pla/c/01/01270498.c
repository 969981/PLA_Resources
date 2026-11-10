/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01270498; name: FUN_01270498
 */


void FUN_01270498(long param_1)

{
  *(undefined8 *)(param_1 + 0x8f8) = 0x100000000;
  *(undefined1 *)(param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x900) = 2;
  FUN_01270ea0(param_1,0,1);
  FUN_01270ea0(param_1,1,*(char *)(param_1 + 0x904) == '\x01');
  FUN_01270ea0(param_1,2,*(char *)(param_1 + 0x904) == '\x02');
  return;
}


