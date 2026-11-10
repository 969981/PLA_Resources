/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3bf24; name: FUN_02f3bf24
 */


void FUN_02f3bf24(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 0xe) == 0) {
    if (param_1[7] == 0) {
      if (0 < *param_2) {
        iStack_2c = param_2[1];
        local_48 = param_1 + 5;
        local_40 = 0x1000000;
        local_38 = 0x3f80000000000000;
        local_24 = 0x100;
        local_28 = 0x17;
        local_22 = 0;
        local_30 = *param_2;
        lVar2 = FUN_02f0ed58(DAT_0440a150,&local_48,1,0);
        param_1[7] = lVar2;
        if (lVar2 == 0) {
          (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
        }
        else if (param_2[2] != 0) {
          iVar1 = 0;
          if (DAT_042ab268 != 0) {
            iVar1 = param_2[2] / (int)(uint)DAT_042ab268;
          }
          if ((iVar1 < 0) && (*(uint *)(lVar2 + 0x18) <= (uint)-iVar1)) {
            *(undefined4 *)(lVar2 + 0x18) = 0;
          }
          else {
            *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) + iVar1;
          }
        }
      }
    }
    else {
      FUN_02f0f0a8(0x3f800000,DAT_0440a150,param_1[7],0x1000000,*param_2,param_2[1],0);
    }
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  return;
}


