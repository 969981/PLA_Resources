/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033262c0; name: FUN_033262c0
 */


long * FUN_033262c0(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_032c7c38(param_1 + 5,param_2);
  }
  else {
    iVar2 = FUN_032c4900(param_2);
    iVar1 = *(int *)((long)param_1 + 0xc) + -1;
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    FUN_032c4a00(*param_1,param_2,iVar2);
    *(undefined1 *)(*param_1 + (long)iVar2) = 0;
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_1;
}


