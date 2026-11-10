/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030cae20; name: FUN_030cae20
 */


void FUN_030cae20(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  uVar7 = (ulong)param_2[1] & 0xffffff;
  uVar5 = (ulong)*param_2 & 0xffffff;
  lVar4 = *(long *)(lVar6 + 0x38);
  lVar2 = lVar4 + uVar7 * 0xc0;
  iVar1 = *(int *)(param_1 + 0x2a0);
  if (((*(int *)(lVar2 + 0x80) == iVar1) && ((*(byte *)(lVar4 + uVar5 * 0xc0 + 0x54) & 5) != 0)) ||
     ((*(int *)(lVar4 + uVar5 * 0xc0 + 0x80) == iVar1 &&
      ((*(byte *)(lVar4 + uVar7 * 0xc0 + 0x54) & 5) != 0)))) {
    lVar3 = lVar4 + uVar5 * 0xc0;
    if (5 < (byte)param_2[2]) {
      lVar4 = lVar3;
      if (*(int *)(lVar2 + 0x80) == iVar1) {
        lVar4 = lVar2;
        lVar2 = lVar3;
      }
      FUN_030ca0b0(param_1,lVar4,lVar2);
      return;
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0x898) + 0x48);
    if ((*(char *)(lVar2 + (ulong)*(ushort *)(lVar4 + uVar7 * 0xc0 + 0x8a) * 0x50 + 0x18) == '\0')
       && (*(char *)(lVar2 + (ulong)*(ushort *)(lVar4 + uVar5 * 0xc0 + 0x8a) * 0x50 + 0x18) == '\0')
       ) {
      FUN_030ca5e0();
      return;
    }
  }
  return;
}


