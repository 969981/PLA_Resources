/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e788d0; name: FUN_02e788d0
 */


undefined8 FUN_02e788d0(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xe;
  }
  else {
    plVar2 = (long *)FUN_02e786d8(DAT_0440a120 + 0x2a0,param_1);
    if (plVar2 != (long *)0x0) {
      uVar1 = *(uint *)(plVar2 + 6);
      (**(code **)(*plVar2 + 0x18))();
      uVar3 = FUN_02e78760(uVar1 >> 4 & 0xfff,uVar1 >> 0x10,param_2,param_3);
      return uVar3;
    }
    uVar3 = 0xf;
  }
  return uVar3;
}


