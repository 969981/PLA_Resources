/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081b58c; name: FUN_0081b58c
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0081b58c(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_78;
  ulong uStack_70;
  uint local_68;
  ulong local_60;
  uint local_58;
  
  lVar8 = *(long *)PTR_DAT_04377b08;
  uVar7 = param_2;
  if (param_2 < 9) {
    uVar7 = 8;
  }
  if (uVar7 < *(ulong *)(param_1 + 0x38)) {
    uVar1 = -param_3;
    if (-1 < (int)param_3) {
      uVar1 = param_3;
    }
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar7 = uVar7 + 7 & 0xfffffffffffffff8;
      if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
        lVar6 = 0;
        iVar2 = *(int *)(param_1 + 0x88);
      }
      else {
        lVar6 = param_1 + 0x90;
        FUN_0082481c(lVar6);
        iVar2 = *(int *)(param_1 + 0x88);
      }
      iVar2 = iVar2 * param_3;
      if (iVar2 < 0) {
        iVar3 = -iVar2;
        if (iVar2 < -4) {
          lVar4 = FUN_0081b9e8(param_1,uVar7,iVar3);
          iVar2 = iVar3;
          uVar1 = local_58;
        }
        else {
          lVar4 = FUN_0081b928();
          iVar2 = iVar3;
          uVar1 = local_58;
        }
      }
      else if (iVar2 < 5) {
        lVar4 = FUN_0081b728();
        uVar1 = local_58;
      }
      else {
        lVar4 = FUN_0081b7f8(param_1,uVar7,iVar2);
        uVar1 = local_58;
      }
      local_58 = iVar2;
      if (lVar4 == 0) {
        if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 != (undefined8 *)0x0)) {
          local_78 = param_1;
          uStack_70 = param_2;
          local_68 = param_3;
          local_60 = uVar7;
          (**(code **)*puVar5)(puVar5,&local_78);
          uVar1 = local_58;
        }
        local_58 = uVar1;
        lVar8 = 0;
      }
      else {
        *(undefined2 *)(lVar4 + 0x10) = *(undefined2 *)(param_1 + 0xd2);
        lVar8 = lVar4 + (ulong)*(ushort *)(lVar4 + 0x12) + 0x20;
        local_58 = uVar1;
      }
      if (lVar6 == 0) {
        return lVar8;
      }
      FUN_00824824(lVar6);
      return lVar8;
    }
  }
  if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 != (undefined8 *)0x0)) {
    local_78 = param_1;
    uStack_70 = param_2;
    local_68 = param_3;
    local_60 = uVar7;
    local_58 = param_3;
    (**(code **)*puVar5)(puVar5,&local_78);
  }
  return 0;
}


