/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb3460; name: FUN_01eb3460
 */


uint FUN_01eb3460(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [48];
  ulong local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar6 = PTR_DAT_0437a668;
  puVar5 = PTR_DAT_0437a660;
  puVar4 = PTR_DAT_043794d0;
  local_ac = 0;
  local_d0 = 0x7f7fffee;
  local_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uVar9 = 0;
  local_c8 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_c0 = 0xffffff;
  local_b4 = 0xf;
  local_b0 = 0xffff;
  local_90 = 0xffffffff;
  local_98 = 0xffffff;
  local_8c = 0xf;
  local_88 = 0xffff;
  local_84 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  local_80 = 0;
  uStack_78 = 0;
  lVar14 = *(long *)(param_1 + 0x210);
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0xc) == 0) {
LAB_01eb3678:
      uVar9 = 0;
    }
    else {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar11 = *(int *)(lVar14 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar14 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar5 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_01eb3678;
        while (puVar16 != (undefined8 *)puVar5) {
          puVar16 = (undefined8 *)*puVar16;
          uVar9 = 0;
          if (puVar16 == (undefined8 *)0x0) goto joined_r0x01eb3680;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01eb3554;
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            uVar8 = FUN_01e4311c();
            fVar17 = *(float *)(param_1 + 0x694);
            fVar18 = (float)DAT_0388a140 * fVar17;
            fVar19 = (float)((ulong)DAT_0388a140 >> 0x20) * fVar17;
            fVar20 = (float)DAT_0388a148 * fVar17;
            fVar17 = (float)((ulong)DAT_0388a148 >> 0x20) * fVar17;
            fVar21 = (float)*param_2;
            fVar22 = (float)((ulong)*param_2 >> 0x20);
            fVar23 = (float)param_2[1];
            fVar24 = (float)((ulong)param_2[1] >> 0x20);
            uStack_148 = CONCAT44(fVar24 - fVar17,fVar23 - fVar20);
            local_150 = CONCAT44(fVar22 - fVar19,fVar21 - fVar18);
            uStack_138 = CONCAT44(fVar24 + fVar17,fVar23 + fVar20);
            uStack_140 = CONCAT44(fVar22 + fVar19,fVar21 + fVar18);
            if (((*PTR_DAT_0437a648 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar15 = *(long *)PTR_DAT_0437a650;
            *(long *)PTR_DAT_0437a658 = lVar15;
            uVar9 = FUN_02bf3d70(*(undefined8 *)(lVar15 + 0x230),&uStack_140,&local_150,uVar8,
                                 auStack_130,1);
            lVar15 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
            if ((local_100 & 1) == 0) goto LAB_01eb34f4;
            goto LAB_01eb3684;
          }
          goto LAB_01eb3678;
        }
        ClearExclusiveLocal();
LAB_01eb3554:
        uVar9 = 0;
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
  }
joined_r0x01eb3680:
  if ((local_100 & 1) != 0) {
LAB_01eb3684:
    uVar7 = local_100;
    lVar14 = tpidr_el0;
    lVar15 = *(long *)(lVar14 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar15;
    }
    plVar12 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
    puVar16 = (undefined8 *)(uVar7 - 0x11);
    *puVar16 = 0;
    (**(code **)(*plVar12 + 0x18))(plVar12,puVar16,(long)*(int *)(uVar7 - 9) + 0x10);
  }
LAB_01eb34f4:
  return uVar9 & 1;
}


