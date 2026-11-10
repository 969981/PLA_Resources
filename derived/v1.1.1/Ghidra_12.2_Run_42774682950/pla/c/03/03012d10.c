/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012d10; name: FUN_03012d10
 */


void FUN_03012d10(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  MutexType *pMVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  ulong local_b0 [3];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_042c5f78;
  param_1[1] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar2 = tpidr_el0;
  lVar12 = *(long *)(lVar2 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar12;
  }
  plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  pMVar9 = (MutexType *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,0);
  nn::os::InitializeMutex(pMVar9,true,0);
  param_1[8] = pMVar9;
  uVar1 = *(undefined4 *)(param_1 + 10);
  iVar7 = FUN_03013d54(param_1 + 9,0,param_2,0x10);
  if (-1 < iVar7) {
    FUN_03014054(param_1 + 3,param_1,uVar1);
  }
  uStack_78 = 0x40a00000;
  uStack_88 = 0x3f8000007f7fffee;
  local_70 = 0;
  uStack_68 = 0;
  local_90 = 0x3d4ccccd00000201;
  local_80 = 0x3f800000;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 1;
  local_98 = 0x3f003f000000;
  FUN_030131f8(param_1,local_b0);
  puVar6 = PTR_PTR_0434a080;
  uStack_78 = 0x40a00000;
  uStack_88 = 0x3f8000007f7fffee;
  local_70 = 0;
  uStack_68 = 0;
  local_90 = 0x3d4ccccd00000201;
  local_80 = 0x3f800000;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 1;
  local_98 = 0x3f003f000000;
  puVar10 = (undefined8 *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,0x2f,0);
  *puVar10 = puVar6;
  *(undefined4 *)(puVar10 + 1) = 0x1f;
  uVar4 = s__Preset__Trigger__broad_phase__03935608._8_8_;
  uVar11 = 0;
  puVar10[2] = s__Preset__Trigger__broad_phase__03935608._0_8_;
  *(ulong *)((long)puVar10 + 0x27) =
       CONCAT71(s__Preset__Trigger__broad_phase__03935608._24_7_,
                s__Preset__Trigger__broad_phase__03935608[0x17]);
  uVar3 = CONCAT17(s__Preset__Trigger__broad_phase__03935608[0x17],
                   s__Preset__Trigger__broad_phase__03935608._16_7_);
  iVar7 = 6;
  uVar13 = 0x80;
  uVar14 = 0x100;
  puVar10[3] = uVar4;
  puVar10[4] = uVar3;
  uVar15 = (ulong)(puVar10 + 2) | 1;
  do {
    fVar16 = (float)((uint)*(ushort *)(&DAT_03ab05f0 + (long)(int)uVar13 * 2) * 0x1000 + 0x3b800000)
    ;
    do {
      if (iVar7 < 0) {
        local_98._0_2_ = CONCAT11((char)uVar13 + (uVar13 < 0xff && fVar16 < 3.40282e+38),1);
        local_b0[0] = uVar15;
        FUN_030131f8(param_1,local_b0);
        lVar12 = *(long *)(lVar2 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar12;
        }
        plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
        *(undefined8 *)(uVar15 - 0x11) = 0;
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
        uStack_78 = 0x40a00000;
        uStack_88 = 0x3f8000007f7fffee;
        local_90 = 0x3d4ccccd00000201;
        local_80 = 0x3f800000;
        local_70 = 0;
        uStack_68 = 0;
        local_b0[0] = 0;
        local_b0[1] = 0;
        local_b0[2] = 1;
        local_98 = 0x3f003f000000;
        puVar10 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,0x30,0);
        *puVar10 = puVar6;
        *(undefined4 *)(puVar10 + 1) = 0x20;
        uVar3 = s__Preset__Trigger__narrow_phase__038c6319._8_8_;
        puVar10[2] = s__Preset__Trigger__narrow_phase__038c6319._0_8_;
        uVar5 = s__Preset__Trigger__narrow_phase__038c6319._24_8_;
        uVar4 = s__Preset__Trigger__narrow_phase__038c6319._16_8_;
        puVar10[3] = uVar3;
        puVar10[4] = uVar4;
        puVar10[5] = uVar5;
        uVar15 = (ulong)(puVar10 + 2) | 1;
        local_98 = CONCAT62(local_98._2_6_,2);
        local_b0[0] = uVar15;
        FUN_030131f8(param_1,local_b0);
        lVar12 = *(long *)(lVar2 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar12;
        }
        plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
        *(undefined8 *)(uVar15 - 0x11) = 0;
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
        uStack_78 = 0x40a00000;
        uStack_88 = 0x3f8000007f7fffee;
        local_90 = 0x3d4ccccd00000201;
        local_80 = 0x3f800000;
        local_70 = 0;
        uStack_68 = 0;
        local_b0[0] = 0;
        local_b0[1] = 0;
        local_b0[2] = 1;
        local_98 = 0x3f003f000000;
        puVar10 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,0x32,0);
        *puVar10 = puVar6;
        *(undefined4 *)(puVar10 + 1) = 0x22;
        uVar3 = s__Preset__Trigger__contact_solver_039a6aa1._8_8_;
        puVar10[2] = s__Preset__Trigger__contact_solver_039a6aa1._0_8_;
        uVar5 = s__Preset__Trigger__contact_solver_039a6aa1._24_8_;
        uVar4 = s__Preset__Trigger__contact_solver_039a6aa1._16_8_;
        puVar10[3] = uVar3;
        puVar10[4] = uVar4;
        puVar10[5] = uVar5;
        *(undefined2 *)(puVar10 + 6) = 0x29;
        uVar15 = (ulong)(puVar10 + 2) | 1;
        local_98 = CONCAT62(local_98._2_6_,3);
        local_b0[0] = uVar15;
        FUN_030131f8(param_1,local_b0);
        lVar12 = *(long *)(lVar2 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar12;
        }
        plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
        *(undefined8 *)(uVar15 - 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x03013154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
        return;
      }
      if (3.40282e+38 <= fVar16) {
        uVar14 = uVar13;
        uVar13 = uVar11;
      }
      uVar11 = uVar13;
      uVar13 = (int)(uVar11 + uVar14) >> 1;
      iVar7 = iVar7 + -1;
      fVar16 = 0.0;
    } while (uVar13 == 0);
  } while( true );
}


