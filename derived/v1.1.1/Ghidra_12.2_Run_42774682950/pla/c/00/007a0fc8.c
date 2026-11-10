/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a0fc8; name: FUN_007a0fc8
 */


undefined8 FUN_007a0fc8(long *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *local_58;
  long lStack_50;
  ulong local_48;
  int *local_40;
  long lStack_38;
  ulong local_30;
  
  lStack_50 = param_1[2];
  iVar1 = *param_2;
  lVar3 = *(long *)(lStack_50 + 0x20);
  local_48 = *(long *)(lStack_50 + 8) - 1U & *(long *)(lStack_50 + 0x10) + (long)iVar1;
  local_58 = *(int **)(lVar3 + local_48 * 8);
  if (local_58 != (int *)0x0) {
    if (local_58 == *(int **)(lVar3 + (local_48 ^ 1) * 8)) {
      local_48 = local_48 & 0xfffffffffffffffe;
      plVar2 = (long *)(*(long *)(lVar3 + local_48 * 8) + 8);
      plVar4 = (long *)*plVar2;
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar2;
        do {
          if (iVar1 <= *(int *)plVar4[4]) {
            plVar5 = plVar4;
          }
          plVar4 = (long *)plVar4[*(int *)plVar4[4] < iVar1];
        } while (plVar4 != (long *)0x0);
        if ((plVar5 != plVar2) && (local_58 = (int *)plVar5[4], *local_58 <= iVar1)) {
LAB_007a106c:
          if (local_58 != (int *)0x0) {
            lVar3 = *(long *)(local_58 + 2);
            local_40 = local_58;
            lStack_38 = lStack_50;
            local_30 = local_48;
            FUN_007a04dc(&local_58);
            FUN_007a028c(param_1[2],&local_40);
            if ((lVar3 != 0) && (*param_1 == 0)) {
              FUN_002e2ea0(PTR_LAB_04373088,lVar3);
            }
            return 1;
          }
        }
      }
    }
    else {
      do {
        if (*local_58 == iVar1) goto LAB_007a106c;
        local_58 = *(int **)(local_58 + 4);
      } while (local_58 != (int *)0x0);
    }
  }
  return 0;
}


