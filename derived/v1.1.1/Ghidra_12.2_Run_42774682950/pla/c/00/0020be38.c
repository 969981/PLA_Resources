/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020be38; name: FUN_0020be38
 */


undefined8 FUN_0020be38(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0020beb0(param_4);
  uVar3 = FUN_00206aec(param_1,param_2,uVar1);
  if ((int)uVar3 == 0) {
    if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x7f0))
                          (param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x8b8)), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffc7a;
    }
  }
  return uVar3;
}


