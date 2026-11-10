/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dbd44; name: FUN_032dbd44
 */


void FUN_032dbd44(long *param_1,int *param_2,long param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (0 < param_4) {
    iVar2 = 0;
    lVar3 = *param_1 + (long)*param_2 * 0x18;
    puVar4 = (uint *)(lVar3 + 0x10);
    uVar5 = *puVar4;
    uVar6 = (ulong)uVar5;
    while( true ) {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          plVar1 = (long *)(*(long *)(lVar3 + 8) + lVar7);
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
          *(long *)(*plVar1 + param_3) = plVar1[1];
          uVar6 = (ulong)(int)*puVar4;
        } while (lVar8 < (long)uVar6);
      }
      iVar2 = iVar2 + 1;
      param_3 = param_2[1] + param_3;
      if (iVar2 == param_4) break;
      uVar5 = (uint)uVar6;
    }
  }
  return;
}


