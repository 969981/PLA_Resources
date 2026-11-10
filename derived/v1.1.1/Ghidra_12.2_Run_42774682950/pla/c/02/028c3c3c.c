/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c3c3c; name: FUN_028c3c3c
 */


void FUN_028c3c3c(undefined4 param_1,long param_2,byte param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long local_110;
  byte local_108;
  undefined4 local_104;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  byte local_88;
  undefined4 local_84;
  
  param_3 = param_3 & 1;
  if ((param_4 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    local_110 = param_2;
    local_108 = param_3;
    local_104 = param_1;
    if (lVar6 != lVar1) {
      iVar3 = *(int *)(lVar6 + 0x28);
      iVar5 = *(int *)(lVar6 + 0x2c);
      if (iVar5 != 0) goto LAB_028c3d7c;
      do {
        lVar7 = lVar6;
        if (iVar3 == 2) goto LAB_028c3d58;
        while( true ) {
          lVar6 = lVar7 + 0x38;
          if (lVar1 == lVar6) goto LAB_028c3db8;
          iVar3 = *(int *)(lVar7 + 0x60);
          iVar5 = *(int *)(lVar7 + 100);
          if (iVar5 == 0) break;
LAB_028c3d7c:
          lVar7 = lVar6;
          if (iVar5 != iVar3) {
LAB_028c3d58:
            FUN_028c45dc(&local_110,lVar6);
            lVar7 = lVar6;
          }
        }
      } while( true );
    }
LAB_028c3db8:
    pcVar4 = FUN_028c45f4;
    plVar2 = &local_110;
  }
  else {
    local_b0 = FUN_028c45a8;
    local_a8 = FUN_028c45c0;
    local_a0 = &LAB_028c45c4;
    puStack_98 = &LAB_028c45d0;
    lVar6 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    pcVar4 = FUN_028c45c0;
    local_90 = param_2;
    local_88 = param_3;
    local_84 = param_1;
    if (lVar6 != lVar1) {
      do {
        iVar3 = *(int *)(lVar6 + 0x28);
        iVar5 = *(int *)(lVar6 + 0x2c);
        if (iVar5 == 2) {
          if (iVar3 != 2) goto LAB_028c3ca4;
        }
        else if (((iVar3 == 2) || ((iVar5 == 1 && (iVar3 == 1)))) || ((iVar5 == 3 && (iVar3 == 3))))
        {
LAB_028c3ca4:
          (*local_b0)(&local_90,lVar6);
        }
        lVar6 = lVar6 + 0x38;
      } while (lVar1 != lVar6);
      pcVar4 = local_a8;
      if (local_a8 == (code *)0x0) {
        return;
      }
    }
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    plVar2 = &local_90;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
  }
  (*pcVar4)(plVar2);
  return;
}


