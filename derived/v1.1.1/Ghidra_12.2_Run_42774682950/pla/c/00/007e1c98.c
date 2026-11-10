/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e1c98; name: FUN_007e1c98
 */


void FUN_007e1c98(undefined8 param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_70;
  undefined2 local_68;
  int local_60 [4];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_6 < *(uint *)(param_2 + 0xd)) {
    local_4e = (undefined1)(param_6 >> 0x18);
    local_4d = (undefined1)(param_6 >> 0x10);
    local_4c = (undefined1)(param_6 >> 8);
    local_4a = (undefined1)((ulong)param_5 >> 0x38);
    local_49 = (undefined1)((ulong)param_5 >> 0x30);
    local_48 = (undefined1)((ulong)param_5 >> 0x28);
    local_47 = (undefined1)((ulong)param_5 >> 0x20);
    local_46 = (undefined1)((ulong)param_5 >> 0x18);
    local_45 = (undefined1)((ulong)param_5 >> 0x10);
    local_44 = (undefined1)((ulong)param_5 >> 8);
    local_4b = (undefined1)param_6;
    local_43 = (undefined1)param_5;
    local_40[0] = 0;
    local_60[0] = 0;
    local_50 = param_3;
    local_4f = param_7;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_60);
    FUN_007ee578(local_60,local_40);
    FUN_007e20c4(local_40,param_2,&local_50,0xe);
    if (local_40[0] == 0) {
      plVar1 = (long *)FUN_00847424(param_2);
      (**(code **)(*plVar1 + 0x80))(local_60,plVar1,param_4);
      FUN_007ee660(local_40,local_60);
      if (local_40[0] == 0) {
        local_70 = 0;
        local_68 = 0;
        local_60[0] = (**(code **)(*param_2 + 0x18))(param_2);
        lVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,local_60,param_4,0xe,&local_70);
        if (lVar2 != 0) {
          FUN_0084695c(param_1,plVar1,&local_50);
          return;
        }
        local_60[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_28);
        piVar3 = local_60;
        goto LAB_007e1e10;
      }
    }
  }
  else {
    local_40[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_60);
  }
  piVar3 = local_40;
LAB_007e1e10:
  FUN_007ee578(param_1,piVar3);
  return;
}


