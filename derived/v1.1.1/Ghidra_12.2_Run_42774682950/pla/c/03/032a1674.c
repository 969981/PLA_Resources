/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a1674; name: FUN_032a1674
 */


void FUN_032a1674(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0329c948(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  uVar1 = FUN_032a1b90(param_2,param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  iVar2 = FUN_0329cb18(param_2);
  *(bool *)(param_1 + 0x1e5) = iVar2 == 0;
  return;
}


