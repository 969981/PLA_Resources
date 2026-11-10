/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d990; name: FUN_0016d990
 */


long FUN_0016d990(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  iVar2 = (int)(((ulong)param_2 & 0xffffffff) * 0x3521cfb3 >> 0x20);
  uVar5 = (ulong)((int)param_2 + (iVar2 + ((uint)((int)param_2 - iVar2) >> 1) >> 5) * -0x35);
  lVar1 = lVar6 + uVar5 * 0x10;
  lVar4 = *(long *)(lVar1 + 0x1e8);
  iVar2 = strcmp(param_2,(char *)(lVar4 + 0x18));
  lVar7 = lVar4;
  if (iVar2 != 0) {
    lVar6 = lVar6 + uVar5 * 0x10;
    lVar7 = *(long *)(lVar6 + 0x1f0);
    iVar2 = strcmp(param_2,(char *)(lVar7 + 0x18));
    if (iVar2 != 0) {
      *(long *)(lVar6 + 0x1f0) = lVar4;
      sVar3 = strlen(param_2);
      lVar7 = FUN_0016d720(param_1,param_2,sVar3);
      *(long *)(lVar1 + 0x1e8) = lVar7;
    }
  }
  return lVar7;
}


