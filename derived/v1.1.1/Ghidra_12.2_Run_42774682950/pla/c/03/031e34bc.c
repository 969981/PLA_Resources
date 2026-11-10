/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e34bc; name: FUN_031e34bc
 */


void FUN_031e34bc(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  uint local_b8 [2];
  uint local_b0 [2];
  ulong local_a8 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_38 [2];
  
  local_38[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  uVar3 = (uint)(param_3 >> 0x16) & 0x3ff;
  local_48 = (undefined4)param_2;
  uStack_44 = (undefined4)param_3;
  if (local_38[0] == uVar3) {
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0x8000000000000000;
    FUN_032c2320(local_a8 + 2);
    local_a8[4] = 0;
    local_a8[5] = 0x8000000000000000;
    FUN_032c2320(local_a8 + 6);
    local_a8[8] = 0;
    local_a8[9] = 0x8000000000000000;
    FUN_032c2320(local_a8 + 10);
    iVar1 = FUN_031e3110(param_1 + 8,local_38,local_a8);
    FUN_031cd728(local_a8);
    plVar4 = (long *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x68 + 0x28);
  }
  else {
    local_b8[0] = uVar3;
    local_b0[0] = local_38[0];
    lVar2 = FUN_031e31b4(param_1,local_b0,local_b8);
    plVar4 = (long *)(lVar2 + 0x40);
  }
  local_a8[0] = local_a8[0] & 0xffffffff00000000;
  iVar1 = FUN_031e35cc(plVar4,&local_48,local_a8);
  lVar2 = *plVar4 + (long)iVar1 * 0xc;
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  return;
}


