/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167440; name: FUN_00167440
 */


void FUN_00167440(long *param_1,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((int)param_2 != -1) {
    lVar2 = *(long *)(*param_1 + 0x38);
    do {
      uVar4 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
      *(uint *)(lVar2 + uVar4) =
           *(uint *)(lVar2 + uVar4) & 0xffffc03f | param_3 * 0x40 + 0x40U & 0x3fc0;
      lVar2 = *(long *)(*param_1 + 0x38);
      iVar1 = (*(uint *)(lVar2 + uVar4) >> 0xe) - 0x1ffff;
      uVar3 = 0xffffffff;
      if (iVar1 != -1) {
        uVar3 = (int)param_2 + iVar1 + 1;
      }
      param_2 = (ulong)uVar3;
    } while (uVar3 != 0xffffffff);
  }
  return;
}


