/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f61b1c; name: FUN_02f61b1c
 */


void FUN_02f61b1c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178 [32];
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = PTR_PTR_0434a080;
  local_68 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  local_188 = local_178;
  local_180 = 0x8000002000000000;
  iVar4 = *(int *)(param_1 + 0x18);
  local_78 = param_2;
  uStack_70 = param_3;
  if (0 < iVar4) {
    plVar8 = *(long **)(param_2 + 8);
    if (plVar8 == (long *)0x0) {
      iVar7 = 0;
      lVar10 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar10 * 8);
        if (((*(char *)(lVar5 + 0x20) != '\0') &&
            ((*(byte *)(param_2 + 0x21) & *(byte *)(lVar5 + 0x1ae0)) == 0)) &&
           ((*(byte *)(param_2 + 0x22) & *(byte *)(lVar5 + 0x1ae0)) != 0)) {
          iVar1 = iVar7 + 1;
          if ((int)(local_180._4_4_ & 0x3fffffff) <= iVar7) {
            local_188 = (undefined8 *)
                        FUN_02f6a1c4(puVar2,iVar1,local_188,iVar7,(long)&local_180 + 4);
            iVar7 = (int)local_180;
          }
          local_188[iVar7] = lVar5 + 8;
          local_180 = CONCAT44(local_180._4_4_,iVar1);
          iVar4 = *(int *)(param_1 + 0x18);
          iVar7 = iVar1;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar4);
    }
    else {
      uVar9 = 0;
      do {
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + uVar9 * 8);
        if (((*(char *)(lVar10 + 0x20) != '\0') &&
            ((*(byte *)(param_2 + 0x21) & *(byte *)(lVar10 + 0x1ae0)) == 0)) &&
           (((*(byte *)(param_2 + 0x22) & *(byte *)(lVar10 + 0x1ae0)) != 0 &&
            (uVar3 = (**(code **)(*plVar8 + 0x28))
                               (plVar8,6,uVar9 & 0xffffffff,*(undefined8 *)(param_2 + 0x18)),
            (uVar3 & 1) != 0)))) {
          iVar4 = (int)local_180 + 1;
          if ((int)(local_180._4_4_ & 0x3fffffff) <= (int)local_180) {
            local_188 = (undefined8 *)
                        FUN_02f6a1c4(puVar2,iVar4,local_188,local_180 & 0xffffffff,
                                     (long)&local_180 + 4);
          }
          local_188[(int)local_180] = lVar10 + 8;
          local_180 = CONCAT44(local_180._4_4_,iVar4);
        }
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)*(int *)(param_1 + 0x18));
      iVar7 = (int)local_180;
    }
    if (iVar7 != 0) {
      lVar10 = (long)iVar7 << 3;
      puVar6 = local_188;
      do {
        FUN_02f61d74(*puVar6,param_2 + 0x30,&local_78);
        lVar10 = lVar10 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar10 != 0);
    }
  }
  uVar9 = local_180;
  uVar3 = (ulong)local_180._4_4_;
  local_180 = (ulong)local_180._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_188 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_188,(uVar3 & 0x3fffffff) << 3);
  }
  return;
}


