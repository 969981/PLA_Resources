/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03320a10; name: FUN_03320a10
 */


int FUN_03320a10(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  if (DAT_0444b100 != (long *)0x0) {
    (**(code **)(*DAT_0444b100 + 0x20))(DAT_0444b100,param_1,param_2,param_3,param_4,param_5);
  }
  if (DAT_0444b0d0 == (long *)0x0) {
    FUN_032cfe70("ASSERT before the base system was set up:\n",0);
    FUN_032cfe70(param_3,0);
    FUN_032cfe70(&DAT_0396725e,0);
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(*DAT_0444b0d0 + 0x20))
                      (DAT_0444b0d0,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      FUN_033276f0();
    }
  }
  return iVar1;
}


