/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e46ab0; name: FUN_02e46ab0
 */


void FUN_02e46ab0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0x3f;
  param_1[0x340] = 0;
  *(undefined4 *)(param_1 + 0x341) = 0;
  param_1[0x342] = 0;
  plVar2 = param_1;
  do {
    param_1[0x342] = (long)plVar2;
    *plVar2 = 0;
    while( true ) {
      *(int *)(param_1 + 0x341) = (int)param_1[0x341] + 1;
      if (lVar1 == 0) {
        return;
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 0xd;
      if (param_1[0x342] == 0) break;
      *plVar2 = param_1[0x342];
      param_1[0x342] = (long)plVar2;
    }
  } while( true );
}


