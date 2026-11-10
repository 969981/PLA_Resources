/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c414; name: FUN_02e7c414
 */


void FUN_02e7c414(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_042a7230;
  if (param_1[0xd] == 0) {
LAB_02e7c468:
    if (param_1[0xb] != 0) {
      FUN_02e7a0dc(param_1[0xb],param_1);
    }
    FUN_02e7c0f0(param_1);
    return;
  }
  lVar1 = *(long *)(param_1[0xd] + 8);
  if (lVar1 == 0) goto LAB_02e7c460;
  do {
    param_1[0xd] = lVar1;
    while( true ) {
      FUN_02f59e60(0);
      if (param_1[0xd] == 0) goto LAB_02e7c468;
      lVar1 = *(long *)(param_1[0xd] + 8);
      if (lVar1 != 0) break;
LAB_02e7c460:
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
  } while( true );
}


