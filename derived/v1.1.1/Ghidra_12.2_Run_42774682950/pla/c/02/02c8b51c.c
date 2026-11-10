/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8b51c; name: FUN_02c8b51c
 */


float FUN_02c8b51c(uint param_1,ushort param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  bVar2 = (param_1 | 1) != 0x38b;
  uVar3 = 0;
  if ((int)param_1 < 0x38a && bVar2) {
    uVar3 = param_2;
  }
  if (uVar3 < 0x1c) {
    uVar6 = 0;
    if ((int)param_1 < 0x38a && bVar2) {
      uVar6 = (ulong)param_1;
    }
    lVar5 = *(&DAT_043f23a0)[uVar6 * 4];
    uVar6 = (&DAT_043f23a0)[uVar6 * 4][1] - lVar5 >> 3;
    if ((uVar3 < uVar6) && (*(long *)(lVar5 + (ulong)uVar3 * 8) != 0)) goto LAB_02c8b5a4;
  }
  uVar3 = 0;
  lVar5 = *DAT_043f23a0;
  uVar6 = DAT_043f23a0[1] - lVar5 >> 3;
LAB_02c8b5a4:
  if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar4 = *(int **)(lVar5 + (ulong)uVar3 * 8);
  uVar7 = 0;
  uVar8 = 0;
  if ((0x2e < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
     (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0x17], uVar6 != 0)) {
    uVar1 = NEON_ucvtf((uint)*(ushort *)((long)piVar4 + uVar6));
    uVar7 = (undefined2)uVar1;
    uVar8 = (undefined2)((uint)uVar1 >> 0x10);
  }
  return (((float)param_3 / 255.0) * 0.40000004 + 0.8) *
         (((float)param_4 / 255.0) * 0.40000004 + 0.8) * (float)CONCAT22(uVar8,uVar7);
}


