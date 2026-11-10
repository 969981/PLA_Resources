/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01235acc; name: FUN_01235acc
 */


void FUN_01235acc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long *local_b0;
  undefined1 local_a8;
  long *local_a0;
  long *local_98;
  undefined1 *local_90;
  long *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  long *local_68;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e656d0(&local_b8);
  if (CONCAT44(uStack_b4,local_b8) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    FUN_00b1e8cc(&local_68);
    plVar21 = local_68;
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_02a43934();
    }
  }
  if (param_2 == 0) {
    piVar11 = (int *)FUN_00b1e13c(plVar21);
  }
  else {
    piVar11 = (int *)FUN_00b1e15c();
  }
  if (((piVar11 != (int *)0x0) && (4 < *(ushort *)((long)piVar11 - (long)*piVar11))) &&
     (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar13 != 0)) {
    uVar16 = (ulong)*(uint *)((long)piVar11 + uVar13);
    uVar19 = (ulong)*(uint *)((long)((long)piVar11 + uVar13) + uVar16);
    if (uVar19 != 0) {
      lVar1 = uVar16 + uVar13;
      lVar22 = 0;
      lVar2 = lVar1 + 4;
      do {
        uVar13 = (ulong)*(uint *)((long)piVar11 + lVar22 + lVar1 + 4);
        lVar18 = lVar22 + uVar13;
        uVar9 = FUN_01360500((long)piVar11 + lVar18 + lVar1 + 4);
        lVar3 = lVar22 + uVar13 + lVar1;
        local_b0 = (long *)0x0;
        local_a8 = 0;
        local_a0 = (long *)0x0;
        local_98 = (long *)0x0;
        local_70 = 0;
        local_90 = &DAT_cbf29ce484222645;
        local_88 = (long *)0x0;
        local_80 = &DAT_cbf29ce484222645;
        local_78 = &DAT_cbf29ce484222645;
        lVar17 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar17 + 4) < 0x15) {
          local_b8 = 0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar17 + 0x18);
          local_b8 = 0;
          if (uVar16 != 0) {
            local_b8 = *(undefined4 *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
          }
        }
        lVar17 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if ((4 < *(ushort *)((long)piVar11 + lVar17 + 4)) &&
           (uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar17 + 8), uVar16 != 0)) {
          uVar20 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
          if ((long)piVar11 + lVar18 + uVar20 + uVar16 + lVar2 != 0) {
            FUN_00947cf8(&local_68,(long)piVar11 + lVar22 + uVar13 + uVar16 + uVar20 + lVar1 + 8);
            plVar4 = local_b0;
            local_b0 = (long *)0x0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x20))();
            }
            local_b0 = local_68;
          }
        }
        lVar14 = (long)*(int *)((long)piVar11 + lVar3 + 4);
        lVar17 = lVar22 + (uVar13 - lVar14) + lVar1;
        uVar15 = *(ushort *)((long)piVar11 + lVar17 + 4);
        local_a8 = uVar9;
        if (uVar15 < 7) {
LAB_01236110:
          local_90 = (undefined1 *)0x0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar17 + 10);
          lVar14 = -lVar14;
          if (uVar16 != 0) {
            uVar20 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
            if ((long)piVar11 + lVar18 + uVar20 + uVar16 + lVar2 != 0) {
              FUN_00947cf8(&local_68,(long)piVar11 + lVar22 + uVar13 + uVar16 + uVar20 + lVar1 + 8);
              plVar4 = local_a0;
              local_a0 = (long *)0x0;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x20))();
              }
              local_a0 = local_68;
              lVar17 = (long)*(int *)((long)piVar11 + lVar3 + 4);
              lVar14 = -lVar17;
              uVar15 = *(ushort *)((long)piVar11 + lVar22 + (uVar13 - lVar17) + lVar1 + 4);
            }
          }
          if (uVar15 < 9) goto LAB_01236110;
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar22 + lVar14 + uVar13 + lVar1 + 0xc);
          if (uVar16 != 0) {
            uVar20 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
            if ((long)piVar11 + lVar18 + uVar20 + uVar16 + lVar2 != 0) {
              FUN_00947cf8(&local_68,(long)piVar11 + lVar22 + uVar13 + uVar16 + uVar20 + lVar1 + 8);
              plVar4 = local_98;
              local_98 = (long *)0x0;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x20))();
              }
              local_98 = local_68;
              lVar17 = (long)*(int *)((long)piVar11 + lVar3 + 4);
              lVar14 = -lVar17;
              uVar15 = *(ushort *)((long)piVar11 + lVar22 + (uVar13 - lVar17) + lVar1 + 4);
            }
          }
          if (uVar15 < 0xb) goto LAB_01236110;
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar22 + lVar14 + uVar13 + lVar1 + 0xe);
          local_90 = (undefined1 *)0x0;
          if (uVar16 != 0) {
            local_90 = *(undefined1 **)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
          }
        }
        lVar14 = (long)*(int *)((long)piVar11 + lVar3 + 4);
        lVar17 = lVar22 + (uVar13 - lVar14) + lVar1;
        uVar15 = *(ushort *)((long)piVar11 + lVar17 + 4);
        if (uVar15 < 0xd) {
LAB_01236118:
          local_80 = (undefined1 *)0x0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar17 + 0x10);
          lVar14 = -lVar14;
          if (uVar16 != 0) {
            uVar20 = (ulong)*(uint *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
            if ((long)piVar11 + lVar18 + uVar20 + uVar16 + lVar2 != 0) {
              FUN_00947cf8(&local_68,(long)piVar11 + lVar22 + uVar13 + uVar16 + uVar20 + lVar1 + 8);
              plVar4 = local_88;
              local_88 = (long *)0x0;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x20))();
              }
              local_88 = local_68;
              lVar18 = (long)*(int *)((long)piVar11 + lVar3 + 4);
              lVar14 = -lVar18;
              uVar15 = *(ushort *)((long)piVar11 + lVar22 + (uVar13 - lVar18) + lVar1 + 4);
            }
          }
          if (uVar15 < 0xf) goto LAB_01236118;
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar22 + lVar14 + uVar13 + lVar1 + 0x12);
          local_80 = (undefined1 *)0x0;
          if (uVar16 != 0) {
            local_80 = *(undefined1 **)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
          }
        }
        lVar18 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar18 + 4) < 0x17) {
          local_78 = (undefined1 *)0x0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar18 + 0x1a);
          local_78 = (undefined1 *)0x0;
          if (uVar16 != 0) {
            local_78 = *(undefined1 **)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
          }
        }
        lVar18 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar18 + 4) < 0x13) {
          uVar12 = 0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar18 + 0x16);
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = *(undefined4 *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4);
          }
        }
        lVar18 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar18 + 4) < 0x51) {
          bVar5 = false;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar18 + 0x54);
          bVar5 = false;
          if (uVar16 != 0) {
            bVar5 = *(char *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4) != '\0';
          }
        }
        lVar18 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar18 + 4) < 0x21) {
          bVar6 = false;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar18 + 0x24);
          bVar6 = false;
          if (uVar16 != 0) {
            bVar6 = *(char *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4) != '\0';
          }
        }
        lVar18 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar18 + 4) < 0x2b) {
          bVar7 = false;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar18 + 0x2e);
          bVar7 = false;
          if (uVar16 != 0) {
            bVar7 = *(char *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4) != '\0';
          }
        }
        lVar18 = lVar22 + (uVar13 - (long)*(int *)((long)piVar11 + lVar3 + 4)) + lVar1;
        if (*(ushort *)((long)piVar11 + lVar18 + 4) < 0x35) {
          bVar8 = false;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar18 + 0x38);
          bVar8 = false;
          if (uVar16 != 0) {
            bVar8 = *(char *)((long)piVar11 + lVar22 + uVar13 + uVar16 + lVar1 + 4) != '\0';
          }
        }
        local_70 = CONCAT17(bVar8,CONCAT16(bVar7,CONCAT15(bVar6,CONCAT14(bVar5,uVar12))));
        switch(uVar9) {
        case 0:
          lVar18 = param_1;
          break;
        case 1:
          lVar18 = param_1 + 0x38;
          break;
        case 2:
          lVar18 = param_1 + 0x70;
          break;
        case 3:
          lVar18 = param_1 + 0xa8;
          break;
        default:
          goto switchD_01236084_caseD_4;
        case 5:
          lVar18 = param_1 + 0xe0;
          break;
        case 6:
          lVar18 = param_1 + 0x118;
          break;
        case 8:
          lVar18 = param_1 + 0x150;
        }
        FUN_01236208(lVar18,&local_b8);
switchD_01236084_caseD_4:
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        lVar22 = lVar22 + 4;
      } while (uVar19 * 4 != lVar22);
    }
  }
  if ((plVar21 != (long *)0x0) && (uVar13 = FUN_02a43a5c(plVar21[0xb]), (uVar13 & 1) != 0)) {
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  return;
}


