/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e2f18; name: FUN_001e2f18
 */


undefined8 FUN_001e2f18(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[2] = param_3 + 1;
    lVar2 = FUN_002044c4();
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 5;
    }
  }
  else {
    uVar1 = param_3 + param_1[2] + 1;
    if ((ulong)param_1[2] < uVar1) {
      param_1[2] = uVar1;
      lVar2 = FUN_002044e4();
      if (lVar2 == 0) {
        FUN_002044d4(param_1[1]);
        return 5;
      }
      param_1[1] = lVar2;
    }
  }
  memcpy((void *)(lVar2 + *param_1),param_2,param_3);
  lVar2 = *param_1;
  *param_1 = lVar2 + param_3;
  *(undefined1 *)(param_1[1] + lVar2 + param_3) = 0;
  return 0;
}


