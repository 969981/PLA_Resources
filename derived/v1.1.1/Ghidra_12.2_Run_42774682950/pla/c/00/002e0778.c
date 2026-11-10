/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e0778; name: FUN_002e0778
 */


byte * FUN_002e0778(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auVar10 [12];
  byte *local_38;
  
  local_38 = param_2;
  uVar5 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar5 & 1) == 0) {
    do {
      bVar2 = *local_38;
      auVar10[8] = bVar2;
      auVar10._0_8_ = local_38 + 1;
      auVar10._9_3_ = 0;
      if ((char)bVar2 < '\0') {
        bVar1 = local_38[1];
        iVar9 = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        if ((char)bVar1 < '\0') {
          auVar10 = FUN_00323230(local_38,iVar9);
          if (auVar10._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar10._8_4_ = iVar9;
          auVar10._0_8_ = local_38 + 2;
        }
      }
      uVar4 = auVar10._8_4_;
      local_38 = auVar10._0_8_;
      if (uVar4 == 10) {
        local_38 = local_38 + -1;
        do {
          local_38 = local_38 + 1;
          piVar8 = *(int **)(param_1 + 0x20);
          if (piVar8 == (int *)0x0) {
            iVar9 = *(int *)(param_1 + 0x1c);
LAB_002e08b8:
            FUN_0032bcac(param_1 + 0x10,iVar9 + 1);
            piVar8 = *(int **)(param_1 + 0x20);
            iVar9 = *piVar8;
LAB_002e08cc:
            *piVar8 = iVar9 + 1;
            uVar6 = FUN_002e17cc(*(undefined8 *)(param_1 + 0x10));
            iVar9 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar9 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 8 + 8) = uVar6;
            local_38 = (byte *)FUN_002e0964(param_3,uVar6,local_38);
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18);
            iVar9 = *piVar8;
            if (iVar9 <= iVar3) {
              if (iVar9 == *(int *)(param_1 + 0x1c)) goto LAB_002e08b8;
              goto LAB_002e08cc;
            }
            *(int *)(param_1 + 0x18) = iVar3 + 1;
            local_38 = (byte *)FUN_002e0964(param_3,*(undefined8 *)(piVar8 + (long)iVar3 * 2 + 2));
          }
          if (local_38 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((local_38 < (byte *)*param_3) && (*local_38 == 10));
      }
      else {
        if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar4 - 1;
          return local_38;
        }
        uVar5 = *(ulong *)(param_1 + 8);
        if ((uVar5 & 1) == 0) {
          lVar7 = FUN_0033aecc((ulong *)(param_1 + 8));
        }
        else {
          lVar7 = (uVar5 & 0xfffffffffffffffe) + 8;
        }
        local_38 = (byte *)FUN_00323c60(uVar4,lVar7,local_38,param_3);
        if (local_38 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar5 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar5 & 1) == 0);
  }
  return local_38;
}


