/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006921d8; name: FUN_006921d8
 */


byte * FUN_006921d8(long param_1,byte *param_2,ulong *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  byte *local_48;
  
  local_48 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar7 & 1) == 0) {
    do {
      bVar4 = *local_48;
      auVar11[8] = bVar4;
      auVar11._0_8_ = local_48 + 1;
      auVar11._9_3_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = local_48[1];
        iVar6 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar11 = FUN_00323230(local_48,iVar6);
          if (auVar11._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar11._8_4_ = iVar6;
          auVar11._0_8_ = local_48 + 2;
        }
      }
      uVar2 = auVar11._8_4_;
      local_48 = auVar11._0_8_;
      if (uVar2 == 10) {
        local_48 = local_48 + -1;
        do {
          local_48 = local_48 + 1;
          piVar9 = *(int **)(param_1 + 0x20);
          if (piVar9 == (int *)0x0) {
            iVar6 = *(int *)(param_1 + 0x1c);
LAB_00692314:
            FUN_0032bcac(param_1 + 0x10,iVar6 + 1);
            piVar9 = *(int **)(param_1 + 0x20);
            iVar6 = *piVar9;
LAB_00692328:
            *piVar9 = iVar6 + 1;
            uVar10 = FUN_002e17cc(*(undefined8 *)(param_1 + 0x10));
            iVar6 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar6 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8 + 8) = uVar10;
            uVar7 = (ulong)*local_48;
            if (-1 < (char)*local_48) goto LAB_00692364;
LAB_006922e8:
            auVar12 = FUN_003232c0(local_48,uVar7);
            if (auVar12._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar5 = *(int *)(param_1 + 0x18);
            iVar6 = *piVar9;
            if (iVar6 <= iVar5) {
              if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_00692314;
              goto LAB_00692328;
            }
            *(int *)(param_1 + 0x18) = iVar5 + 1;
            uVar10 = *(undefined8 *)(piVar9 + (long)iVar5 * 2 + 2);
            uVar7 = (ulong)*local_48;
            if ((char)*local_48 < '\0') goto LAB_006922e8;
LAB_00692364:
            auVar12._8_8_ = uVar7;
            auVar12._0_8_ = local_48 + 1;
          }
          iVar6 = FUN_0031e1b4(param_3,auVar12._0_8_,auVar12._8_8_);
          uVar7 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          local_48 = (byte *)FUN_002dee80(uVar10,auVar12._0_8_,param_3);
          if (local_48 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar2 = *(int *)((long)param_3 + 0x1c) + iVar6;
          *(uint *)((long)param_3 + 0x1c) = uVar2;
          pbVar1 = (byte *)(param_3[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f));
          *param_3 = (ulong)pbVar1;
        } while ((local_48 < pbVar1) && (*local_48 == 10));
      }
      else {
        if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar2 - 1;
          return local_48;
        }
        uVar7 = *(ulong *)(param_1 + 8);
        if ((uVar7 & 1) == 0) {
          lVar8 = FUN_0033aecc((ulong *)(param_1 + 8));
        }
        else {
          lVar8 = (uVar7 & 0xfffffffffffffffe) + 8;
        }
        local_48 = (byte *)FUN_00323c60(uVar2,lVar8,local_48,param_3);
        if (local_48 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar7 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  return local_48;
}


