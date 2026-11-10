/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01613a60; name: FUN_01613a60
 */


undefined8 FUN_01613a60(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    bVar1 = false;
    if (lVar3 != 0) {
      bVar1 = *(char *)(lVar3 + 0x1e1) != '\0';
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 8);
    if ((lVar3 == 0) || ((bool)(bVar1 ^ 1) || *(char *)(lVar3 + 0x1e1) == '\0')) {
      uVar2 = 0;
    }
    else {
      FUN_016144bc(param_1);
      FUN_016148a0(param_1);
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


