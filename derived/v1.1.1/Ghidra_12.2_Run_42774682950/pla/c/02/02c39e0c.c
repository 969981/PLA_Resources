/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c39e0c; name: FUN_02c39e0c
 */


void FUN_02c39e0c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  FUN_02c3a000(param_1 + 0x10);
  FUN_02c3a2c4(param_1 + 0x10,param_3);
  return;
}


