/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb79f8; name: FUN_02eb79f8
 */


undefined4 * FUN_02eb79f8(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar5 <= uVar2) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    lVar3 = (*DAT_0442d148)(0,*param_1,(ulong)uVar5 << 3);
    if (lVar3 == 0) {
      return (undefined4 *)0x0;
    }
    *param_1 = lVar3;
    *(uint *)((long)param_1 + 0xc) = uVar5;
  }
  if (uVar2 < uVar5) {
    lVar3 = *param_1;
    uVar5 = *(uint *)(param_1 + 1);
    puVar4 = (undefined4 *)(lVar3 + (ulong)uVar5 * 8);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xff7fffff;
      *(undefined4 *)(lVar3 + (ulong)uVar5 * 8 + 4) = 0x7f7fffff;
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}


