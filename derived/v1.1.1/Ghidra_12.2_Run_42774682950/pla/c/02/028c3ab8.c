/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c3ab8; name: FUN_028c3ab8
 */


void FUN_028c3ab8(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long local_110 [12];
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  
  if ((param_2 & 1) == 0) {
    plVar5 = local_110;
    lVar3 = *(long *)(param_1 + 0x28);
    local_110[0] = param_1;
    for (lVar6 = *(long *)(param_1 + 0x20); lVar6 != lVar3; lVar6 = lVar6 + 0x38) {
      if (*(int *)(lVar6 + 0x2c) == 0) {
        if (*(int *)(lVar6 + 0x28) == 2) goto LAB_028c3bb8;
      }
      else if (*(int *)(lVar6 + 0x2c) != *(int *)(lVar6 + 0x28)) {
LAB_028c3bb8:
        FUN_028c44c8(plVar5,lVar6);
      }
    }
    pcVar4 = FUN_028c458c;
  }
  else {
    plVar5 = local_90;
    pcVar4 = FUN_028c44ac;
    local_b0 = FUN_028c43e8;
    local_a8 = FUN_028c44ac;
    local_a0 = &LAB_028c44b0;
    puStack_98 = &LAB_028c44bc;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    local_90[0] = param_1;
    if (lVar6 != lVar3) {
      do {
        iVar1 = *(int *)(lVar6 + 0x28);
        iVar2 = *(int *)(lVar6 + 0x2c);
        if (iVar2 == 2) {
          if (iVar1 != 2) {
LAB_028c3b14:
            (*local_b0)(plVar5,lVar6);
          }
        }
        else if (((iVar1 == 2) || ((iVar2 == 1 && (iVar1 == 1)))) || ((iVar2 == 3 && (iVar1 == 3))))
        goto LAB_028c3b14;
        lVar6 = lVar6 + 0x38;
      } while (lVar3 != lVar6);
      pcVar4 = local_a8;
      if (local_a8 == (code *)0x0) {
        return;
      }
    }
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
  }
  (*pcVar4)(plVar5);
  return;
}


