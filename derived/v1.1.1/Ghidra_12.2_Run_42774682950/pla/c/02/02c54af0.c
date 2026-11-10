/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c54af0; name: FUN_02c54af0
 */


undefined4 FUN_02c54af0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  
  switch(param_2) {
  case 0:
    uVar1 = *(uint *)(param_1 + 8);
    bVar3 = (uVar1 | 1) != 0x38b;
    uVar4 = 0;
    if ((int)uVar1 < 0x38a && bVar3) {
      uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar5 = (ulong)uVar4;
    if (uVar4 < 0x1c) {
      uVar8 = 0;
      if ((int)uVar1 < 0x38a && bVar3) {
        uVar8 = (ulong)uVar1;
      }
      lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
      uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
      if ((uVar8 <= uVar5) || (*(long *)(lVar7 + uVar5 * 8) == 0)) goto LAB_02c54b88;
    }
    else {
LAB_02c54b88:
      uVar5 = 0;
      lVar7 = *DAT_043f23a0;
      uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
    }
    if (uVar8 <= uVar5) {
LAB_02c54eb4:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    piVar6 = *(int **)(lVar7 + uVar5 * 8);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x6b) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x35];
    break;
  case 1:
    uVar1 = *(uint *)(param_1 + 8);
    bVar3 = (uVar1 | 1) != 0x38b;
    uVar4 = 0;
    if ((int)uVar1 < 0x38a && bVar3) {
      uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar5 = (ulong)uVar4;
    if (uVar4 < 0x1c) {
      uVar8 = 0;
      if ((int)uVar1 < 0x38a && bVar3) {
        uVar8 = (ulong)uVar1;
      }
      lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
      uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
      if ((uVar8 <= uVar5) || (*(long *)(lVar7 + uVar5 * 8) == 0)) goto LAB_02c54e58;
    }
    else {
LAB_02c54e58:
      uVar5 = 0;
      lVar7 = *DAT_043f23a0;
      uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
    }
    if (uVar8 <= uVar5) goto LAB_02c54eb4;
    piVar6 = *(int **)(lVar7 + uVar5 * 8);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x6d) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x36];
    break;
  case 2:
    uVar1 = *(uint *)(param_1 + 8);
    bVar3 = (uVar1 | 1) != 0x38b;
    uVar4 = 0;
    if ((int)uVar1 < 0x38a && bVar3) {
      uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar5 = (ulong)uVar4;
    if (uVar4 < 0x1c) {
      uVar8 = 0;
      if ((int)uVar1 < 0x38a && bVar3) {
        uVar8 = (ulong)uVar1;
      }
      lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
      uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
      if ((uVar8 <= uVar5) || (*(long *)(lVar7 + uVar5 * 8) == 0)) goto LAB_02c54cf0;
    }
    else {
LAB_02c54cf0:
      uVar5 = 0;
      lVar7 = *DAT_043f23a0;
      uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
    }
    if (uVar8 <= uVar5) goto LAB_02c54eb4;
    piVar6 = *(int **)(lVar7 + uVar5 * 8);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x6f) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x37];
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 8);
    bVar3 = (uVar1 | 1) != 0x38b;
    uVar4 = 0;
    if ((int)uVar1 < 0x38a && bVar3) {
      uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar5 = (ulong)uVar4;
    if (uVar4 < 0x1c) {
      uVar8 = 0;
      if ((int)uVar1 < 0x38a && bVar3) {
        uVar8 = (ulong)uVar1;
      }
      lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
      uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
      if ((uVar8 <= uVar5) || (*(long *)(lVar7 + uVar5 * 8) == 0)) goto LAB_02c54da4;
    }
    else {
LAB_02c54da4:
      uVar5 = 0;
      lVar7 = *DAT_043f23a0;
      uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
    }
    if (uVar8 <= uVar5) goto LAB_02c54eb4;
    piVar6 = *(int **)(lVar7 + uVar5 * 8);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x71) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x38];
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 8);
    bVar3 = (uVar1 | 1) != 0x38b;
    uVar4 = 0;
    if ((int)uVar1 < 0x38a && bVar3) {
      uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    }
    uVar5 = (ulong)uVar4;
    if (uVar4 < 0x1c) {
      uVar8 = 0;
      if ((int)uVar1 < 0x38a && bVar3) {
        uVar8 = (ulong)uVar1;
      }
      lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
      uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
      if ((uVar8 <= uVar5) || (*(long *)(lVar7 + uVar5 * 8) == 0)) goto LAB_02c54c3c;
    }
    else {
LAB_02c54c3c:
      uVar5 = 0;
      lVar7 = *DAT_043f23a0;
      uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
    }
    if (uVar8 <= uVar5) goto LAB_02c54eb4;
    piVar6 = *(int **)(lVar7 + uVar5 * 8);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x73) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x39];
    break;
  default:
    goto switchD_02c54b18_default;
  }
  if ((ulong)uVar2 != 0) {
    return *(undefined4 *)((long)piVar6 + (ulong)uVar2);
  }
switchD_02c54b18_default:
  return 0;
}


