/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269d700; name: FUN_0269d700
 */


long * FUN_0269d700(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        (*(code *)**(undefined8 **)(*param_1 + 8))();
        uVar1 = FUN_0269d75c();
        if ((uVar1 & 1) != 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


