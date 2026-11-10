/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2820; name: FUN_007e2820
 */


void FUN_007e2820(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_50 [4];
  
  lVar1 = FUN_00847388();
  lVar2 = FUN_008473ec(param_2);
  if (lVar1 == lVar2) {
    lVar1 = *(long *)(param_2 + 0x70);
    if (lVar1 != -1) {
      local_64 = (undefined1)((ulong)param_4 >> 0x28);
      local_63 = (undefined1)((ulong)param_4 >> 0x20);
      local_62 = (undefined1)((ulong)param_4 >> 0x18);
      local_61 = (undefined1)((ulong)param_4 >> 0x10);
      local_60 = (undefined1)((ulong)param_4 >> 8);
      local_5e = (undefined1)((ulong)lVar1 >> 0x38);
      local_5d = (undefined1)((ulong)lVar1 >> 0x30);
      local_5c = (undefined1)((ulong)lVar1 >> 0x28);
      local_5b = (undefined1)((ulong)lVar1 >> 0x20);
      local_5a = (undefined1)((ulong)lVar1 >> 0x18);
      local_59 = (undefined1)((ulong)lVar1 >> 0x10);
      local_57 = (undefined1)lVar1;
      local_68 = CONCAT13((char)((ulong)param_4 >> 0x30),
                          CONCAT12((char)((ulong)param_4 >> 0x38),CONCAT11(param_5,1)));
      local_5f = (undefined1)param_4;
      local_58 = (undefined1)((ulong)lVar1 >> 8);
      local_50[0] = 0;
      local_78[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_78);
      FUN_007ee578(local_78,local_50);
      FUN_007e2b70(param_1,param_2,param_3,&local_68,0x12);
      return;
    }
    local_68 = 0x10408;
  }
  else {
    local_68 = 0;
  }
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_50);
  FUN_007ee578(param_1,&local_68);
  return;
}


