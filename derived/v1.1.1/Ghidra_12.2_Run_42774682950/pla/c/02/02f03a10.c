/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f03a10; name: FUN_02f03a10
 */


undefined8 FUN_02f03a10(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1[2] == param_3) {
    param_1[2] = param_2;
    bVar1 = *(byte *)((long)param_1 + 0x42);
  }
  else {
    bVar1 = *(byte *)((long)param_1 + 0x42);
  }
  if ((((bVar1 >> 1 & 1) == 0) && ((bVar1 & 0xc0) != 0x40)) ||
     (param_1[3] = (param_1[3] + param_2) - param_3, (bVar1 >> 1 & 1) == 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x02f03a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*DAT_0440a098 + 0x68))(DAT_0440a098,*param_1,param_2);
  return uVar2;
}


