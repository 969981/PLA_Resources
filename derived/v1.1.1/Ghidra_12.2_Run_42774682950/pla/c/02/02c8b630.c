/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8b630; name: FUN_02c8b630
 */


undefined2 FUN_02c8b630(uint param_1,ushort param_2,char param_3)

{
  bool bVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      bVar1 = (param_1 | 1) != 0x38b;
      uVar2 = 0;
      if ((int)param_1 < 0x38a && bVar1) {
        uVar2 = param_2;
      }
      if (uVar2 < 0x1c) {
        uVar5 = 0;
        if ((int)param_1 < 0x38a && bVar1) {
          uVar5 = (ulong)param_1;
        }
        lVar4 = *(&DAT_043f23a0)[uVar5 * 4];
        uVar5 = (&DAT_043f23a0)[uVar5 * 4][1] - lVar4 >> 3;
        if ((uVar5 <= uVar2) || (*(long *)(lVar4 + (ulong)uVar2 * 8) == 0)) goto LAB_02c8b814;
      }
      else {
LAB_02c8b814:
        uVar2 = 0;
        lVar4 = *DAT_043f23a0;
        uVar5 = DAT_043f23a0[1] - lVar4 >> 3;
      }
      if (uVar5 <= uVar2) goto LAB_02c8b870;
      piVar3 = *(int **)(lVar4 + (ulong)uVar2 * 8);
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xf) {
        return 0;
      }
      uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[7];
      goto joined_r0x02c8b6f4;
    }
    bVar1 = (param_1 | 1) != 0x38b;
    uVar2 = 0;
    if ((int)param_1 < 0x38a && bVar1) {
      uVar2 = param_2;
    }
    if (uVar2 < 0x1c) {
      uVar5 = 0;
      if ((int)param_1 < 0x38a && bVar1) {
        uVar5 = (ulong)param_1;
      }
      lVar4 = *(&DAT_043f23a0)[uVar5 * 4];
      uVar5 = (&DAT_043f23a0)[uVar5 * 4][1] - lVar4 >> 3;
      if ((uVar5 <= uVar2) || (*(long *)(lVar4 + (ulong)uVar2 * 8) == 0)) goto LAB_02c8b6b4;
    }
    else {
LAB_02c8b6b4:
      uVar2 = 0;
      lVar4 = *DAT_043f23a0;
      uVar5 = DAT_043f23a0[1] - lVar4 >> 3;
    }
    if (uVar5 <= uVar2) goto LAB_02c8b870;
    piVar3 = *(int **)(lVar4 + (ulong)uVar2 * 8);
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x13) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[9];
    goto joined_r0x02c8b6f4;
  }
  bVar1 = (param_1 | 1) != 0x38b;
  uVar2 = 0;
  if ((int)param_1 < 0x38a && bVar1) {
    uVar2 = param_2;
  }
  if (uVar2 < 0x1c) {
    uVar5 = 0;
    if ((int)param_1 < 0x38a && bVar1) {
      uVar5 = (ulong)param_1;
    }
    lVar4 = *(&DAT_043f23a0)[uVar5 * 4];
    uVar5 = (&DAT_043f23a0)[uVar5 * 4][1] - lVar4 >> 3;
    if ((uVar5 <= uVar2) || (*(long *)(lVar4 + (ulong)uVar2 * 8) == 0)) goto LAB_02c8b764;
  }
  else {
LAB_02c8b764:
    uVar2 = 0;
    lVar4 = *DAT_043f23a0;
    uVar5 = DAT_043f23a0[1] - lVar4 >> 3;
  }
  if (uVar5 <= uVar2) {
LAB_02c8b870:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar3 = *(int **)(lVar4 + (ulong)uVar2 * 8);
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x11) {
    return 0;
  }
  uVar2 = ((ushort *)((long)piVar3 - (long)*piVar3))[8];
joined_r0x02c8b6f4:
  if ((ulong)uVar2 == 0) {
    return 0;
  }
  return *(undefined2 *)((long)piVar3 + (ulong)uVar2);
}


