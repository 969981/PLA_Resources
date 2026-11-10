/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e25328; name: FUN_02e25328
 */


void FUN_02e25328(undefined4 *param_1,long *param_2)

{
  if (*(long *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,*(long *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  *param_1 = 0;
  return;
}


