/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee3648; name: FUN_02ee3648
 */


void FUN_02ee3648(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x10;
  FUN_02ee36fc(param_1,param_3);
  puVar7 = (uint *)(lVar1 + 0x38);
  uVar4 = *puVar7;
  uVar5 = *(uint *)(lVar1 + 0x3c);
  plVar8 = (long *)(lVar1 + 0x30);
  if (uVar5 <= uVar4) {
    iVar2 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar2 = 1;
    }
    uVar5 = iVar2 + uVar5;
    lVar6 = (*DAT_0442d148)(0,*plVar8,(ulong)uVar5 << 2);
    if (lVar6 == 0) {
      return;
    }
    *plVar8 = lVar6;
    *(uint *)(lVar1 + 0x3c) = uVar5;
  }
  if (uVar4 < uVar5) {
    puVar3 = (undefined4 *)(*plVar8 + (ulong)*puVar7 * 4);
    *puVar7 = *puVar7 + 1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_3;
    }
  }
  return;
}


