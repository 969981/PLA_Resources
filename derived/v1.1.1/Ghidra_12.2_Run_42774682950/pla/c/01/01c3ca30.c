/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3ca30; name: FUN_01c3ca30
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01c3ca30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  ulong local_100 [2];
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
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  puVar8 = PTR_DAT_0437a668;
  puVar7 = PTR_DAT_0437a660;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar16 = *(long *)(param_1 + 0x208);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar13 = (int *)(lVar16 + 0xc);
    iVar19 = *(int *)(lVar16 + 0xc);
    do {
      puVar20 = *(undefined8 **)(lVar16 + 0x10);
      if (((*puVar8 & 1) == 0) && (param_1 = __cxa_guard_acquire(puVar8), (int)param_1 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar15;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar7 = puVar6;
        param_1 = __cxa_guard_release(puVar8);
      }
      if (puVar20 == (undefined8 *)0x0) {
        return false;
      }
      while (puVar20 != (undefined8 *)puVar7) {
        puVar20 = (undefined8 *)*puVar20;
        param_1 = 0;
        if (puVar20 == (undefined8 *)0x0) {
          return false;
        }
      }
      iVar11 = *piVar13;
      if (iVar11 == iVar19) {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar9) {
          *piVar13 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return false;
          }
          local_ac = 0;
          local_d0 = 0x7f7fffee;
          local_110 = 0;
          plVar18 = (long *)(lVar16 + -0x50);
          local_c8 = 0xffffffffffffffff;
          local_f0 = 0;
          uStack_e8 = 0;
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
          local_108 = 0;
          local_100[0] = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          local_a0 = 0xffffffffffffffff;
          uStack_80 = 0;
          uStack_7c = 0;
          local_78 = 0;
          uVar10 = FUN_01e48210(param_1);
          uVar12 = FUN_01e434f4(plVar18,param_2,param_3,uVar10,&local_130);
          bVar9 = false;
          uVar4 = local_100[0];
          if ((uVar12 & 1) != 0) {
            piVar13 = (int *)FUN_01e4bacc(local_108);
            if (piVar13 == (int *)0x0) {
              bVar9 = false;
              uVar4 = local_100[0];
            }
            else {
              param_4[3] = local_118;
              param_4[5] = local_108;
              param_4[1] = local_128;
              param_4[2] = uStack_120;
              *param_4 = local_130;
              param_4[4] = CONCAT44(uStack_10c,local_110);
              FUN_032c7e9c(param_4 + 6,local_100);
              param_4[9] = uStack_e8;
              param_4[8] = local_f0;
              param_4[0xb] = uStack_d8;
              param_4[10] = local_e0;
              *(undefined4 *)(param_4 + 0xc) = local_d0;
              *(undefined4 *)(param_4 + 0xe) = local_c0;
              param_4[0xd] = local_c8;
              *(undefined4 *)(param_4 + 0xf) = local_b8;
              *(undefined1 *)((long)param_4 + 0x7c) = local_b4;
              *(undefined2 *)(param_4 + 0x10) = local_b0;
              *(undefined4 *)((long)param_4 + 0x8c) = uStack_a4;
              *(ulong *)((long)param_4 + 0x84) = CONCAT44(uStack_a8,local_ac);
              param_4[0x12] = local_a0;
              *(undefined4 *)(param_4 + 0x13) = local_98;
              *(undefined4 *)(param_4 + 0x14) = local_90;
              *(undefined1 *)((long)param_4 + 0xa4) = local_8c;
              *(undefined2 *)(param_4 + 0x15) = local_88;
              *(undefined4 *)((long)param_4 + 0xb4) = uStack_7c;
              *(ulong *)((long)param_4 + 0xac) = CONCAT44(uStack_80,local_84);
              param_4[0x17] = local_78;
              bVar9 = *piVar13 == 0x18;
              uVar4 = local_100[0];
            }
          }
          local_100[0] = uVar4;
          if ((uVar4 & 1) != 0) {
            lVar3 = tpidr_el0;
            lVar17 = *(long *)(lVar3 + 0x38d490);
            if (lVar17 == 0) {
              lVar17 = FUN_0333d16c(0,1);
              *(long *)(lVar3 + 0x38d490) = lVar17;
            }
            plVar14 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
            *(undefined8 *)(uVar4 - 0x11) = 0;
            (**(code **)(*plVar14 + 0x18))
                      (plVar14,(undefined8 *)(uVar4 - 0x11),(long)*(int *)(uVar4 - 9) + 0x10);
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar13 = (int *)(lVar16 + 0xc);
          do {
            iVar19 = *piVar13;
            cVar2 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar1) {
              *piVar13 = iVar19 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
          return bVar9;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_1 = 0;
      iVar19 = iVar11;
    } while (iVar11 != 0);
  }
  return false;
}


