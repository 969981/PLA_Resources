/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f3f10; name: FUN_007f3f10
 */


void FUN_007f3f10(long param_1,long *param_2)

{
  undefined1 auStack_20 [16];
  
  *(long **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 0x108))(auStack_20,param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}


