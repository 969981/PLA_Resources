/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203fe4; name: FUN_00203fe4
 */


undefined8 FUN_00203fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_002026d0(PTR_PTR_043727b8);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar1 = FUN_00204358(param_2);
    FUN_0020272c(lVar2,param_1,uVar1);
    FUN_0020274c(lVar2,param_3);
    uVar3 = 0;
  }
  return uVar3;
}


