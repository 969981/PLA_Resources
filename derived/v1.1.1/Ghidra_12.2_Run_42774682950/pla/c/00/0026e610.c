/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026e610; name: FUN_0026e610
 */


undefined8 FUN_0026e610(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x238);
  lVar3 = *(long *)(lVar2 + 0x340);
  if ((lVar3 == 0) || ((*(int *)(lVar3 + 0x114) == -1 && (*(int *)(lVar3 + 0x118) == -1)))) {
    uVar1 = 0;
    lVar3 = *(long *)(lVar2 + 0x348);
  }
  else {
    uVar1 = 1;
    lVar3 = *(long *)(lVar2 + 0x348);
  }
  if ((lVar3 == 0) || ((*(int *)(lVar3 + 0x114) == -1 && (*(int *)(lVar3 + 0x118) == -1)))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  else {
    uVar1 = 1;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  if ((lVar2 == 0) || ((*(int *)(lVar2 + 0x114) == -1 && (*(int *)(lVar2 + 0x118) == -1)))) {
    return uVar1;
  }
  return 1;
}


