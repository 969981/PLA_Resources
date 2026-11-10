/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5d1b4; name: FUN_02e5d1b4
 */


void FUN_02e5d1b4(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_02e45f34(param_2,*param_1);
  *param_3 = lVar1;
  lVar1 = FUN_02e45f34(param_2,param_1[1]);
  *param_4 = lVar1;
  if ((lVar1 != 0) && (*param_3 != 0)) {
    uVar2 = FUN_02e54614(*param_3,lVar1);
    *param_5 = uVar2;
  }
  return;
}


