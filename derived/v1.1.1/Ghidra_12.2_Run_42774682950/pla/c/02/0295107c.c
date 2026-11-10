/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295107c; name: FUN_0295107c
 */


void FUN_0295107c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 9) != '\0') {
    lVar4 = *(long *)(param_3 + 0x98);
    bVar1 = *(char *)(lVar4 + 0x19) == '\0';
    if (bVar1) {
      FUN_02c66480();
      lVar4 = *(long *)(param_3 + 0x98);
    }
    uVar2 = *(undefined1 *)(param_2 + 2);
    uVar3 = FUN_02c69e70(lVar4);
    uVar3 = FUN_02c5de2c(param_3,uVar3,uVar2);
    FUN_02c7b648(*(undefined8 *)(param_3 + 0x98),uVar3);
    FUN_02c5dba8(param_3,1);
    uVar2 = *(undefined1 *)(param_2 + 3);
    uVar3 = FUN_02c6a1a8(*(undefined8 *)(param_3 + 0x98));
    uVar3 = FUN_02c5de2c(param_3,uVar3,uVar2);
    FUN_02c7b988(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar3 = FUN_02c5e59c(param_3);
    FUN_02c78bfc(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar2 = *(undefined1 *)(param_2 + 4);
    uVar3 = FUN_02c6a4e0(*(undefined8 *)(param_3 + 0x98));
    uVar3 = FUN_02c5de2c(param_3,uVar3,uVar2);
    FUN_02c7bcc8(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar3 = FUN_02c5e850(param_3);
    FUN_02c78f24(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar2 = *(undefined1 *)(param_2 + 6);
    uVar3 = FUN_02c6a818(*(undefined8 *)(param_3 + 0x98));
    uVar3 = FUN_02c5de2c(param_3,uVar3,uVar2);
    FUN_02c7c008(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar3 = FUN_02c5eb08(param_3);
    FUN_02c7924c(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar2 = *(undefined1 *)(param_2 + 7);
    uVar3 = FUN_02c6ab50(*(undefined8 *)(param_3 + 0x98));
    uVar3 = FUN_02c5de2c(param_3,uVar3,uVar2);
    FUN_02c7c348(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar3 = FUN_02c5edc0(param_3);
    FUN_02c79574(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar2 = *(undefined1 *)(param_2 + 5);
    uVar3 = FUN_02c6ae88(*(undefined8 *)(param_3 + 0x98));
    uVar3 = FUN_02c5de2c(param_3,uVar3,uVar2);
    FUN_02c7c688(*(undefined8 *)(param_3 + 0x98),uVar3);
    uVar3 = FUN_02c5f078(param_3);
    FUN_02c7989c(*(undefined8 *)(param_3 + 0x98),uVar3);
    *(undefined1 *)(param_2 + 9) = 0;
    if ((bVar1) && (*(char *)(*(long *)(param_3 + 0x98) + 0x19) != '\0')) {
      FUN_02c66640();
      return;
    }
  }
  return;
}


