/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dd470; name: FUN_004dd470
 */


void FUN_004dd470(uint *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  lVar4 = *(long *)(param_2 + 0x488);
  uVar6 = *(uint *)(lVar4 + 0x1c) & 0x30000;
  if (uVar6 == 0x30000) {
    lVar4 = 2;
    lVar2 = FUN_004dcbd0(DAT_03a280da);
joined_r0x004dd4ec:
    puVar5 = &DAT_03a280da;
  }
  else if (uVar6 == 0x20000) {
    lVar4 = 1;
    puVar5 = &DAT_03a280dc;
    lVar2 = FUN_004dcbd0(DAT_03a280dc);
  }
  else {
    if (uVar6 == 0x10000) {
      lVar4 = 1;
      lVar2 = FUN_004dcbd0(DAT_03a280da);
      goto joined_r0x004dd4ec;
    }
    if ((*(int *)(param_2 + 0x38) == 1) &&
       (puVar5 = *(undefined2 **)(lVar4 + 0x1a8), puVar5 != (undefined2 *)0x0)) {
      lVar4 = *(long *)(lVar4 + 0x1b0);
joined_r0x004dd548:
      if (lVar4 == 0) {
        uVar6 = 0xb;
        goto LAB_004dd5d0;
      }
    }
    else {
      puVar5 = *(undefined2 **)(lVar4 + 0x198);
      if (puVar5 != (undefined2 *)0x0) {
        lVar4 = *(long *)(lVar4 + 0x1a0);
        goto joined_r0x004dd548;
      }
      lVar4 = 0x1a;
      puVar5 = &DAT_03a280de;
    }
    lVar2 = FUN_004dcbd0(*puVar5);
  }
  uVar6 = 0xb;
  if (lVar2 != 0) goto LAB_004dd588;
LAB_004dd570:
  lVar4 = lVar4 + -1;
  if (lVar4 != 0) {
    while( true ) {
      puVar5 = puVar5 + 1;
      lVar2 = FUN_004dcbd0(*puVar5);
      if (lVar2 == 0) break;
LAB_004dd588:
      lVar3 = FUN_004e31d0((long)*(int *)(lVar2 + 0x18));
      if (((lVar3 == 0) || ((*(uint *)(lVar3 + 4) & uVar6) == 0)) ||
         (iVar1 = FUN_004de470(param_2,param_3,lVar2), iVar1 == 0)) break;
      uVar6 = uVar6 & (*(uint *)(lVar3 + 4) ^ 0xffffffff);
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) goto LAB_004dd5d0;
    }
    goto LAB_004dd570;
  }
LAB_004dd5d0:
  *param_1 = *param_1 | uVar6;
  return;
}


