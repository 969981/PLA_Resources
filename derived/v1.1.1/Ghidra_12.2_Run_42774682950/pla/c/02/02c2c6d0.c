/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2c6d0; name: FUN_02c2c6d0
 */


bool FUN_02c2c6d0(undefined8 param_1,ushort *param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = 2;
  puVar2 = param_2 + 1;
  if (*param_2 != 0x1b && 9 < *param_2 - 0x11) {
    lVar1 = 0;
    puVar2 = param_2;
  }
  uVar3 = *(ushort *)((long)param_2 + lVar1);
  iVar4 = FUN_02c2c7d8(param_1,puVar2);
  if (iVar4 == 2) {
    return true;
  }
  if (iVar4 != 1) {
    uVar5 = (uint)uVar3;
    if ((uVar3 < 0x100) &&
       ((*(uint *)(&DAT_038884e0 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar5 & 0x1f)) != 0)) {
      return true;
    }
    if (uVar5 == 0xe5 || uVar3 < 0xe5) {
      if ((uVar5 == 0x59) || (uVar5 == 0x79)) {
        uVar3 = puVar2[1];
        if (uVar3 < 0x100) {
          return (*(uint *)(&DAT_038884e0 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar3 & 0x1f))
                 == 0;
        }
        return true;
      }
      if (uVar5 == 0xc6) {
        return true;
      }
    }
    else {
      if (uVar5 - 0x152 < 2) {
        return true;
      }
      if (uVar5 == 0xe6) {
        return true;
      }
    }
  }
  return false;
}


