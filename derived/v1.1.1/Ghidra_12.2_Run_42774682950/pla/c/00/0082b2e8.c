/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b2e8; name: FUN_0082b2e8
 */


void FUN_0082b2e8(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_007e4e20();
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1b0))(plVar2,param_2);
    }
    local_30 = 0x2000000000000000;
    local_28 = 0;
    FUN_007eb2a4(PTR_DAT_043773b8,&local_30);
    uVar3 = FUN_007e4e20();
    FUN_007e4f20(uVar3,param_2 & 0xff);
  }
  return;
}


