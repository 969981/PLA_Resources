/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f460; name: FUN_0147f460
 */


undefined1  [16] FUN_0147f460(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_40;
  long lStack_38;
  
  local_40 = param_3;
  lStack_38 = param_4;
  if (param_1 != param_2) {
    while( true ) {
      lVar1 = (*local_40 - lStack_38) + 0xfd0;
      lVar3 = (param_2 - param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
      lVar2 = (lVar1 >> 3) * 0x2e8ba2e8ba2e8ba3;
      lVar1 = param_1 + lVar1;
      if (lVar3 <= lVar2) {
        lVar2 = lVar3;
        lVar1 = param_2;
      }
      FUN_0147f510(param_1,lVar1,lStack_38);
      FUN_0147f114(&local_40,lVar2);
      if (lVar1 == param_2) break;
      param_1 = lVar1;
    }
    param_3 = local_40;
    param_4 = lStack_38;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_3;
  return auVar4;
}


