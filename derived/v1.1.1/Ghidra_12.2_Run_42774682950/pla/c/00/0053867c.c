/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053867c; name: FUN_0053867c
 */


void FUN_0053867c(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  FUN_002ef750(param_1 + 0x20);
                    /* try { // try from 005386b4 to 005386c7 has its CatchHandler @ 005387a4 */
  lVar1 = (**(code **)(*(long *)*param_4 + 0x18))();
  if (lVar1 != 0) {
    FUN_002fe0c0(*(undefined8 *)(param_1 + 0x18));
  }
  pvVar2 = (void *)*param_3;
  if (pvVar2 == (void *)0x0) {
    if (*(int *)(param_1 + 0xbc) != param_2) {
                    /* try { // try from 0053872c to 00538737 has its CatchHandler @ 00538774 */
      local_38 = param_1;
      FUN_0053b230(param_4,&local_38);
    }
    local_40 = *param_4;
    *param_4 = 0;
    FUN_00536558(param_1 + 0xc0,&local_40);
    FUN_005318f8(&local_40);
  }
  else {
    *param_3 = 0;
    local_50 = *param_4;
    *param_4 = 0;
                    /* try { // try from 005386e8 to 005386fb has its CatchHandler @ 0053877c */
    local_48 = pvVar2;
    FUN_00536668(param_1 + 0xd8,param_1,param_2,&local_48,&local_50);
    FUN_005318f8(&local_50);
    pvVar2 = local_48;
    local_48 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
                    /* try { // try from 00538710 to 00538713 has its CatchHandler @ 00538778 */
      free(pvVar2);
    }
  }
                    /* try { // try from 00538758 to 0053875f has its CatchHandler @ 005387a0 */
  FUN_002ef790(param_1 + 0x20);
  return;
}


