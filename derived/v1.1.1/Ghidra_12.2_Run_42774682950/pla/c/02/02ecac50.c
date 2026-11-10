/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecac50; name: FUN_02ecac50
 */


long FUN_02ecac50(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar5 <= uVar2) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN_02ecaccc(param_1,iVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar5 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  lVar4 = *param_1 + (ulong)uVar2 * 0x18;
  if (lVar4 == 0) {
    return 0;
  }
  lVar6 = *param_1 + (ulong)uVar2 * 0x18;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  return lVar4;
}


