/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06f60; name: FUN_02f06f60
 */


void FUN_02f06f60(long param_1,int param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (param_3 == 0) {
      do {
        if ((int)plVar1[2] == 0 || (int)plVar1[2] == param_2) {
          (*(code *)**(undefined8 **)plVar1[1])((undefined8 *)plVar1[1],param_2);
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
    else {
      do {
        if (((int)plVar1[2] == 0 || (int)plVar1[2] == param_2) && (plVar1[3] == param_3)) {
          (*(code *)**(undefined8 **)plVar1[1])((undefined8 *)plVar1[1],param_2);
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
  return;
}


