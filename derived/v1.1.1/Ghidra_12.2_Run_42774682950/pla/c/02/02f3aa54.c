/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3aa54; name: FUN_02f3aa54
 */


void FUN_02f3aa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  float local_34;
  
  if (param_5 == 0x36) {
    local_34 = 0.0;
    pfVar1 = *(float **)(param_4 + 0x98);
    pfVar2 = pfVar1;
    if (pfVar1 != (float *)0x0) {
      uVar3 = 0;
      pfVar2 = (float *)((long)pfVar1 + ((ulong)(*(byte *)pfVar1 + 4) & 0x1fc));
      do {
        if (*(byte *)((long)pfVar1 + uVar3 + 1) == 0x36) goto LAB_02f3aacc;
        uVar3 = uVar3 + 1;
        pfVar2 = pfVar2 + 1;
      } while (uVar3 < *(byte *)pfVar1);
      pfVar2 = (float *)0x0;
    }
LAB_02f3aacc:
    pfVar1 = &local_34;
    if (pfVar2 != (float *)0x0) {
      pfVar1 = pfVar2;
    }
    if ((float)param_1 - *pfVar1 != 0.0) {
      FUN_02ea0744((undefined8 *)(param_4 + 0x98),0x36,(float)param_1);
      DAT_0442c06c = 1;
      DAT_0442c070 = 0;
    }
  }
  FUN_02ed0010(param_1,param_2,param_3,param_4,param_5);
  return;
}


