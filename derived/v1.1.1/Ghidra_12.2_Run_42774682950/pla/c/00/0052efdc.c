/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052efdc; name: FUN_0052efdc
 */


void FUN_0052efdc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long local_40 [4];
  
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[4];
    if (plVar1 == param_1) {
      if ((long *)param_2[4] == param_2) {
                    /* try { // try from 0052f0a8 to 0052f0af has its CatchHandler @ 0052f128 */
        (**(code **)(*plVar1 + 0x18))(plVar1,local_40);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 0052f0d0 to 0052f0d7 has its CatchHandler @ 0052f128 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 0052f0f8 to 0052f103 has its CatchHandler @ 0052f128 */
        (**(code **)(local_40[0] + 0x18))(local_40,param_2);
        (**(code **)(local_40[0] + 0x20))(local_40);
      }
      else {
                    /* try { // try from 0052f03c to 0052f043 has its CatchHandler @ 0052f12c */
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
      return;
    }
    plVar2 = (long *)param_2[4];
    if (param_2 == plVar2) {
                    /* try { // try from 0052f068 to 0052f073 has its CatchHandler @ 0052f12c */
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      (**(code **)(*(long *)param_2[4] + 0x20))();
      param_2[4] = param_1[4];
      param_1[4] = (long)param_1;
      return;
    }
    param_1[4] = (long)plVar2;
    param_2[4] = (long)plVar1;
  }
  return;
}


