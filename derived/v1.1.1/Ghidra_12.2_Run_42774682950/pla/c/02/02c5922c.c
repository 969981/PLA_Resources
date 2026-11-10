/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5922c; name: FUN_02c5922c
 */


void FUN_02c5922c(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x50))(param_1,uVar4);
      uVar2 = FUN_02c66e84(*(undefined8 *)(lVar3 + 0x98));
      FUN_02c788b4(*(undefined8 *)(lVar3 + 0x98),uVar2);
      FUN_02c77f1c(*(undefined8 *)(lVar3 + 0x98),0);
      FUN_02c60328(lVar3);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  return;
}


