/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278a58; name: FUN_00278a58
 */


void FUN_00278a58(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00266cf4(param_2,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
  FUN_00278d10(param_1,(undefined8 *)(param_2 + 0x48),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x9f0));
  FUN_00278d10(param_1,(undefined8 *)(param_2 + 0x50),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xa10));
  FUN_00278d10(param_1,(undefined8 *)(param_2 + 0x58),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xa30));
  lVar3 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar3 + 0x878) == -1) {
    *(undefined8 *)(param_2 + 0x80) = 0;
    cVar1 = *(char *)(lVar3 + 0x8a9);
  }
  else {
    uVar2 = FUN_002793a4(param_1);
    lVar3 = *(long *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x80) = uVar2;
    cVar1 = *(char *)(lVar3 + 0x8a9);
  }
  if ((cVar1 != '\0') && (*(long *)(lVar3 + 0x8d0) != -1)) {
    uVar2 = FUN_002793a4(param_1);
    *(undefined8 *)(param_2 + 0x78) = uVar2;
  }
  FUN_00266d10(param_2,param_1 + 0xf0);
  FUN_00267a14(param_2,param_1);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_002678e8(param_2,param_1);
    return;
  }
  return;
}


