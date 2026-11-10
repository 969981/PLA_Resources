/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033812c4; name: FUN_033812c4
 */


void FUN_033812c4(int *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_1a0;
  long local_198 [3];
  undefined1 auStack_180 [336];
  
  if (param_1[0x4e] == 1) {
    plVar3 = (long *)*param_2;
    plVar4 = (long *)param_2[1];
    if (7 < (long)plVar4 - (long)plVar3) {
      plVar1 = plVar3 + 1;
      if (plVar4 < plVar1) {
        *param_2 = (ulong)plVar4;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        local_198[2] = 0;
LAB_03381408:
        *param_1 = -0x7ffbfe00;
      }
      else {
        local_198[2] = *plVar3;
        *param_2 = (ulong)plVar1;
        if ((char)param_2[3] != '\0') goto LAB_03381408;
        if (-1 < *param_1) {
          plVar2 = (long *)(param_1 + 0x4a);
          if (0 < param_1[0x4c]) {
            uVar9 = 0;
            do {
              if (*(long *)(*plVar2 + uVar9 * 8) == local_198[2]) {
                if ((int)uVar9 != -1) {
                  if ((param_3 & 1) == 0) {
                    return;
                  }
                  if ((long)plVar4 - (long)plVar1 != 0x10) {
                    if (DAT_04450900 == '\0') {
                      if (DAT_04350668 == '\0') goto LAB_033813c8;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(auStack_180,&DAT_044508b0,1);
                      lVar6 = FUN_03326338(auStack_180,"COMPENDIUM_REFERENCE wrong size",
                                           PTR_DAT_04372528);
                      uVar8 = 0x84e;
                      goto LAB_033813bc;
                    }
                    FUN_03326a7c(auStack_180,&DAT_044508b0,1);
                    lVar6 = FUN_03326338(auStack_180,"COMPENDIUM_REFERENCE wrong size",
                                         PTR_DAT_04372528);
                    uVar8 = 0x84e;
                    goto LAB_033814b0;
                  }
                  if (plVar4 < plVar3 + 3) {
                    *param_2 = (ulong)plVar4;
                    *(undefined1 *)(param_2 + 3) = 1;
                    lVar6 = *plVar1;
                  }
                  else {
                    *param_2 = (ulong)(plVar3 + 3);
                    lVar6 = *plVar1;
                  }
                  if ((lVar6 == 0) && (plVar3[2] == 0)) {
                    lVar6 = *(long *)(param_1 + 4);
                    iVar5 = param_1[6];
                    *plVar1 = lVar6;
                    plVar3[2] = lVar6 + (long)iVar5 * 8;
                    return;
                  }
                  if (DAT_04450900 == '\0') {
                    if (DAT_04350668 == '\0') goto LAB_033813c8;
                  }
                  else if (DAT_04350668 == '\0') {
                    FUN_03326994(auStack_180,&DAT_044508b0,1);
                    lVar6 = FUN_03326338(auStack_180,"Buffer already inplace loaded",
                                         PTR_DAT_04372528);
                    uVar8 = 0x853;
                    goto LAB_033813bc;
                  }
                  FUN_03326a7c(auStack_180,&DAT_044508b0,1);
                  lVar6 = FUN_03326338(auStack_180,"Buffer already inplace loaded",PTR_DAT_04372528)
                  ;
                  uVar8 = 0x853;
                  goto LAB_033814b0;
                }
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((uint)param_1[0x4c] != uVar9);
          }
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') {
              return;
            }
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_180,&DAT_044508b0,1);
            lVar6 = FUN_03326338(auStack_180,
                                 "Compendium with signature {} needed to load ({} are loaded)",
                                 &DAT_0436ec60,local_198 + 2,plVar2);
            uVar8 = 0x848;
            goto LAB_03381464;
          }
          FUN_03326a7c(auStack_180,&DAT_044508b0,1);
          lVar6 = FUN_03326338(auStack_180,
                               "Compendium with signature {} needed to load ({} are loaded)",
                               &DAT_0436ec60,local_198 + 2,plVar2);
          uVar8 = 0x848;
          goto LAB_033815b0;
        }
      }
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') {
          return;
        }
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_180,&DAT_044508b0,1);
        lVar6 = FUN_03326338(auStack_180,"Error in input stream.",PTR_DAT_04372528);
        uVar8 = 0x845;
LAB_03381464:
        *(char **)(lVar6 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar6 + 0x40) = uVar8;
        FUN_033269dc(auStack_180);
        return;
      }
      FUN_03326a7c(auStack_180,&DAT_044508b0,1);
      lVar6 = FUN_03326338(auStack_180,"Error in input stream.",PTR_DAT_04372528);
      uVar8 = 0x845;
LAB_033815b0:
      *(char **)(lVar6 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x40) = uVar8;
      FUN_03326adc(auStack_180);
      return;
    }
    cVar7 = DAT_04350668;
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033813c8;
      cVar7 = '\x01';
    }
    if (cVar7 == '\0') {
      FUN_03326994();
      local_198[2] = param_2[1] - *param_2;
      local_198[1] = 8;
      lVar6 = FUN_03326338(auStack_180,"TCRF chunk is the wrong size ({}, expected at least {})",
                           &DAT_0436ec48,local_198 + 2,local_198 + 1);
      uVar8 = 0x843;
LAB_033813bc:
      *(char **)(lVar6 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x40) = uVar8;
      FUN_033269dc(auStack_180);
      goto LAB_033813c8;
    }
    FUN_03326a7c(auStack_180,&DAT_044508b0,1);
    local_198[0] = param_2[1] - *param_2;
    local_1a0 = 8;
    lVar6 = FUN_03326338(auStack_180,"TCRF chunk is the wrong size ({}, expected at least {})",
                         &DAT_0436ec48,local_198,&local_1a0);
    uVar8 = 0x843;
  }
  else {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033813c8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_180,&DAT_044508b0,1);
      lVar6 = FUN_03326338(auStack_180,"Encountered compendium reference, but no compendium loaded",
                           PTR_DAT_04372528);
      uVar8 = 0x842;
      goto LAB_033813bc;
    }
    FUN_03326a7c(auStack_180,&DAT_044508b0,1);
    lVar6 = FUN_03326338(auStack_180,"Encountered compendium reference, but no compendium loaded",
                         PTR_DAT_04372528);
    uVar8 = 0x842;
  }
LAB_033814b0:
  *(char **)(lVar6 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar6 + 0x40) = uVar8;
  FUN_03326adc(auStack_180);
LAB_033813c8:
  *param_1 = -0x7ffbfe00;
  return;
}


