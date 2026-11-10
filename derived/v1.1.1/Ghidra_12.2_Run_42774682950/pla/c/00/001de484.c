/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001de484; name: FUN_001de484
 */


undefined4 FUN_001de484(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[10] != 0) {
      if ((*(int *)((long)param_1 + 0x25c) != param_2) || (*(char *)((long)param_1 + 0x269) == '\0')
         ) {
        FUN_001e8f70(*param_1,param_2);
        FUN_001e95f0(*param_1,1);
        uVar1 = (*(code *)param_1[10])(param_1[0xb],param_2);
        FUN_001e95f0(*param_1,0);
        return uVar1;
      }
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    }
    FUN_001e8f70(*param_1,param_2);
  }
  nnsocketClose(param_2);
  return 0;
}


