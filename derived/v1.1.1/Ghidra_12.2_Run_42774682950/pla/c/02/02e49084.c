/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49084; name: FUN_02e49084
 */


undefined8
FUN_02e49084(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_02e4924c(param_1,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)FUN_02e49324(param_1 + 0x10);
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      *plVar2 = param_2;
      uVar3 = 1;
      *(long *)(param_2 + 0x38) = param_1;
    }
  }
  return uVar3;
}


