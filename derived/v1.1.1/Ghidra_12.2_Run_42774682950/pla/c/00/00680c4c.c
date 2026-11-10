/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00680c4c; name: FUN_00680c4c
 */


void FUN_00680c4c(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[3] = plVar1;
  if (param_3 != 0) {
    if (param_3 >> 0x3d != 0) {
                    /* try { // try from 00680ce0 to 00680ce7 has its CatchHandler @ 00680ce8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_3 * 8;
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,lVar3,8);
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + param_3;
    do {
      *puVar2 = 0;
      FUN_00680b78(puVar2,param_2);
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -8;
      puVar2 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = puVar2;
    } while (lVar3 != 0);
  }
  return;
}


