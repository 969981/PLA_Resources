/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5fee8; name: FUN_02c5fee8
 */


void FUN_02c5fee8(long param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar2 = (uVar4 | 1) != 0x38b;
  uVar5 = 0;
  if ((int)uVar4 < 0x38a && bVar2) {
    uVar5 = uVar3;
  }
  if (uVar5 < 0x1c) {
    uVar8 = 0;
    if ((int)uVar4 < 0x38a && bVar2) {
      uVar8 = (ulong)uVar4;
    }
    lVar7 = *(&DAT_043f23a0)[uVar8 * 4];
    uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar7 >> 3;
    if ((uVar5 < uVar8) && (*(long *)(lVar7 + (ulong)uVar5 * 8) != 0)) goto LAB_02c5ff94;
  }
  uVar5 = 0;
  lVar7 = *DAT_043f23a0;
  uVar8 = DAT_043f23a0[1] - lVar7 >> 3;
LAB_02c5ff94:
  if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar6 = *(int **)(lVar7 + (ulong)uVar5 * 8);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0x23) ||
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x11], uVar8 == 0)) {
    uVar8 = 0;
  }
  else {
    bVar1 = *(byte *)((long)piVar6 + uVar8);
    uVar4 = 0;
    if (bVar1 < 6) {
      uVar4 = (uint)bVar1;
    }
    uVar8 = (ulong)uVar4;
  }
  uVar4 = *(uint *)(*(long *)((&DAT_0428ab10)[uVar8 * 6] + 0x250) + 400);
  if (param_2 <= uVar4) {
    uVar4 = param_2;
  }
  FUN_02c7a584(*(undefined8 *)(param_1 + 0x98),uVar4);
  FUN_02c5bb1c(param_1,0);
  return;
}


