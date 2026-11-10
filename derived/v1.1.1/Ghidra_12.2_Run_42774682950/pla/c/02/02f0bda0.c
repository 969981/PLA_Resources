/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0bda0; name: FUN_02f0bda0
 */


undefined4 * FUN_02f0bda0(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    lVar5 = (*DAT_0442d148)(0,*param_1,(ulong)uVar3 << 3);
    if (lVar5 == 0) {
      return (undefined4 *)0x0;
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar3;
  }
  if (uVar2 < uVar3) {
    lVar5 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    puVar4 = (undefined4 *)(lVar5 + (ulong)uVar3 * 8);
    *(uint *)(param_1 + 1) = uVar3 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 1;
      *(undefined4 *)(lVar5 + (ulong)uVar3 * 8 + 4) = 0;
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}


