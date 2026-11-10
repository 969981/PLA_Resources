/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5fce4; name: FUN_02c5fce4
 */


void FUN_02c5fce4(long param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort uVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar6 = FUN_02c6849c();
    uVar7 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar8 = 1;
    do {
      uVar5 = FUN_02c524b0(uVar6,uVar7,uVar8);
      if (uVar4 < uVar5) break;
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < 0x65);
    uVar4 = uVar8 - 1;
    if ((uVar8 & 0xff) < 2) {
      uVar4 = 1;
    }
    uVar4 = uVar4 & 0xff;
  }
  else {
    uVar4 = FUN_02c68174();
  }
  uVar8 = uVar4 + (param_2 & 0xff);
  if (99 < uVar8) {
    uVar8 = 100;
  }
  if (uVar8 == uVar4) {
    return;
  }
  uVar6 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar7 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  uVar8 = FUN_02c524b0(uVar6,uVar7,uVar8);
  uVar4 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar2 = (uVar4 | 1) != 0x38b;
  uVar9 = 0;
  if ((int)uVar4 < 0x38a && bVar2) {
    uVar9 = uVar3;
  }
  if (uVar9 < 0x1c) {
    uVar12 = 0;
    if ((int)uVar4 < 0x38a && bVar2) {
      uVar12 = (ulong)uVar4;
    }
    lVar11 = *(&DAT_043f23a0)[uVar12 * 4];
    uVar12 = (&DAT_043f23a0)[uVar12 * 4][1] - lVar11 >> 3;
    if ((uVar9 < uVar12) && (*(long *)(lVar11 + (ulong)uVar9 * 8) != 0)) goto LAB_02c5fe5c;
  }
  uVar9 = 0;
  lVar11 = *DAT_043f23a0;
  uVar12 = DAT_043f23a0[1] - lVar11 >> 3;
LAB_02c5fe5c:
  if (uVar12 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar10 = *(int **)(lVar11 + (ulong)uVar9 * 8);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x23) ||
     (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x11], uVar12 == 0)) {
    uVar12 = 0;
  }
  else {
    bVar1 = *(byte *)((long)piVar10 + uVar12);
    uVar4 = 0;
    if (bVar1 < 6) {
      uVar4 = (uint)bVar1;
    }
    uVar12 = (ulong)uVar4;
  }
  uVar4 = *(uint *)(*(long *)((&DAT_0428ab10)[uVar12 * 6] + 0x250) + 400);
  if (uVar8 <= uVar4) {
    uVar4 = uVar8;
  }
  FUN_02c7a584(*(undefined8 *)(param_1 + 0x98),uVar4);
  FUN_02c5bb1c(param_1,0);
  return;
}


