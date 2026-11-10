/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71390; name: FUN_02e71390
 */


void FUN_02e71390(uint param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = (ulong)param_1;
    do {
      uVar2 = 1;
      if (*param_3 != 1) {
        uVar2 = 2;
      }
      FUN_02e713e4(*(undefined8 *)(*param_2 + 0x20),uVar2);
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


