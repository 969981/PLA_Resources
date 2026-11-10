/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00208e8c; name: FUN_00208e8c
 */


undefined8 FUN_00208e8c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar2 = FUN_00208428(param_1,param_2,0xfffffe07,"PING: stream_id != 0");
    return uVar2;
  }
  if (((((*(byte *)(param_1 + 0x99c) >> 3 & 1) != 0) || ((*(byte *)(param_2 + 0xd) & 1) != 0)) ||
      (iVar1 = FUN_00206f14(param_1), iVar1 != 0)) ||
     (uVar2 = FUN_00208f2c(param_1,1,param_2 + 0x10), (int)uVar2 == 0)) {
    if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
       iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffc7a;
    }
  }
  return uVar2;
}


