/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020db50; name: FUN_0020db50
 */


undefined8 FUN_0020db50(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0xe4) < 2) {
    if (param_2 < *(ulong *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(ulong *)(param_1 + 0xd0) = param_2;
    }
    *(ulong *)(param_1 + 200) = param_2;
    *(ulong *)(param_1 + 0x30) = param_2;
    FUN_0020da6c(param_1,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffdf9;
  }
  return uVar1;
}


