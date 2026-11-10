/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c525c0; name: FUN_02c525c0
 */


undefined4 FUN_02c525c0(uint param_1,ushort param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  if (((int)param_1 < 0x38a) && (param_2 < 0x1c)) {
    lVar2 = *(&DAT_04400660)[(ulong)param_1 * 4];
    uVar4 = (&DAT_04400660)[(ulong)param_1 * 4][1] - lVar2 >> 3;
    if ((param_2 < uVar4) && (*(long *)(lVar2 + (ulong)param_2 * 8) != 0)) goto LAB_02c52628;
  }
  param_2 = 0;
  lVar2 = *DAT_04400660;
  uVar4 = DAT_04400660[1] - lVar2 >> 3;
LAB_02c52628:
  if (uVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar3 = *(int **)(lVar2 + (ulong)param_2 * 8);
  puVar1 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (10 - (long)*piVar3)));
  return *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
}


