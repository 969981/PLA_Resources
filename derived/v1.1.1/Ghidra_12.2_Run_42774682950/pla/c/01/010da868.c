/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010da868; name: FUN_010da868
 */


ulong FUN_010da868(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  ushort *puVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  FUN_02c4fb44(auStack_50);
  FUN_02c4fb44(auStack_40,param_2);
  uVar2 = FUN_02c4fc60(auStack_40,0xe);
  iVar1 = (int)uVar2;
  uVar2 = FUN_010dac08(uVar2,uVar2 & 0xffffffff);
  if (iVar1 == 0) {
    param_1 = param_1 + 0x68;
  }
  else if (iVar1 == 1) {
    param_1 = param_1 + 0xaf4;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    param_1 = param_1 + 0xc84;
  }
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = uVar2 & 0xffffffff;
  puVar3 = (ushort *)(param_1 + 2);
  do {
    if (puVar3[-1] == param_2) {
      return (ulong)*puVar3;
    }
    puVar3 = puVar3 + 2;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return 0;
}


