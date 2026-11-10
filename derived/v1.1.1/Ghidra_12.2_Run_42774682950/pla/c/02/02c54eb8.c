/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c54eb8; name: FUN_02c54eb8
 */


bool FUN_02c54eb8(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 >> 5 == 1) {
    uVar1 = *(uint *)(param_1 + 8);
    bVar2 = (uVar1 | 1) != 0x38b;
    uVar3 = 0;
    if ((int)uVar1 < 0x38a && bVar2) {
      uVar3 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar4 = (ulong)uVar3;
    if (uVar3 < 0x1c) {
      uVar7 = 0;
      if ((int)uVar1 < 0x38a && bVar2) {
        uVar7 = (ulong)uVar1;
      }
      lVar6 = *(&DAT_043f23a0)[uVar7 * 4];
      uVar7 = (&DAT_043f23a0)[uVar7 * 4][1] - lVar6 >> 3;
      if ((uVar7 <= uVar4) || (*(long *)(lVar6 + uVar4 * 8) == 0)) goto LAB_02c54ff0;
    }
    else {
LAB_02c54ff0:
      uVar4 = 0;
      lVar6 = *DAT_043f23a0;
      uVar7 = DAT_043f23a0[1] - lVar6 >> 3;
    }
    if (uVar7 <= uVar4) {
LAB_02c55058:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    piVar5 = *(int **)(lVar6 + uVar4 * 8);
    if ((0x76 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar4 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x3b], uVar4 != 0))
    goto LAB_02c55034;
  }
  else if (param_2 >> 5 == 0) {
    uVar1 = *(uint *)(param_1 + 8);
    bVar2 = (uVar1 | 1) != 0x38b;
    uVar3 = 0;
    if ((int)uVar1 < 0x38a && bVar2) {
      uVar3 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar4 = (ulong)uVar3;
    if (uVar3 < 0x1c) {
      uVar7 = 0;
      if ((int)uVar1 < 0x38a && bVar2) {
        uVar7 = (ulong)uVar1;
      }
      lVar6 = *(&DAT_043f23a0)[uVar7 * 4];
      uVar7 = (&DAT_043f23a0)[uVar7 * 4][1] - lVar6 >> 3;
      if ((uVar7 <= uVar4) || (*(long *)(lVar6 + uVar4 * 8) == 0)) goto LAB_02c54f3c;
    }
    else {
LAB_02c54f3c:
      uVar4 = 0;
      lVar6 = *DAT_043f23a0;
      uVar7 = DAT_043f23a0[1] - lVar6 >> 3;
    }
    if (uVar7 <= uVar4) goto LAB_02c55058;
    piVar5 = *(int **)(lVar6 + uVar4 * 8);
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x75) ||
       (uVar4 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x3a], uVar4 == 0))
    goto LAB_02c5503c;
LAB_02c55034:
    uVar3 = *(uint *)((long)piVar5 + uVar4);
    goto LAB_02c55040;
  }
LAB_02c5503c:
  uVar3 = 0;
LAB_02c55040:
  return (uVar3 & 1 << (ulong)(param_2 & 0x1f)) != 0;
}


