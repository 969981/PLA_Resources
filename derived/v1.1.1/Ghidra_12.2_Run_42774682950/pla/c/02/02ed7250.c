/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed7250; name: FUN_02ed7250
 */


void FUN_02ed7250(long *param_1,ulong param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)((long)&DAT_0440a800 + (param_2 & 0xffffffff) * 4);
  pbVar1 = (byte *)param_1[0x13];
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if ((uint)pbVar1[uVar3 + 1] == ((uint)param_2 & 0xff)) goto LAB_02ed72b0;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_02ed72b0:
  pbVar1 = (byte *)&local_14;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  if (*(int *)pbVar1 == param_3) {
    return;
  }
  FUN_02ea0744(param_1 + 0x13,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x02ed72f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,0,0);
  return;
}


