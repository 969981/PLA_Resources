/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095d0c0; name: FUN_0095d0c0
 */


void FUN_0095d0c0(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *local_d0;
  undefined8 *local_c8;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined8 local_70 [2];
  
  FUN_0095ce10(param_1,param_1 + 0xc,param_1 + 0x18,param_3);
  if (param_1 + 0x24 != param_2) {
    puVar12 = (undefined8 *)((ulong)&local_d0 | 8);
    plVar13 = param_1 + 0x24;
    plVar9 = param_1 + 0x18;
    do {
      plVar10 = plVar13;
      uVar8 = FUN_0095ca3c(param_3,plVar10,plVar9);
      if ((uVar8 & 1) != 0) {
        local_d0 = (long *)*plVar10;
        *plVar10 = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        FUN_0087fcf0(puVar12,plVar10 + 1);
        local_b8 = plVar10[3];
        local_b0 = plVar10[4];
        local_a8 = plVar10[5];
        local_a0 = plVar10[6];
        local_98 = plVar10[7];
        local_90 = plVar10[8];
        uStack_80 = (undefined4)((ulong)*(undefined8 *)((long)plVar10 + 0x4e) >> 0x10);
        uStack_7c = (undefined2)((ulong)*(undefined8 *)((long)plVar10 + 0x4e) >> 0x30);
        uStack_88 = (undefined6)plVar10[9];
        local_82 = (undefined2)((ulong)plVar10[9] >> 0x30);
        plVar13 = plVar10;
        do {
          plVar14 = plVar9;
          plVar9 = (long *)*plVar13;
          *plVar13 = 0;
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 10;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
          }
          lVar11 = *plVar14;
          *plVar14 = 0;
          *plVar13 = lVar11;
          FUN_0087fcf0(plVar13 + 1,plVar14 + 1);
          lVar11 = plVar14[4];
          plVar13[3] = plVar14[3];
          *(short *)(plVar13 + 4) = (short)lVar11;
          lVar11 = plVar14[7];
          plVar13[6] = plVar14[6];
          plVar13[7] = lVar11;
          lVar11 = plVar14[9];
          plVar13[8] = plVar14[8];
          plVar13[9] = lVar11;
          uVar3 = *(undefined2 *)((long)plVar14 + 0x54);
          *(int *)(plVar13 + 10) = (int)plVar14[10];
          *(undefined2 *)((long)plVar13 + 0x54) = uVar3;
          if (plVar14 == param_1) {
            plVar13 = param_1;
            break;
          }
          uVar8 = FUN_0095ca3c(param_3,&local_d0,plVar14 + -0xc);
          plVar13 = plVar14;
          plVar9 = plVar14 + -0xc;
        } while ((uVar8 & 1) != 0);
        plVar9 = (long *)*plVar13;
        *plVar13 = 0;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        plVar9 = local_d0;
        local_d0 = (long *)0x0;
        *plVar13 = (long)plVar9;
        FUN_0087fcf0(plVar14 + 1,puVar12);
        puVar6 = local_c8;
        *(undefined2 *)(plVar14 + 4) = (undefined2)local_b0;
        plVar14[3] = local_b8;
        plVar14[7] = local_98;
        plVar14[6] = local_a0;
        plVar14[9] = CONCAT26(local_82,uStack_88);
        plVar14[8] = local_90;
        *(undefined2 *)((long)plVar14 + 0x54) = uStack_7c;
        *(undefined4 *)(plVar14 + 10) = uStack_80;
        if (local_c8 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_c8 + 1);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            local_c8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_70[0] = *puVar6;
            FUN_02a44274(lVar11 + 0xd8,local_70);
          }
        }
        if (local_d0 != (long *)0x0) {
          plVar13 = local_d0 + 10;
          do {
            iVar7 = (int)*plVar13 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *(int *)plVar13 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
      }
      plVar13 = plVar10 + 0xc;
      plVar9 = plVar10;
    } while (plVar10 + 0xc != param_2);
  }
  return;
}


