/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070ee8c; name: FUN_0070ee8c
 */


ulong * FUN_0070ee8c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((long *)param_1[3] == (long *)param_2[3]) ||
     (uVar3 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar3 & 1) != 0)) {
    if ((*param_1 & 1) == 0) {
      *(undefined2 *)param_1 = 0;
    }
    else {
      *(undefined1 *)param_1[2] = 0;
      param_1[1] = 0;
      if ((*param_1 & 1) != 0) {
        (**(code **)(*(long *)param_1[3] + 0x18))
                  ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
        *param_1 = 0;
      }
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  else if (param_1 != param_2) {
    uVar3 = param_2[1];
    pbVar2 = (byte *)param_2[2];
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = (byte *)((long)param_2 + 1);
      uVar3 = (ulong)(byte)((byte)*param_2 >> 1);
    }
    FUN_02762710(param_1,pbVar2,uVar3);
  }
  puVar1 = param_1 + 4;
  if (((long *)param_1[7] == (long *)param_2[7]) ||
     (uVar3 = (**(code **)(*(long *)param_1[7] + 0x20))(), (uVar3 & 1) != 0)) {
    if ((*puVar1 & 1) == 0) {
      *(undefined2 *)puVar1 = 0;
    }
    else {
      *(undefined1 *)param_1[6] = 0;
      param_1[5] = 0;
      if ((param_1[4] & 1) != 0) {
        (**(code **)(*(long *)param_1[7] + 0x18))
                  ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
        param_1[4] = 0;
      }
    }
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    *puVar1 = uVar3;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
  }
  else if (param_1 != param_2) {
    uVar3 = param_2[5];
    pbVar2 = (byte *)param_2[6];
    if (((byte)param_2[4] & 1) == 0) {
      pbVar2 = (byte *)((long)param_2 + 0x21);
      uVar3 = (ulong)(byte)((byte)param_2[4] >> 1);
    }
    FUN_02762710(puVar1,pbVar2,uVar3);
  }
  return param_1;
}


