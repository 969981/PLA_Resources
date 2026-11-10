/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e1e48; name: FUN_007e1e48
 */


void FUN_007e1e48(undefined8 param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                 uint param_5,undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_68;
  undefined2 local_60;
  int local_58 [4];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38 [2];
  int local_30 [4];
  
  if (param_5 < *(uint *)(param_2 + 0xd)) {
    local_46 = (undefined1)(param_5 >> 0x18);
    local_45 = (undefined1)(param_5 >> 0x10);
    local_44 = (undefined1)(param_5 >> 8);
    local_42 = (undefined1)((ulong)param_4 >> 0x38);
    local_41 = (undefined1)((ulong)param_4 >> 0x30);
    local_40 = (undefined1)((ulong)param_4 >> 0x28);
    local_3f = (undefined1)((ulong)param_4 >> 0x20);
    local_3e = (undefined1)((ulong)param_4 >> 0x18);
    local_3d = (undefined1)((ulong)param_4 >> 0x10);
    local_3c = (undefined1)((ulong)param_4 >> 8);
    local_43 = (undefined1)param_5;
    local_3b = (undefined1)param_4;
    local_30[0] = 0;
    local_58[0] = 0;
    local_48 = param_3;
    local_47 = param_6;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_58);
    FUN_007ee578(local_58,local_30);
    FUN_007e20c4(local_30,param_2,&local_48,0xe);
    if (local_30[0] == 0) {
      local_68 = 0;
      local_60 = 0;
      plVar1 = (long *)FUN_00847424(param_2);
      local_58[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,local_58,0xe,&local_68);
      if (lVar2 != 0) {
        FUN_0084695c(param_1,plVar1,&local_48);
        return;
      }
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
      goto LAB_007e1f98;
    }
  }
  else {
    local_30[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_58);
  }
  piVar3 = local_30;
LAB_007e1f98:
  FUN_007ee578(param_1,piVar3);
  return;
}


