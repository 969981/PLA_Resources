/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d4514; name: FUN_032d4514
 */


int FUN_032d4514(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 2);
  lVar3 = param_1[1];
  if (iVar2 < (int)(*(uint *)((long)param_1 + 0x14) & 0x3fffffff)) {
    iVar4 = iVar2;
  }
  else {
    lVar3 = FUN_032d46ec(*param_1,iVar2 + 1,lVar3,iVar2);
    iVar4 = *(int *)(param_1 + 2);
    param_1[1] = lVar3;
  }
  puVar1 = (undefined8 *)(lVar3 + (long)iVar4 * 0x20);
  *(int *)(param_1 + 2) = iVar2 + 1;
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0xffffffff;
  *(undefined1 *)(puVar1 + 3) = param_3;
  return iVar2;
}


