/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a144e4; name: FUN_02a144e4
 */


void FUN_02a144e4(long param_1,byte param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  if (((param_3 & 0xff) != 0) && (uVar3 = *(ushort *)(lVar4 + 0x2ea), uVar3 < 0x1fe)) {
    uVar2 = (uint)uVar3 + (param_3 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    param_3 = param_3 - iVar1;
    if ((param_3 & 0xff) != 0) {
      uVar2 = (uint)*(byte *)(lVar4 + 0x2ec) + (param_3 & 0xff);
      iVar1 = uVar2 + 4;
      if (uVar2 < 0xfd) {
        iVar1 = 0;
      }
      *(byte *)(lVar4 + 0x2ec) = (char)(param_3 - iVar1) + *(byte *)(lVar4 + 0x2ec);
      *(ushort *)(lVar4 + 0x2ea) = uVar3 + ((ushort)(param_3 - iVar1) & 0xff);
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  if (((param_4 & 0xff) != 0) && (uVar3 = *(ushort *)(lVar4 + 0x2ea), uVar3 < 0x1fe)) {
    uVar2 = (uint)uVar3 + (param_4 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    param_4 = param_4 - iVar1;
    if ((param_4 & 0xff) != 0) {
      uVar2 = (uint)*(byte *)(lVar4 + 0x2ed) + (param_4 & 0xff);
      iVar1 = uVar2 + 4;
      if (uVar2 < 0xfd) {
        iVar1 = 0;
      }
      *(byte *)(lVar4 + 0x2ed) = (char)(param_4 - iVar1) + *(byte *)(lVar4 + 0x2ed);
      *(ushort *)(lVar4 + 0x2ea) = uVar3 + ((ushort)(param_4 - iVar1) & 0xff);
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  if (((param_5 & 0xff) != 0) && (uVar3 = *(ushort *)(lVar4 + 0x2ea), uVar3 < 0x1fe)) {
    uVar2 = (uint)uVar3 + (param_5 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    param_5 = param_5 - iVar1;
    if ((param_5 & 0xff) != 0) {
      uVar2 = (uint)*(byte *)(lVar4 + 0x2ee) + (param_5 & 0xff);
      iVar1 = uVar2 + 4;
      if (uVar2 < 0xfd) {
        iVar1 = 0;
      }
      *(byte *)(lVar4 + 0x2ee) = (char)(param_5 - iVar1) + *(byte *)(lVar4 + 0x2ee);
      *(ushort *)(lVar4 + 0x2ea) = uVar3 + ((ushort)(param_5 - iVar1) & 0xff);
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  if (((param_6 & 0xff) != 0) && (uVar3 = *(ushort *)(lVar4 + 0x2ea), uVar3 < 0x1fe)) {
    uVar2 = (uint)uVar3 + (param_6 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    param_6 = param_6 - iVar1;
    if ((param_6 & 0xff) != 0) {
      uVar2 = (uint)*(byte *)(lVar4 + 0x2f0) + (param_6 & 0xff);
      iVar1 = uVar2 + 4;
      if (uVar2 < 0xfd) {
        iVar1 = 0;
      }
      *(byte *)(lVar4 + 0x2f0) = (char)(param_6 - iVar1) + *(byte *)(lVar4 + 0x2f0);
      *(ushort *)(lVar4 + 0x2ea) = uVar3 + ((ushort)(param_6 - iVar1) & 0xff);
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  if (((param_7 & 0xff) != 0) && (uVar3 = *(ushort *)(lVar4 + 0x2ea), uVar3 < 0x1fe)) {
    uVar2 = (uint)uVar3 + (param_7 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    param_7 = param_7 - iVar1;
    if ((param_7 & 0xff) != 0) {
      uVar2 = (uint)*(byte *)(lVar4 + 0x2f1) + (param_7 & 0xff);
      iVar1 = uVar2 + 4;
      if (uVar2 < 0xfd) {
        iVar1 = 0;
      }
      *(byte *)(lVar4 + 0x2f1) = (char)(param_7 - iVar1) + *(byte *)(lVar4 + 0x2f1);
      *(ushort *)(lVar4 + 0x2ea) = uVar3 + ((ushort)(param_7 - iVar1) & 0xff);
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  if (((param_8 & 0xff) != 0) && (uVar3 = *(ushort *)(lVar4 + 0x2ea), uVar3 < 0x1fe)) {
    uVar2 = (uint)uVar3 + (param_8 & 0xff);
    iVar1 = uVar2 + 2;
    if (uVar2 < 0x1ff) {
      iVar1 = 0;
    }
    param_8 = param_8 - iVar1;
    if ((param_8 & 0xff) != 0) {
      uVar2 = (uint)*(byte *)(lVar4 + 0x2ef) + (param_8 & 0xff);
      iVar1 = uVar2 + 4;
      if (uVar2 < 0xfd) {
        iVar1 = 0;
      }
      *(byte *)(lVar4 + 0x2ef) = (char)(param_8 - iVar1) + *(byte *)(lVar4 + 0x2ef);
      *(ushort *)(lVar4 + 0x2ea) = uVar3 + ((ushort)(param_8 - iVar1) & 0xff);
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  return;
}


