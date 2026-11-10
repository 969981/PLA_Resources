/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032534c8; name: FUN_032534c8
 */


void FUN_032534c8(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  puVar6 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar14 = *param_1;
      lVar12 = lVar14 + (long)(int)param_1[1] * 0x28;
      lVar8 = tpidr_el0;
      lVar15 = *(long *)(lVar12 + -0x10);
      if (lVar15 != 0) goto LAB_0325354c;
      do {
        iVar2 = *(int *)(lVar12 + -0x18);
        lVar15 = lVar12;
        while( true ) {
          if (iVar2 != 0) {
            lVar13 = *(long *)(lVar15 + -0x20);
            lVar12 = lVar13 + (long)iVar2 * 0x10;
            do {
              plVar7 = *(long **)(lVar12 + -8);
              lVar12 = lVar12 + -0x10;
              if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
                plVar1 = plVar7 + 2;
                do {
                  lVar9 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar9 + -1 == 0) {
                  (**(code **)(*plVar7 + 0x18))();
                }
              }
            } while (lVar12 != lVar13);
          }
          lVar12 = lVar15 + -0x28;
          *(undefined4 *)(lVar15 + -0x18) = 0;
          if ((-1 < (int)*(uint *)(lVar15 + -0x14)) && (*(long *)(lVar15 + -0x20) != 0)) {
            (**(code **)(*(long *)puVar6 + 0x18))
                      (puVar6,*(long *)(lVar15 + -0x20),
                       ((ulong)*(uint *)(lVar15 + -0x14) & 0x3fffffff) << 4);
          }
          *(undefined8 *)(lVar15 + -0x20) = 0;
          *(undefined4 *)(lVar15 + -0x14) = 0x80000000;
          if (lVar12 == lVar14) goto LAB_03253640;
          lVar15 = *(long *)(lVar15 + -0x38);
          if (lVar15 == 0) break;
LAB_0325354c:
          if (*(int *)(lVar15 + 4) == -2) break;
          uVar10 = (long)*(int *)(lVar12 + -8) + 1;
          lVar13 = *(long *)(lVar8 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar8 + 0x38d490) = lVar13;
          }
          plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          local_88 = (undefined4)uVar10;
          uStack_84 = 8;
          if ((uVar10 & 0x1ffffffff0000000) != 0) {
            local_78 = &DAT_0411b3a0;
            local_80 = 2;
            local_68 = &local_88;
            local_70 = &uStack_84;
            FUN_03320b50(0x39ec3d88,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                         ,0x61,"Memory allocation request overflow {}*{}",&local_80);
          }
          (**(code **)(*plVar7 + 0x18))
                    (plVar7,lVar15,
                     -(uVar10 >> 0x1c & 1) & 0xffffffff00000000 | uVar10 * 8 & 0xfffffff8);
          *(undefined **)(lVar12 + -0x10) = &DAT_03aad864;
          *(undefined4 *)(lVar12 + -8) = 0;
          iVar2 = *(int *)(lVar12 + -0x18);
          lVar15 = lVar12;
        }
      } while( true );
    }
LAB_03253640:
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))
                (puVar6,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x28);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_03253818(puVar6,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_032c21f8(param_1 + 2);
  iVar2 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar2 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar2 = (int)param_1[1];
  }
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      lVar12 = param_1[2];
      uVar3 = *(int *)(*param_1 + lVar8 * 0x28) * -0x61c8864f;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar10 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
      piVar11 = (int *)(lVar12 + uVar10 * 8 + 4);
      iVar2 = *piVar11;
      while (-1 < iVar2) {
        uVar10 = ((long)(uVar10 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar11 = (int *)(lVar12 + uVar10 * 8 + 4);
        iVar2 = *piVar11;
      }
      *(uint *)(lVar12 + uVar10 * 8) = uVar3;
      *piVar11 = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[1]);
  }
  return;
}


