/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c625a0; name: FUN_02c625a0
 */


undefined8 FUN_02c625a0(long param_1,int *param_2)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  ushort uVar7;
  int *piVar8;
  long lVar9;
  
  uVar3 = FUN_02c74104(*(undefined8 *)(param_1 + 0x98));
  if (((uVar3 == *(byte *)(param_2 + 1)) &&
      (iVar4 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98)), iVar4 == *param_2)) &&
     (uVar5 = FUN_02c76158(*(undefined8 *)(param_1 + 0x98),(long)param_2 + 6), (uVar5 & 1) != 0)) {
    FUN_02c83ecc(*(undefined8 *)(param_1 + 0x98),0);
    return 1;
  }
  FUN_02c83ecc(*(undefined8 *)(param_1 + 0x98),1);
  FUN_02c8626c(*(undefined8 *)(param_1 + 0x98),(long)param_2 + 6);
  FUN_02c866cc(*(undefined8 *)(param_1 + 0x98),(char)param_2[1]);
  FUN_02c86a0c(*(undefined8 *)(param_1 + 0x98),*(undefined1 *)((long)param_2 + 5));
  FUN_02c8556c(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02c858ac(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02c85bec(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02c85f2c(*(undefined8 *)(param_1 + 0x98),0);
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar1 = (uVar3 | 1) != 0x38b;
  uVar7 = 0;
  if ((int)uVar3 < 0x38a && bVar1) {
    uVar7 = uVar2;
  }
  if (uVar7 < 0x1c) {
    uVar5 = 0;
    if ((int)uVar3 < 0x38a && bVar1) {
      uVar5 = (ulong)uVar3;
    }
    lVar9 = *(&DAT_043f23a0)[uVar5 * 4];
    uVar5 = (&DAT_043f23a0)[uVar5 * 4][1] - lVar9 >> 3;
    if ((uVar7 < uVar5) && (*(long *)(lVar9 + (ulong)uVar7 * 8) != 0)) goto LAB_02c626f4;
  }
  uVar7 = 0;
  lVar9 = *DAT_043f23a0;
  uVar5 = DAT_043f23a0[1] - lVar9 >> 3;
LAB_02c626f4:
  if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar8 = *(int **)(lVar9 + (ulong)uVar7 * 8);
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x65) ||
     (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x32], uVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined1 *)((long)piVar8 + uVar5);
  }
  FUN_02c8454c(*(undefined8 *)(param_1 + 0x98),uVar6);
  return 0;
}


