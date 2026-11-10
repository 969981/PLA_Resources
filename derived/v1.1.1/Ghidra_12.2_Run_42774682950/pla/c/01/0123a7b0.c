/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123a7b0; name: FUN_0123a7b0
 */


bool FUN_0123a7b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  
  switch(((long)param_2 - (long)param_1 >> 4) * -0x3333333333333333) {
  case 0:
  case 1:
    break;
  case 2:
    if (param_2[-0x14] < *param_1) {
      FUN_0123a160(param_1,param_2 + -0x14);
    }
    break;
  case 3:
    FUN_0123a300(param_1,param_1 + 0x14,param_2 + -0x14);
    break;
  case 4:
    FUN_0123a3d0(param_1,param_1 + 0x14,param_1 + 0x28,param_2 + -0x14);
    break;
  case 5:
    FUN_0123a480(param_1,param_1 + 0x14,param_1 + 0x28,param_1 + 0x3c,param_2 + -0x14);
    break;
  default:
    FUN_0123a300(param_1,param_1 + 0x14,param_1 + 0x28);
    if (param_1 + 0x3c != param_2) {
      lVar18 = 0;
      iVar17 = 0;
      puVar16 = param_1 + 0x3c;
      puVar14 = param_1 + 0x28;
      do {
        puVar5 = puVar16;
        uVar1 = *puVar5;
        if (uVar1 < *puVar14) {
          uVar6 = *(undefined8 *)(puVar5 + 6);
          uVar7 = *(undefined8 *)(puVar5 + 8);
          uVar8 = *(undefined8 *)(puVar5 + 10);
          uVar19 = *(undefined8 *)(puVar5 + 2);
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          uVar9 = *(undefined8 *)(puVar5 + 0xc);
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          uVar10 = *(undefined8 *)(puVar5 + 0xe);
          uVar11 = *(undefined8 *)(puVar5 + 0x10);
          uVar12 = *(undefined8 *)(puVar5 + 0x12);
          puVar5[2] = 0;
          puVar5[3] = 0;
          uVar2 = puVar5[4];
          uVar4 = *puVar14;
          plVar3 = (long *)0x0;
          lVar15 = lVar18;
          while( true ) {
            *(uint *)((long)param_1 + lVar15 + 0xf0) = uVar4;
            *(undefined8 *)((long)param_1 + lVar15 + 0xf8) = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x20))();
            }
            uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0xa8);
            *(undefined8 *)((long)param_1 + lVar15 + 0xa8) = 0;
            *(undefined8 *)((long)param_1 + lVar15 + 0xf8) = uVar13;
            plVar3 = *(long **)((long)param_1 + lVar15 + 0x108);
            *(undefined1 *)((long)param_1 + lVar15 + 0x100) =
                 *(undefined1 *)((long)param_1 + lVar15 + 0xb0);
            *(undefined8 *)((long)param_1 + lVar15 + 0x108) = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x20))();
            }
            uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0xb8);
            *(undefined8 *)((long)param_1 + lVar15 + 0xb8) = 0;
            plVar3 = *(long **)((long)param_1 + lVar15 + 0x110);
            *(undefined8 *)((long)param_1 + lVar15 + 0x108) = uVar13;
            *(undefined8 *)((long)param_1 + lVar15 + 0x110) = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x20))();
            }
            uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0xc0);
            *(undefined8 *)((long)param_1 + lVar15 + 0xc0) = 0;
            plVar3 = *(long **)((long)param_1 + lVar15 + 0x120);
            *(undefined8 *)((long)param_1 + lVar15 + 0x120) = 0;
            *(undefined8 *)((long)param_1 + lVar15 + 0x110) = uVar13;
            *(undefined8 *)((long)param_1 + lVar15 + 0x118) =
                 *(undefined8 *)((long)param_1 + lVar15 + 200);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x20))();
            }
            *(undefined8 *)((long)param_1 + lVar15 + 0x120) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0xd0);
            *(undefined8 *)((long)param_1 + lVar15 + 0x128) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0xd8);
            *(undefined8 *)((long)param_1 + lVar15 + 0xd0) = 0;
            *(undefined8 *)((long)param_1 + lVar15 + 0x130) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0xe0);
            *(undefined8 *)((long)param_1 + lVar15 + 0x138) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0xe8);
            if (lVar15 == -0xa0) {
              puVar16 = param_1;
              goto LAB_0123a9d4;
            }
            uVar4 = *(uint *)((long)param_1 + lVar15 + 0x50);
            if (uVar4 <= uVar1) break;
            plVar3 = *(long **)((long)param_1 + lVar15 + 0xa8);
            lVar15 = lVar15 + -0x50;
          }
          puVar16 = (uint *)((long)param_1 + lVar15 + 0xa0);
LAB_0123a9d4:
          *puVar16 = uVar1;
          plVar3 = *(long **)((long)param_1 + lVar15 + 0xa8);
          *(undefined8 *)((long)param_1 + lVar15 + 0xa8) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x20))();
          }
          *(undefined8 *)((long)param_1 + lVar15 + 0xa8) = uVar19;
          *(char *)(puVar16 + 4) = (char)uVar2;
          plVar3 = *(long **)((long)param_1 + lVar15 + 0xb8);
          *(undefined8 *)((long)param_1 + lVar15 + 0xb8) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x20))();
          }
          plVar3 = *(long **)((long)param_1 + lVar15 + 0xc0);
          *(undefined8 *)((long)param_1 + lVar15 + 0xb8) = uVar6;
          *(undefined8 *)((long)param_1 + lVar15 + 0xc0) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x20))();
          }
          *(undefined8 *)((long)param_1 + lVar15 + 0xc0) = uVar7;
          *(undefined8 *)(puVar16 + 10) = uVar8;
          plVar3 = *(long **)((long)param_1 + lVar15 + 0xd0);
          *(undefined8 *)((long)param_1 + lVar15 + 0xd0) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x20))();
          }
          *(undefined8 *)((long)param_1 + lVar15 + 0xd0) = uVar9;
          *(undefined8 *)(puVar16 + 0xe) = uVar10;
          *(undefined8 *)(puVar16 + 0x10) = uVar11;
          iVar17 = iVar17 + 1;
          *(undefined8 *)((long)param_1 + lVar15 + 0xe8) = uVar12;
          if (iVar17 == 8) {
            return puVar5 + 0x14 == param_2;
          }
        }
        lVar18 = lVar18 + 0x50;
        puVar16 = puVar5 + 0x14;
        puVar14 = puVar5;
      } while (puVar5 + 0x14 != param_2);
    }
  }
  return true;
}


