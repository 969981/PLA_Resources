/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239828; name: FUN_01239828
 */


void FUN_01239828(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1[4];
  if (0x7ffffffffffffffe < uVar2) {
    uVar2 = 0x7fffffffffffffff;
  }
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x50,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  param_1[2] = lVar1 + param_2 * 0x50;
  *param_1 = lVar1;
  param_1[1] = lVar1;
  return;
}


