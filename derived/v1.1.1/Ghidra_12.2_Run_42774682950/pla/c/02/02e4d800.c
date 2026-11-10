/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4d800; name: FUN_02e4d800
 */


long FUN_02e4d800(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar3) {
    uVar5 = FUN_02e4ddb4(param_1,1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar4 <= uVar3) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  lVar1 = *param_1 + (ulong)uVar3 * 0x20;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = *param_1 + (ulong)uVar3 * 0x20;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  return lVar1;
}


