/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339ef90; name: FUN_0339ef90
 */


undefined8 FUN_0339ef90(long *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long local_208;
  undefined8 local_200;
  long lStack_1f8;
  ulong local_1f0;
  long local_b0;
  long lStack_a8;
  ulong local_a0;
  long local_98;
  undefined8 local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  long local_58;
  
  local_78 = -0x8000000000000000;
  uStack_70 = DAT_0444ab10;
  local_68 = 0;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  local_88 = &PTR_LAB_04370508;
  local_80 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  puVar5 = PTR_PTR_0434a080;
  if (0 < (int)local_90) {
    lVar12 = 0;
    uVar13 = 0x80040200;
    iVar6 = (int)local_90;
    do {
      if (*(char *)(local_98 + lVar12 * 0x18 + 0x10) == '\x02') {
        puVar10 = (undefined8 *)(local_98 + lVar12 * 0x18);
        local_200 = *puVar10;
        lStack_1f8 = puVar10[1];
        if (lStack_1f8 == 0) {
          local_1f0 = 0;
        }
        else {
          local_1f0 = FUN_032e3508();
          if ((local_1f0 & 1) != 0) {
            FUN_032e0c28(local_1f0 & 0xfffffffffffffffe);
          }
        }
        FUN_03307230(&local_b0,param_2,&local_200,&local_88);
        if ((local_1f0 & 1) == 0) {
LAB_0339f130:
          if (local_b0 != 0) goto LAB_0339f138;
LAB_0339f2e4:
          if ((1 < DAT_04450e08) || (uVar9 = FUN_03327170(), (uVar9 & 1) != 0)) {
            uVar9 = FUN_03327170();
            if ((uVar9 & 1) == 0) {
              FUN_03326994(&local_200,&DAT_04450db8,2);
              lVar14 = *(long *)(local_98 + lVar12 * 0x18 + 8);
              if ((lVar14 == 0) || (uVar9 = FUN_032e3508(lVar14), (uVar9 & 1) == 0)) {
                local_58 = lVar14;
                lVar14 = FUN_03326338(&local_200,"Failed to clone note of type \'{}\'",
                                      PTR_DAT_043892a0,&local_58);
                *(char **)(lVar14 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
                *(undefined8 *)(lVar14 + 0x40) = 0x6a;
              }
              else {
                plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
                FUN_032e0c28(plVar7);
                local_58 = lVar14;
                lVar14 = FUN_03326338(&local_200,"Failed to clone note of type \'{}\'",
                                      PTR_DAT_043892a0,&local_58);
                *(char **)(lVar14 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
                plVar11 = plVar7 + 1;
                *(undefined8 *)(lVar14 + 0x40) = 0x6a;
                do {
                  lVar14 = *plVar11;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar3) {
                    *(int *)plVar11 = (int)lVar14 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
                  (**(code **)(*plVar7 + 8))(plVar7);
                }
              }
              FUN_033269dc(&local_200);
            }
            else {
              FUN_03326a7c(&local_200,&DAT_04450db8,2);
              lVar14 = *(long *)(local_98 + lVar12 * 0x18 + 8);
              if ((lVar14 == 0) || (uVar9 = FUN_032e3508(lVar14), (uVar9 & 1) == 0)) {
                local_208 = lVar14;
                lVar14 = FUN_03326338(&local_200,"Failed to clone note of type \'{}\'",
                                      PTR_DAT_043892a0,&local_208);
                *(char **)(lVar14 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
                *(undefined8 *)(lVar14 + 0x40) = 0x6a;
              }
              else {
                plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
                FUN_032e0c28(plVar7);
                local_208 = lVar14;
                lVar14 = FUN_03326338(&local_200,"Failed to clone note of type \'{}\'",
                                      PTR_DAT_043892a0,&local_208);
                *(char **)(lVar14 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
                plVar11 = plVar7 + 1;
                *(undefined8 *)(lVar14 + 0x40) = 0x6a;
                do {
                  lVar14 = *plVar11;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar3) {
                    *(int *)plVar11 = (int)lVar14 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
                  (**(code **)(*plVar7 + 8))(plVar7);
                }
              }
              FUN_03326adc(&local_200);
            }
          }
          bVar3 = true;
          if ((local_a0 & 1) != 0) goto LAB_0339f384;
LAB_0339f234:
          if (bVar3) goto LAB_0339f034;
        }
        else {
          plVar7 = (long *)(local_1f0 & 0xfffffffffffffffe);
          plVar11 = plVar7 + 1;
          do {
            lVar14 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *(int *)plVar11 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 == (long *)0x0) || ((int)lVar14 != 1)) goto LAB_0339f130;
          (**(code **)(*plVar7 + 8))();
          if (local_b0 == 0) goto LAB_0339f2e4;
LAB_0339f138:
          if (*(char *)(local_98 + lVar12 * 0x18 + 0x10) == '\x02') {
            iVar6 = *(int *)(local_98 + lVar12 * 0x18 + 0x14);
          }
          else {
            iVar6 = 0;
          }
          if (iVar6 < (int)local_90) {
            plVar11 = (long *)(local_98 + (long)iVar6 * 0x18);
            lVar14 = *plVar11;
            if (plVar11[1] == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_032e3508();
              if ((uVar9 & 1) != 0) {
                FUN_032e0c28(uVar9 & 0xfffffffffffffffe);
              }
            }
          }
          else {
            lVar14 = 0;
            uVar9 = 0;
          }
          local_200 = 0;
          lStack_1f8 = -0x8000000000000000;
          local_58 = lVar14;
          iVar6 = FUN_033a0828(param_3,&local_58,&local_200);
          lVar16 = *param_3 + (long)iVar6 * 0x18;
          lVar14 = *(long *)(lVar16 + 8);
          piVar15 = (int *)(lVar16 + 0x10);
          iVar8 = *piVar15;
          iVar6 = iVar8 + 1;
          if ((int)(*(uint *)(lVar16 + 0x14) & 0x3fffffff) <= iVar8) {
            lVar14 = FUN_032b7720(puVar5,iVar6);
            *(long *)(lVar16 + 8) = lVar14;
            iVar8 = *piVar15;
          }
          plVar11 = (long *)(lVar14 + (long)iVar8 * 0x18);
          *plVar11 = local_b0;
          plVar11[1] = lStack_a8;
          plVar11[2] = local_a0;
          if ((local_a0 & 1) == 0) {
            *piVar15 = iVar6;
          }
          else {
            FUN_032e0c28(local_a0 & 0xfffffffffffffffe);
            *piVar15 = iVar6;
          }
          if ((uVar9 & 1) != 0) {
            plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
            plVar11 = plVar7 + 1;
            do {
              lVar14 = *plVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *(int *)plVar11 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar7 + 8))();
            }
          }
          bVar3 = false;
          if ((local_a0 & 1) == 0) goto LAB_0339f234;
LAB_0339f384:
          plVar7 = (long *)(local_a0 & 0xfffffffffffffffe);
          plVar11 = plVar7 + 1;
          do {
            lVar14 = *plVar11;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 == (long *)0x0) || ((int)lVar14 != 1)) goto LAB_0339f234;
          (**(code **)(*plVar7 + 8))();
          if (bVar3) goto LAB_0339f034;
        }
        iVar6 = (int)local_90;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar6);
  }
  uVar13 = 0;
LAB_0339f034:
  lVar12 = local_90;
  uVar9 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_98 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_98,(uVar9 & 0x3fffffff) * 0x18);
  }
  lVar12 = local_80;
  local_88 = &PTR_LAB_0434e538;
  if ((int)local_78 != 0) {
    lVar14 = local_80 + (long)(int)local_78 * 0x18;
    do {
      while( true ) {
        puVar1 = (ulong *)(lVar14 + -8);
        lVar14 = lVar14 + -0x18;
        if ((*puVar1 & 1) != 0) break;
LAB_0339f0c0:
        if (lVar14 == lVar12) goto LAB_0339f078;
      }
      plVar7 = (long *)(*puVar1 & 0xfffffffffffffffe);
      plVar11 = plVar7 + 1;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = (int)lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 == (long *)0x0) || ((int)lVar16 != 1)) goto LAB_0339f0c0;
      (**(code **)(*plVar7 + 8))();
    } while (lVar14 != lVar12);
  }
LAB_0339f078:
  lVar12 = local_78;
  uVar9 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_80 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_80,(uVar9 & 0x3fffffff) * 0x18);
  }
  return uVar13;
}


