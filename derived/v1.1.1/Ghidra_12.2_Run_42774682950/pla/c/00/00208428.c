/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00208428; name: FUN_00208428
 */


undefined8 FUN_00208428(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x7f0))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar1 == 0)) {
    uVar2 = FUN_0020beb0(param_3);
    uVar3 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),uVar2,param_4);
    return uVar3;
  }
  return 0xfffffc7a;
}


