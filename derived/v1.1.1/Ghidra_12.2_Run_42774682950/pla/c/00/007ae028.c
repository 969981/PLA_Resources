/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ae028; name: FUN_007ae028
 */


byte * FUN_007ae028(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  byte *local_38;
  
  local_38 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar7 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    do {
      bVar4 = *local_38;
      auVar10[8] = bVar4;
      auVar10._0_8_ = local_38 + 1;
      auVar10._9_3_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = local_38[1];
        iVar6 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar10 = FUN_00323230(local_38,iVar6);
          if (auVar10._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar10._8_4_ = iVar6;
          auVar10._0_8_ = local_38 + 2;
        }
      }
      uVar2 = auVar10._8_4_;
      local_38 = auVar10._0_8_;
      if (uVar2 == 10) {
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0) {
          puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar8 = (ulong *)*puVar8;
          }
          lVar9 = FUN_0030c720(puVar8);
          *(long *)(param_1 + 0x10) = lVar9;
          uVar7 = (ulong)*local_38;
          if (-1 < (char)*local_38) goto LAB_007ae138;
LAB_007ae168:
          auVar11 = FUN_003232c0(local_38,uVar7);
          if (auVar11._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          uVar7 = (ulong)*local_38;
          if ((char)*local_38 < '\0') goto LAB_007ae168;
LAB_007ae138:
          auVar11._8_8_ = uVar7;
          auVar11._0_8_ = local_38 + 1;
        }
        iVar6 = FUN_0031e1b4(param_3,auVar11._0_8_,auVar11._8_8_ & 0xffffffff);
        lVar5 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
        if ((((int)lVar5 < 1) ||
            (local_38 = (byte *)FUN_0030bfbc(lVar9,auVar11._0_8_,param_3), local_38 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar2 = *(int *)((long)param_3 + 0x1c) + iVar6;
        *(uint *)((long)param_3 + 0x1c) = uVar2;
        *param_3 = param_3[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f);
      }
      else {
        if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar2 - 1;
          return local_38;
        }
        if ((*puVar1 & 1) == 0) {
          lVar9 = FUN_0033aecc(puVar1);
        }
        else {
          lVar9 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        local_38 = (byte *)FUN_00323c60(uVar2,lVar9,local_38,param_3);
        if (local_38 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar7 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  return local_38;
}


