/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033888b4; name: FUN_033888b4
 */


void FUN_033888b4(int *param_1,ulong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [336];
  int local_54;
  
  uVar5 = FUN_03384ab0(param_2);
  if (uVar5 >> 0x1f == 0) {
    if ((byte)param_2[3] != 0) goto LAB_033888f8;
    if (-1 < *param_1) {
      iVar10 = (int)uVar5;
      if ((long)(param_2[1] - *param_2) / 5 < (long)iVar10) {
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_03388a14;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_1b0,&DAT_044508b0,1);
          lVar6 = FUN_03326338(auStack_1b0,&DAT_038ac0bd,&DAT_0436ec78,
                               "numHashes > rb.remaining() / 5");
          uVar9 = 0x91d;
LAB_03388a08:
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = uVar9;
          FUN_033269dc(auStack_1b0);
          goto LAB_03388a14;
        }
        FUN_03326a7c(auStack_1b0,&DAT_044508b0,1);
        lVar6 = FUN_03326338(auStack_1b0,&DAT_038ac0bd,&DAT_0436ec78,
                             "numHashes > rb.remaining() / 5");
        uVar9 = 0x91d;
LAB_03388b08:
        *(char **)(lVar6 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar6 + 0x40) = uVar9;
        FUN_03326adc(auStack_1b0);
LAB_03388a14:
        *param_1 = -0x7ffbfe00;
        return;
      }
      if ((param_1[0x4e] == 2) && ((int)(param_1[0x5f] & 0x3fffffffU) < iVar10)) {
        uVar9 = FUN_03388e24(PTR_PTR_0434a080,uVar5 & 0xffffffff,*(undefined8 *)(param_1 + 0x5c),
                             param_1[0x5e],param_1 + 0x5f);
        *(undefined8 *)(param_1 + 0x5c) = uVar9;
      }
      puVar4 = PTR_PTR_0434a080;
      if (iVar10 < 1) {
        return;
      }
      while( true ) {
        uVar7 = FUN_03384ab0(param_2);
        if (uVar7 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) break;
        local_54 = *(int *)*param_2;
        *param_2 = (ulong)piVar1;
        if ((char)param_2[3] != '\0') goto LAB_03388c14;
        if (*param_1 < 0) goto LAB_03388c20;
        iVar10 = (int)uVar7;
        if ((iVar10 < 1) || (param_1[0x1a] <= iVar10)) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_03388a14;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1b0,&DAT_044508b0,1);
            lVar6 = FUN_03326338(auStack_1b0,&DAT_038ac0bd,&DAT_0436ec88,
                                 "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
            uVar9 = 0x92a;
            goto LAB_03388a08;
          }
          FUN_03326a7c(auStack_1b0,&DAT_044508b0,1);
          lVar6 = FUN_03326338(auStack_1b0,&DAT_038ac0bd,&DAT_0436ec88,
                               "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
          uVar9 = 0x92a;
          goto LAB_03388b08;
        }
        lVar11 = (long)iVar10;
        lVar6 = FUN_03388ff4(param_3,*(undefined8 *)
                                      (*(long *)(param_1 + 0x18) +
                                      (-(uVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                                      (uVar7 & 0xffffffff) << 3)));
        if (lVar6 == 0) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_03388a14;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1b0,&DAT_044508b0,1);
            local_1b8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar11 * 8);
            lVar6 = FUN_03326338(auStack_1b0,"Type {} with hash {:x} does not match a native type",
                                 &DAT_0436ec98,&local_1b8,&local_54);
            uVar9 = 0x92d;
            goto LAB_03388a08;
          }
          FUN_03326a7c(auStack_1b0,&DAT_044508b0,1);
          local_1c0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar11 * 8);
          lVar6 = FUN_03326338(auStack_1b0,"Type {} with hash {:x} does not match a native type",
                               &DAT_0436ec98,&local_1c0,&local_54);
          uVar9 = 0x92d;
          goto LAB_03388b08;
        }
        *(long *)(*(long *)(param_1 + 4) + lVar11 * 8) = lVar6;
        if (param_1[0x4e] == 2) {
          iVar8 = param_1[0x5e];
          lVar6 = *(long *)(param_1 + 0x5c);
          iVar2 = iVar8 + 1;
          if ((int)(param_1[0x5f] & 0x3fffffffU) <= iVar8) {
            lVar6 = FUN_03388e24(puVar4,iVar2,lVar6,iVar8,param_1 + 0x5f);
            iVar8 = param_1[0x5e];
            *(long *)(param_1 + 0x5c) = lVar6;
          }
          piVar1 = (int *)(lVar6 + (long)iVar8 * 8);
          *piVar1 = iVar10;
          piVar1[1] = local_54;
          param_1[0x5e] = iVar2;
        }
        uVar3 = (int)uVar5 - 1;
        uVar5 = (ulong)uVar3;
        if (uVar3 == 0) {
          return;
        }
      }
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
      local_54 = 0;
LAB_03388c14:
      *param_1 = -0x7ffbfe00;
LAB_03388c20:
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') {
          return;
        }
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_1b0,&DAT_044508b0,1);
        lVar6 = FUN_03326338(auStack_1b0,"Error in input stream.",PTR_DAT_04372528);
        uVar9 = 0x929;
        goto LAB_03388954;
      }
      FUN_03326a7c(auStack_1b0,&DAT_044508b0,1);
      lVar6 = FUN_03326338(auStack_1b0,"Error in input stream.",PTR_DAT_04372528);
      uVar9 = 0x929;
      goto LAB_03388a60;
    }
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_033888f8:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_1b0,&DAT_044508b0,1);
    lVar6 = FUN_03326338(auStack_1b0,"Error in input stream.",PTR_DAT_04372528);
    uVar9 = 0x91b;
LAB_03388954:
    *(char **)(lVar6 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar6 + 0x40) = uVar9;
    FUN_033269dc(auStack_1b0);
    return;
  }
  FUN_03326a7c(auStack_1b0,&DAT_044508b0,1);
  lVar6 = FUN_03326338(auStack_1b0,"Error in input stream.",PTR_DAT_04372528);
  uVar9 = 0x91b;
LAB_03388a60:
  *(char **)(lVar6 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar6 + 0x40) = uVar9;
  FUN_03326adc(auStack_1b0);
  return;
}


