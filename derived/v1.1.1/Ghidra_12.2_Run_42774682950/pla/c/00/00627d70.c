/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00627d70; name: FUN_00627d70
 */


ulong * FUN_00627d70(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_1 != param_2) && (uVar4 = FUN_00627ec0(param_1,param_3), (uVar4 & 1) == 0)) {
    do {
      if (param_2 + -5 == param_1) {
        return param_2;
      }
      param_1 = param_1 + 5;
      uVar4 = FUN_00627ec0(param_1,param_3);
    } while ((uVar4 & 1) == 0);
  }
  puVar3 = param_1;
  if (param_1 != param_2) {
    while( true ) {
      puVar2 = puVar3;
      puVar3 = puVar2 + 5;
      if (puVar3 == param_2) break;
      uVar4 = FUN_00627ec0(puVar3,param_3);
      if ((uVar4 & 1) == 0) {
        if (((long *)param_1[3] == (long *)puVar3[3]) ||
           (uVar4 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar4 & 1) != 0)) {
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
          uVar5 = puVar3[1];
          uVar4 = *puVar3;
          param_1[2] = puVar3[2];
          param_1[1] = uVar5;
          *param_1 = uVar4;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
        }
        else if (puVar3 != param_1) {
          uVar4 = puVar3[1];
          pbVar1 = (byte *)puVar3[2];
          if (((byte)*puVar3 & 1) == 0) {
            pbVar1 = (byte *)((long)puVar2 + 0x29);
            uVar4 = (ulong)(byte)((byte)*puVar3 >> 1);
          }
          FUN_02762710(param_1,pbVar1,uVar4);
        }
        param_1[4] = puVar3[4];
        param_1 = param_1 + 5;
      }
    }
  }
  return param_1;
}


