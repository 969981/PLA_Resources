/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c0770; name: FUN_004c0770
 */


undefined8 FUN_004c0770(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_004230e0();
    iVar1 = FUN_00423920(uVar2,param_1);
    if (0 < iVar1) {
      return uVar2;
    }
    FUN_00423420(uVar2);
  }
  return 0;
}


