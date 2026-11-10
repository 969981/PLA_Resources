/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e2fec; name: FUN_031e2fec
 */


void FUN_031e2fec(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint local_c0 [2];
  uint local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_48 [2];
  
  local_b8[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  local_c0[0] = (uint)(param_3 >> 0x16) & 0x3ff;
  local_48[0] = local_b8[0];
  if (local_b8[0] == local_c0[0]) {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0x8000000000000000;
    FUN_032c2320(&local_a0);
    local_90 = 0;
    uStack_88 = 0x8000000000000000;
    FUN_032c2320(&local_80);
    local_70 = 0;
    uStack_68 = 0x8000000000000000;
    FUN_032c2320(&local_60);
    iVar1 = FUN_031e3110(param_1 + 8,local_48,&local_b0);
    FUN_031cd728(&local_b0);
    lVar2 = *(long *)(param_1 + 8) + (long)iVar1 * 0x68 + 8;
    local_b0 = CONCAT44(local_b0._4_4_,(int)param_2) & 0xffffffff003fffff;
    FUN_031cdd40(lVar2,&local_b0);
    local_b0 = CONCAT44(local_b0._4_4_,(int)param_3) & 0xffffffff003fffff;
    FUN_031cdd40(lVar2,&local_b0);
  }
  else {
    lVar2 = FUN_031e31b4(param_1,local_b8,local_c0);
    local_b0 = CONCAT44((int)param_3,(int)param_2);
    FUN_031e4b78(lVar2 + 0x20,&local_b0);
  }
  return;
}


