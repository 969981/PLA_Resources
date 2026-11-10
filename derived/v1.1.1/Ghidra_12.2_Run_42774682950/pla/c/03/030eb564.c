/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030eb564; name: FUN_030eb564
 */


void FUN_030eb564(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  long local_f0;
  uint local_e8;
  uint local_e4;
  uint local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  int local_68;
  
  if (*(long *)(param_2 + 8) == 0) {
    lVar9 = 0;
  }
  else {
    FUN_032d5af0(*(long *)(param_2 + 8),"TtFinalizeShiftWorldTask",0x18);
    lVar9 = *(long *)(param_2 + 8);
  }
  local_68 = 0;
  local_b0 = DAT_03aae440;
  uStack_a8 = DAT_03aae448;
  local_78 = 0;
  local_70 = 0x8000000000000000;
  local_a0 = DAT_03aae450;
  uStack_98 = DAT_03aae458;
  local_c0 = DAT_03aae430;
  uStack_b8 = DAT_03aae438;
  puVar10 = (undefined8 *)(param_1 + 0x30);
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  local_90 = *puVar10;
  FUN_03005430(&local_f0,*(long *)(*(long *)(param_1 + 0x28) + 0x488) + 8);
  if (local_e4 == local_cc) {
    local_70 = local_70 & 0xffffffff00000000;
  }
  else {
    uVar12 = local_e4;
    do {
      lVar5 = (long)*(int *)(local_f0 + (ulong)uVar12 * 0x68 + 0x30);
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x488) + 8);
      lVar11 = lVar7 + lVar5 * 0x68;
      if (((~*(uint *)(lVar11 + 8) & 0xffffff) == 0) ||
         ((~*(uint *)(lVar7 + lVar5 * 0x68 + 0x18) & 0xffffff) == 0)) {
        plVar4 = (long *)(lVar7 + lVar5 * 0x68 + 0x20);
        iVar3 = FUN_030ebfd0(&local_78,*plVar4);
        if ((int)local_70 <= iVar3) {
          FUN_03006028(lVar11,&local_c0);
          lVar5 = *plVar4;
          if ((int)local_70 <= local_68 * 2) {
            FUN_030ec044(&local_78,(int)local_70 << 1);
          }
          uVar8 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
          uVar1 = (int)lVar5 * -0x61c8864f;
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
          uVar8 = (int)local_70 - 1U & (uVar1 + (uVar1 >> 2) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8);
          plVar4 = (long *)(local_78 + (long)(int)uVar8 * 8);
          if (*plVar4 == -1) {
            iVar3 = 1;
          }
          else if (*plVar4 == lVar5) {
            iVar3 = 0;
          }
          else {
            do {
              uVar8 = uVar8 + 1 & (int)local_70 - 1U;
              lVar7 = *(long *)(local_78 + (long)(int)uVar8 * 8);
              if (lVar7 == -1) {
                iVar3 = 1;
                goto LAB_030eb804;
              }
            } while (lVar7 != lVar5);
            iVar3 = 0;
LAB_030eb804:
            plVar4 = (long *)(local_78 + (long)(int)uVar8 * 8);
          }
          local_68 = local_68 + iVar3;
          *plVar4 = lVar5;
        }
      }
      uVar2 = local_70;
      piVar6 = (int *)(local_f0 + 0x30 + (ulong)(uVar12 + 1) * 0x68);
      do {
        uVar12 = uVar12 + 1;
        if (local_e8 <= uVar12) {
          uVar12 = 0xffffffff;
          break;
        }
        iVar3 = *piVar6;
        piVar6 = piVar6 + 0x1a;
      } while (iVar3 == 0x7fffffff);
    } while (uVar12 != local_cc);
    uVar12 = local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < (long)uVar2) && (local_78 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                (PTR_PTR_0434a090,local_78,(ulong)(uVar12 & 0x3fffffff) << 3);
    }
  }
  lVar5 = *(long *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(lVar5 + 0x4e8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x4e8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)*(undefined8 *)(lVar5 + 0x4e8) + (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(lVar5 + 0x4e0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x4e0) >> 0x20) +
                (float)((ulong)uVar13 >> 0x20),(float)*(undefined8 *)(lVar5 + 0x4e0) + (float)uVar13
               );
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(lVar5 + 0x4f8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x4f8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)*(undefined8 *)(lVar5 + 0x4f8) + (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(lVar5 + 0x4f0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x4f0) >> 0x20) +
                (float)((ulong)uVar13 >> 0x20),(float)*(undefined8 *)(lVar5 + 0x4f0) + (float)uVar13
               );
  plVar4 = *(long **)(*(long *)(param_1 + 0x28) + 0x4b0);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar10);
  FUN_03103cdc(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x498),puVar10);
  FUN_030ebf14(*(long *)(param_1 + 0x28) + 0x6a8,*(long *)(param_1 + 0x28),puVar10);
  if (lVar9 != 0) {
    FUN_032d5b34(lVar9,&DAT_0390f40e);
  }
  return;
}


