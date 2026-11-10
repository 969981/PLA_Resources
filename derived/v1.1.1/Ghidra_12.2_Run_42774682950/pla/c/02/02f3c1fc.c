/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c1fc; name: FUN_02f3c1fc
 */


void FUN_02f3c1fc(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar1 = param_1[0xb];
  *(short *)(param_1 + 0xb) = (short)lVar1 + 1;
  if ((short)lVar1 == 0) {
    if (param_1[8] != 0) {
      FUN_02f0f0a8(0,DAT_0440a150,param_1[8],0x4000000,*param_2,param_2[1],0);
      return;
    }
    local_48 = param_1 + 5;
    local_30 = *param_2;
    uStack_2c = param_2[1];
    local_40 = 0x4000000;
    uStack_38 = 0x3f800000;
    local_28 = 0x17;
    local_24 = 0x100;
    local_22 = 0;
    lVar1 = FUN_02f0ed58(DAT_0440a150,&local_48,1,0);
    param_1[8] = lVar1;
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x60))(uStack_38._4_4_,param_1,local_40,1);
    }
  }
  return;
}


