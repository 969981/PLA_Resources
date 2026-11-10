/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033819c0; name: FUN_033819c0
 */


void FUN_033819c0(undefined4 *param_1,ulong *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_1a0 [336];
  
  puVar2 = PTR_PTR_0434a080;
  if (param_1[0x4e] == 2) {
    puVar5 = (undefined8 *)*param_2;
    puVar7 = (undefined8 *)param_2[1];
    if (((int)puVar7 - (int)puVar5 & 7U) == 0) {
      if (puVar7 == puVar5) {
        return;
      }
      do {
        if (puVar7 < puVar5 + 1) {
          uVar6 = 0;
          *param_2 = (ulong)puVar7;
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        }
        else {
          uVar6 = *puVar5;
          *param_2 = (ulong)(puVar5 + 1);
        }
        iVar4 = param_1[0x4c];
        lVar3 = *(long *)(param_1 + 0x4a);
        iVar1 = iVar4 + 1;
        if ((int)(param_1[0x4d] & 0x3fffffff) <= iVar4) {
          lVar3 = FUN_03153020(puVar2,iVar1,lVar3,iVar4,param_1 + 0x4d);
          iVar4 = param_1[0x4c];
          *(long *)(param_1 + 0x4a) = lVar3;
        }
        *(undefined8 *)(lVar3 + (long)iVar4 * 8) = uVar6;
        param_1[0x4c] = iVar1;
        puVar5 = (undefined8 *)*param_2;
        puVar7 = (undefined8 *)param_2[1];
      } while (puVar7 != puVar5);
      return;
    }
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_03381ab0;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_1a0,&DAT_044508b0,1);
      lVar3 = FUN_03326338(auStack_1a0,"Type compendium ID has the wrong size.",PTR_DAT_04372528);
      uVar6 = 0x838;
LAB_03381aa4:
      *(char **)(lVar3 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x40) = uVar6;
      FUN_033269dc(auStack_1a0);
      goto LAB_03381ab0;
    }
    FUN_03326a7c(auStack_1a0,&DAT_044508b0,1);
    lVar3 = FUN_03326338(auStack_1a0,"Type compendium ID has the wrong size.",PTR_DAT_04372528);
    uVar6 = 0x838;
  }
  else {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_03381ab0;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_1a0,&DAT_044508b0,1);
      lVar3 = FUN_03326338(auStack_1a0,"Unexpected compendium ID section (TCID).",PTR_DAT_04372528);
      uVar6 = 0x837;
      goto LAB_03381aa4;
    }
    FUN_03326a7c(auStack_1a0,&DAT_044508b0,1);
    lVar3 = FUN_03326338(auStack_1a0,"Unexpected compendium ID section (TCID).",PTR_DAT_04372528);
    uVar6 = 0x837;
  }
  *(char **)(lVar3 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  FUN_03326adc(auStack_1a0);
LAB_03381ab0:
  *param_1 = 0x80040200;
  return;
}


