/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5dee0; name: FUN_02c5dee0
 */


uint FUN_02c5dee0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_02c5df78();
  if (((int)param_2 < 6) &&
     (uVar2 = FUN_02c8b05c(*(undefined8 *)(param_1 + 0x98)),
     (uVar2 & 1 << (ulong)(param_2 & 0x1f) & 0xff) != 0)) {
    uVar4 = 3;
  }
  else {
    uVar3 = FUN_02c5db4c(param_1,param_2);
    uVar2 = 2;
    if (uVar3 < 0x1a) {
      uVar2 = (uint)(0x13 < uVar3);
    }
    uVar4 = 3;
    if (uVar3 < 0x1f) {
      uVar4 = uVar2;
    }
  }
  uVar4 = iVar1 + uVar4;
  if (9 < uVar4) {
    uVar4 = 10;
  }
  return uVar4;
}


