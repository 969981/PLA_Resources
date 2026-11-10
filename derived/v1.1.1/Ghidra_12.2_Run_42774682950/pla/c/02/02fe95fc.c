/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe95fc; name: FUN_02fe95fc
 */


void FUN_02fe95fc(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_38;
  
  if (param_3 == (long *)0x0) {
    lVar4 = *(long *)(param_2 + 0x40);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar4 + param_2 + 0x40;
    }
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x50))(&local_38,lVar3,0,0)
    ;
    lVar3 = local_38;
  }
  else {
    plVar5 = (long *)(param_2 + 0x40);
    local_38 = *plVar5;
    if (local_38 != 0) {
      local_38 = local_38 + (long)plVar5;
    }
    lVar3 = FUN_02f79850(param_3,&local_38);
    if ((lVar3 == 0) ||
       ((int)(*(uint *)(lVar3 + 4) | ((int)lVar3 - (int)param_3[2]) * 0x20000000) < 0)) {
      if (*plVar5 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar5 + (long)plVar5;
      }
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x50))
                (&local_38,lVar3,0,param_3);
      lVar3 = local_38;
      local_38 = *plVar5;
      if (local_38 != 0) {
        local_38 = local_38 + (long)plVar5;
      }
      uVar2 = FUN_02f798f0(param_3,&local_38);
      if (*(uint *)(param_3 + 1) == uVar2) {
        lVar4 = *param_3;
        iVar1 = uVar2 + 1;
        if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= (int)uVar2) {
          lVar4 = FUN_02f799f8(PTR_PTR_0434a080,iVar1);
          uVar2 = *(uint *)(param_3 + 1);
          *param_3 = lVar4;
        }
        plVar5 = (long *)(lVar4 + (long)(int)uVar2 * 0x10);
        *plVar5 = local_38;
        plVar5[1] = lVar3;
        if (lVar3 != 0) {
          FUN_032d645c(lVar3);
        }
        *(int *)(param_3 + 1) = iVar1;
      }
      else {
        plVar5 = (long *)(*param_3 + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8);
        lVar4 = *plVar5;
        if (lVar4 != lVar3) {
          if (lVar3 == 0) {
            *plVar5 = 0;
          }
          else {
            FUN_032d645c(lVar3);
            lVar4 = *plVar5;
            *plVar5 = lVar3;
          }
          if (lVar4 != 0) {
            FUN_032d647c();
          }
        }
      }
    }
    else {
      local_38 = *plVar5;
      if (local_38 != 0) {
        local_38 = local_38 + (long)plVar5;
      }
      lVar3 = FUN_02f79850(param_3,&local_38);
      if ((lVar3 == 0) ||
         (plVar5 = (long *)(*param_3 + (long)*(int *)(lVar3 + 4) * 0x10 + 8), *plVar5 == 0)) {
        lVar3 = 0;
      }
      else {
        FUN_032d645c();
        lVar3 = *plVar5;
      }
    }
  }
  *param_1 = lVar3;
  return;
}


