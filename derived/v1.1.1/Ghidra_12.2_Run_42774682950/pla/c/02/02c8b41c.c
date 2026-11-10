/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8b41c; name: FUN_02c8b41c
 */


int FUN_02c8b41c(uint param_1,ushort param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  bVar3 = (param_1 | 1) != 0x38b;
  uVar4 = 0;
  if ((int)param_1 < 0x38a && bVar3) {
    uVar4 = param_2;
  }
  if (uVar4 < 0x1c) {
    uVar7 = 0;
    if ((int)param_1 < 0x38a && bVar3) {
      uVar7 = (ulong)param_1;
    }
    lVar6 = *(&DAT_043f23a0)[uVar7 * 4];
    uVar7 = (&DAT_043f23a0)[uVar7 * 4][1] - lVar6 >> 3;
    if ((uVar4 < uVar7) && (*(long *)(lVar6 + (ulong)uVar4 * 8) != 0)) goto LAB_02c8b4a4;
  }
  uVar4 = 0;
  lVar6 = *DAT_043f23a0;
  uVar7 = DAT_043f23a0[1] - lVar6 >> 3;
LAB_02c8b4a4:
  if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar5 = *(int **)(lVar6 + (ulong)uVar4 * 8);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x21) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x10], uVar7 == 0)) {
    return 0;
  }
  bVar1 = *(char *)((long)piVar5 + uVar7) + 2;
  if (bVar1 < 3) {
    return *(int *)((long)&DAT_039c3370 + (long)(char)bVar1 * 4);
  }
  iVar2 = 0;
  if (param_3 != 2) {
    iVar2 = param_3;
  }
  return iVar2;
}


