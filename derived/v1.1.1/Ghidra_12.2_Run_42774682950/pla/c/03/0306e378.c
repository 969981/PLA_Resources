/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306e378; name: FUN_0306e378
 */


void FUN_0306e378(uint *param_1,uint param_2,long *param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((int)uVar6 != 0) {
    if (param_4 == 0) {
      uVar13 = 0;
      puVar1 = param_1 + 2;
      uVar14 = uVar6 & 0xffffffff;
      puVar2 = param_1;
      do {
        if ((uVar6 & 1) != 0) {
          puVar11 = param_1 + uVar13 * 0x42 + 1;
          uVar8 = *puVar11;
          if (0xf < (int)uVar8) {
            FUN_0331fefc(auStack_280,auStack_270,0x200);
            uVar7 = FUN_0332448c(auStack_280,"Too many modifiers registered to callback ");
            FUN_0332452c(uVar7,uVar13 & 0xffffffff);
            iVar5 = FUN_03320b30(0xf06edfe1,auStack_270,
                                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Dynamics/World/ModifierManager/hknpModifierManager.cpp"
                                 ,0x38);
            if (iVar5 != 0) {
              CallSupervisor(0x26);
            }
            FUN_0331ff7c(auStack_280);
            uVar8 = *puVar11;
          }
          *puVar11 = uVar8 + 1;
          if (0 < (int)uVar8) {
            uVar9 = (ulong)(int)uVar8;
            uVar10 = uVar9 - 1;
            uVar6 = uVar9 & 3;
            if (uVar6 != 0) {
              lVar12 = uVar9 << 4;
              do {
                puVar3 = (undefined8 *)((long)puVar2 + lVar12);
                lVar12 = lVar12 + -0x10;
                uVar9 = uVar9 - 1;
                uVar6 = uVar6 - 1;
                puVar3[1] = puVar3[-1];
                puVar3[2] = *puVar3;
              } while (uVar6 != 0);
            }
            if (2 < uVar10) {
              puVar11 = puVar1 + uVar9 * 4;
              do {
                uVar9 = uVar9 - 4;
                *(undefined8 *)puVar11 = *(undefined8 *)(puVar11 + -4);
                *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar11 + -2);
                uVar7 = *(undefined8 *)(puVar11 + -10);
                *(undefined8 *)(puVar11 + -4) = *(undefined8 *)(puVar11 + -8);
                *(undefined8 *)(puVar11 + -2) = *(undefined8 *)(puVar11 + -6);
                *(undefined8 *)(puVar11 + -10) = *(undefined8 *)(puVar11 + -0xe);
                *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -0xc);
                *(undefined8 *)(puVar11 + -6) = uVar7;
                *(undefined8 *)(puVar11 + -0xc) = *(undefined8 *)(puVar11 + -0x10);
                puVar11 = puVar11 + -0x10;
              } while (0 < (long)uVar9);
            }
            uVar8 = 0;
          }
          puVar11 = param_1 + uVar13 * 0x42;
          *puVar11 = *puVar11 | param_2;
          puVar11[(long)(int)uVar8 * 4 + 2] = param_2;
          *(long **)(puVar11 + (long)(int)uVar8 * 4 + 4) = param_3;
        }
        uVar14 = uVar14 >> 1;
        uVar13 = uVar13 + 1;
        puVar2 = puVar2 + 0x42;
        puVar1 = puVar1 + 0x42;
        uVar6 = uVar14;
      } while ((int)uVar14 != 0);
    }
    else {
      iVar5 = 0;
      uVar13 = uVar6;
      do {
        if ((uVar13 & 1) != 0) {
          uVar8 = param_1[1];
          if (0xf < (int)uVar8) {
            uVar6 = uVar6 & 0xffffffff;
            FUN_0331fefc(auStack_280,auStack_270,0x200);
            uVar7 = FUN_0332448c(auStack_280,"Too many modifiers registered to callback ");
            FUN_0332452c(uVar7,iVar5);
            iVar4 = FUN_03320b30(0xf06edfe1,auStack_270,
                                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Dynamics/World/ModifierManager/hknpModifierManager.cpp"
                                 ,0x38);
            if (iVar4 != 0) {
              CallSupervisor(0x26);
            }
            FUN_0331ff7c(auStack_280);
            uVar8 = param_1[1];
          }
          param_1[1] = uVar8 + 1;
          *param_1 = *param_1 | param_2;
          param_1[(long)(int)uVar8 * 4 + 2] = param_2;
          *(long **)(param_1 + (long)(int)uVar8 * 4 + 4) = param_3;
        }
        uVar13 = uVar6 >> 1;
        uVar6 = uVar13 & 0x7fffffff;
        param_1 = param_1 + 0x42;
        iVar5 = iVar5 + 1;
      } while ((int)uVar6 != 0);
    }
  }
  return;
}


