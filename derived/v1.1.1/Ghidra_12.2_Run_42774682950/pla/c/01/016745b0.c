/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016745b0; name: FUN_016745b0
 */


void FUN_016745b0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  byte *__s;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar23;
  uint *puVar22;
  int *piVar24;
  long lVar25;
  long *plVar26;
  long *local_b0;
  long local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_80);
  FUN_016b6208(&local_88,local_80);
  if (local_80 != (long *)0x0) {
    plVar26 = local_80 + 10;
    do {
      iVar9 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  FUN_0165dc38(&local_90,local_88);
  FUN_0165dc80(&local_98,local_88);
  local_a0 = FUN_01661c48(local_98,*param_2,1);
  lVar10 = FUN_01675fe0(param_1 + 0x80,&local_a0);
  if (lVar10 != 0) {
    piVar24 = *(int **)(lVar10 + 0x18);
    if ((6 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[3], uVar14 != 0)) {
      uVar16 = (ulong)*(uint *)((long)piVar24 + uVar14);
      piVar1 = (int *)((long)((long)piVar24 + uVar14) + uVar16);
      if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
        uVar20 = 0;
        lVar10 = (long)piVar24 + 0xd;
        do {
          puVar15 = (uint *)((long)piVar24 + uVar20 * 4 + uVar16 + uVar14 + 4);
          uVar21 = (ulong)*puVar15;
          piVar1 = (int *)((long)puVar15 + uVar21);
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
            local_a8 = 0;
          }
          else {
            uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
            local_a8 = 0;
            if (uVar17 != 0) {
              local_a8 = *(long *)((long)piVar1 + uVar17);
            }
          }
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 == 0)) break;
          uVar18 = (ulong)*(uint *)((long)piVar1 + uVar17);
          puVar15 = (uint *)((long)((long)piVar1 + uVar17) + uVar18);
          if (puVar15 == (uint *)0x0) break;
          if (local_a8 == 0x4e3742139786576f) {
            local_a8 = -0x92f8efad5659a21;
LAB_016749f8:
            bVar6 = true;
          }
          else {
            if (local_a8 == 0x1f9c392cefbb1b58) {
              local_a8 = 0x3739aa4dfe7142d8;
              goto LAB_016749f8;
            }
            bVar6 = false;
          }
          plVar26 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar26;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          plVar12 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0xb0,8);
          if (plVar12 == (long *)0x0) {
            (**(code **)(*plVar26 + 0xb8))(plVar26);
          }
          local_80 = local_98;
          if (local_98 != (long *)0x0) {
            lVar25 = local_98[0xb];
            if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar25 + 0x10) == 0) {
              uVar13 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
              *(undefined8 *)(lVar25 + 0x10) = uVar13;
            }
            piVar1 = (int *)(lVar25 + 0xc);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_00e8e310(plVar12,&local_a8,param_3,&local_80,param_2,0);
          if (local_80 != (long *)0x0) {
            lVar25 = local_80[0xb];
            piVar1 = (int *)(lVar25 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar25 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
          plVar12[3] = 0xb0;
          plVar12[1] = (long)plVar26;
          plVar12[2] = (long)plVar12;
          plVar12[4] = 8;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          if (plVar12 != (long *)0x0) {
            plVar26 = plVar12 + 10;
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar7) {
                *(int *)plVar26 = (int)*plVar26 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar2 = *puVar15;
          local_b0 = plVar12;
          if (uVar2 != 0) {
            lVar11 = lVar10 + uVar16 + uVar14 + uVar18 + uVar17 + uVar21;
            puVar22 = puVar15 + 1;
            do {
              puVar23 = puVar22 + 1;
              uVar3 = *puVar22;
              __s = (byte *)((long)puVar23 + (ulong)uVar3);
              local_70 = strlen((char *)__s);
              bVar4 = *__s;
              local_80 = (long *)&DAT_cbf29ce484222645;
              if (bVar4 != 0) {
                pbVar19 = (byte *)(lVar11 + (ulong)uVar3);
                do {
                  local_80 = (long *)(((ulong)local_80 ^ (ulong)bVar4) * 0x100000001b3);
                  bVar4 = *pbVar19;
                  pbVar19 = pbVar19 + 1;
                } while (bVar4 != 0);
              }
              local_68 = (long *)0x0;
              pbStack_78 = __s;
              FUN_01675a9c(plVar12 + 0xf,&local_80);
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              lVar11 = lVar11 + 4;
              puVar22 = puVar23;
            } while (puVar23 != puVar15 + 1 + uVar2);
          }
          if (bVar6) {
            uVar13 = FUN_01674bd4(param_1 + 0xe8,&local_a8);
            FUN_01674e10(uVar13,&local_b0);
          }
          else {
            FUN_01673aa8(local_90,&local_b0);
          }
          if (local_b0 != (long *)0x0) {
            plVar26 = local_b0 + 10;
            do {
              iVar9 = (int)*plVar26 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar6) {
                *(int *)plVar26 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*local_b0 + 0x10))();
            }
          }
          uVar14 = (ulong)*(ushort *)((long)piVar24 + (6 - (long)*piVar24));
          uVar16 = (ulong)*(uint *)((long)piVar24 + uVar14);
          uVar2 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar2;
          lVar10 = lVar10 + 4;
        } while (uVar2 < *(uint *)((long)((long)piVar24 + uVar14) + uVar16));
      }
    }
  }
  if (local_98 != (long *)0x0) {
    lVar10 = local_98[0xb];
    piVar24 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar6) {
        *piVar24 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar26 = local_90 + 10;
    do {
      iVar9 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (local_88 != (long *)0x0) {
    plVar26 = local_88 + 10;
    do {
      iVar9 = (int)*plVar26 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  return;
}


