/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00457340; name: FUN_00457340
 */


undefined8 FUN_00457340(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0044e530();
  uVar3 = FUN_0044e490(param_2);
  iVar1 = FUN_0044e250(uVar2,uVar3);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_00456be0(param_1);
  FUN_00456be0(param_2);
  if ((*(long *)(param_2 + 0xf8) != 0) && (uVar2 = FUN_00457410(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  if ((*(byte *)(param_2 + 0xe1) >> 2 & 1) == 0) {
    if (((*(uint *)(param_1 + 0xe0) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xe4) >> 2 & 1) == 0))
    {
      return 0x20;
    }
  }
  else if (((*(uint *)(param_1 + 0xe0) >> 1 & 1) != 0) && (-1 < *(char *)(param_1 + 0xe4))) {
    return 0x27;
  }
  return 0;
}


