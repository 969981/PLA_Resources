/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004524a0; name: FUN_004524a0
 */


undefined8 FUN_004524a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0040c070(*(undefined8 *)(param_1 + 0x18));
  if ((*(int *)(param_1 + 4) == 1) &&
     ((iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0x58)), iVar2 < 1 ||
      (iVar3 = FUN_00453060(uVar1), iVar3 < iVar2 + 2)))) {
    return 0;
  }
  uVar4 = FUN_0040d150(uVar1,0xffffffff);
  return uVar4;
}


