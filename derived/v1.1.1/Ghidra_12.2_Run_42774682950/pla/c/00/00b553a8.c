/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b553a8; name: FUN_00b553a8
 */


void FUN_00b553a8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  lVar1 = *(long *)PTR_DAT_0437acf0;
  *(long **)(lVar1 + 0x30) = plVar2;
  *(undefined8 *)(lVar1 + 0x40) = 0x3200000;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x3200000,0x10);
  *(long **)(lVar1 + 0x38) = plVar2;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b55444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x30) + 0xb8))();
    return;
  }
  FUN_02bc5450(plVar2,plVar2 + 10,0x31fffb0);
  *(long **)(lVar1 + 0x28) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00b5542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,&DAT_038e8257);
  return;
}


