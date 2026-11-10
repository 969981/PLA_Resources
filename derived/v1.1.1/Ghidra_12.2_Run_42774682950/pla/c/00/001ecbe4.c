/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ecbe4; name: FUN_001ecbe4
 */


undefined8 FUN_001ecbe4(undefined8 *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  uVar3 = plVar4[2];
  lVar1 = *plVar4;
  if (~param_3 < uVar3) {
    FUN_002044d4();
    *plVar4 = 0;
LAB_001ecc1c:
    FUN_002044d4(plVar4);
    *param_1 = 0;
    uVar2 = 0x1b;
  }
  else {
    if ((lVar1 == 0) || (plVar4[1] - 1U < uVar3 + param_3)) {
      lVar5 = -1;
      if (-1 < (long)(uVar3 | param_3)) {
        lVar5 = -1;
        if (uVar3 << 1 <= (param_3 << 1 ^ 0xffffffffffffffff)) {
          lVar5 = (uVar3 + param_3) * 2;
        }
      }
      if (lVar1 == 0) {
        lVar1 = FUN_002044c4(lVar5);
      }
      else {
        lVar1 = FUN_001f8d18(lVar1,lVar5);
      }
      if (lVar1 == 0) goto LAB_001ecc1c;
      uVar3 = plVar4[2];
      *plVar4 = lVar1;
      plVar4[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar3),param_2,param_3);
    uVar2 = 0;
    plVar4[2] = plVar4[2] + param_3;
  }
  return uVar2;
}


