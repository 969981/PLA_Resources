/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b52c8; name: FUN_014b52c8
 */


void FUN_014b52c8(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_2 % 0x19;
  uVar4 = (ulong)uVar2;
  lVar5 = *(long *)(param_1 + uVar4 * 8 + 0x5c0);
  if (*(long *)(param_2 + 6) == -0x5098ffb379f8bd48) {
    bVar3 = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    if (*(long *)(param_1 + uVar4 * 8 + 0x818) != *(long *)(param_2 + 6)) {
      FUN_014b5444(param_1,uVar4);
    }
    bVar3 = *(byte *)(lVar5 + 0x58) | 0x11;
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
    uVar1 = param_2[1];
    *(undefined4 *)(lVar5 + 0x30) = 0;
    *(uint *)(lVar5 + 0x34) = uVar1;
    *(undefined4 *)(lVar5 + 0x38) = 0;
  }
  *(byte *)(lVar5 + 0x58) = bVar3;
  lVar5 = *(long *)(param_1 + (ulong)(uVar2 + 0x19) * 8 + 0x5c0);
  if (*(long *)(param_2 + 2) == -0x5098ffb379f8bd48) {
    bVar3 = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    if (*(long *)(param_1 + (ulong)(uVar2 + 0x19) * 8 + 0x818) != *(long *)(param_2 + 2)) {
      FUN_014b5444(param_1);
    }
    bVar3 = *(byte *)(lVar5 + 0x58) | 0x11;
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
    uVar1 = param_2[1];
    *(undefined4 *)(lVar5 + 0x30) = 0;
    *(uint *)(lVar5 + 0x34) = uVar1;
    *(undefined4 *)(lVar5 + 0x38) = 0;
  }
  *(byte *)(lVar5 + 0x58) = bVar3;
  lVar5 = *(long *)(param_1 + (ulong)(uVar2 + 0x32) * 8 + 0x5c0);
  if (*(long *)(param_2 + 4) == -0x5098ffb379f8bd48) {
    bVar3 = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    if (*(long *)(param_1 + (ulong)(uVar2 + 0x32) * 8 + 0x818) != *(long *)(param_2 + 4)) {
      FUN_014b5444(param_1);
    }
    bVar3 = *(byte *)(lVar5 + 0x58) | 0x11;
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
    uVar2 = param_2[1];
    *(undefined4 *)(lVar5 + 0x30) = 0;
    *(uint *)(lVar5 + 0x34) = uVar2;
    *(undefined4 *)(lVar5 + 0x38) = 0;
  }
  *(byte *)(lVar5 + 0x58) = bVar3;
  return;
}


