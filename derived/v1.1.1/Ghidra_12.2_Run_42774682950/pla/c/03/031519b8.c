/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031519b8; name: FUN_031519b8
 */


void FUN_031519b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x38d490) == 0) {
    lVar1 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar1;
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar2 + 0x38d490) + 0x10);
  }
  if (lVar1 != 0) {
    FUN_032d5af0(lVar1,"TtApplyVehicleForces",0x14);
  }
  (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
            (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,param_2 + 0x10,0);
  if (*(long *)(lVar2 + 0x38d490) == 0) {
    lVar1 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar1;
    lVar2 = *(long *)(lVar1 + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38d490) + 0x10);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_032d5b34(lVar2,&DAT_0390f40e);
  return;
}


