/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01302758; name: FUN_01302758
 */


void FUN_01302758(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined8 *)(param_1 + 0x1658) = *(undefined8 *)(param_1 + 0x1650);
  uVar5 = FUN_012efd4c(param_2,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_012efcb8(param_2,0);
    if (uVar3 != 0) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x98) + lVar6);
        uStack_68 = puVar1[1];
        local_70._2_2_ = (undefined2)((ulong)*puVar1 >> 0x10);
        uVar2 = local_70._2_2_;
        local_60 = puVar1[2];
        uStack_58 = puVar1[3];
        local_50 = puVar1[4];
        uStack_48 = puVar1[5];
        local_70 = *puVar1;
        iVar4 = FUN_012f0290(uVar2);
        if (iVar4 != 0) {
          FUN_012ff938(param_1 + 0x1650,&local_70);
        }
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar3 * 0x30 != lVar6);
    }
    FUN_012ff600(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x1690) = *(undefined8 *)(param_1 + 0x1688);
  uVar5 = FUN_012efd4c(param_2,1);
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_012efcb8(param_2,1);
    if (uVar3 != 0) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0xd0) + lVar6);
        uStack_68 = puVar1[1];
        local_70._2_2_ = (undefined2)((ulong)*puVar1 >> 0x10);
        uVar2 = local_70._2_2_;
        local_60 = puVar1[2];
        uStack_58 = puVar1[3];
        local_50 = puVar1[4];
        uStack_48 = puVar1[5];
        local_70 = *puVar1;
        iVar4 = FUN_012f0290(uVar2);
        if (iVar4 != 0) {
          FUN_012ff938(param_1 + 0x1688,&local_70);
        }
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar3 * 0x30 != lVar6);
    }
    FUN_012ff600(param_1,1);
  }
  *(undefined8 *)(param_1 + 0x16c8) = *(undefined8 *)(param_1 + 0x16c0);
  uVar5 = FUN_012efd4c(param_2,2);
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_012efcb8(param_2,2);
    if (uVar3 != 0) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x108) + lVar6);
        uStack_68 = puVar1[1];
        local_70._2_2_ = (undefined2)((ulong)*puVar1 >> 0x10);
        uVar2 = local_70._2_2_;
        local_60 = puVar1[2];
        uStack_58 = puVar1[3];
        local_50 = puVar1[4];
        uStack_48 = puVar1[5];
        local_70 = *puVar1;
        iVar4 = FUN_012f0290(uVar2);
        if (iVar4 != 0) {
          FUN_012ff938(param_1 + 0x16c0,&local_70);
        }
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar3 * 0x30 != lVar6);
    }
    FUN_012ff600(param_1,2);
  }
  *(undefined8 *)(param_1 + 0x1700) = *(undefined8 *)(param_1 + 0x16f8);
  uVar5 = FUN_012efd4c(param_2,3);
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_012efcb8(param_2,3);
    if (uVar3 != 0) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x140) + lVar6);
        uStack_68 = puVar1[1];
        local_70._2_2_ = (undefined2)((ulong)*puVar1 >> 0x10);
        uVar2 = local_70._2_2_;
        local_60 = puVar1[2];
        uStack_58 = puVar1[3];
        local_50 = puVar1[4];
        uStack_48 = puVar1[5];
        local_70 = *puVar1;
        iVar4 = FUN_012f0290(uVar2);
        if (iVar4 != 0) {
          FUN_012ff938(param_1 + 0x16f8,&local_70);
        }
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar3 * 0x30 != lVar6);
    }
    FUN_012ff600(param_1,3);
  }
  return;
}


