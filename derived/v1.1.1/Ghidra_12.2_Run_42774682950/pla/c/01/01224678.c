/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01224678; name: FUN_01224678
 */


undefined4 FUN_01224678(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_00d5294c(param_1);
    uVar2 = FUN_00d4bf2c(param_1,uVar1);
    uVar3 = FUN_01223ab8(param_1,uVar1,uVar2);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
  }
  uVar3 = FUN_012245d8(param_1);
  uVar1 = 2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


