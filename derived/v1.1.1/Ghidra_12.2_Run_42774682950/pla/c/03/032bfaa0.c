/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bfaa0; name: FUN_032bfaa0
 */


void FUN_032bfaa0(long *param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  
  iVar2 = *(int *)((long)param_4 + 0xc);
  if (iVar2 == 0) {
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)(param_3 + 0xc) = 1;
  lVar4 = *param_4;
  uVar3 = *(ushort *)(param_4 + 1);
  *param_1 = lVar4;
  param_1[1] = lVar4 + (ulong)uVar3 + 0x20;
  uVar3 = *(ushort *)((long)param_4 + 10);
  *(uint *)(param_1 + 2) = iVar2 - (uint)uVar3;
  *(uint *)((long)param_1 + 0x14) = (uint)uVar3;
  if (uVar3 == 0) {
    param_1[1] = 0;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = (uint)uVar3;
  }
  param_1[3] = param_3;
  param_1[5] = param_2;
  *(uint *)(param_1 + 4) = uVar1;
  return;
}


