/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00236c18; name: FUN_00236c18
 */


void FUN_00236c18(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04372bb8;
  puVar3 = PTR_DAT_04372ba8;
  lVar19 = *(long *)(param_3 + 0x68);
  if (*(short *)(lVar19 + 0x30) != 0) {
    lVar18 = 0;
    lVar16 = 0;
    uVar17 = 0;
    plVar1 = (long *)(param_2 + 0x38);
    do {
      lVar15 = *(long *)(lVar19 + 0x20);
      plVar7 = (long *)(**(code **)puVar3)(0x38,4,*(undefined8 *)puVar4);
      if (plVar7 != (long *)0x0) {
        *plVar7 = (long)plVar7;
        plVar7[1] = (long)plVar7;
        *(undefined4 *)(plVar7 + 4) = 0;
        plVar7[2] = 0;
        *(undefined8 *)((long)plVar7 + 0x16) = 0;
        plVar7[5] = 0;
        plVar7[6] = 0;
      }
      lVar15 = lVar15 + lVar18;
      uVar8 = *(undefined4 *)(lVar15 + 0x20);
      uVar6 = local_64._3_1_;
      uVar5 = local_64._2_2_;
      switch(uVar8) {
      case 0:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0x41504c46;
        break;
      case 1:
        local_64 = CONCAT13(uVar6,0x20000);
        local_64 = CONCAT22(local_64._2_2_,0x100);
        uVar8 = 1;
        goto LAB_00236dc4;
      case 2:
        local_64 = CONCAT22(uVar5,0x706);
        uVar8 = 2;
        goto LAB_00236df0;
      case 3:
        local_64 = CONCAT13(uVar6,0x50000);
        local_64 = CONCAT22(local_64._2_2_,0x403);
        uVar8 = 3;
LAB_00236dc4:
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0x41504c46;
        uVar12 = 3;
        goto LAB_00236fc0;
      case 4:
        local_64 = CONCAT22(uVar5,0x908);
        uVar8 = 4;
LAB_00236df0:
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0x41504c46;
        uVar12 = 2;
        goto LAB_00236fc0;
      case 5:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar8 = 5;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0x49564c46;
        break;
      case 6:
        local_64 = CONCAT31(local_64._1_3_,0x10);
        uVar11 = 0x43564c46;
        uVar8 = 6;
        goto LAB_00236e94;
      default:
        goto switchD_00236cbc_caseD_7;
      case 8:
        local_64 = CONCAT22(uVar5,0x403);
        uVar11 = 0x544d4c46;
        uVar8 = 8;
        goto LAB_00236ee0;
      case 9:
        local_64 = CONCAT31(local_64._1_3_,2);
        uVar11 = 0x544d4c46;
        uVar8 = 9;
LAB_00236e94:
        uVar9 = 0;
        uVar10 = 0;
        break;
      case 10:
        local_64 = (uint)uVar5 << 0x10;
        uVar11 = 0x544d4c46;
        uVar8 = 10;
        goto LAB_00236ee0;
      case 0xb:
        local_64 = CONCAT22(uVar5,0x400);
        uVar11 = 0x53504c46;
        uVar8 = 0xb;
LAB_00236ee0:
        uVar9 = 0;
        uVar10 = 0;
        uVar12 = 2;
        goto LAB_00236fc0;
      case 0xc:
        local_64 = 0x7060504;
        uVar8 = 0xc;
        goto LAB_00236fac;
      case 0xd:
        local_64 = 0x3020100;
        uVar8 = 0xd;
LAB_00236fac:
        uVar9 = 0;
        uVar10 = 1;
        uVar11 = 0x434d4c46;
        uVar12 = 4;
        goto LAB_00236fc0;
      case 0xe:
      case 0x11:
      case 0x14:
        uVar13 = 0x403;
        goto LAB_00236d0c;
      case 0xf:
      case 0x12:
      case 0x15:
        local_64 = CONCAT31(local_64._1_3_,2);
        uVar2 = *(int *)(lVar15 + 0x20) - 0xe;
        uVar9 = 0xffffffff;
        if (uVar2 < 9) {
          uVar9 = *(undefined4 *)(&DAT_039cfb08 + (long)(int)uVar2 * 4);
        }
        uVar10 = 1;
        uVar11 = 0x53544c46;
        break;
      case 0x10:
      case 0x13:
      case 0x16:
        uVar13 = 0x100;
LAB_00236d0c:
        local_64 = CONCAT22(uVar5,uVar13);
        uVar2 = *(int *)(lVar15 + 0x20) - 0xe;
        uVar9 = 0xffffffff;
        if (uVar2 < 9) {
          uVar9 = *(undefined4 *)(&DAT_039cfb08 + (long)(int)uVar2 * 4);
        }
        uVar10 = 1;
        uVar11 = 0x53544c46;
        uVar12 = 2;
        goto LAB_00236fc0;
      case 0x19:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar8 = 0x19;
        uVar9 = 0;
        uVar10 = 3;
        uVar11 = 0x414d5346;
        break;
      case 0x1a:
        lVar14 = *(long *)(lVar19 + 0x28);
        local_64 = 0;
        FUN_00237ab4(plVar7,lVar15,0x1a,0,4,0x4d535046,4,&local_64);
        plVar7[6] = lVar14 + lVar16;
        goto LAB_00236fc4;
      case 0x1b:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar8 = 0x1b;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0x41504c46;
        uVar12 = 0;
        goto LAB_00236fc0;
      }
      uVar12 = 1;
LAB_00236fc0:
      FUN_00237ab4(plVar7,lVar15,uVar8,uVar9,uVar10,uVar11,uVar12,&local_64);
LAB_00236fc4:
      lVar15 = *plVar7;
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x80;
      *plVar7 = *plVar1;
      *(long **)(lVar15 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar7;
      *plVar1 = lVar15;
      lVar18 = lVar18 + 0x38;
    } while (uVar17 < *(ushort *)(lVar19 + 0x30));
  }
switchD_00236cbc_caseD_7:
  return;
}


