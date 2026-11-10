/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cdd40; name: FUN_031cdd40
 */


undefined1  [16] FUN_031cdd40(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  
  lVar2 = FUN_031cddf8();
  lVar1 = param_1[1];
  iVar4 = (int)lVar2;
  if ((int)lVar1 == iVar4) {
    lVar3 = *param_1;
    iVar5 = iVar4;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar4) {
      lVar3 = FUN_0315f314(PTR_PTR_0434a080,iVar4 + 1,lVar3,lVar2);
      *param_1 = lVar3;
      iVar5 = (int)param_1[1];
    }
    *(undefined4 *)(lVar3 + (long)iVar5 * 4) = *param_2;
    *(int *)(param_1 + 1) = iVar4 + 1;
  }
  auVar6[8] = (int)lVar1 == iVar4;
  auVar6._0_8_ = *param_1 + ((lVar2 << 0x20) >> 0x1e);
  auVar6._9_7_ = 0;
  return auVar6;
}


