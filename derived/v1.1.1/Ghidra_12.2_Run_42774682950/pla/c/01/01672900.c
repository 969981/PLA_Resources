/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01672900; name: FUN_01672900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01672900(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long *local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    if (*(int *)(param_1 + 0x110) == 1) {
      puVar4 = *(undefined8 **)(param_1 + 0x58);
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      do {
        if (puVar4 == puVar5) {
          *(undefined1 *)(param_1 + 0x54) = 1;
          return 1;
        }
        plVar21 = (long *)*puVar4;
        if (plVar21 == (long *)0x0) {
          if (DAT_00000054 == '\0') {
            if (*(long *)(_DAT_00000058 + 8) == 0) {
              return 0;
            }
            if (*(char *)(*(long *)(_DAT_00000058 + 8) + 0x1e1) == '\0') {
              return 0;
            }
            FUN_01671108(0);
            DAT_00000054 = '\x01';
          }
        }
        else {
          plVar13 = plVar21 + 10;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar7) {
              *(int *)plVar13 = (int)*plVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(char *)((long)plVar21 + 0x54) == '\0') {
            if (*(long *)(plVar21[0xb] + 8) == 0) {
              bVar7 = false;
            }
            else if (*(char *)(*(long *)(plVar21[0xb] + 8) + 0x1e1) == '\0') {
              bVar7 = false;
            }
            else {
              FUN_01671108(plVar21);
              bVar7 = true;
              *(undefined1 *)((long)plVar21 + 0x54) = 1;
            }
          }
          else {
            bVar7 = true;
          }
          do {
            iVar10 = (int)*plVar13 + -1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar8) {
              *(int *)plVar13 = iVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
          if (!bVar7) {
            return 0;
          }
        }
        puVar4 = puVar4 + 1;
      } while( true );
    }
    if (*(int *)(param_1 + 0x110) == 0) {
      uVar11 = FUN_0161e820(*(undefined8 *)(param_1 + 0x108));
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      lVar12 = FUN_0161e868(*(undefined8 *)(param_1 + 0x108));
      puVar16 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
      piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar11 == 0)) {
        puVar16 = (uint *)0x0;
        uVar15 = uRam0000000000000000;
      }
      else {
        puVar16 = (uint *)((long)piVar2 + uVar11);
        puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
        uVar15 = *puVar16;
      }
      if (uVar15 != 0) {
        uVar11 = 0;
        puVar4 = (undefined8 *)(param_1 + 0x70);
        do {
          piVar2 = (int *)((long)(puVar16 + uVar11 + 1) + (ulong)puVar16[uVar11 + 1]);
          if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
              (uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar19 == 0)) ||
             (*(char *)((long)piVar2 + uVar19) == '\0')) {
            plVar21 = *(long **)(param_1 + 8);
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar9 = PTR_DAT_04379528;
              if (iVar10 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar21;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0xe0,8);
            if (plVar13 == (long *)0x0) {
              (**(code **)(*plVar21 + 0xb8))(plVar21);
              FUN_016709fc(0);
              _DAT_00000010 = 0;
              _DAT_00000018 = 0xe0;
              _DAT_00000020 = 8;
              _DAT_00000008 = plVar21;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              local_68 = (long *)0x0;
            }
            else {
              FUN_016709fc(plVar13);
              plVar13[1] = (long)plVar21;
              plVar13[2] = (long)plVar13;
              plVar13[3] = 0xe0;
              plVar13[4] = 8;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              plVar21 = plVar13 + 10;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar7) {
                  *(int *)plVar21 = (int)*plVar21 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                local_68 = plVar13;
              } while (cVar6 != '\0');
            }
            if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
              lVar12 = 0;
            }
            else {
              uVar19 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
              lVar12 = 0;
              if (uVar19 != 0) {
                puVar3 = (uint *)((long)piVar2 + uVar19);
                lVar12 = (long)puVar3 + (ulong)*puVar3;
              }
            }
            FUN_00947cf8(&local_90,lVar12 + 4);
            plVar21 = local_90;
            if (local_90 == (long *)0x0) {
              local_88 = *(long *)PTR_DAT_04379c88;
LAB_01672f6c:
              lStack_80 = *(long *)PTR_PTR_04379d00;
              if (local_90 != (long *)0x0) goto LAB_01672b9c;
LAB_01672f7c:
              local_78 = 0;
            }
            else {
              local_88 = local_90[0xb];
              if (local_90 == (long *)0x0) goto LAB_01672f6c;
              lStack_80 = local_90[0xc];
              if (local_90 == (long *)0x0) goto LAB_01672f7c;
LAB_01672b9c:
              local_78 = local_90[0xd];
              local_70 = (long *)0x0;
              (**(code **)(*local_90 + 0x18))(local_90);
            }
            local_70 = plVar21;
            FUN_01670cac(plVar13,&local_88);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            lVar12 = *(long *)(param_1 + 0x60);
            if (lVar12 == *(long *)(param_1 + 0x68)) {
              uVar20 = *(ulong *)(param_1 + 0x78);
              lVar12 = lVar12 - *(long *)(param_1 + 0x58) >> 3;
              uVar19 = lVar12 + 1;
              if (0x7ffffffffffffffe < uVar20) {
                uVar20 = 0x7fffffffffffffff;
              }
              if (uVar20 < uVar19) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar17 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x58);
              if ((ulong)(lVar17 >> 3) < uVar20 >> 1) {
                uVar18 = lVar17 >> 2;
                uVar20 = uVar19;
                if (uVar19 <= uVar18) {
                  uVar20 = uVar18;
                }
              }
              if (uVar20 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,uVar20 << 3,8);
                if (lVar17 == 0) {
                  (**(code **)(*(long *)*puVar4 + 0xb8))();
                }
              }
              lVar22 = lVar17 + lVar12 * 8;
              FUN_01673f58(puVar4,lVar22,&local_68);
              plVar21 = *(long **)(param_1 + 0x58);
              plVar13 = *(long **)(param_1 + 0x60);
              lVar12 = lVar22 + 8;
              if (plVar13 == plVar21) {
                plVar13 = plVar21;
              }
              else {
                do {
                  lVar22 = lVar22 + -8;
                  plVar13 = plVar13 + -1;
                  FUN_01673f58(puVar4,lVar22,plVar13);
                } while (plVar21 != plVar13);
                plVar21 = *(long **)(param_1 + 0x60);
                plVar13 = *(long **)(param_1 + 0x58);
              }
              *(long *)(param_1 + 0x58) = lVar22;
              *(long *)(param_1 + 0x60) = lVar12;
              lVar12 = *(long *)(param_1 + 0x68);
              *(ulong *)(param_1 + 0x68) = lVar17 + uVar20 * 8;
              while (plVar21 != plVar13) {
                plVar21 = plVar21 + -1;
                plVar14 = (long *)*plVar21;
                if (plVar14 != (long *)0x0) {
                  plVar1 = plVar14 + 10;
                  do {
                    iVar10 = (int)*plVar1 + -1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar7) {
                      *(int *)plVar1 = iVar10;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar10 == 0) {
                    (**(code **)(*plVar14 + 0x10))();
                  }
                }
              }
              if (plVar13 != (long *)0x0) {
                plVar21 = (long *)*puVar4;
                lVar12 = lVar12 - (long)plVar13;
                uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
                if ((uVar19 & 1) != 0) {
                  lVar17 = tpidr_el0;
                  if (*(char *)(lVar17 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar17 + 0x38d488) = 1;
                    *(undefined8 *)(lVar17 + 0x38d478) = 0;
                    *(undefined8 *)(lVar17 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar17 + 0x38d480)) {
                    FUN_02bcc824(plVar21,plVar13,lVar12,8);
                    goto joined_r0x01672dd0;
                  }
                }
                (**(code **)(*plVar21 + 0x18))(plVar21,plVar13,lVar12,8);
              }
            }
            else {
              FUN_01673f58(puVar4,lVar12,&local_68);
              *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
            }
joined_r0x01672dd0:
            if (local_68 != (long *)0x0) {
              plVar21 = local_68 + 10;
              do {
                iVar10 = (int)*plVar21 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar7) {
                  *(int *)plVar21 = iVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
            }
            uVar15 = *puVar16;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar15);
      }
      *(undefined4 *)(param_1 + 0x110) = 1;
      return 0;
    }
  }
  return 1;
}


