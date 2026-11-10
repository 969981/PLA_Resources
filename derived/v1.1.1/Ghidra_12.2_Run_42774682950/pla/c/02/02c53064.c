/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c53064; name: FUN_02c53064
 */


undefined8 FUN_02c53064(uint param_1,ushort param_2)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  bVar1 = (param_1 | 1) != 0x38b;
  uVar2 = 0;
  if ((int)param_1 < 0x38a && bVar1) {
    uVar2 = param_2;
  }
  if (uVar2 < 0x1c) {
    uVar4 = 0;
    if ((int)param_1 < 0x38a && bVar1) {
      uVar4 = (ulong)param_1;
    }
    lVar3 = *(&DAT_043f23a0)[uVar4 * 4];
    uVar4 = (&DAT_043f23a0)[uVar4 * 4][1] - lVar3 >> 3;
    if ((uVar2 < uVar4) && (*(long *)(lVar3 + (ulong)uVar2 * 8) != 0)) goto LAB_02c530ec;
  }
  uVar2 = 0;
  lVar3 = *DAT_043f23a0;
  uVar4 = DAT_043f23a0[1] - lVar3 >> 3;
LAB_02c530ec:
  if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined8 *)(lVar3 + (ulong)uVar2 * 8);
}


