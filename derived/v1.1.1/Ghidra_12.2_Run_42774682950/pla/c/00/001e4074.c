/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e4074; name: FUN_001e4074
 */


undefined8 FUN_001e4074(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) != param_2) {
        FUN_001f86a8();
        uVar2 = *(uint *)(param_1 + 0x80);
      }
      uVar2 = uVar2 & 0xfffffffe;
      *(uint *)(param_1 + 0x80) = uVar2;
    }
    uVar1 = 0;
    *(long *)(param_1 + 0x58) = param_2;
    if ((param_2 != 0) && (param_3 != 0)) {
      uVar1 = 0;
      *(uint *)(param_1 + 0x80) = uVar2 | 1;
    }
  }
  return uVar1;
}


