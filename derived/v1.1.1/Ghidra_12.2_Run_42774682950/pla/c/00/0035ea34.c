/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035ea34; name: FUN_0035ea34
 */


void FUN_0035ea34(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_2 + 0x80);
      uVar1 = FUN_00366138(param_3 + 0x78,uVar3 & 0xffffffff);
      FUN_0035eb54(param_1,lVar2 + lVar4,uVar1);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x98;
    } while ((long)uVar3 < (long)*(int *)(param_2 + 0x38));
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_2 + 0x68);
      uVar1 = FUN_00365e80(param_3 + 0x30,uVar3 & 0xffffffff);
      FUN_0035f410(param_1,lVar2 + lVar4,uVar1);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x90;
    } while ((long)uVar3 < (long)*(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_2 + 0x70);
      uVar1 = FUN_00365f68(param_3 + 0x48,uVar3 & 0xffffffff);
      FUN_0035fa94(param_1,lVar2 + lVar4,uVar1);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x50;
    } while ((long)uVar3 < (long)*(int *)(param_2 + 0x30));
  }
  return;
}


