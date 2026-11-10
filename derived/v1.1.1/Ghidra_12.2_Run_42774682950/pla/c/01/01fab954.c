/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fab954; name: FUN_01fab954
 */


undefined8 FUN_01fab954(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    lVar2 = FUN_01c18ecc();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        return 1;
      }
    }
  }
  return 0;
}


