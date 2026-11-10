/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f61f6c; name: FUN_02f61f6c
 */


void FUN_02f61f6c(long param_1,long param_2,long param_3)

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
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 local_180 [32];
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar2 = PTR_PTR_0434a080;
  uStack_78 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  local_190 = local_180;
  local_188 = 0x8000002000000000;
  iVar4 = *(int *)(param_1 + 0x18);
  local_80 = param_2;
  local_70 = param_3;
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
          if ((int)(local_188._4_4_ & 0x3fffffff) <= iVar7) {
            local_190 = (undefined8 *)
                        FUN_02f6a1c4(puVar2,iVar1,local_190,iVar7,(long)&local_188 + 4);
            iVar7 = (int)local_188;
          }
          local_190[iVar7] = lVar5 + 8;
          local_188 = CONCAT44(local_188._4_4_,iVar1);
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
          iVar4 = (int)local_188 + 1;
          if ((int)(local_188._4_4_ & 0x3fffffff) <= (int)local_188) {
            local_190 = (undefined8 *)
                        FUN_02f6a1c4(puVar2,iVar4,local_190,local_188 & 0xffffffff,
                                     (long)&local_188 + 4);
          }
          local_190[(int)local_188] = lVar10 + 8;
          local_188 = CONCAT44(local_188._4_4_,iVar4);
        }
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)*(int *)(param_1 + 0x18));
      iVar7 = (int)local_188;
    }
    if (iVar7 != 0) {
      lVar10 = (long)iVar7 * 8;
      puVar6 = local_190;
      do {
        lVar10 = lVar10 + -8;
        FUN_02f621d4(*puVar6,param_2 + 0x30,&local_80);
        if (lVar10 == 0) break;
        puVar6 = puVar6 + 1;
      } while (*(char *)(param_3 + 9) == '\0');
    }
  }
  uVar9 = local_188;
  uVar3 = (ulong)local_188._4_4_;
  local_188 = (ulong)local_188._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_190 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_190,(uVar3 & 0x3fffffff) << 3);
  }
  return;
}


