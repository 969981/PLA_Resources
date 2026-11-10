/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123a560; name: FUN_0123a560
 */


void FUN_0123a560(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  undefined8 uVar17;
  long lVar18;
  
  FUN_0123a300(param_1,param_1 + 0x14,param_1 + 0x28);
  if (param_1 + 0x3c != param_2) {
    lVar18 = 0;
    puVar16 = param_1 + 0x3c;
    puVar14 = param_1 + 0x28;
    do {
      puVar9 = puVar16;
      uVar5 = *puVar9;
      if (uVar5 < *puVar14) {
        uVar1 = *(undefined8 *)(puVar9 + 6);
        uVar3 = *(undefined8 *)(puVar9 + 8);
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        uVar17 = *(undefined8 *)(puVar9 + 2);
        uVar2 = *(undefined8 *)(puVar9 + 10);
        uVar4 = *(undefined8 *)(puVar9 + 0xc);
        uVar10 = *(undefined8 *)(puVar9 + 0xe);
        uVar11 = *(undefined8 *)(puVar9 + 0x10);
        uVar12 = *(undefined8 *)(puVar9 + 0x12);
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        uVar6 = puVar9[4];
        uVar8 = *puVar14;
        plVar7 = (long *)0x0;
        lVar15 = lVar18;
        while( true ) {
          *(uint *)((long)param_1 + lVar15 + 0xf0) = uVar8;
          *(undefined8 *)((long)param_1 + lVar15 + 0xf8) = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0xa8);
          *(undefined8 *)((long)param_1 + lVar15 + 0xa8) = 0;
          *(undefined8 *)((long)param_1 + lVar15 + 0xf8) = uVar13;
          plVar7 = *(long **)((long)param_1 + lVar15 + 0x108);
          *(undefined1 *)((long)param_1 + lVar15 + 0x100) =
               *(undefined1 *)((long)param_1 + lVar15 + 0xb0);
          *(undefined8 *)((long)param_1 + lVar15 + 0x108) = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0xb8);
          *(undefined8 *)((long)param_1 + lVar15 + 0xb8) = 0;
          plVar7 = *(long **)((long)param_1 + lVar15 + 0x110);
          *(undefined8 *)((long)param_1 + lVar15 + 0x108) = uVar13;
          *(undefined8 *)((long)param_1 + lVar15 + 0x110) = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0xc0);
          *(undefined8 *)((long)param_1 + lVar15 + 0xc0) = 0;
          plVar7 = *(long **)((long)param_1 + lVar15 + 0x120);
          *(undefined8 *)((long)param_1 + lVar15 + 0x120) = 0;
          *(undefined8 *)((long)param_1 + lVar15 + 0x110) = uVar13;
          *(undefined8 *)((long)param_1 + lVar15 + 0x118) =
               *(undefined8 *)((long)param_1 + lVar15 + 200);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
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
            goto LAB_0123a710;
          }
          uVar8 = *(uint *)((long)param_1 + lVar15 + 0x50);
          if (uVar8 <= uVar5) break;
          plVar7 = *(long **)((long)param_1 + lVar15 + 0xa8);
          lVar15 = lVar15 + -0x50;
        }
        puVar16 = (uint *)((long)param_1 + lVar15 + 0xa0);
LAB_0123a710:
        *puVar16 = uVar5;
        plVar7 = *(long **)((long)param_1 + lVar15 + 0xa8);
        *(undefined8 *)((long)param_1 + lVar15 + 0xa8) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        *(undefined8 *)((long)param_1 + lVar15 + 0xa8) = uVar17;
        *(char *)(puVar16 + 4) = (char)uVar6;
        plVar7 = *(long **)((long)param_1 + lVar15 + 0xb8);
        *(undefined8 *)((long)param_1 + lVar15 + 0xb8) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        plVar7 = *(long **)((long)param_1 + lVar15 + 0xc0);
        *(undefined8 *)((long)param_1 + lVar15 + 0xb8) = uVar1;
        *(undefined8 *)((long)param_1 + lVar15 + 0xc0) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        *(undefined8 *)((long)param_1 + lVar15 + 0xc0) = uVar3;
        *(undefined8 *)(puVar16 + 10) = uVar2;
        plVar7 = *(long **)((long)param_1 + lVar15 + 0xd0);
        *(undefined8 *)((long)param_1 + lVar15 + 0xd0) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        *(undefined8 *)((long)param_1 + lVar15 + 0xd0) = uVar4;
        *(undefined8 *)(puVar16 + 0xe) = uVar10;
        *(undefined8 *)(puVar16 + 0x10) = uVar11;
        *(undefined8 *)((long)param_1 + lVar15 + 0xe8) = uVar12;
      }
      lVar18 = lVar18 + 0x50;
      puVar16 = puVar9 + 0x14;
      puVar14 = puVar9;
    } while (puVar9 + 0x14 != param_2);
  }
  return;
}


