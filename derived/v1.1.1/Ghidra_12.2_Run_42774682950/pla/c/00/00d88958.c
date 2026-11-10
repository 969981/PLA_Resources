/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d88958; name: FUN_00d88958
 */


void FUN_00d88958(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = param_2 + (lVar3 - param_4);
  if (uVar2 < param_3) {
    FUN_00d87ee0(param_1 + 0x18,lVar3,uVar2);
    uVar4 = uVar2;
    while( true ) {
      uVar4 = uVar4 + 0x20;
      lVar1 = *(long *)(param_1 + 8) + 0x20;
      *(long *)(param_1 + 8) = lVar1;
      if (param_3 <= uVar4) break;
      FUN_00d87ee0(param_1 + 0x18,lVar1,uVar4);
    }
  }
  FUN_00d88cc0(param_2,uVar2,lVar3);
  return;
}


