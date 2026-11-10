/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002093a0; name: FUN_002093a0
 */


undefined8 FUN_002093a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00205cf4(param_1,*(undefined4 *)(param_2 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0xdc) != 3) {
    if ((((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) && ((*(byte *)(param_2 + 0xd) & 1) != 0)) &&
       (iVar1 = FUN_00210e20(lVar2), iVar1 != 0)) {
      uVar3 = FUN_00206aec(param_1,*(undefined4 *)(lVar2 + 0xb8),1);
      if ((int)uVar3 < -900) {
        return uVar3;
      }
    }
    else if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
            (iVar1 = (**(code **)(param_1 + 0x7e8))
                               (param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) {
      return 0xfffffc7a;
    }
    if ((((*(byte *)(param_2 + 0xd) & 1) != 0) &&
        (FUN_00211820(lVar2,1), (~*(byte *)(lVar2 + 0xe5) & 3) == 0)) &&
       (uVar3 = FUN_00206c04(param_1,*(undefined4 *)(lVar2 + 0xb8),0), (int)uVar3 < -900)) {
      return uVar3;
    }
  }
  return 0;
}


