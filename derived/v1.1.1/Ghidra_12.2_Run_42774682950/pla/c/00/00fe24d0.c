/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe24d0; name: FUN_00fe24d0
 */


undefined8 FUN_00fe24d0(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = FUN_00153520();
  if (param_2 < ((ulong)(uint)-(int)lVar1 & 7 | 8)) {
    *param_3 = 0;
  }
  else {
    uVar2 = (ulong)(uint)-(int)lVar1 & 7;
    lVar1 = lVar1 + uVar2;
    *param_3 = lVar1;
    if (lVar1 != 0) {
      uVar3 = (ulong)(uint)-(int)(lVar1 + 8);
      if ((uVar3 & 0xf | 0x420) <= (param_2 - uVar2) - 8) {
        *param_4 = lVar1 + 8 + (uVar3 & 0xf);
        return 1;
      }
      *param_4 = 0;
    }
  }
  FUN_0014ff10(param_1,0xfffffffe);
  return 0;
}


