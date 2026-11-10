/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dde6dc; name: FUN_00dde6dc
 */


undefined8
FUN_00dde6dc(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = FUN_00153520(param_2,param_3);
  if (param_3 < ((ulong)(uint)-(int)lVar1 & 7 | 8)) {
    *param_4 = 0;
  }
  else {
    uVar2 = (ulong)(uint)-(int)lVar1 & 7;
    lVar1 = lVar1 + uVar2;
    *param_4 = lVar1;
    if (lVar1 != 0) {
      uVar3 = (ulong)(uint)-(int)(lVar1 + 8);
      if ((uVar3 & 7 | 0x18) <= (param_3 - uVar2) - 8) {
        *param_5 = lVar1 + 8 + (uVar3 & 7);
        return 1;
      }
      *param_5 = 0;
    }
  }
  FUN_0014ff10(param_2,0xfffffffe);
  return 0;
}


