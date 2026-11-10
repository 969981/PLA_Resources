/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154b00; name: FUN_00154b00
 */


undefined8 FUN_00154b00(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_24;
  
  uVar4 = param_2 & 0xffffffff;
  uVar2 = FUN_00150ba0(param_1,param_2,&local_24);
  if (local_24 == 0) {
    iVar1 = FUN_001505a0(param_1,uVar4);
    if (iVar1 == 0) {
      uVar3 = FUN_001503f0(param_1,3);
      FUN_00154670(param_1,uVar4,uVar3);
    }
    else {
      FUN_00154010(param_1,uVar4,"number has no integer representation");
    }
  }
  return uVar2;
}


