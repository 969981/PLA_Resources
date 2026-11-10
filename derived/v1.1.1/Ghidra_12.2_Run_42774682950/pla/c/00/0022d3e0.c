/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d3e0; name: FUN_0022d3e0
 */


void FUN_0022d3e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_0022d744(param_2,*(undefined8 *)(param_3 + 0x20),*(undefined2 *)(param_3 + 0x4a));
  if ((uVar1 & 1) != 0) {
    FUN_00241978(param_3,param_1);
  }
  FUN_0022d72c(param_2,param_1);
  FUN_0024138c(param_3,param_1,param_2);
  return;
}


