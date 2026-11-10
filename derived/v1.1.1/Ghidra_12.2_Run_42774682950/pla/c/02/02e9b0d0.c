/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b0d0; name: FUN_02e9b0d0
 */


long FUN_02e9b0d0(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    lVar4 = (*DAT_0442d148)(0,*param_1,(ulong)uVar3 * 0x30);
    if (lVar4 == 0) {
      return 0;
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar3;
  }
  if (uVar2 < uVar3) {
    uVar3 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar3 + 1;
    lVar4 = *param_1 + (ulong)uVar3 * 0x30;
    if (lVar4 != 0) {
      lVar5 = *param_1 + (ulong)uVar3 * 0x30;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 1;
    }
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}


