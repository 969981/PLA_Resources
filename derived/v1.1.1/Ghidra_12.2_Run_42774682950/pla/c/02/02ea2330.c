/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea2330; name: FUN_02ea2330
 */


void FUN_02ea2330(long param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_48;
  ulong uStack_40;
  float local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined1 local_22;
  
  plVar1 = (long *)0x0;
  if (param_5 == 0) {
    plVar1 = (long *)(param_1 + 0x120);
  }
  plVar3 = (long *)(param_1 + 0x148);
  if (param_5 != 5) {
    plVar3 = plVar1;
  }
  plVar3 = (long *)*plVar3;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar3 + 1) == param_2) break;
    plVar3 = (long *)*plVar3;
  }
  *(undefined1 *)((long)plVar3 + 0x2c) = 1;
  if (plVar3[4] != 0) {
    FUN_02f0f0a8(0,DAT_0440a150,plVar3[4],param_5,param_3,param_4,0);
    return;
  }
  local_48 = plVar3 + 2;
  if ((param_3 == 0) || (local_38 = *(float *)(plVar3 + 5), local_38 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x02ea2408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*local_48)(0,local_48,param_5,1);
    return;
  }
  uStack_40 = (ulong)param_5;
  uStack_28 = 0xd;
  local_24 = 0x101;
  local_34 = 0;
  local_22 = 0;
  iStack_30 = param_3;
  local_2c = param_4;
  uVar2 = FUN_02f0ed58(DAT_0440a150,&local_48,1,0);
  plVar3[4] = uVar2;
  return;
}


