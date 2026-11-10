/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d0f4; name: FUN_0020d0f4
 */


undefined8 FUN_0020d0f4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
  FUN_0020c7ac();
  FUN_00205718(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(param_2 + 0x10));
  lVar1 = *(long *)(lVar3 + 0x20) + 4;
  *(long *)(lVar3 + 0x20) = lVar1;
  FUN_00205718(lVar1,*(undefined4 *)(param_2 + 0x14));
  *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 4;
  uVar2 = FUN_0020c4a8(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == -0x1f6) {
    uVar2 = 0xfffffdf6;
  }
  return uVar2;
}


