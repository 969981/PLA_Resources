/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ead624; name: FUN_02ead624
 */


undefined8
FUN_02ead624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  long *plVar1;
  long lVar2;
  
  for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
    if ((*(short *)(lVar2 + 0x34) == 0x403) &&
       (plVar1 = (long *)FUN_02e8766c(lVar2), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x80))(plVar1,param_2,param_3,param_4,1,param_5,param_6,param_7);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return 1;
}


