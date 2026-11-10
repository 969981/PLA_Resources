/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f590a0; name: FUN_02f590a0
 */


void FUN_02f590a0(int param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x8e8);
  lVar4 = *(long *)(&DAT_0442c138 + (long)param_1 * 0x820);
  *(long *)(param_2 + 0x8f8) = *(long *)(param_2 + 0x8f8) - param_3;
  *(long *)(param_2 + 0x8e8) = lVar2 + lVar4 * param_3;
  uVar1 = lVar2 - *(long *)(param_2 + 0x8f0);
  if (uVar1 != 0) {
    *(undefined4 *)(lVar2 + 0x2c) = 2;
    uVar3 = *(ulong *)(&DAT_0442c140 + (long)param_1 * 0x820);
    *(undefined4 *)(lVar2 + 0x3c) = 0;
    *(int *)(lVar2 + 0x34) = (int)(uVar1 >> (uVar3 & 0x3f));
  }
  *(int *)(lVar2 + 0x30) = (int)param_3;
  return;
}


