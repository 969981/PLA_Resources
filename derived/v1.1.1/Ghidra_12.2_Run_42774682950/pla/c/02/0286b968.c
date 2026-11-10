/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286b968; name: FUN_0286b968
 */


void FUN_0286b968(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(lVar3 + 0xd8) = *param_2;
  *(undefined8 *)(lVar3 + 0xe0) = param_2[1];
  *(undefined8 *)(lVar3 + 0xe8) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(lVar3 + 0xf0);
  *(long **)(lVar3 + 0xf0) = plVar2;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0286b9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


