/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0100; name: FUN_001e0100
 */


undefined8 FUN_001e0100(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_002044c4(0x38);
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_002044f4(param_3);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_1 == 2) {
        *(undefined4 *)(plVar1 + 4) = *param_2;
        plVar1[2] = 0x400000002;
        *plVar1 = lVar2;
        plVar1[1] = 0;
        plVar1[5] = (long)(plVar1 + 4);
        plVar1[6] = 0;
        plVar1[3] = (long)(plVar1 + 5);
        uVar3 = FUN_001dffe8(plVar1,param_4);
      }
      else {
        uVar3 = 0;
      }
      FUN_002044d4(lVar2);
    }
    FUN_002044d4(plVar1);
  }
  return uVar3;
}


