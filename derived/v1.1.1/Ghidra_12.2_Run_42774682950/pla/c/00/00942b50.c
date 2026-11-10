/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00942b50; name: FUN_00942b50
 */


void FUN_00942b50(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x354) == '\0') {
    return;
  }
  iVar1 = *(int *)(lVar3 + 0x45c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar3 + 0x460);
  }
  else {
    uVar2 = FUN_00923c28(*(undefined8 *)(param_1 + 0x28));
    FUN_00935eac(uVar2,iVar1);
    lVar3 = *(long *)(param_1 + 0x38);
    iVar1 = *(int *)(lVar3 + 0x460);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar3 + 0x464);
  }
  else {
    uVar2 = FUN_00923c28(*(undefined8 *)(param_1 + 0x28));
    FUN_00935eac(uVar2,iVar1);
    lVar3 = *(long *)(param_1 + 0x38);
    iVar1 = *(int *)(lVar3 + 0x464);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar3 + 0x468);
  }
  else {
    uVar2 = FUN_00923c28(*(undefined8 *)(param_1 + 0x28));
    FUN_00935eac(uVar2,iVar1);
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x468);
  }
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_00923c28(*(undefined8 *)(param_1 + 0x28));
  FUN_00935eac(uVar2,iVar1);
  return;
}


