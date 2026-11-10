/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008311e8; name: FUN_008311e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008311e8(void *param_1,long param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  memset(param_1,0,4);
  if (param_3 < *(byte *)(*(long *)(param_2 + 0x10) + 3)) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10) + (ulong)param_3 * 0x18;
    lVar4 = *(long *)(lVar3 + 8);
    if (*(long *)(lVar3 + 8) == lVar3) {
      return;
    }
  }
  else {
    lVar3 = 0;
    lVar4 = _DAT_00000008;
    if (_DAT_00000008 == 0) {
      return;
    }
  }
  iVar2 = *(int *)(lVar3 + 0x14);
  lVar4 = lVar4 - iVar2;
  do {
    bVar1 = *(byte *)(*(long *)(lVar4 + 0x10) + 0x28);
    uVar5 = (ulong)(bVar1 >> 3) & 0x1c;
    *(uint *)((long)param_1 + uVar5) = 1 << (ulong)(bVar1 & 0x1f) | *(uint *)((long)param_1 + uVar5)
    ;
    lVar4 = *(long *)(lVar4 + *(int *)(lVar3 + 0x14) + 8) - (long)*(int *)(lVar3 + 0x14);
  } while (lVar4 != lVar3 - iVar2);
  return;
}


