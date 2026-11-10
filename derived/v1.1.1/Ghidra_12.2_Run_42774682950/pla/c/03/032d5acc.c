/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5acc; name: FUN_032d5acc
 */


void FUN_032d5acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


