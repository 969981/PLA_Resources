/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028960c4; name: FUN_028960c4
 */


uint FUN_028960c4(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,int param_5,
                 undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 local_a0;
  uint local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x158));
  puVar5 = PTR_DAT_043831e8;
  if ((*param_4 == 0) || (*(int *)(*param_4 + 0xc) == 0)) {
    uVar15 = 0;
  }
  else {
    lVar10 = *param_4;
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_02896118:
      plVar14 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0xc);
      puVar11 = (undefined8 *)PTR_DAT_043831f0;
      iVar12 = *(int *)(lVar10 + 0xc);
      do {
        puVar13 = *(undefined8 **)(lVar10 + 0x10);
        if ((*puVar5 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(puVar5);
          puVar11 = (undefined8 *)PTR_DAT_043831f0;
          if (iVar7 != 0) {
            uVar9 = FUN_00fd7558();
            *(undefined8 *)PTR_DAT_043831f0 = uVar9;
            __cxa_guard_release(puVar5);
            puVar11 = (undefined8 *)PTR_DAT_043831f0;
          }
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_02896118;
        while (puVar13 != puVar11) {
          puVar13 = (undefined8 *)*puVar13;
          plVar14 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_0289611c;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar14 = (long *)0x0;
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar14 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar14 = (long *)0x0;
        iVar12 = iVar7;
      } while (iVar7 != 0);
    }
LAB_0289611c:
    if ((int)plVar14[0xd] == 2) {
      if ((ulong)(long)param_5 < (ulong)((plVar14[0x15] - plVar14[0x14] >> 3) * -0x3333333333333333)
         ) {
        plVar8 = *(long **)(*(long *)(plVar14[0x14] + (long)param_5 * 0x28 + 8) + 0xc0);
        local_88 = 0xffffffff;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_90 = PTR_DAT_04387f68 + 0x10;
        local_60 = *param_2;
        uStack_58 = param_2[1] & 0xffffffff;
        local_50 = *param_3;
        local_98 = 0xffffffff;
        local_a0 = 0x3f8000003f800000;
        uStack_48 = param_3[1] & 0xffffffff;
        uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_90,&local_a0);
        if ((uVar6 & 1) != 0) {
          fVar19 = (float)((ulong)local_a0 >> 0x20);
          fVar16 = (float)local_60 + ((float)local_50 - (float)local_60) * (float)local_a0;
          fVar17 = local_60._4_4_ + ((float)((ulong)local_50 >> 0x20) - local_60._4_4_) * fVar19;
          fVar18 = (float)uStack_58 + ((float)uStack_48 - (float)uStack_58) * (float)local_a0;
          fVar19 = uStack_58._4_4_ + ((float)(uStack_48 >> 0x20) - uStack_58._4_4_) * fVar19;
          auVar20._4_4_ = fVar17;
          auVar20._0_4_ = fVar16;
          auVar20._8_4_ = fVar18;
          auVar20._12_4_ = fVar19;
          auVar4._4_4_ = fVar17;
          auVar4._0_4_ = fVar16;
          auVar4._8_4_ = fVar18;
          auVar4._12_4_ = fVar19;
          auVar20 = NEON_ext(auVar20,auVar4,8,1);
          param_6[1] = (ulong)auVar20._0_4_;
          *param_6 = CONCAT44(fVar17,fVar16);
          *(uint *)(param_6 + 2) = local_98 >> 0x16;
          *(uint *)((long)param_6 + 0x14) = local_98 & 0x3fffff;
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar15 = 0;
      uVar6 = 0;
      if (plVar14 == (long *)0x0) goto LAB_02896244;
    }
    uVar15 = uVar6;
    lVar10 = plVar14[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
LAB_02896244:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158));
  return uVar15 & 1;
}


