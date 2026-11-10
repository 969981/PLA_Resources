/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081b728; name: FUN_0081b728
 */


long FUN_0081b728(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_0081bae8(param_1,param_2,*(undefined4 *)(param_1 + 0xd4));
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x18);
    *(long *)(lVar2 + 0x18) = param_2;
    uVar3 = lVar4 - param_2;
    uVar1 = *(ushort *)(lVar2 + 0x12);
    FUN_0081aac8(*(int *)(param_1 + 0xec) + lVar2);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    if (*(int *)(param_1 + 0x88) == 1) {
      FUN_0081aab0();
    }
    else {
      FUN_0081aa98(param_1 + 0xf0,*(int *)(param_1 + 0x104) + lVar2);
    }
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    if (uVar3 < 0x21) {
      if (uVar3 != 0) {
        *(long *)(lVar2 + 0x18) = lVar4;
      }
    }
    else {
      lVar4 = param_2 + lVar2 + (ulong)uVar1;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined4 *)(lVar4 + 0x30) = 0;
      *(ulong *)(lVar4 + 0x38) = uVar3 - 0x20;
      FUN_0081afdc(param_1);
    }
  }
  return lVar2;
}


