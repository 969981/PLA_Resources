/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010dbd58; name: FUN_010dbd58
 */


ulong FUN_010dbd58(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined1 auStack_40 [16];
  
  FUN_02c4fb44(auStack_40);
  uVar3 = FUN_02c4fc60(auStack_40,0xe);
  iVar1 = (int)uVar3;
  uVar2 = FUN_010dac08(uVar3,uVar3 & 0xffffffff);
  if (iVar1 == 0) {
    puVar4 = (ushort *)(param_1 + 0x68);
  }
  else if (iVar1 == 1) {
    puVar4 = (ushort *)(param_1 + 0xaf4);
  }
  else {
    if (iVar1 != 2) {
      return 0x2a3;
    }
    puVar4 = (ushort *)(param_1 + 0xc84);
  }
  if (uVar2 == 0) {
    return 0x2a3;
  }
  uVar3 = 0;
  do {
    if (*puVar4 == param_2) {
      return uVar3 & 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 2;
  } while (uVar2 != uVar3);
  return 0x2a3;
}


