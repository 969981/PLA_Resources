/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423050; name: FUN_00423050
 */


undefined8 FUN_00423050(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  lVar2 = *(long *)(param_1 + 4);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x90) != (code *)0x0) {
      uVar1 = (**(code **)(lVar2 + 0x90))(param_1,param_2);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      lVar2 = *(long *)(param_1 + 4);
    }
    if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004230b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(lVar2 + 0x30))(param_1,param_2);
      return uVar1;
    }
  }
  return 0xfffffffe;
}


