/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bed44; name: FUN_001bed44
 */


void FUN_001bed44(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    local_50 = (long *)0x0;
    local_48 = 0x8000000000000000;
    iVar1 = *(int *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)PTR_PTR_04372408;
    if (iVar1 < 1) {
      local_48._4_4_ = 0x80000000;
      plVar4 = *(long **)(param_1 + 0x58);
      plVar2 = (long *)0x0;
    }
    else {
      if (0x3fffffff < iVar1) {
        FUN_032bd0a8(iVar1);
      }
      local_50 = (long *)FUN_032bd1d4(uVar5,iVar1,0x10,0,0,(long)&local_48 + 4);
      plVar4 = *(long **)(param_1 + 0x58);
      plVar2 = local_50;
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      lVar6 = plVar4[2];
      plVar2[1] = plVar4[3];
      *plVar2 = lVar6;
      plVar2 = plVar2 + 2;
    }
    local_48._0_4_ = iVar1;
    FUN_001c6f20(&local_50,param_1 + 0xa0);
    uVar3 = local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if ((-1 < (int)uVar3) && (local_50 != (long *)0x0)) {
      FUN_032cf244(uVar5,local_50,0x10,uVar3 & 0x3fffffff);
    }
  }
  FUN_001c7194(param_1 + 0xa0,param_2,param_3);
  return;
}


