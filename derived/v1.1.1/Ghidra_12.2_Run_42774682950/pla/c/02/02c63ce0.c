/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c63ce0; name: FUN_02c63ce0
 */


undefined1 FUN_02c63ce0(long param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  iVar4 = FUN_02c69538(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 == 0x305) && (iVar4 == 0xe1)) {
    iVar4 = FUN_02c687d4();
    if (iVar4 - 0x388U < 0x11) {
      return (&DAT_03a85242)[*(long *)(&DAT_03a84d38 + (long)(int)(iVar4 - 0x388U) * 8) * 4];
    }
    return 0;
  }
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar1 = (uVar3 | 1) != 0x38b;
  uVar5 = 0;
  if ((int)uVar3 < 0x38a && bVar1) {
    uVar5 = uVar2;
  }
  if (uVar5 < 0x1c) {
    uVar8 = 0;
    if ((int)uVar3 < 0x38a && bVar1) {
      uVar8 = (ulong)uVar3;
    }
    lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
    uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
    if ((uVar5 < uVar8) && (*(long *)(lVar7 + (ulong)uVar5 * 8) != 0)) goto LAB_02c63dd0;
  }
  uVar5 = 0;
  lVar7 = *DAT_043f23a0;
  uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
LAB_02c63dd0:
  if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar6 = *(int **)(lVar7 + (ulong)uVar5 * 8);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0xd) ||
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[6], uVar8 == 0)) {
    return 0;
  }
  return *(undefined1 *)((long)piVar6 + uVar8);
}


