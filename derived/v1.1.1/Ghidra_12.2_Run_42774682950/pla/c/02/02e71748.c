/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71748; name: FUN_02e71748
 */


undefined4 FUN_02e71748(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 600) = param_2[2];
  *(undefined8 *)(param_1 + 0x260) = uVar3;
  *(undefined8 *)(param_1 + 0x250) = uVar2;
  *(undefined8 *)(param_1 + 0x248) = uVar1;
  *(undefined1 *)(param_1 + 0x268) = 1;
  FUN_02e717c0(&LAB_02e71884,param_1,param_2,param_1 + 0x10,"AK::IOThread");
  uVar4 = 1;
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = 2;
  }
  return uVar4;
}


