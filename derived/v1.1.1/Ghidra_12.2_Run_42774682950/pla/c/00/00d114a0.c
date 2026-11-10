/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d114a0; name: FUN_00d114a0
 */


long * FUN_00d114a0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    do {
      lVar3 = *param_1;
      if (lVar3 != 0) {
        plVar1 = (long *)(*(code *)**(undefined8 **)(lVar3 + 8))((undefined8 *)(lVar3 + 8));
        lVar2 = FUN_009b19b4();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            if (*(long *)(lVar3 + 0x1a8) != 0) {
              return param_1;
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


