/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c2d4; name: FUN_02f3c2d4
 */


void FUN_02f3c2d4(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int iStack_30;
  int local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(ushort *)(param_1 + 0xb) - 1, *(ushort *)(param_1 + 0xb) != 0 && iVar1 != 0)) {
    *(short *)(param_1 + 0xb) = (short)iVar1;
  }
  else {
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[8] == 0) {
      if (*param_2 < 1) {
        *(undefined4 *)(param_1 + 10) = 0x3f800000;
        (**(code **)(*param_1 + 0x28))(0x3f800000,param_1);
      }
      else {
        local_48 = param_1 + 5;
        local_38 = (undefined4)param_1[10];
        local_2c = param_2[1];
        local_40 = 0x8000000;
        local_34 = 0x3f800000;
        local_24 = 0x100;
        uStack_28 = 0x17;
        local_22 = 0;
        iStack_30 = *param_2;
        lVar2 = FUN_02f0ed58(DAT_0440a150,&local_48,1,0);
        param_1[8] = lVar2;
        if (lVar2 == 0) {
          (**(code **)(*param_1 + 0x60))(local_34,param_1,local_40,1);
        }
      }
    }
    else {
      FUN_02f0f0a8(0x3f800000,DAT_0440a150,param_1[8],0x8000000,*param_2,param_2[1],0);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}


