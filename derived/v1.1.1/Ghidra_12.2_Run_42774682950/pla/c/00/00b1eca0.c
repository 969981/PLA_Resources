/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1eca0; name: FUN_00b1eca0
 */


undefined8 FUN_00b1eca0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char *__s;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  size_t sVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if (((param_2 != (undefined8 *)0x0) &&
      (puVar19 = (undefined1 *)*param_3, puVar19 != &DAT_cbf29ce484222645)) &&
     (*(long *)(param_1 + 0x70) != 0)) {
    puVar10 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
    piVar4 = (int *)((long)puVar10 + (ulong)*puVar10);
    puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    puVar10 = puVar5 + 1;
    uVar13 = (ulong)*puVar5;
    if (uVar13 != 0) {
      puVar5 = puVar10 + uVar13;
      do {
        piVar4 = (int *)((long)puVar10 + (ulong)*puVar10);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar13 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar6 = (uint *)((long)piVar4 + uVar13);
          lVar14 = (long)puVar6 + (ulong)*puVar6;
        }
        pbVar17 = (byte *)(lVar14 + 4);
        bVar7 = *pbVar17;
        puVar16 = &DAT_cbf29ce484222645;
        if (bVar7 != 0) {
          puVar16 = &DAT_cbf29ce484222645;
          pbVar15 = (byte *)(lVar14 + 5);
          do {
            puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar7 != 0);
        }
        if (puVar19 == puVar16) {
          sVar8 = strlen((char *)pbVar17);
          param_2[2] = sVar8;
          plVar9 = (long *)param_2[3];
          param_2[3] = 0;
          *param_2 = puVar19;
          param_2[1] = pbVar17;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (6 - (long)*piVar4)));
          puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
          puVar10 = puVar5 + 1;
          uVar13 = (ulong)*puVar5;
          if (uVar13 == 0) {
            return 1;
          }
          puVar5 = puVar10 + uVar13;
          puVar1 = param_2 + 7;
          goto LAB_00b1ee28;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar5);
    }
  }
  return 0;
LAB_00b1ee28:
  puVar19 = &DAT_cbf29ce484222645;
  piVar4 = (int *)((long)puVar10 + (ulong)*puVar10);
  local_90 = &DAT_cbf29ce484222645;
  pcStack_88 = "";
  local_80 = 0;
  local_78 = (long *)0x0;
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar13 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar6 = (uint *)((long)piVar4 + uVar13);
    lVar14 = (long)puVar6 + (ulong)*puVar6;
  }
  __s = (char *)(lVar14 + 4);
  local_80 = strlen(__s);
  bVar7 = *(byte *)(lVar14 + 4);
  if (bVar7 != 0) {
    pbVar17 = (byte *)(lVar14 + 5);
    do {
      puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar7 != 0);
  }
  local_78 = (long *)0x0;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
    local_70 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    local_70 = 0;
    if (uVar13 != 0) {
      local_70 = *(undefined4 *)((long)piVar4 + uVar13);
    }
  }
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 9) {
    local_6c = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
    local_6c = 0;
    if (uVar13 != 0) {
      local_6c = *(undefined4 *)((long)piVar4 + uVar13);
    }
  }
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
    local_68 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
    local_68 = 0;
    if (uVar13 != 0) {
      local_68 = *(undefined4 *)((long)piVar4 + uVar13);
    }
  }
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) {
    local_64 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6];
    local_64 = 0;
    if (uVar13 != 0) {
      local_64 = *(undefined4 *)((long)piVar4 + uVar13);
    }
  }
  lVar14 = param_2[5];
  local_90 = puVar19;
  pcStack_88 = __s;
  if (lVar14 == param_2[6]) {
    uVar13 = param_2[8];
    lVar14 = lVar14 - param_2[4] >> 4;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar2 = lVar14 * -0x5555555555555555 + 1;
    if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)(param_2[6] - param_2[4]) >> 4;
    if ((ulong)(lVar11 * -0x5555555555555555) < uVar13 >> 1) {
      uVar12 = lVar11 * 0x5555555555555556;
      uVar13 = uVar2;
      if (uVar2 <= uVar12) {
        uVar13 = uVar12;
      }
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 * 0x30,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar21 = lVar11 + lVar14 * 0x10;
    FUN_00b1f3bc(puVar1,lVar21,&local_90);
    lVar20 = param_2[4];
    lVar18 = param_2[5];
    lVar3 = lVar21 + 0x30;
    if (lVar18 == lVar20) {
      lVar14 = lVar20;
    }
    else {
      lVar22 = lVar21 + -0x30;
      FUN_00b1f3bc(puVar1,lVar22,lVar18 + -0x30);
      if (lVar18 + -0x30 != lVar20) {
        lVar22 = lVar21 + -0x60;
        FUN_00b1f3bc(puVar1,lVar22,lVar18 + -0x60);
        if (lVar18 + -0x60 != lVar20) {
          lVar22 = lVar21 + -0x90;
          FUN_00b1f3bc(puVar1,lVar22,lVar18 + -0x90);
          if (lVar18 + -0x90 != lVar20) {
            lVar14 = lVar11 + lVar14 * 0x10 + -0xc0;
            do {
              lVar22 = lVar14;
              FUN_00b1f3bc(puVar1,lVar22,lVar18 + -0xc0);
              lVar18 = lVar18 + -0x30;
              lVar14 = lVar22 + -0x30;
            } while (lVar20 + 0x90 != lVar18);
          }
        }
      }
      lVar20 = param_2[5];
      lVar14 = param_2[4];
      lVar21 = lVar22;
    }
    lVar18 = param_2[6];
    param_2[6] = lVar11 + uVar13 * 0x30;
    param_2[4] = lVar21;
    param_2[5] = lVar3;
    if (lVar20 != lVar14) {
      if (*(long **)(lVar20 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar20 + -0x18) + 0x20))();
      }
      if (lVar20 + -0x30 != lVar14) {
        if (*(long **)(lVar20 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar20 + -0x48) + 0x20))();
        }
        if (lVar20 + -0x60 != lVar14) {
          if (*(long **)(lVar20 + -0x78) != (long *)0x0) {
            (**(code **)(**(long **)(lVar20 + -0x78) + 0x20))();
          }
          if (lVar20 + -0x90 != lVar14) {
            plVar9 = *(long **)(lVar20 + -0xa8);
            while( true ) {
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x20))();
              }
              if (lVar14 + 0x90 == lVar20 + -0x30) break;
              plVar9 = *(long **)(lVar20 + -0xd8);
              lVar20 = lVar20 + -0x30;
            }
          }
        }
      }
    }
    if (lVar14 != 0) {
      plVar9 = (long *)*puVar1;
      uVar13 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar13 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar14,lVar18 - lVar14,8);
          goto joined_r0x00b1f1a8;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar18 - lVar14,8);
    }
  }
  else {
    FUN_00b1f3bc(puVar1,lVar14,&local_90);
    param_2[5] = param_2[5] + 0x30;
  }
joined_r0x00b1f1a8:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar10 = puVar10 + 1;
  if (puVar10 == puVar5) {
    return 1;
  }
  goto LAB_00b1ee28;
}


