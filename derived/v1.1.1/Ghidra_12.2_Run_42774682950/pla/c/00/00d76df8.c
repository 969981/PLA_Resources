/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d76df8; name: FUN_00d76df8
 */


void FUN_00d76df8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  byte bVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  ushort *puVar21;
  uint *puVar22;
  long *plVar23;
  uint *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  byte *pbVar29;
  int *piVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  char *pcVar35;
  undefined4 uVar36;
  long *plVar37;
  undefined1 *puVar38;
  long *plVar39;
  int *piVar40;
  int *piVar41;
  int *unaff_x28;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  long *local_b0;
  int *local_a8;
  char *local_a0;
  size_t local_98;
  long *local_90;
  long *local_78;
  
  if (*(long *)(param_1 + 0xf0) == 0) {
    lVar18 = *(long *)(param_1 + 0x158);
  }
  else {
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      lVar18 = tpidr_el0;
      piVar40 = *(int **)(param_1 + 200);
      do {
        while( true ) {
          unaff_x28 = *(int **)piVar40;
          if (*(long **)(piVar40 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(piVar40 + 10) + 0x20))();
          }
          plVar37 = *(long **)(param_1 + 0xd0);
          uVar20 = (**(code **)(*plVar37 + 0xc0))(plVar37);
          if ((uVar20 & 1) != 0) break;
LAB_00d77354:
          (**(code **)(*plVar37 + 0x18))(plVar37,piVar40,0x38,8);
          piVar40 = unaff_x28;
          if (unaff_x28 == (int *)0x0) goto LAB_00d773fc;
        }
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_00d77354;
        FUN_02bcc824(plVar37,piVar40,0x38,8);
        piVar40 = unaff_x28;
      } while (unaff_x28 != (int *)0x0);
    }
LAB_00d773fc:
    uVar20 = *(ulong *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 200) = 0;
    if (uVar20 != 0) {
      uVar32 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          lVar33 = lVar18 * 8;
          lVar18 = lVar18 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar33) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar33 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar33 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar33 + 0x18) = 0;
        } while (uVar20 - uVar32 != lVar18);
      }
      if (uVar32 != 0) {
        lVar18 = lVar18 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar18) = 0;
          uVar32 = uVar32 - 1;
          lVar18 = lVar18 + 8;
        } while (uVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar18 = *(long *)(param_1 + 0x158);
  }
  if (lVar18 == 0) goto LAB_00d76e34;
  puVar25 = *(undefined8 **)(param_1 + 0x130);
  if (puVar25 != (undefined8 *)0x0) {
    piVar40 = (int *)*puVar25;
    if ((long *)puVar25[5] != (long *)0x0) {
      (**(code **)(*(long *)puVar25[5] + 0x20))();
    }
    plVar37 = *(long **)(param_1 + 0x138);
    uVar20 = (**(code **)(*plVar37 + 0xc0))(plVar37);
    if ((uVar20 & 1) == 0) {
LAB_00d77534:
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar25,0x38,8);
    }
    else {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_00d77534;
      FUN_02bcc824(plVar37,puVar25,0x38,8);
    }
    if (piVar40 != (int *)0x0) {
      lVar18 = tpidr_el0;
      do {
        while( true ) {
          unaff_x28 = *(int **)piVar40;
          if (*(long **)(piVar40 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(piVar40 + 10) + 0x20))();
          }
          plVar37 = *(long **)(param_1 + 0x138);
          uVar20 = (**(code **)(*plVar37 + 0xc0))(plVar37);
          if ((uVar20 & 1) != 0) break;
LAB_00d775e4:
          (**(code **)(*plVar37 + 0x18))(plVar37,piVar40,0x38,8);
          piVar40 = unaff_x28;
          if (unaff_x28 == (int *)0x0) goto LAB_00d77498;
        }
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_00d775e4;
        FUN_02bcc824(plVar37,piVar40,0x38,8);
        piVar40 = unaff_x28;
      } while (unaff_x28 != (int *)0x0);
    }
  }
LAB_00d77498:
  uVar20 = *(ulong *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (uVar20 != 0) {
    uVar32 = uVar20 & 3;
    if (uVar20 - 1 < 3) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      do {
        lVar33 = lVar18 * 8;
        lVar18 = lVar18 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar33) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar33 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar33 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar33 + 0x18) = 0;
      } while (uVar20 - uVar32 != lVar18);
    }
    if (uVar32 != 0) {
      lVar18 = lVar18 << 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar18) = 0;
        uVar32 = uVar32 - 1;
        lVar18 = lVar18 + 8;
      } while (uVar32 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
LAB_00d76e34:
  plVar37 = (long *)(param_1 + 0x168);
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_00d7b468(plVar37,*(undefined8 *)(param_1 + 0x198));
    uVar20 = *(ulong *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x198) = 0;
    if (uVar20 != 0) {
      uVar32 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          lVar33 = lVar18 * 8;
          lVar18 = lVar18 + 4;
          *(undefined8 *)(*plVar37 + lVar33) = 0;
          *(undefined8 *)(*plVar37 + lVar33 + 8) = 0;
          *(undefined8 *)(*plVar37 + lVar33 + 0x10) = 0;
          *(undefined8 *)(*plVar37 + lVar33 + 0x18) = 0;
        } while (uVar20 - uVar32 != lVar18);
      }
      if (uVar32 != 0) {
        lVar18 = lVar18 << 3;
        do {
          *(undefined8 *)(*plVar37 + lVar18) = 0;
          uVar32 = uVar32 - 1;
          lVar18 = lVar18 + 8;
        } while (uVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  plVar1 = (long *)(param_1 + 0x1d0);
  if (*(long *)(param_1 + 0x228) != 0) {
    FUN_00d7b1ac(plVar1,*(undefined8 *)(param_1 + 0x200));
    uVar20 = *(ulong *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x200) = 0;
    if (uVar20 != 0) {
      uVar32 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          lVar33 = lVar18 * 8;
          lVar18 = lVar18 + 4;
          *(undefined8 *)(*plVar1 + lVar33) = 0;
          *(undefined8 *)(*plVar1 + lVar33 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar33 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar33 + 0x18) = 0;
        } while (uVar20 - uVar32 != lVar18);
      }
      if (uVar32 != 0) {
        lVar18 = lVar18 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar18) = 0;
          uVar32 = uVar32 - 1;
          lVar18 = lVar18 + 8;
        } while (uVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  plVar2 = (long *)(param_1 + 0x238);
  if (*(long *)(param_1 + 0x290) != 0) {
    FUN_00d7b1ac(plVar2,*(undefined8 *)(param_1 + 0x268));
    uVar20 = *(ulong *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x268) = 0;
    if (uVar20 != 0) {
      uVar32 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          lVar33 = lVar18 * 8;
          lVar18 = lVar18 + 4;
          *(undefined8 *)(*plVar2 + lVar33) = 0;
          *(undefined8 *)(*plVar2 + lVar33 + 8) = 0;
          *(undefined8 *)(*plVar2 + lVar33 + 0x10) = 0;
          *(undefined8 *)(*plVar2 + lVar33 + 0x18) = 0;
        } while (uVar20 - uVar32 != lVar18);
      }
      if (uVar32 != 0) {
        lVar18 = lVar18 << 3;
        do {
          *(undefined8 *)(*plVar2 + lVar18) = 0;
          uVar32 = uVar32 - 1;
          lVar18 = lVar18 + 8;
        } while (uVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  plVar3 = (long *)(param_1 + 0x2a0);
  if (*(long *)(param_1 + 0x2f8) != 0) {
    FUN_00d7af04(plVar3,*(undefined8 *)(param_1 + 0x2d0));
    uVar20 = *(ulong *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    if (uVar20 != 0) {
      uVar32 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          lVar33 = lVar18 * 8;
          lVar18 = lVar18 + 4;
          *(undefined8 *)(*plVar3 + lVar33) = 0;
          *(undefined8 *)(*plVar3 + lVar33 + 8) = 0;
          *(undefined8 *)(*plVar3 + lVar33 + 0x10) = 0;
          *(undefined8 *)(*plVar3 + lVar33 + 0x18) = 0;
        } while (uVar20 - uVar32 != lVar18);
      }
      if (uVar32 != 0) {
        lVar18 = lVar18 << 3;
        do {
          *(undefined8 *)(*plVar3 + lVar18) = 0;
          uVar32 = uVar32 - 1;
          lVar18 = lVar18 + 8;
        } while (uVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  if (*(long *)(param_1 + 0x360) != 0) {
    if (*(int **)(param_1 + 0x338) != (int *)0x0) {
      lVar18 = tpidr_el0;
      piVar40 = *(int **)(param_1 + 0x338);
      do {
        while( true ) {
          unaff_x28 = *(int **)piVar40;
          if (*(long **)(piVar40 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(piVar40 + 10) + 0x20))();
          }
          plVar39 = *(long **)(param_1 + 0x340);
          uVar20 = (**(code **)(*plVar39 + 0xc0))(plVar39);
          if ((uVar20 & 1) != 0) break;
LAB_00d770c0:
          (**(code **)(*plVar39 + 0x18))(plVar39,piVar40,0x38,8);
          piVar40 = unaff_x28;
          if (unaff_x28 == (int *)0x0) goto LAB_00d76fa0;
        }
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_00d770c0;
        FUN_02bcc824(plVar39,piVar40,0x38,8);
        piVar40 = unaff_x28;
      } while (unaff_x28 != (int *)0x0);
    }
LAB_00d76fa0:
    uVar20 = *(ulong *)(param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (uVar20 != 0) {
      uVar32 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          lVar33 = lVar18 * 8;
          lVar18 = lVar18 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x308) + lVar33) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x308) + lVar33 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x308) + lVar33 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x308) + lVar33 + 0x18) = 0;
        } while (uVar20 - uVar32 != lVar18);
      }
      if (uVar32 != 0) {
        lVar18 = lVar18 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x308) + lVar18) = 0;
          uVar32 = uVar32 - 1;
          lVar18 = lVar18 + 8;
        } while (uVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  puVar19 = *(uint **)(*(long *)(param_1 + 0x60) + 0x250);
  piVar40 = (int *)((long)puVar19 + (ulong)*puVar19);
  puVar10 = (uint *)((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (4 - (long)*piVar40)));
  puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
  puVar19 = puVar10 + 1;
  uVar20 = (ulong)*puVar10;
  if (uVar20 != 0) {
    puVar10 = puVar19 + uVar20;
    plVar39 = (long *)(param_1 + 0x198);
    plVar4 = (long *)(param_1 + 0x100);
    plVar5 = (long *)(param_1 + 0x130);
    plVar6 = (long *)(param_1 + 0x98);
    plVar7 = (long *)(param_1 + 200);
    plVar8 = (long *)(param_1 + 0x308);
    plVar9 = (long *)(param_1 + 0x338);
    do {
      piVar40 = (int *)((long)puVar19 + (ulong)*puVar19);
      if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar20 == 0)) {
        puVar38 = (undefined1 *)0x0;
      }
      else {
        puVar22 = (uint *)((long)piVar40 + uVar20);
        puVar38 = (undefined1 *)((long)puVar22 + (ulong)*puVar22);
      }
      pcVar35 = puVar38 + 4;
      local_98 = strlen(pcVar35);
      bVar12 = puVar38[4];
      piVar41 = (int *)&DAT_cbf29ce484222645;
      if (bVar12 != 0) {
        piVar41 = (int *)&DAT_cbf29ce484222645;
        pbVar29 = puVar38 + 5;
        do {
          piVar41 = (int *)(((ulong)piVar41 ^ (ulong)bVar12) * 0x100000001b3);
          bVar12 = *pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (bVar12 != 0);
      }
      local_90 = (long *)0x0;
      puVar21 = (ushort *)((long)piVar40 - (long)*piVar40);
      local_a8 = piVar41;
      local_a0 = pcVar35;
      if ((*puVar21 < 7) || ((ulong)puVar21[3] == 0)) goto joined_r0x00d77c44;
      lVar18 = *(long *)((long)piVar40 + (ulong)puVar21[3]);
      if (lVar18 < 0x27e11baa8284c9a5) {
        if (lVar18 != -0x40140d957a14f82) {
          if (lVar18 == -0x24a6eeebe27a127d) {
            puVar22 = (uint *)((long)piVar40 + (ulong)puVar21[7]);
            uVar11 = *puVar22;
            puVar24 = (uint *)((long)puVar22 + (ulong)uVar11 + 4);
            dVar43 = atof((char *)((long)puVar24 + (ulong)*puVar24 + 4));
            puVar24 = (uint *)((long)puVar22 + (ulong)uVar11 + 8);
            dVar44 = atof((char *)((long)puVar24 + (ulong)*puVar24 + 4));
            puVar22 = (uint *)((long)puVar22 + (ulong)uVar11 + 0xc);
            dVar45 = atof((char *)((long)puVar22 + (ulong)*puVar22 + 4));
            piVar40 = *(int **)(param_1 + 0x170);
            if (piVar40 != (int *)0x0) {
              uVar20 = (long)piVar40 - ((ulong)piVar40 >> 1 & 0x5555555555555555);
              uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
              uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar20 < 2) {
                unaff_x28 = (int *)((ulong)((long)piVar40 + -1) & (ulong)piVar41);
              }
              else {
                unaff_x28 = piVar41;
                if (piVar40 <= piVar41) {
                  uVar32 = 0;
                  if (piVar40 != (int *)0x0) {
                    uVar32 = (ulong)piVar41 / (ulong)piVar40;
                  }
                  unaff_x28 = (int *)((long)piVar41 - uVar32 * (long)piVar40);
                }
              }
              plVar23 = *(long **)(*plVar37 + (long)unaff_x28 * 8);
              if (plVar23 != (long *)0x0) {
                if (uVar20 < 2) {
                  do {
                    plVar23 = (long *)*plVar23;
                    if ((plVar23 == (long *)0x0) ||
                       ((int *)plVar23[1] != piVar41 &&
                        (int *)((ulong)plVar23[1] & (ulong)((long)piVar40 + -1)) != unaff_x28))
                    goto LAB_00d77afc;
                  } while ((int *)plVar23[2] != piVar41);
                }
                else {
                  do {
                    plVar23 = (long *)*plVar23;
                    if (plVar23 == (long *)0x0) goto LAB_00d77afc;
                    piVar30 = (int *)plVar23[1];
                    if (piVar30 != piVar41) {
                      if (piVar40 <= piVar30) {
                        uVar20 = 0;
                        if (piVar40 != (int *)0x0) {
                          uVar20 = (ulong)piVar30 / (ulong)piVar40;
                        }
                        piVar30 = (int *)((long)piVar30 - uVar20 * (long)piVar40);
                      }
                      if (piVar30 != unaff_x28) goto LAB_00d77afc;
                    }
                  } while ((int *)plVar23[2] != piVar41);
                }
                goto joined_r0x00d77c44;
              }
            }
LAB_00d77afc:
            plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x1a0) + 0x10))
                                        (*(long **)(param_1 + 0x1a0),0x40,0x10);
            if (plVar23 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x1a0) + 0xb8))();
            }
            uVar34 = *(undefined8 *)(param_1 + 0x1a0);
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar13 = PTR_DAT_04379528;
              if (iVar15 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar18 != 0) {
              if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00d78e08;
              *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
            }
            plVar23[2] = (long)local_a8;
            plVar23[3] = (long)local_a0;
            plVar23[4] = local_98;
            plVar23[5] = (long)local_90;
            if (local_90 == (long *)0x0) {
              plVar23[7] = (ulong)(uint)(float)dVar45;
              plVar23[6] = CONCAT44((float)dVar44,(float)dVar43);
            }
            else {
              (**(code **)(*local_90 + 0x18))();
              plVar23[7] = (ulong)(uint)(float)dVar45;
              plVar23[6] = CONCAT44((float)dVar44,(float)dVar43);
            }
            if (lVar18 != 0) {
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
            }
            *plVar23 = 0;
            plVar23[1] = (long)piVar41;
            fVar42 = (float)(*(long *)(param_1 + 0x1c0) + 1);
            if ((piVar40 == (int *)0x0) || (*(float *)(param_1 + 0x1c8) * (float)piVar40 < fVar42))
            {
              uVar20 = (ulong)(piVar40 < (int *)0x3 ||
                              ((ulong)piVar40 & (ulong)((long)piVar40 + -1)) != 0) |
                       (long)piVar40 << 1;
              uVar32 = (ulong)(fVar42 / *(float *)(param_1 + 0x1c8));
              if (uVar32 <= uVar20) {
                uVar32 = uVar20;
              }
              FUN_00d7ca60(plVar37,uVar32);
              piVar40 = *(int **)(param_1 + 0x170);
              if (((ulong)piVar40 & (ulong)((long)piVar40 + -1)) == 0) {
                unaff_x28 = (int *)((ulong)((long)piVar40 + -1) & (ulong)piVar41);
              }
              else if (piVar41 < piVar40) {
                unaff_x28 = piVar41;
              }
              else {
                uVar20 = 0;
                if (piVar40 != (int *)0x0) {
                  uVar20 = (ulong)piVar41 / (ulong)piVar40;
                }
                unaff_x28 = (int *)((long)piVar41 - uVar20 * (long)piVar40);
              }
            }
            plVar27 = *(long **)(*plVar37 + (long)unaff_x28 * 8);
            if (plVar27 == (long *)0x0) {
              *plVar23 = *plVar39;
              *plVar39 = (long)plVar23;
              *(long **)(*plVar37 + (long)unaff_x28 * 8) = plVar39;
              if (*plVar23 != 0) {
                piVar41 = *(int **)(*plVar23 + 8);
                if (((ulong)piVar40 & (ulong)((long)piVar40 + -1)) == 0) {
                  piVar41 = (int *)((ulong)piVar41 & (ulong)((long)piVar40 + -1));
                }
                else if (piVar40 <= piVar41) {
                  uVar20 = 0;
                  if (piVar40 != (int *)0x0) {
                    uVar20 = (ulong)piVar41 / (ulong)piVar40;
                  }
                  piVar41 = (int *)((long)piVar41 - uVar20 * (long)piVar40);
                }
                plVar27 = (long *)(*plVar37 + (long)piVar41 * 8);
                goto LAB_00d77c30;
              }
            }
            else {
              *plVar23 = *plVar27;
LAB_00d77c30:
              *plVar27 = (long)plVar23;
            }
            *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + 1;
            goto joined_r0x00d77c44;
          }
          if (lVar18 != 0xf87d380066daf98) goto joined_r0x00d77c44;
          puVar22 = (uint *)((long)((long)piVar40 + (ulong)puVar21[7]) +
                            (ulong)*(uint *)((long)piVar40 + (ulong)puVar21[7]) + 4);
          local_b0 = (long *)0x0;
          pcVar35 = (char *)((long)puVar22 + (ulong)*puVar22 + 4);
          plVar23 = plVar1;
          if (*pcVar35 == '\0') {
            plVar27 = (long *)FUN_00938550();
            if (plVar27 != (long *)0x0) {
              (**(code **)(*plVar27 + 0x18))(plVar27);
            }
          }
          else {
            if (((*PTR_DAT_04379cd0 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379cd0);
            }
            uVar34 = *(undefined8 *)PTR_DAT_04379cd8;
            *(undefined8 *)PTR_DAT_04379ce0 = uVar34;
            FUN_02a47cd8(&local_78,uVar34,pcVar35);
            plVar27 = local_b0;
joined_r0x00d7805c:
            if (plVar27 != (long *)0x0) {
              local_b0 = (long *)0x0;
              (**(code **)(*plVar27 + 0x20))();
            }
            plVar27 = local_78;
          }
LAB_00d78070:
          local_b0 = plVar27;
          FUN_00d79914(plVar23,&local_a8,&local_b0);
joined_r0x00d78084:
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x20))(plVar27);
          }
          goto joined_r0x00d77c44;
        }
        puVar22 = (uint *)((long)((long)piVar40 + (ulong)puVar21[7]) +
                          (ulong)*(uint *)((long)piVar40 + (ulong)puVar21[7]) + 4);
        iVar15 = atoi((char *)((long)puVar22 + (ulong)*puVar22 + 4));
        unaff_x28 = *(int **)(param_1 + 0xa0);
        if (unaff_x28 != (int *)0x0) {
          uVar20 = (long)unaff_x28 - ((ulong)unaff_x28 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            piVar40 = (int *)((ulong)((long)unaff_x28 + -1) & (ulong)piVar41);
          }
          else {
            piVar40 = piVar41;
            if (unaff_x28 <= piVar41) {
              uVar32 = 0;
              if (unaff_x28 != (int *)0x0) {
                uVar32 = (ulong)piVar41 / (ulong)unaff_x28;
              }
              piVar40 = (int *)((long)piVar41 - uVar32 * (long)unaff_x28);
            }
          }
          plVar23 = *(long **)(*plVar6 + (long)piVar40 * 8);
          if (plVar23 != (long *)0x0) {
            if (uVar20 < 2) {
              do {
                plVar23 = (long *)*plVar23;
                if ((plVar23 == (long *)0x0) ||
                   ((int *)plVar23[1] != piVar41 &&
                    (int *)((ulong)plVar23[1] & (ulong)((long)unaff_x28 + -1)) != piVar40))
                goto LAB_00d78698;
              } while ((int *)plVar23[2] != piVar41);
            }
            else {
              do {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto LAB_00d78698;
                piVar30 = (int *)plVar23[1];
                if (piVar30 != piVar41) {
                  if (unaff_x28 <= piVar30) {
                    uVar20 = 0;
                    if (unaff_x28 != (int *)0x0) {
                      uVar20 = (ulong)piVar30 / (ulong)unaff_x28;
                    }
                    piVar30 = (int *)((long)piVar30 - uVar20 * (long)unaff_x28);
                  }
                  if (piVar30 != piVar40) goto LAB_00d78698;
                }
              } while ((int *)plVar23[2] != piVar41);
            }
            goto joined_r0x00d77c44;
          }
        }
LAB_00d78698:
        plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0xd0) + 0x10))
                                    (*(long **)(param_1 + 0xd0),0x38,8);
        if (plVar23 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xd0) + 0xb8))();
        }
        uVar34 = *(undefined8 *)(param_1 + 0xd0);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar13 = PTR_DAT_04379528;
          if (iVar16 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar18 != 0) {
          if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00d78e08;
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        }
        plVar23[2] = (long)local_a8;
        plVar23[3] = (long)local_a0;
        plVar23[4] = local_98;
        plVar23[5] = (long)local_90;
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))();
        }
        *(int *)(plVar23 + 6) = iVar15;
        if (lVar18 != 0) {
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        }
        *plVar23 = 0;
        plVar23[1] = (long)piVar41;
        fVar42 = (float)(*(long *)(param_1 + 0xf0) + 1);
        if ((unaff_x28 == (int *)0x0) || (*(float *)(param_1 + 0xf8) * (float)unaff_x28 < fVar42)) {
          uVar20 = (ulong)(unaff_x28 < (int *)0x3 ||
                          ((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) != 0) |
                   (long)unaff_x28 << 1;
          uVar32 = (ulong)(fVar42 / *(float *)(param_1 + 0xf8));
          if (uVar32 <= uVar20) {
            uVar32 = uVar20;
          }
          FUN_00d7c4f8(plVar6,uVar32);
          unaff_x28 = *(int **)(param_1 + 0xa0);
          if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
            piVar40 = (int *)((ulong)((long)unaff_x28 + -1) & (ulong)piVar41);
          }
          else {
            piVar40 = piVar41;
            if (unaff_x28 <= piVar41) {
              uVar20 = 0;
              if (unaff_x28 != (int *)0x0) {
                uVar20 = (ulong)piVar41 / (ulong)unaff_x28;
              }
              piVar40 = (int *)((long)piVar41 - uVar20 * (long)unaff_x28);
            }
          }
        }
        plVar27 = *(long **)(*plVar6 + (long)piVar40 * 8);
        if (plVar27 == (long *)0x0) {
          *plVar23 = *plVar7;
          *plVar7 = (long)plVar23;
          *(long **)(*plVar6 + (long)piVar40 * 8) = plVar7;
          if (*plVar23 != 0) {
            piVar40 = *(int **)(*plVar23 + 8);
            if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
              piVar40 = (int *)((ulong)piVar40 & (ulong)((long)unaff_x28 + -1));
            }
            else if (unaff_x28 <= piVar40) {
              uVar20 = 0;
              if (unaff_x28 != (int *)0x0) {
                uVar20 = (ulong)piVar40 / (ulong)unaff_x28;
              }
              piVar40 = (int *)((long)piVar40 - uVar20 * (long)unaff_x28);
            }
            plVar27 = (long *)(*plVar6 + (long)piVar40 * 8);
            goto LAB_00d787b8;
          }
        }
        else {
          *plVar23 = *plVar27;
LAB_00d787b8:
          *plVar27 = (long)plVar23;
        }
        *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
      }
      else if (lVar18 < 0x2b017de50112e31d) {
        if (lVar18 == 0x27e11baa8284c9a5) {
          puVar22 = (uint *)((long)((long)piVar40 + (ulong)puVar21[7]) +
                            (ulong)*(uint *)((long)piVar40 + (ulong)puVar21[7]) + 4);
          dVar43 = atof((char *)((long)puVar22 + (ulong)*puVar22 + 4));
          piVar40 = *(int **)(param_1 + 0x108);
          if (piVar40 != (int *)0x0) {
            uVar20 = (long)piVar40 - ((ulong)piVar40 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              unaff_x28 = (int *)((ulong)((long)piVar40 + -1) & (ulong)piVar41);
            }
            else {
              unaff_x28 = piVar41;
              if (piVar40 <= piVar41) {
                uVar32 = 0;
                if (piVar40 != (int *)0x0) {
                  uVar32 = (ulong)piVar41 / (ulong)piVar40;
                }
                unaff_x28 = (int *)((long)piVar41 - uVar32 * (long)piVar40);
              }
            }
            plVar23 = *(long **)(*plVar4 + (long)unaff_x28 * 8);
            if (plVar23 != (long *)0x0) {
              if (uVar20 < 2) {
                do {
                  plVar23 = (long *)*plVar23;
                  if ((plVar23 == (long *)0x0) ||
                     ((int *)plVar23[1] != piVar41 &&
                      (int *)((ulong)plVar23[1] & (ulong)((long)piVar40 + -1)) != unaff_x28))
                  goto LAB_00d78454;
                } while ((int *)plVar23[2] != piVar41);
              }
              else {
                do {
                  plVar23 = (long *)*plVar23;
                  if (plVar23 == (long *)0x0) goto LAB_00d78454;
                  piVar30 = (int *)plVar23[1];
                  if (piVar30 != piVar41) {
                    if (piVar40 <= piVar30) {
                      uVar20 = 0;
                      if (piVar40 != (int *)0x0) {
                        uVar20 = (ulong)piVar30 / (ulong)piVar40;
                      }
                      piVar30 = (int *)((long)piVar30 - uVar20 * (long)piVar40);
                    }
                    if (piVar30 != unaff_x28) goto LAB_00d78454;
                  }
                } while ((int *)plVar23[2] != piVar41);
              }
              goto joined_r0x00d77c44;
            }
          }
LAB_00d78454:
          plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x138) + 0x10))
                                      (*(long **)(param_1 + 0x138),0x38,8);
          if (plVar23 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x138) + 0xb8))();
          }
          uVar34 = *(undefined8 *)(param_1 + 0x138);
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar13 = PTR_DAT_04379528;
            if (iVar15 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar18 != 0) {
            if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00d78e08;
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          }
          plVar23[2] = (long)local_a8;
          plVar23[3] = (long)local_a0;
          plVar23[4] = local_98;
          plVar23[5] = (long)local_90;
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))();
          }
          *(float *)(plVar23 + 6) = (float)dVar43;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
          *plVar23 = 0;
          plVar23[1] = (long)piVar41;
          fVar42 = (float)(*(long *)(param_1 + 0x158) + 1);
          if ((piVar40 == (int *)0x0) || (*(float *)(param_1 + 0x160) * (float)piVar40 < fVar42)) {
            uVar20 = (ulong)(piVar40 < (int *)0x3 ||
                            ((ulong)piVar40 & (ulong)((long)piVar40 + -1)) != 0) |
                     (long)piVar40 << 1;
            uVar32 = (ulong)(fVar42 / *(float *)(param_1 + 0x160));
            if (uVar32 <= uVar20) {
              uVar32 = uVar20;
            }
            FUN_00af3164(plVar4,uVar32);
            piVar40 = *(int **)(param_1 + 0x108);
            if (((ulong)piVar40 & (ulong)((long)piVar40 + -1)) == 0) {
              unaff_x28 = (int *)((ulong)((long)piVar40 + -1) & (ulong)piVar41);
            }
            else if (piVar41 < piVar40) {
              unaff_x28 = piVar41;
            }
            else {
              uVar20 = 0;
              if (piVar40 != (int *)0x0) {
                uVar20 = (ulong)piVar41 / (ulong)piVar40;
              }
              unaff_x28 = (int *)((long)piVar41 - uVar20 * (long)piVar40);
            }
          }
          plVar27 = *(long **)(*plVar4 + (long)unaff_x28 * 8);
          if (plVar27 == (long *)0x0) {
            *plVar23 = *plVar5;
            *plVar5 = (long)plVar23;
            *(long **)(*plVar4 + (long)unaff_x28 * 8) = plVar5;
            if (*plVar23 != 0) {
              piVar41 = *(int **)(*plVar23 + 8);
              if (((ulong)piVar40 & (ulong)((long)piVar40 + -1)) == 0) {
                piVar41 = (int *)((ulong)piVar41 & (ulong)((long)piVar40 + -1));
              }
              else if (piVar40 <= piVar41) {
                uVar20 = 0;
                if (piVar40 != (int *)0x0) {
                  uVar20 = (ulong)piVar41 / (ulong)piVar40;
                }
                piVar41 = (int *)((long)piVar41 - uVar20 * (long)piVar40);
              }
              plVar27 = (long *)(*plVar4 + (long)piVar41 * 8);
              goto LAB_00d78570;
            }
          }
          else {
            *plVar23 = *plVar27;
LAB_00d78570:
            *plVar27 = (long)plVar23;
          }
          *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 1;
        }
      }
      else {
        if (lVar18 != 0x6817eb866504dffd) {
          if (lVar18 != 0x2b017de50112e31d) {
            if (lVar18 == 0x7607b5bbfd52ca51) {
              puVar22 = (uint *)((long)((long)piVar40 + (ulong)puVar21[7]) +
                                (ulong)*(uint *)((long)piVar40 + (ulong)puVar21[7]) + 4);
              local_b0 = (long *)0x0;
              pcVar35 = (char *)((long)puVar22 + (ulong)*puVar22 + 4);
              plVar23 = plVar2;
              if (*pcVar35 != '\0') {
                if (((*PTR_DAT_04379cd0 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar15 != 0)) {
                  FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379cd0);
                }
                uVar34 = *(undefined8 *)PTR_DAT_04379cd8;
                *(undefined8 *)PTR_DAT_04379ce0 = uVar34;
                FUN_02a47cd8(&local_78,uVar34,pcVar35);
                plVar27 = local_b0;
                goto joined_r0x00d7805c;
              }
              plVar27 = (long *)FUN_00938550();
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x18))(plVar27);
              }
              goto LAB_00d78070;
            }
            goto joined_r0x00d77c44;
          }
          puVar22 = (uint *)((long)((long)piVar40 + (ulong)puVar21[7]) +
                            (ulong)*(uint *)((long)piVar40 + (ulong)puVar21[7]) + 4);
          pcVar35 = (char *)((long)puVar22 + (ulong)*puVar22 + 4);
          if (*pcVar35 == '\0') {
            plVar27 = (long *)FUN_00938550();
            if (plVar27 == (long *)0x0) goto LAB_00d77f34;
            (**(code **)(*plVar27 + 0x18))(plVar27);
            if (plVar27 != (long *)0x0) goto LAB_00d77f38;
LAB_00d78a6c:
            uVar20 = *(ulong *)PTR_DAT_04379c88;
          }
          else {
            if (((*PTR_DAT_04379cd0 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379cd0);
            }
            uVar34 = *(undefined8 *)PTR_DAT_04379cd8;
            *(undefined8 *)PTR_DAT_04379ce0 = uVar34;
            FUN_02a47cd8(&local_78,uVar34,pcVar35);
            plVar27 = local_78;
LAB_00d77f34:
            if (plVar27 == (long *)0x0) goto LAB_00d78a6c;
LAB_00d77f38:
            uVar20 = plVar27[0xb];
          }
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          if (DAT_043ba3f8 == (undefined8 *)0x0) {
LAB_00d788e8:
            uVar36 = 0;
          }
          else {
            uVar32 = DAT_043ba3f8[4];
            puVar25 = &DAT_043ba3f8;
            puVar31 = DAT_043ba3f8;
            while( true ) {
              if (uVar32 >= uVar20) {
                puVar25 = puVar31;
              }
              puVar31 = (undefined8 *)puVar31[uVar32 < uVar20];
              if (puVar31 == (undefined8 *)0x0) break;
              uVar32 = puVar31[4];
            }
            if (((undefined8 **)puVar25 == &DAT_043ba3f8) || (uVar20 < (ulong)puVar25[4]))
            goto LAB_00d788e8;
            uVar36 = *(undefined4 *)(puVar25 + 8);
          }
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x20))(plVar27);
          }
          piVar40 = local_a8;
          unaff_x28 = *(int **)(param_1 + 0x2a8);
          if (unaff_x28 != (int *)0x0) {
            uVar20 = (long)unaff_x28 - ((ulong)unaff_x28 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              piVar41 = (int *)((ulong)((long)unaff_x28 + -1) & (ulong)local_a8);
            }
            else {
              piVar41 = local_a8;
              if (unaff_x28 <= local_a8) {
                uVar32 = 0;
                if (unaff_x28 != (int *)0x0) {
                  uVar32 = (ulong)local_a8 / (ulong)unaff_x28;
                }
                piVar41 = (int *)((long)local_a8 - uVar32 * (long)unaff_x28);
              }
            }
            plVar23 = *(long **)(*plVar3 + (long)piVar41 * 8);
            if (plVar23 != (long *)0x0) {
              if (uVar20 < 2) {
                do {
                  plVar23 = (long *)*plVar23;
                  if ((plVar23 == (long *)0x0) ||
                     ((int *)plVar23[1] != local_a8 &&
                      (int *)((ulong)plVar23[1] & (ulong)((long)unaff_x28 + -1)) != piVar41))
                  goto LAB_00d7819c;
                } while ((int *)plVar23[2] != local_a8);
              }
              else {
                do {
                  plVar23 = (long *)*plVar23;
                  if (plVar23 == (long *)0x0) goto LAB_00d7819c;
                  piVar30 = (int *)plVar23[1];
                  if (piVar30 != local_a8) {
                    if (unaff_x28 <= piVar30) {
                      uVar20 = 0;
                      if (unaff_x28 != (int *)0x0) {
                        uVar20 = (ulong)piVar30 / (ulong)unaff_x28;
                      }
                      piVar30 = (int *)((long)piVar30 - uVar20 * (long)unaff_x28);
                    }
                    if (piVar30 != piVar41) goto LAB_00d7819c;
                  }
                } while ((int *)plVar23[2] != local_a8);
              }
              goto joined_r0x00d78084;
            }
          }
LAB_00d7819c:
          plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x2d8) + 0x10))
                                      (*(long **)(param_1 + 0x2d8),0x38,8);
          if (plVar23 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x2d8) + 0xb8))();
          }
          uVar34 = *(undefined8 *)(param_1 + 0x2d8);
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar13 = PTR_DAT_04379528;
            if (iVar15 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar18 != 0) {
            if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00d78e08;
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          }
          plVar23[2] = (long)local_a8;
          plVar23[3] = (long)local_a0;
          plVar23[4] = local_98;
          plVar23[5] = (long)local_90;
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))();
          }
          *(undefined4 *)(plVar23 + 6) = uVar36;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
          *plVar23 = 0;
          plVar23[1] = (long)piVar40;
          fVar42 = (float)(*(long *)(param_1 + 0x2f8) + 1);
          if ((unaff_x28 == (int *)0x0) || (*(float *)(param_1 + 0x300) * (float)unaff_x28 < fVar42)
             ) {
            uVar20 = (ulong)(unaff_x28 < (int *)0x3 ||
                            ((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) != 0) |
                     (long)unaff_x28 << 1;
            uVar32 = (ulong)(fVar42 / *(float *)(param_1 + 0x300));
            if (uVar32 <= uVar20) {
              uVar32 = uVar20;
            }
            if (uVar32 - 1 == 0) {
              uVar32 = 2;
            }
            else if ((uVar32 & uVar32 - 1) != 0) {
              uVar32 = std::__next_prime(uVar32);
            }
            uVar20 = *(ulong *)(param_1 + 0x2a8);
            if (uVar20 < uVar32) {
              uVar17 = uVar32;
LAB_00d7886c:
              FUN_00d7cfd0(plVar3,uVar17);
            }
            else if (uVar32 < uVar20) {
              uVar17 = (ulong)((float)*(ulong *)(param_1 + 0x2f8) / *(float *)(param_1 + 0x300));
              if ((uVar20 < 3) ||
                 (uVar28 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
                 uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333),
                 1 < (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar17 = std::__next_prime(uVar17);
              }
              else if (1 < uVar17) {
                uVar17 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar17 - 1) & 0x3f);
              }
              if (uVar17 <= uVar32) {
                uVar17 = uVar32;
              }
              if (uVar17 < uVar20) goto LAB_00d7886c;
            }
            unaff_x28 = *(int **)(param_1 + 0x2a8);
            if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
              piVar41 = (int *)((ulong)((long)unaff_x28 + -1) & (ulong)piVar40);
            }
            else if (piVar40 < unaff_x28) {
              piVar41 = piVar40;
            }
            else {
              uVar20 = 0;
              if (unaff_x28 != (int *)0x0) {
                uVar20 = (ulong)piVar40 / (ulong)unaff_x28;
              }
              piVar41 = (int *)((long)piVar40 - uVar20 * (long)unaff_x28);
            }
          }
          plVar26 = *(long **)(*plVar3 + (long)piVar41 * 8);
          if (plVar26 == (long *)0x0) {
            *plVar23 = *(long *)(param_1 + 0x2d0);
            *(long **)(param_1 + 0x2d0) = plVar23;
            *(long *)(*(long *)(param_1 + 0x2a0) + (long)piVar41 * 8) = param_1 + 0x2d0;
            if (*plVar23 != 0) {
              piVar40 = *(int **)(*plVar23 + 8);
              if (((ulong)unaff_x28 & (ulong)((long)unaff_x28 + -1)) == 0) {
                piVar40 = (int *)((ulong)piVar40 & (ulong)((long)unaff_x28 + -1));
              }
              else if (unaff_x28 <= piVar40) {
                uVar20 = 0;
                if (unaff_x28 != (int *)0x0) {
                  uVar20 = (ulong)piVar40 / (ulong)unaff_x28;
                }
                piVar40 = (int *)((long)piVar40 - uVar20 * (long)unaff_x28);
              }
              plVar26 = (long *)(*plVar3 + (long)piVar40 * 8);
              goto LAB_00d782c0;
            }
          }
          else {
            *plVar23 = *plVar26;
LAB_00d782c0:
            *plVar26 = (long)plVar23;
          }
          *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
          goto joined_r0x00d78084;
        }
        puVar22 = (uint *)((long)((long)piVar40 + (ulong)puVar21[7]) +
                          (ulong)*(uint *)((long)piVar40 + (ulong)puVar21[7]) + 4);
        pcVar35 = (char *)((long)puVar22 + (ulong)*puVar22 + 4);
        if (*pcVar35 == '\0') {
          plVar23 = (long *)FUN_00938550();
          if (plVar23 == (long *)0x0) goto LAB_00d77cbc;
          (**(code **)(*plVar23 + 0x18))(plVar23);
          if (plVar23 != (long *)0x0) goto LAB_00d77cc0;
LAB_00d780b4:
          bVar14 = false;
        }
        else {
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar34 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar34;
          FUN_02a47cd8(&local_78,uVar34,pcVar35);
          plVar23 = local_78;
LAB_00d77cbc:
          if (plVar23 == (long *)0x0) goto LAB_00d780b4;
LAB_00d77cc0:
          bVar14 = *(char *)plVar23[0xc] != '\0';
          (**(code **)(*plVar23 + 0x20))(plVar23);
        }
        piVar40 = local_a8;
        piVar41 = *(int **)(param_1 + 0x310);
        if (piVar41 != (int *)0x0) {
          uVar20 = (long)piVar41 - ((ulong)piVar41 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            unaff_x28 = (int *)((ulong)((long)piVar41 + -1) & (ulong)local_a8);
          }
          else {
            unaff_x28 = local_a8;
            if (piVar41 <= local_a8) {
              uVar32 = 0;
              if (piVar41 != (int *)0x0) {
                uVar32 = (ulong)local_a8 / (ulong)piVar41;
              }
              unaff_x28 = (int *)((long)local_a8 - uVar32 * (long)piVar41);
            }
          }
          plVar23 = *(long **)(*plVar8 + (long)unaff_x28 * 8);
          if (plVar23 != (long *)0x0) {
            if (uVar20 < 2) {
              do {
                plVar23 = (long *)*plVar23;
                if ((plVar23 == (long *)0x0) ||
                   ((int *)plVar23[1] != local_a8 &&
                    (int *)((ulong)plVar23[1] & (ulong)((long)piVar41 + -1)) != unaff_x28))
                goto LAB_00d77d8c;
              } while ((int *)plVar23[2] != local_a8);
            }
            else {
              do {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto LAB_00d77d8c;
                piVar30 = (int *)plVar23[1];
                if (piVar30 != local_a8) {
                  if (piVar41 <= piVar30) {
                    uVar20 = 0;
                    if (piVar41 != (int *)0x0) {
                      uVar20 = (ulong)piVar30 / (ulong)piVar41;
                    }
                    piVar30 = (int *)((long)piVar30 - uVar20 * (long)piVar41);
                  }
                  if (piVar30 != unaff_x28) goto LAB_00d77d8c;
                }
              } while ((int *)plVar23[2] != local_a8);
            }
            goto joined_r0x00d77c44;
          }
        }
LAB_00d77d8c:
        plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x340) + 0x10))
                                    (*(long **)(param_1 + 0x340),0x38,8);
        if (plVar23 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x340) + 0xb8))();
        }
        uVar34 = *(undefined8 *)(param_1 + 0x340);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar13 = PTR_DAT_04379528;
          if (iVar15 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar18 != 0) {
          if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_00d78e08:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        }
        plVar23[2] = (long)local_a8;
        plVar23[3] = (long)local_a0;
        plVar23[4] = local_98;
        plVar23[5] = (long)local_90;
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))();
        }
        *(bool *)(plVar23 + 6) = bVar14;
        if (lVar18 != 0) {
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        }
        *plVar23 = 0;
        plVar23[1] = (long)piVar40;
        fVar42 = (float)(*(long *)(param_1 + 0x360) + 1);
        if ((piVar41 == (int *)0x0) || (*(float *)(param_1 + 0x368) * (float)piVar41 < fVar42)) {
          uVar20 = (ulong)(piVar41 < (int *)0x3 ||
                          ((ulong)piVar41 & (ulong)((long)piVar41 + -1)) != 0) | (long)piVar41 << 1;
          uVar32 = (ulong)(fVar42 / *(float *)(param_1 + 0x368));
          if (uVar32 <= uVar20) {
            uVar32 = uVar20;
          }
          FUN_00af2a80(plVar8,uVar32);
          piVar41 = *(int **)(param_1 + 0x310);
          if (((ulong)piVar41 & (ulong)((long)piVar41 + -1)) == 0) {
            unaff_x28 = (int *)((ulong)((long)piVar41 + -1) & (ulong)piVar40);
          }
          else if (piVar40 < piVar41) {
            unaff_x28 = piVar40;
          }
          else {
            uVar20 = 0;
            if (piVar41 != (int *)0x0) {
              uVar20 = (ulong)piVar40 / (ulong)piVar41;
            }
            unaff_x28 = (int *)((long)piVar40 - uVar20 * (long)piVar41);
          }
        }
        plVar27 = *(long **)(*plVar8 + (long)unaff_x28 * 8);
        if (plVar27 == (long *)0x0) {
          *plVar23 = *plVar9;
          *plVar9 = (long)plVar23;
          *(long **)(*plVar8 + (long)unaff_x28 * 8) = plVar9;
          if (*plVar23 != 0) {
            piVar40 = *(int **)(*plVar23 + 8);
            if (((ulong)piVar41 & (ulong)((long)piVar41 + -1)) == 0) {
              piVar40 = (int *)((ulong)piVar40 & (ulong)((long)piVar41 + -1));
            }
            else if (piVar41 <= piVar40) {
              uVar20 = 0;
              if (piVar41 != (int *)0x0) {
                uVar20 = (ulong)piVar40 / (ulong)piVar41;
              }
              piVar40 = (int *)((long)piVar40 - uVar20 * (long)piVar41);
            }
            plVar27 = (long *)(*plVar8 + (long)piVar40 * 8);
            goto LAB_00d77ea8;
          }
        }
        else {
          *plVar23 = *plVar27;
LAB_00d77ea8:
          *plVar27 = (long)plVar23;
        }
        *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) + 1;
      }
joined_r0x00d77c44:
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar10);
  }
  return;
}


