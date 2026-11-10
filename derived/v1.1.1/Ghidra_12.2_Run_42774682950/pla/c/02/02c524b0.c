/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c524b0; name: FUN_02c524b0
 */


undefined4 FUN_02c524b0(uint param_1,ushort param_2,byte param_3)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  bVar2 = (param_1 | 1) != 0x38b;
  uVar3 = 0;
  if ((int)param_1 < 0x38a && bVar2) {
    uVar3 = param_2;
  }
  if (uVar3 < 0x1c) {
    uVar7 = 0;
    if ((int)param_1 < 0x38a && bVar2) {
      uVar7 = (ulong)param_1;
    }
    lVar6 = *(&DAT_043f23a0)[uVar7 * 4];
    uVar7 = (&DAT_043f23a0)[uVar7 * 4][1] - lVar6 >> 3;
    if ((uVar3 < uVar7) && (*(long *)(lVar6 + (ulong)uVar3 * 8) != 0)) goto LAB_02c52538;
  }
  uVar3 = 0;
  lVar6 = *DAT_043f23a0;
  uVar7 = DAT_043f23a0[1] - lVar6 >> 3;
LAB_02c52538:
  if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar5 = *(int **)(lVar6 + (ulong)uVar3 * 8);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x23) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x11], uVar7 == 0)) {
    uVar7 = 0;
  }
  else {
    bVar1 = *(byte *)((long)piVar5 + uVar7);
    uVar4 = 0;
    if (bVar1 < 6) {
      uVar4 = (uint)bVar1;
    }
    uVar7 = (ulong)uVar4;
  }
  if (99 < param_3) {
    param_3 = 100;
  }
  return *(undefined4 *)(*(long *)((&DAT_0428ab10)[uVar7 * 6] + 0x250) + (ulong)param_3 * 4);
}


