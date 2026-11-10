/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328a4fc; name: FUN_0328a4fc
 */


void FUN_0328a4fc(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  
  if (0 < param_3) {
    plVar1 = (long *)(param_1 + (long)param_3 * 0x18);
    lVar2 = (long)param_3;
    do {
      plVar1 = plVar1 + -3;
      lVar2 = lVar2 + -1;
      (**(code **)(*plVar1 + 8))(plVar1);
    } while (0 < lVar2);
  }
  return;
}


