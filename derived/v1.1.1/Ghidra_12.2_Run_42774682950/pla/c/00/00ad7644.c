/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad7644; name: FUN_00ad7644
 */


void FUN_00ad7644(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar1 != plVar2) {
    lVar5 = *param_1;
    lVar4 = *plVar1;
    while( true ) {
      if ((lVar4 != 0) && (uVar3 = FUN_00ad7820(lVar4 + 8), (uVar3 & 1) != 0)) {
        (**(code **)(*(long *)*plVar1 + 0x70))();
        *(undefined1 *)(lVar5 + 0x123) = 1;
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar4 = *plVar1;
    }
  }
  return;
}


