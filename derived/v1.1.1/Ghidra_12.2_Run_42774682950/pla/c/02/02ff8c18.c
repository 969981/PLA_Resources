/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff8c18; name: FUN_02ff8c18
 */


void FUN_02ff8c18(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  if (((param_4 == (long *)0x0) || (lVar4 = FUN_02f79850(param_4,&local_38), lVar4 == 0)) ||
     ((int)(*(uint *)(lVar4 + 4) | ((int)lVar4 - (int)param_4[2]) * 0x20000000) < 0)) {
    FUN_02ff8ba0(&local_40,local_38);
    if (param_4 != (long *)0x0) {
      uVar3 = FUN_02f798f0(param_4,&local_38);
      if (*(uint *)(param_4 + 1) == uVar3) {
        lVar4 = *param_4;
        iVar2 = uVar3 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= (int)uVar3) {
          lVar4 = FUN_02f799f8(PTR_PTR_0434a080,iVar2);
          uVar3 = *(uint *)(param_4 + 1);
          *param_4 = lVar4;
        }
        puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar3 * 0x10);
        *puVar1 = local_38;
        puVar1[1] = local_40;
        if (local_40 != 0) {
          FUN_032d645c(local_40);
        }
        *(int *)(param_4 + 1) = iVar2;
      }
      else {
        plVar5 = (long *)(*param_4 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8);
        lVar4 = *plVar5;
        if (lVar4 != local_40) {
          if (local_40 == 0) {
            *plVar5 = 0;
          }
          else {
            FUN_032d645c(local_40);
            lVar4 = *plVar5;
            *plVar5 = local_40;
          }
          if (lVar4 != 0) {
            FUN_032d647c();
          }
        }
      }
    }
    *param_1 = local_40;
    return;
  }
  *param_1 = 0;
  lVar4 = FUN_02f79850(param_4,&local_38);
  if (lVar4 == 0) {
    return;
  }
  plVar5 = (long *)(*param_4 + (long)*(int *)(lVar4 + 4) * 0x10 + 8);
  if (*plVar5 == 0) {
    return;
  }
  FUN_032d645c();
  *param_1 = *plVar5;
  return;
}


