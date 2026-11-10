/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782ee4; name: FUN_00782ee4
 */


void FUN_00782ee4(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  nn::os::SwitchToFiber(*(FiberType **)(param_1 + 0x98));
  return;
}


