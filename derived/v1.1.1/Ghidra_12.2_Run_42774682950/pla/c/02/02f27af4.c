/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f27af4; name: FUN_02f27af4
 */


void FUN_02f27af4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar3 = 0;
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x10);
  }
  uVar1 = (**(code **)(*(long *)(param_1 + (param_2 & 0xffffffff) * 0x80 + 0xb0) + 0x10))();
  FUN_02ea82fc(uVar3,uVar2,uVar1,param_3,param_4);
  return;
}


