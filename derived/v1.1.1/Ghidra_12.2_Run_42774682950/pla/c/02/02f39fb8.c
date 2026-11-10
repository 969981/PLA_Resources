/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f39fb8; name: FUN_02f39fb8
 */


long FUN_02f39fb8(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar2) {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar4 = iVar1 + uVar4;
    lVar3 = (*DAT_0442d148)(0,*param_1,(ulong)uVar4 << 4);
    if (lVar3 == 0) {
      return 0;
    }
    *param_1 = lVar3;
    *(uint *)((long)param_1 + 0xc) = uVar4;
  }
  if (uVar2 < uVar4) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar3 = *param_1 + (ulong)uVar4 * 0x10;
    *(uint *)(param_1 + 1) = uVar4 + 1;
    if (lVar3 != 0) {
      *(undefined8 *)(*param_1 + (ulong)uVar4 * 0x10 + 8) = 0;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


