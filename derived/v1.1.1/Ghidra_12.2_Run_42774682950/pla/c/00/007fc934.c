/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc934; name: FUN_007fc934
 */


void FUN_007fc934(long param_1)

{
  int local_30 [4];
  int local_20 [4];
  
  FUN_00802afc(local_20,*(undefined8 *)(param_1 + 0x120));
  if (local_20[0] != 0) {
    FUN_007ee578(local_30,local_20);
    if (*(int *)(param_1 + 0x1a8) != local_30[0]) {
      FUN_007ee660(param_1 + 0x1a8,local_30);
    }
  }
  return;
}


