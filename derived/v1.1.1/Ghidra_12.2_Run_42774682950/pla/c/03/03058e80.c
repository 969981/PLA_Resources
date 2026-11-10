/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03058e80; name: FUN_03058e80
 */


void FUN_03058e80(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  
  puVar3 = PTR_PTR_0434a080;
  iVar5 = *(int *)(*(long *)(param_1 + 0x388) + ((param_3 << 0x20) >> 0x1b) + 0x10);
  if (iVar5 != -1) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x398) + (long)iVar5 * 8);
    iVar5 = (int)plVar7[1];
    uVar6 = *(uint *)((long)plVar7 + 0xc);
    uVar1 = iVar5 + 1;
    if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
      lVar4 = *plVar7;
    }
    else {
      lVar4 = *plVar7;
      if (0x3ffffffe < iVar5) {
        FUN_032bd0a8(uVar1);
        uVar6 = *(uint *)((long)plVar7 + 0xc);
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar6) {
        uVar2 = uVar6;
      }
      lVar4 = FUN_032bd1d4(puVar3,uVar2,4,lVar4,iVar5);
      iVar5 = (int)plVar7[1];
      *plVar7 = lVar4;
    }
    *(undefined4 *)(lVar4 + (long)iVar5 * 4) = param_2;
    *(uint *)(plVar7 + 1) = uVar1;
  }
  return;
}


