/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fcddc; name: FUN_001fcddc
 */


undefined8 FUN_001fcddc(long param_1,long *param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if ((param_2[0x98] + param_2[0x9c] == 0) || ((param_3 & 1) != 0)) {
      if (param_2[0xd] != 0) {
        FUN_001e181c(param_1);
        param_2[0xd] = 0;
      }
      FUN_001e11bc(param_1);
      *param_2 = param_1;
      if (*(code **)(param_2[0x84] + 0x60) != (code *)0x0) {
        (**(code **)(param_2[0x84] + 0x60))(param_2,param_3 & 1);
        param_1 = *param_2;
      }
      FUN_001f3934(param_1,"Closing connection %ld\n",param_2[0xc]);
      FUN_001df85c(param_2);
      thunk_FUN_00204da4(param_2,0);
      thunk_FUN_00204da4(param_2,1);
      if (*(int *)((long)param_2 + 0x25c) != -1) {
        FUN_001de484(param_2);
      }
      if ((int)param_2[0x4b] != -1) {
        FUN_001de484(param_2);
      }
      if ((int)param_2[0x4c] != -1) {
        FUN_001de484(param_2);
      }
      if (*(int *)((long)param_2 + 0x264) != -1) {
        FUN_001de484(param_2);
      }
      FUN_001df280(*param_2,param_2,1);
      FUN_001fcf00(param_2);
    }
  }
  return 0;
}


