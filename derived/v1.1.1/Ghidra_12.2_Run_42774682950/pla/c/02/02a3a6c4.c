/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3a6c4; name: FUN_02a3a6c4
 */


undefined8 FUN_02a3a6c4(undefined8 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar2 >> 7 & 0x7f;
  if ((uVar2 >> 0xe & 1) == 0) {
    if ((uVar2 & 0x7f) == 2) {
      FUN_02a3aa00(param_1,uVar1,uVar3,param_2 + 2);
    }
    else {
      if ((uVar2 & 0x7f) != 1) {
        return 0;
      }
      FUN_02a3a954(param_1,uVar1,uVar3,param_2 + 2);
    }
  }
  else if ((uVar2 & 0x7f) == 2) {
    FUN_02a3a854(param_1,uVar1,*(undefined4 *)(param_2 + 0x10),uVar3);
  }
  else {
    if ((uVar2 & 0x7f) != 1) {
      return 0;
    }
    FUN_02a3a754();
  }
  return 1;
}


