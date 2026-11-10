/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3e94; name: FUN_031e3e94
 */


void FUN_031e3e94(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  uint local_28 [2];
  
  local_28[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  local_38[0] = (uint)(param_3 >> 0x16) & 0x3ff;
  lVar2 = FUN_031e3f14(param_1,local_28,local_38);
  local_40 = (undefined4)param_2;
  uStack_3c = (undefined4)param_3;
  local_28[1] = 0;
  iVar1 = FUN_031e35cc(lVar2 + 0x40,&local_40,local_28 + 1);
  lVar2 = *(long *)(lVar2 + 0x40) + (long)iVar1 * 0xc;
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  return;
}


