/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304ca30; name: FUN_0304ca30
 */


void FUN_0304ca30(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint *puVar28;
  uint *puVar29;
  long *local_4d8;
  uint local_4cc;
  long *local_4c8;
  uint *local_4c0;
  uint *local_4b8;
  long *local_4b0;
  undefined8 local_4a8;
  long local_4a0;
  undefined8 local_498;
  long *local_490;
  undefined8 local_488;
  uint *local_480;
  uint local_478;
  uint local_474;
  uint *local_468 [3];
  uint local_450;
  uint local_44c;
  uint *local_268 [3];
  long local_250;
  uint *local_248;
  uint local_240;
  undefined8 *local_238;
  
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  local_468[1] = *(uint **)(param_2 + 0x4e0);
  local_4c0 = *(uint **)(param_1[4] + (long)(int)param_1[5] * 8 + -8);
  local_468[0] = (uint *)(param_1 + 2);
  uVar19 = *local_4c0 >> 0x10;
  uVar27 = (ulong)uVar19;
  uVar21 = *local_4c0;
  local_44c = uVar21 & 0xffff;
  lVar22 = param_1[3];
  *(uint *)(param_1 + 3) = (int)lVar22 - local_44c;
  puVar14 = *(undefined8 **)(param_2 + 0x4e0);
  *(undefined1 *)(param_3 + 0xc) = 1;
  puVar28 = (uint *)**(undefined8 **)(param_3 + 0x10);
  local_238 = *(undefined8 **)(param_2 + 0x4e0);
  plVar7 = param_1 + 0x42;
  local_248 = (uint *)0x0;
  local_490 = (long *)0x0;
  uVar23 = *puVar28 & 0xffff;
  local_250 = param_3 + 0x100;
  local_240 = 0;
  puVar13 = (uint *)0x0;
  if ((*puVar28 & 0xffff) != 0) {
    puVar13 = puVar28 + 8;
  }
  local_468[2] = local_4c0;
  local_450 = uVar19;
  FUN_032bf22c(plVar7);
  local_488 = *(undefined8 **)(param_2 + 0x4e0);
  local_480 = *(uint **)(param_1[0x44] + (long)(int)param_1[0x45] * 8 + -8);
  local_478 = *local_480 >> 0x10;
  local_474 = *local_480 & 0xffff;
  *(uint *)(param_1 + 0x43) = (int)param_1[0x43] - local_474;
  local_490 = plVar7;
  if (uVar23 != 0) {
    local_4cc = 0x7fffffff;
    uVar25 = uVar23;
    local_4b8 = puVar28 + 8;
    do {
      iVar24 = (uint)*(byte *)((long)puVar13 + 9) * 0x10 + 0x10;
      if ((int)(iVar24 + uVar19) < 0xee1) {
        puVar20 = (undefined8 *)((long)local_468[2] + (long)(int)uVar19 + 0x20);
      }
      else {
        puVar20 = (undefined8 *)FUN_032bf82c(local_468);
      }
      *puVar20 = 0xffffffffffffffff;
      memcpy(puVar20 + 2,puVar13,(ulong)*(byte *)((long)puVar13 + 9) << 4);
      local_450 = local_450 + iVar24;
      local_44c = local_44c + 1;
      lVar9 = *(long *)(param_2 + 0x40);
      if (((ulong)*(byte *)(puVar20 + 3) == 2) && (2 < *(byte *)((long)puVar20 + 0x19))) {
        if (puVar20[6] != 0) {
          *(byte *)((long)puVar20 + 0x1f) = *(byte *)((long)puVar20 + 0x1f) | 8;
        }
        puVar20[6] = 0;
        *(undefined2 *)(puVar20 + 7) = 0;
      }
      plVar7 = *(long **)(lVar9 + (ulong)*(byte *)(puVar20 + 3) * 8 + 0x13b8);
      if ((int)plVar7[1] != 0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,puVar20 + 2,local_268,&local_490);
      }
      uVar26 = uVar23 - 1;
      uVar23 = uVar26;
      uVar19 = local_450;
      if ((int)uVar26 < 1) {
        if (local_4cc == 0) {
          puVar13 = (uint *)0x0;
          puVar29 = (uint *)0x0;
          local_4cc = 0;
        }
        else {
          puVar29 = *(uint **)(puVar28 + 2);
          if (puVar29 != (uint *)0x0) {
            uVar23 = *puVar29 & 0xffff;
            if ((int)local_4cc <= (int)(*puVar29 & 0xffff)) {
              uVar23 = local_4cc;
            }
            if (0 < (int)uVar23) {
              local_4cc = local_4cc - uVar23;
              puVar13 = puVar29 + 8;
              Hint_Prefetch(*(long *)(puVar29 + 2),0,0,0);
              Hint_Prefetch(*(long *)(puVar29 + 2) + 0x40,0,0,0);
              Hint_Prefetch(puVar29 + 0x20,0,0,0);
              Hint_Prefetch(puVar29 + 0x30,0,0,0);
              goto LAB_0304cc5c;
            }
          }
          puVar13 = (uint *)0x0;
          uVar23 = uVar26;
        }
LAB_0304cc5c:
        uVar26 = uVar23;
        if (uVar25 == (*puVar28 & 0xffff)) {
          *(undefined8 *)(*(long *)(param_3 + 0x10) + (long)(int)puVar28[1] * 8) = 0;
          *(undefined1 *)(param_3 + 0xc) = 1;
          iVar24 = *(int *)(puVar14 + 0xb);
          lVar9 = puVar14[1];
          *(uint **)(lVar9 + (long)iVar24 * 8) = puVar28;
          *(int *)(puVar14 + 0xb) = iVar24 + 1;
          if (*(int *)((long)puVar14 + 0x5c) <= iVar24 + 1) {
            (**(code **)(*(long *)*puVar14 + 0x28))
                      ((long *)*puVar14,lVar9 + (long)(iVar24 + -5) * 8,6);
            *(int *)(puVar14 + 0xb) = iVar24 + -5;
            uVar19 = local_450;
          }
        }
        else {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar5) {
              *puVar28 = *puVar28 - uVar25;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        puVar13 = local_4b8 + (ulong)*(byte *)((long)puVar13 + 9) * 4;
        puVar29 = puVar28;
        uVar26 = uVar25;
      }
      uVar25 = uVar26;
      puVar28 = puVar29;
      local_450 = uVar19;
      if (puVar13 == (uint *)0x0) break;
      local_4b8 = puVar13;
    } while( true );
  }
  puVar14 = local_488;
  if (local_474 == 0) {
    plVar7 = local_490 + 3;
    iVar24 = (int)*plVar7;
    if (iVar24 < 2) goto LAB_0304ccec;
    lVar15 = *(long *)(local_490[2] + (long)(iVar24 + -2) * 8);
    iVar8 = *(int *)(local_488 + 0xb);
    lVar9 = local_488[1];
    *(undefined8 *)(lVar9 + (long)iVar8 * 8) =
         *(undefined8 *)(local_490[2] + (long)(iVar24 + -1) * 8);
    *(int *)(local_488 + 0xb) = iVar8 + 1;
    if (*(int *)((long)local_488 + 0x5c) <= iVar8 + 1) {
      (**(code **)(*(long *)*local_488 + 0x28))((long *)*local_488,lVar9 + (long)(iVar8 + -5) * 8,6)
      ;
      *(int *)(puVar14 + 0xb) = iVar8 + -5;
    }
    *(undefined8 *)(lVar15 + 8) = 0;
    uVar23 = 0xffffffff;
  }
  else {
LAB_0304ccec:
    plVar7 = local_490 + 1;
    local_480[2] = 0;
    local_480[3] = 0;
    *local_480 = *local_480 & 0xffff0000 | local_474 & 0xffff;
    *local_480 = *local_480 & 0xffff | local_478 << 0x10;
    uVar23 = local_474;
  }
  puVar13 = local_468[1];
  *(uint *)plVar7 = (int)*plVar7 + uVar23;
  local_480 = (uint *)0x0;
  local_490 = (long *)0x0;
  uVar23 = local_468[0][2];
  iVar24 = (uVar23 - (int)lVar22) + local_44c;
  if (iVar24 == 0) {
LAB_0304cd58:
    if (local_44c != 0) goto LAB_0304cd6c;
LAB_0304cd5c:
    puVar28 = local_468[0] + 6;
    uVar19 = *puVar28;
    if ((int)uVar19 < 2) goto LAB_0304cd6c;
    iVar8 = *(int *)((long)local_468[1] + 0x58);
    lVar9 = *(long *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar19 - 2) * 8);
    lVar22 = *(long *)((long)local_468[1] + 8);
    *(undefined8 *)(lVar22 + (long)iVar8 * 8) =
         *(undefined8 *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar19 - 1) * 8);
    *(int *)((long)local_468[1] + 0x58) = iVar8 + 1;
    if (*(int *)((long)local_468[1] + 0x5c) <= iVar8 + 1) {
      (**(code **)(**(long **)local_468[1] + 0x28))
                (*(long **)local_468[1],lVar22 + (long)(iVar8 + -5) * 8,6);
      *(int *)((long)puVar13 + 0x58) = iVar8 + -5;
    }
    *(undefined8 *)(lVar9 + 8) = 0;
    uVar23 = *puVar28 - 1;
  }
  else {
    if (local_4c0 == local_468[2]) {
LAB_0304cd54:
      uVar21 = local_44c - uVar21;
      goto LAB_0304cd58;
    }
    if ((uVar21 & 0xffff) == (*local_4c0 & 0xffff)) {
      uVar27 = 0;
      uVar21 = 0;
      local_4c0 = *(uint **)(local_4c0 + 2);
    }
    if (local_4c0 == local_468[2]) {
      local_4c0 = local_468[2];
      goto LAB_0304cd54;
    }
    uVar21 = *local_4c0 - uVar21;
    if (local_44c == 0) goto LAB_0304cd5c;
LAB_0304cd6c:
    uVar23 = uVar23 + local_44c;
    local_468[2][2] = 0;
    local_468[2][3] = 0;
    *local_468[2] = *local_468[2] & 0xffff0000 | local_44c & 0xffff;
    *local_468[2] = *local_468[2] & 0xffff | local_450 << 0x10;
    puVar28 = local_468[0] + 2;
  }
  puVar14 = local_238;
  *puVar28 = uVar23;
  local_468[2] = (uint *)0x0;
  local_468[0] = (uint *)0x0;
  if (local_240 != 0) {
    if (local_240 == (*local_248 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_250 + 0x10) + (long)(int)local_248[1] * 8) = 0;
      *(undefined1 *)(local_250 + 0xc) = 1;
      iVar8 = *(int *)(local_238 + 0xb);
      lVar22 = local_238[1];
      *(uint **)(lVar22 + (long)iVar8 * 8) = local_248;
      *(int *)(local_238 + 0xb) = iVar8 + 1;
      if (*(int *)((long)local_238 + 0x5c) <= iVar8 + 1) {
        (**(code **)(*(long *)*local_238 + 0x28))
                  ((long *)*local_238,lVar22 + (long)(iVar8 + -5) * 8,6);
        *(int *)(puVar14 + 0xb) = iVar8 + -5;
      }
    }
    else {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_248,0x10);
        if (bVar5) {
          *local_248 = *local_248 - local_240;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_240 = 0;
    *(undefined1 *)(local_250 + 0xc) = 1;
  }
  puVar14 = local_488;
  local_238 = (undefined8 *)0x0;
  local_250 = 0;
  puVar13 = local_468[1];
  uVar23 = local_44c;
  if (local_490 != (long *)0x0) {
    if (local_474 == 0) {
      plVar7 = local_490 + 3;
      iVar8 = (int)*plVar7;
      if (iVar8 < 2) goto LAB_0304e34c;
      iVar3 = *(int *)(local_488 + 0xb);
      lVar9 = *(long *)(local_490[2] + (long)(iVar8 + -2) * 8);
      lVar22 = local_488[1];
      *(undefined8 *)(lVar22 + (long)iVar3 * 8) =
           *(undefined8 *)(local_490[2] + (long)(iVar8 + -1) * 8);
      *(int *)(local_488 + 0xb) = iVar3 + 1;
      if (*(int *)((long)local_488 + 0x5c) <= iVar3 + 1) {
        (**(code **)(*(long *)*local_488 + 0x28))
                  ((long *)*local_488,lVar22 + (long)(iVar3 + -5) * 8,6);
        *(int *)(puVar14 + 0xb) = iVar3 + -5;
      }
      *(undefined8 *)(lVar9 + 8) = 0;
      uVar23 = 0xffffffff;
    }
    else {
LAB_0304e34c:
      plVar7 = local_490 + 1;
      local_480[2] = 0;
      local_480[3] = 0;
      *local_480 = *local_480 & 0xffff0000 | local_474 & 0xffff;
      *local_480 = *local_480 & 0xffff | local_478 << 0x10;
      uVar23 = local_474;
    }
    *(uint *)plVar7 = (int)*plVar7 + uVar23;
    local_480 = (uint *)0x0;
    puVar13 = local_468[1];
    uVar23 = local_44c;
  }
  local_468[1] = puVar13;
  local_44c = uVar23;
  if (local_468[0] != (uint *)0x0) {
    local_490 = (long *)0x0;
    if (uVar23 == 0) {
      puVar28 = local_468[0] + 6;
      uVar19 = *puVar28;
      if ((int)uVar19 < 2) goto LAB_0304e3c0;
      iVar8 = *(int *)((long)puVar13 + 0x58);
      lVar9 = *(long *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar19 - 2) * 8);
      lVar22 = *(long *)((long)puVar13 + 8);
      *(undefined8 *)(lVar22 + (long)iVar8 * 8) =
           *(undefined8 *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar19 - 1) * 8);
      *(int *)((long)puVar13 + 0x58) = iVar8 + 1;
      if (*(int *)((long)puVar13 + 0x5c) <= iVar8 + 1) {
        (**(code **)(**(long **)puVar13 + 0x28))
                  (*(long **)puVar13,lVar22 + (long)(iVar8 + -5) * 8,6);
        *(int *)((long)puVar13 + 0x58) = iVar8 + -5;
      }
      *(undefined8 *)(lVar9 + 8) = 0;
      uVar23 = 0xffffffff;
    }
    else {
LAB_0304e3c0:
      puVar28 = local_468[0] + 2;
      local_468[2][2] = 0;
      local_468[2][3] = 0;
      *local_468[2] = *local_468[2] & 0xffff0000 | uVar23 & 0xffff;
      *local_468[2] = *local_468[2] & 0xffff | local_450 << 0x10;
    }
    *puVar28 = *puVar28 + uVar23;
    local_468[2] = (uint *)0x0;
    local_468[0] = (uint *)0x0;
  }
  local_490 = (long *)0x0;
  local_488 = (undefined8 *)0x8000000000000000;
  local_480 = (uint *)((ulong)local_480 & 0xffffffff00000000);
  local_4a0 = 0;
  local_498 = 0x8000000000000000;
  if (iVar24 == 0) {
    local_4b0 = (long *)0x0;
    local_4a8 = 0x8000000000000000;
  }
  else {
    uVar23 = uVar21 & 0xffff;
    local_4cc = iVar24 - uVar23;
    puVar13 = (uint *)0x0;
    if ((uVar21 & 0xffff) != 0) {
      puVar13 = (uint *)((long)local_4c0 + uVar27 + 0x20);
    }
    local_4b0 = (long *)0x0;
    local_4a8 = 0x8000000000000000;
    if (puVar13 != (uint *)0x0) {
      lVar22 = 0;
      local_4c8 = (long *)0x0;
      uVar21 = 0;
      local_4d8 = (long *)0x0;
      do {
        lVar9 = *(long *)(*param_1 + 0x38);
        lVar15 = *(long *)(*param_1 + 0x150);
        uVar26 = *(uint *)(lVar9 + ((ulong)puVar13[5] & 0xffffff) * 0xc0 + 0x80);
        uVar2 = *(uint *)(lVar9 + ((ulong)puVar13[4] & 0xffffff) * 0xc0 + 0x80);
        puVar29 = (uint *)(param_1[0x71] + (long)(int)uVar26 * 0x20 + 0x10);
        uVar19 = *puVar29;
        puVar28 = (uint *)(param_1[0x71] + (long)(int)uVar2 * 0x20 + 0x10);
        uVar25 = *puVar28;
        iVar24 = *(int *)(lVar15 + (ulong)uVar26 * 0x80 + 0x4c);
        if ((iVar24 == 0x7fffffff || iVar24 == 0) &&
           (iVar24 = *(int *)(lVar15 + (ulong)uVar2 * 0x80 + 0x4c),
           iVar24 == 0 || iVar24 == 0x7fffffff)) {
          if (iVar24 == 0) {
            if (uVar19 != 0xffffffff) {
LAB_0304ce9c:
              lVar9 = *(long *)(param_1[0x73] + (long)(int)uVar19 * 8);
              goto LAB_0304cec0;
            }
            if ((int)param_1[0x69] == 0) {
              lVar9 = tpidr_el0;
              lVar15 = *(long *)(lVar9 + 0x38d490);
              if (lVar15 == 0) {
                lVar15 = FUN_0333d16c(0,1);
                *(long *)(lVar9 + 0x38d490) = lVar15;
              }
              plVar7 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
              puVar14 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x70,0);
              *(int *)(puVar14 + 4) = (int)param_1[0x74];
              puVar14[5] = 0xffffffffffffffff;
              puVar14[6] = puVar14 + 8;
              *(undefined4 *)(puVar14 + 10) = 0;
              *puVar14 = 0;
              puVar14[1] = 0x8000000000000000;
              puVar14[2] = 0;
              puVar14[3] = 0x8000000000000000;
              *(undefined2 *)((long)puVar14 + 0x24) = 0;
              *(undefined4 *)(puVar14 + 0xd) = 0;
              puVar14[7] = 0x8000000100000000;
              puVar14[0xb] = 0;
              puVar14[0xc] = 0x8000000000000000;
              uVar25 = *(uint *)((long)param_1 + 0x3a4);
              uVar26 = *(uint *)(param_1 + 0x74);
              lVar9 = (long)(int)uVar26;
              uVar19 = uVar26 + 1;
              if ((int)uVar26 < (int)(uVar25 & 0x3fffffff)) {
                lVar15 = param_1[0x73];
                uVar25 = uVar26;
              }
              else {
                lVar15 = param_1[0x73];
                if (0x3ffffffe < (int)uVar26) {
                  FUN_032bd0a8(uVar19);
                  uVar25 = *(uint *)((long)param_1 + 0x3a4);
                }
                uVar25 = (uVar25 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar25) {
                  uVar25 = 0x3fffffff;
                }
                uVar2 = uVar19;
                if ((int)uVar19 <= (int)uVar25) {
                  uVar2 = uVar25;
                }
                lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar15,uVar26,
                                      (uint *)((long)param_1 + 0x3a4));
                uVar25 = *(uint *)(param_1 + 0x74);
                param_1[0x73] = lVar15;
              }
              *(undefined8 **)(lVar15 + (long)(int)uVar25 * 8) = puVar14;
              *(uint *)(param_1 + 0x74) = uVar19;
            }
            else {
              iVar24 = (int)param_1[0x69] + -1;
              uVar26 = *(uint *)(param_1[0x68] + (long)iVar24 * 4);
              *(int *)(param_1 + 0x69) = iVar24;
              lVar9 = (long)(int)uVar26;
              lVar15 = tpidr_el0;
              lVar12 = *(long *)(lVar15 + 0x38d490);
              if (lVar12 == 0) {
                lVar12 = FUN_0333d16c(0,1);
                *(long *)(lVar15 + 0x38d490) = lVar12;
              }
              plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
              puVar14 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x70,0);
              *(uint *)(puVar14 + 4) = uVar26;
              puVar14[5] = 0xffffffffffffffff;
              puVar14[6] = puVar14 + 8;
              *(undefined2 *)((long)puVar14 + 0x24) = 0;
              puVar14[7] = 0x8000000100000000;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 0xd) = 0;
              *puVar14 = 0;
              puVar14[1] = 0x8000000000000000;
              puVar14[2] = 0;
              puVar14[3] = 0x8000000000000000;
              puVar14[0xb] = 0;
              puVar14[0xc] = 0x8000000000000000;
              *(undefined8 **)(param_1[0x73] + lVar9 * 8) = puVar14;
            }
            plVar7 = *(long **)(param_1[0x73] + lVar9 * 8);
            FUN_0304e930(plVar7,puVar13,&local_490,&local_4a0);
            *puVar29 = uVar26;
            uVar19 = puVar13[5];
            lVar15 = *param_1;
            lVar9 = *(long *)(lVar15 + 0x38);
            uVar27 = (ulong)uVar19 & 0xffffff;
            bVar1 = *(byte *)(lVar9 + uVar27 * 0xc0 + 0x88);
            while( true ) {
              if ((bVar1 & 1) != 0) {
                iVar24 = (int)plVar7[1];
                uVar26 = *(uint *)((long)plVar7 + 0xc);
                uVar25 = iVar24 + 1;
                if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                  lVar12 = *plVar7;
                }
                else {
                  lVar12 = *plVar7;
                  if (0x3ffffffe < iVar24) {
                    FUN_032bd0a8(uVar25);
                    uVar26 = *(uint *)((long)plVar7 + 0xc);
                  }
                  uVar26 = (uVar26 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar26) {
                    uVar26 = 0x3fffffff;
                  }
                  uVar2 = uVar25;
                  if ((int)uVar25 <= (int)uVar26) {
                    uVar2 = uVar26;
                  }
                  lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,
                                        (uint *)((long)plVar7 + 0xc));
                  iVar24 = (int)plVar7[1];
                  *plVar7 = lVar12;
                }
                lVar9 = lVar9 + uVar27 * 0xc0;
                *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
                *(uint *)(plVar7 + 1) = uVar25;
                uVar25 = *(uint *)(lVar9 + 0x50);
                if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                  *(uint *)((long)plVar7 + 0x2c) = uVar25;
                  *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
                }
              }
              lVar9 = *(long *)(lVar15 + 0x38);
              uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
              if (uVar25 == uVar19) break;
              uVar27 = (ulong)(uVar25 & 0xffffff);
              bVar1 = *(byte *)(lVar9 + uVar27 * 0xc0 + 0x88);
            }
          }
          else if (uVar19 == 0xffffffff || uVar25 != 0xffffffff) {
            if (uVar19 == 0xffffffff && uVar25 != 0xffffffff) {
              *puVar29 = uVar25;
              plVar7 = *(long **)(param_1[0x73] + (long)(int)uVar25 * 8);
              FUN_0304e930(plVar7,puVar13,&local_490,&local_4a0);
              lVar15 = *param_1;
              puVar28 = (uint *)((long)plVar7 + 0xc);
              uVar19 = puVar13[5];
              uVar27 = (ulong)uVar19 & 0xffffff;
              lVar9 = *(long *)(lVar15 + 0x38);
              if ((*(byte *)(lVar9 + uVar27 * 0xc0 + 0x88) & 1) != 0) {
                iVar24 = (int)plVar7[1];
                uVar26 = *(uint *)((long)plVar7 + 0xc);
                uVar25 = iVar24 + 1;
                if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                  lVar12 = *plVar7;
                }
                else {
                  lVar12 = *plVar7;
                  if (0x3ffffffe < iVar24) {
                    FUN_032bd0a8(uVar25);
                    uVar26 = *puVar28;
                  }
                  uVar26 = (uVar26 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar26) {
                    uVar26 = 0x3fffffff;
                  }
                  uVar2 = uVar25;
                  if ((int)uVar25 <= (int)uVar26) {
                    uVar2 = uVar26;
                  }
                  lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,puVar28);
                  iVar24 = (int)plVar7[1];
                  *plVar7 = lVar12;
                }
                lVar9 = lVar9 + uVar27 * 0xc0;
                *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
                *(uint *)(plVar7 + 1) = uVar25;
                uVar25 = *(uint *)(lVar9 + 0x50);
                if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                  *(uint *)((long)plVar7 + 0x2c) = uVar25;
                  *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
                }
              }
              lVar9 = *(long *)(lVar15 + 0x38);
              uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
              while (uVar25 != uVar19) {
                uVar27 = (ulong)(uVar25 & 0xffffff);
                if ((*(byte *)(lVar9 + uVar27 * 0xc0 + 0x88) & 1) != 0) {
                  iVar24 = (int)plVar7[1];
                  uVar26 = *(uint *)((long)plVar7 + 0xc);
                  uVar25 = iVar24 + 1;
                  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                    lVar12 = *plVar7;
                  }
                  else {
                    lVar12 = *plVar7;
                    if (0x3ffffffe < iVar24) {
                      FUN_032bd0a8(uVar25);
                      uVar26 = *puVar28;
                    }
                    uVar26 = (uVar26 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar26) {
                      uVar26 = 0x3fffffff;
                    }
                    uVar2 = uVar25;
                    if ((int)uVar25 <= (int)uVar26) {
                      uVar2 = uVar26;
                    }
                    lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,puVar28);
                    iVar24 = (int)plVar7[1];
                    *plVar7 = lVar12;
                  }
                  lVar9 = lVar9 + uVar27 * 0xc0;
                  *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
                  *(uint *)(plVar7 + 1) = uVar25;
                  uVar25 = *(uint *)(lVar9 + 0x50);
                  if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                    *(uint *)((long)plVar7 + 0x2c) = uVar25;
                    *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
                  }
                }
                lVar9 = *(long *)(lVar15 + 0x38);
                uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
              }
            }
            else if ((uVar25 & uVar19) == 0xffffffff) {
              if ((int)param_1[0x69] == 0) {
                lVar9 = tpidr_el0;
                lVar15 = *(long *)(lVar9 + 0x38d490);
                if (lVar15 == 0) {
                  lVar15 = FUN_0333d16c(0,1);
                  *(long *)(lVar9 + 0x38d490) = lVar15;
                }
                plVar7 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                puVar14 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x70,0);
                *(int *)(puVar14 + 4) = (int)param_1[0x74];
                puVar14[5] = 0xffffffffffffffff;
                puVar14[6] = puVar14 + 8;
                *(undefined4 *)(puVar14 + 10) = 0;
                *puVar14 = 0;
                puVar14[1] = 0x8000000000000000;
                puVar14[2] = 0;
                puVar14[3] = 0x8000000000000000;
                *(undefined2 *)((long)puVar14 + 0x24) = 0;
                *(undefined4 *)(puVar14 + 0xd) = 0;
                puVar14[7] = 0x8000000100000000;
                puVar14[0xb] = 0;
                puVar14[0xc] = 0x8000000000000000;
                uVar25 = *(uint *)((long)param_1 + 0x3a4);
                uVar26 = *(uint *)(param_1 + 0x74);
                lVar9 = (long)(int)uVar26;
                uVar19 = uVar26 + 1;
                if ((int)uVar26 < (int)(uVar25 & 0x3fffffff)) {
                  lVar15 = param_1[0x73];
                  uVar25 = uVar26;
                }
                else {
                  lVar15 = param_1[0x73];
                  if (0x3ffffffe < (int)uVar26) {
                    FUN_032bd0a8(uVar19);
                    uVar25 = *(uint *)((long)param_1 + 0x3a4);
                  }
                  uVar25 = (uVar25 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar25) {
                    uVar25 = 0x3fffffff;
                  }
                  uVar2 = uVar19;
                  if ((int)uVar19 <= (int)uVar25) {
                    uVar2 = uVar25;
                  }
                  lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar15,uVar26,
                                        (uint *)((long)param_1 + 0x3a4));
                  uVar25 = *(uint *)(param_1 + 0x74);
                  param_1[0x73] = lVar15;
                }
                *(undefined8 **)(lVar15 + (long)(int)uVar25 * 8) = puVar14;
                *(uint *)(param_1 + 0x74) = uVar19;
              }
              else {
                iVar24 = (int)param_1[0x69] + -1;
                uVar26 = *(uint *)(param_1[0x68] + (long)iVar24 * 4);
                *(int *)(param_1 + 0x69) = iVar24;
                lVar9 = (long)(int)uVar26;
                lVar15 = tpidr_el0;
                lVar12 = *(long *)(lVar15 + 0x38d490);
                if (lVar12 == 0) {
                  lVar12 = FUN_0333d16c(0,1);
                  *(long *)(lVar15 + 0x38d490) = lVar12;
                }
                plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
                puVar14 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x70,0);
                *(uint *)(puVar14 + 4) = uVar26;
                puVar14[5] = 0xffffffffffffffff;
                puVar14[6] = puVar14 + 8;
                *(undefined2 *)((long)puVar14 + 0x24) = 0;
                puVar14[7] = 0x8000000100000000;
                *(undefined4 *)(puVar14 + 10) = 0;
                *(undefined4 *)(puVar14 + 0xd) = 0;
                *puVar14 = 0;
                puVar14[1] = 0x8000000000000000;
                puVar14[2] = 0;
                puVar14[3] = 0x8000000000000000;
                puVar14[0xb] = 0;
                puVar14[0xc] = 0x8000000000000000;
                *(undefined8 **)(param_1[0x73] + lVar9 * 8) = puVar14;
              }
              *puVar29 = uVar26;
              *puVar28 = uVar26;
              plVar7 = *(long **)(param_1[0x73] + lVar9 * 8);
              FUN_0304e930(plVar7,puVar13,&local_490,&local_4a0);
              uVar19 = puVar13[5];
              puVar28 = (uint *)((long)plVar7 + 0xc);
              uVar27 = (ulong)uVar19 & 0xffffff;
              lVar15 = *param_1;
              lVar9 = *(long *)(lVar15 + 0x38);
              bVar1 = *(byte *)(lVar9 + uVar27 * 0xc0 + 0x88);
              while( true ) {
                if ((bVar1 & 1) != 0) {
                  iVar24 = (int)plVar7[1];
                  uVar26 = *(uint *)((long)plVar7 + 0xc);
                  uVar25 = iVar24 + 1;
                  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                    lVar12 = *plVar7;
                  }
                  else {
                    lVar12 = *plVar7;
                    if (0x3ffffffe < iVar24) {
                      FUN_032bd0a8(uVar25);
                      uVar26 = *puVar28;
                    }
                    uVar26 = (uVar26 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar26) {
                      uVar26 = 0x3fffffff;
                    }
                    uVar2 = uVar25;
                    if ((int)uVar25 <= (int)uVar26) {
                      uVar2 = uVar26;
                    }
                    lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,puVar28);
                    iVar24 = (int)plVar7[1];
                    *plVar7 = lVar12;
                  }
                  lVar9 = lVar9 + uVar27 * 0xc0;
                  *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
                  *(uint *)(plVar7 + 1) = uVar25;
                  uVar25 = *(uint *)(lVar9 + 0x50);
                  if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                    *(uint *)((long)plVar7 + 0x2c) = uVar25;
                    *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
                  }
                }
                lVar9 = *(long *)(lVar15 + 0x38);
                uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
                if (uVar25 == uVar19) break;
                uVar27 = (ulong)(uVar25 & 0xffffff);
                bVar1 = *(byte *)(lVar9 + uVar27 * 0xc0 + 0x88);
              }
              lVar15 = *param_1;
              uVar19 = puVar13[4];
              lVar9 = *(long *)(lVar15 + 0x38);
              uVar27 = (ulong)uVar19 & 0xffffff;
              bVar1 = *(byte *)(lVar9 + uVar27 * 0xc0 + 0x88);
              while( true ) {
                if ((bVar1 & 1) != 0) {
                  iVar24 = (int)plVar7[1];
                  uVar26 = *(uint *)((long)plVar7 + 0xc);
                  uVar25 = iVar24 + 1;
                  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                    lVar12 = *plVar7;
                  }
                  else {
                    lVar12 = *plVar7;
                    if (0x3ffffffe < iVar24) {
                      FUN_032bd0a8(uVar25);
                      uVar26 = *puVar28;
                    }
                    uVar26 = (uVar26 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar26) {
                      uVar26 = 0x3fffffff;
                    }
                    uVar2 = uVar25;
                    if ((int)uVar25 <= (int)uVar26) {
                      uVar2 = uVar26;
                    }
                    lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,puVar28);
                    iVar24 = (int)plVar7[1];
                    *plVar7 = lVar12;
                  }
                  lVar9 = lVar9 + uVar27 * 0xc0;
                  *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
                  *(uint *)(plVar7 + 1) = uVar25;
                  uVar25 = *(uint *)(lVar9 + 0x50);
                  if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                    *(uint *)((long)plVar7 + 0x2c) = uVar25;
                    *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
                  }
                }
                lVar9 = *(long *)(lVar15 + 0x38);
                uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
                if (uVar25 == uVar19) break;
                uVar27 = (ulong)(uVar25 & 0xffffff);
                bVar1 = *(byte *)(lVar9 + uVar27 * 0xc0 + 0x88);
              }
            }
            else {
              if (uVar19 == uVar25) goto LAB_0304ce9c;
              uVar25 = local_4a8._4_4_;
              uVar19 = uVar21 + 1;
              if ((int)(local_4a8._4_4_ & 0x3fffffff) <= (int)uVar21) {
                if (0x3ffffffe < (int)uVar21) {
                  FUN_032bd0a8(uVar19);
                }
                uVar25 = (uVar25 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar25) {
                  uVar25 = 0x3fffffff;
                }
                uVar26 = uVar19;
                if ((int)uVar19 <= (int)uVar25) {
                  uVar26 = uVar25;
                }
                local_4d8 = (long *)FUN_032bd1d4(PTR_PTR_0434a090,uVar26,8,local_4d8,uVar21,
                                                 (long)&local_4a8 + 4);
                local_4c8 = local_4d8;
                local_4b0 = local_4d8;
                uVar21 = (uint)local_4a8;
              }
              local_4c8[(int)uVar21] = (long)puVar13;
              local_4a8 = CONCAT44(local_4a8._4_4_,uVar19);
              uVar21 = uVar19;
            }
          }
          else {
            *puVar28 = uVar19;
            plVar7 = *(long **)(param_1[0x73] + (long)(int)uVar19 * 8);
            FUN_0304e930(plVar7,puVar13,&local_490,&local_4a0);
            lVar15 = *param_1;
            puVar28 = (uint *)((long)plVar7 + 0xc);
            uVar19 = puVar13[4];
            uVar27 = (ulong)uVar19 & 0xffffff;
            lVar9 = *(long *)(lVar15 + 0x38);
            if ((*(byte *)(lVar9 + uVar27 * 0xc0 + 0x88) & 1) != 0) {
              iVar24 = (int)plVar7[1];
              uVar26 = *(uint *)((long)plVar7 + 0xc);
              uVar25 = iVar24 + 1;
              if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                lVar12 = *plVar7;
              }
              else {
                lVar12 = *plVar7;
                if (0x3ffffffe < iVar24) {
                  FUN_032bd0a8(uVar25);
                  uVar26 = *puVar28;
                }
                uVar26 = (uVar26 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar26) {
                  uVar26 = 0x3fffffff;
                }
                uVar2 = uVar25;
                if ((int)uVar25 <= (int)uVar26) {
                  uVar2 = uVar26;
                }
                lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,puVar28);
                iVar24 = (int)plVar7[1];
                *plVar7 = lVar12;
              }
              lVar9 = lVar9 + uVar27 * 0xc0;
              *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
              *(uint *)(plVar7 + 1) = uVar25;
              uVar25 = *(uint *)(lVar9 + 0x50);
              if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                *(uint *)((long)plVar7 + 0x2c) = uVar25;
                *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
              }
            }
            lVar9 = *(long *)(lVar15 + 0x38);
            uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
            while (uVar25 != uVar19) {
              uVar27 = (ulong)(uVar25 & 0xffffff);
              if ((*(byte *)(lVar9 + uVar27 * 0xc0 + 0x88) & 1) != 0) {
                iVar24 = (int)plVar7[1];
                uVar26 = *(uint *)((long)plVar7 + 0xc);
                uVar25 = iVar24 + 1;
                if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
                  lVar12 = *plVar7;
                }
                else {
                  lVar12 = *plVar7;
                  if (0x3ffffffe < iVar24) {
                    FUN_032bd0a8(uVar25);
                    uVar26 = *puVar28;
                  }
                  uVar26 = (uVar26 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar26) {
                    uVar26 = 0x3fffffff;
                  }
                  uVar2 = uVar25;
                  if ((int)uVar25 <= (int)uVar26) {
                    uVar2 = uVar26;
                  }
                  lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar12,iVar24,puVar28);
                  iVar24 = (int)plVar7[1];
                  *plVar7 = lVar12;
                }
                lVar9 = lVar9 + uVar27 * 0xc0;
                *(undefined4 *)(lVar12 + (long)iVar24 * 4) = *(undefined4 *)(lVar9 + 0x50);
                *(uint *)(plVar7 + 1) = uVar25;
                uVar25 = *(uint *)(lVar9 + 0x50);
                if (uVar25 < *(uint *)((long)plVar7 + 0x2c)) {
                  *(uint *)((long)plVar7 + 0x2c) = uVar25;
                  *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar15 + 0x5b8);
                }
              }
              lVar9 = *(long *)(lVar15 + 0x38);
              uVar25 = *(uint *)(lVar9 + uVar27 * 0xc0 + 0x84);
            }
          }
        }
        else {
          lVar9 = lVar22;
          if (lVar22 == 0) {
            if ((int)param_1[0x69] == 0) {
              lVar22 = tpidr_el0;
              lVar9 = *(long *)(lVar22 + 0x38d490);
              if (lVar9 == 0) {
                lVar9 = FUN_0333d16c(0,1);
                *(long *)(lVar22 + 0x38d490) = lVar9;
              }
              plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
              puVar14 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x70,0);
              *(int *)(puVar14 + 4) = (int)param_1[0x74];
              puVar14[5] = 0xffffffffffffffff;
              puVar14[6] = puVar14 + 8;
              *(undefined4 *)(puVar14 + 10) = 0;
              *puVar14 = 0;
              puVar14[1] = 0x8000000000000000;
              puVar14[2] = 0;
              puVar14[3] = 0x8000000000000000;
              *(undefined2 *)((long)puVar14 + 0x24) = 0;
              *(undefined4 *)(puVar14 + 0xd) = 0;
              puVar14[7] = 0x8000000100000000;
              puVar14[0xb] = 0;
              puVar14[0xc] = 0x8000000000000000;
              uVar25 = *(uint *)((long)param_1 + 0x3a4);
              iVar24 = (int)param_1[0x74];
              lVar22 = (long)iVar24;
              uVar19 = iVar24 + 1;
              if (iVar24 < (int)(uVar25 & 0x3fffffff)) {
                lVar9 = param_1[0x73];
                iVar8 = iVar24;
              }
              else {
                lVar9 = param_1[0x73];
                if (0x3ffffffe < iVar24) {
                  FUN_032bd0a8(uVar19);
                  uVar25 = *(uint *)((long)param_1 + 0x3a4);
                }
                uVar25 = (uVar25 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar25) {
                  uVar25 = 0x3fffffff;
                }
                uVar26 = uVar19;
                if ((int)uVar19 <= (int)uVar25) {
                  uVar26 = uVar25;
                }
                lVar9 = FUN_032bd1d4(PTR_PTR_0434a080,uVar26,8,lVar9,iVar24,
                                     (uint *)((long)param_1 + 0x3a4));
                iVar8 = (int)param_1[0x74];
                param_1[0x73] = lVar9;
              }
              *(undefined8 **)(lVar9 + (long)iVar8 * 8) = puVar14;
              *(uint *)(param_1 + 0x74) = uVar19;
            }
            else {
              iVar8 = (int)param_1[0x69] + -1;
              iVar24 = *(int *)(param_1[0x68] + (long)iVar8 * 4);
              *(int *)(param_1 + 0x69) = iVar8;
              lVar22 = (long)iVar24;
              lVar9 = tpidr_el0;
              lVar15 = *(long *)(lVar9 + 0x38d490);
              if (lVar15 == 0) {
                lVar15 = FUN_0333d16c(0,1);
                *(long *)(lVar9 + 0x38d490) = lVar15;
              }
              plVar7 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
              puVar14 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x70,0);
              *(int *)(puVar14 + 4) = iVar24;
              puVar14[5] = 0xffffffffffffffff;
              puVar14[6] = puVar14 + 8;
              *(undefined2 *)((long)puVar14 + 0x24) = 0;
              puVar14[7] = 0x8000000100000000;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 0xd) = 0;
              *puVar14 = 0;
              puVar14[1] = 0x8000000000000000;
              puVar14[2] = 0;
              puVar14[3] = 0x8000000000000000;
              puVar14[0xb] = 0;
              puVar14[0xc] = 0x8000000000000000;
              *(undefined8 **)(param_1[0x73] + lVar22 * 8) = puVar14;
            }
            lVar9 = *(long *)(param_1[0x73] + lVar22 * 8);
            *(undefined2 *)(lVar9 + 0x24) = 0x101;
            *(undefined8 *)(lVar9 + 0x28) = 0xfffffffffffffffe;
            uVar25 = *(uint *)((long)param_1 + 0x33c);
            iVar8 = (int)param_1[0x67];
            uVar19 = iVar8 + 1;
            if (iVar8 < (int)(uVar25 & 0x3fffffff)) {
              lVar22 = param_1[0x66];
            }
            else {
              lVar22 = param_1[0x66];
              if (0x3ffffffe < iVar8) {
                FUN_032bd0a8(uVar19);
                uVar25 = *(uint *)((long)param_1 + 0x33c);
              }
              uVar25 = (uVar25 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar25) {
                uVar25 = 0x3fffffff;
              }
              uVar26 = uVar19;
              if ((int)uVar19 <= (int)uVar25) {
                uVar26 = uVar25;
              }
              lVar22 = FUN_032bd1d4(PTR_PTR_0434a080,uVar26,4,lVar22,iVar8,
                                    (uint *)((long)param_1 + 0x33c));
              iVar8 = (int)param_1[0x67];
              param_1[0x66] = lVar22;
            }
            *(int *)(lVar22 + (long)iVar8 * 4) = iVar24;
            *(uint *)(param_1 + 0x67) = uVar19;
          }
          lVar22 = lVar9;
LAB_0304cec0:
          FUN_0304e930(lVar9,puVar13,&local_490,&local_4a0);
        }
        uVar23 = uVar23 - 1;
        if ((int)uVar23 < 1) {
          if ((local_4cc == 0) || (local_4c0 = *(uint **)(local_4c0 + 2), local_4c0 == (uint *)0x0))
          break;
          uVar23 = *local_4c0 & 0xffff;
          if ((int)local_4cc <= (int)(*local_4c0 & 0xffff)) {
            uVar23 = local_4cc;
          }
          if ((int)uVar23 < 1) break;
          local_4cc = local_4cc - uVar23;
          puVar13 = local_4c0 + 8;
        }
        else {
          puVar13 = puVar13 + (ulong)*(byte *)((long)puVar13 + 0x19) * 4 + 4;
        }
      } while (puVar13 != (uint *)0x0);
      if (0 < (int)local_498) {
        lVar22 = 0;
        do {
          piVar10 = (int *)(local_4a0 + lVar22 * 0xc);
          iVar24 = piVar10[1];
          plVar7 = *(long **)(param_1[0x73] + (long)*piVar10 * 8);
          lVar9 = (long)iVar24;
          iVar8 = (int)plVar7[1] - piVar10[2];
          if (1 < iVar8) {
            puVar28 = (uint *)(*plVar7 + (long)piVar10[2] * 4);
            puVar13 = puVar28 + (iVar8 + -1);
            lVar15 = 0;
            local_268[0] = puVar28;
            local_468[0] = puVar13;
LAB_0304d0f0:
            lVar15 = (long)(int)lVar15;
LAB_0304d1bc:
            do {
              puVar29 = puVar13;
              do {
                puVar13 = puVar29;
                uVar23 = puVar28[(long)puVar13 - (long)puVar28 >> 3];
                puVar29 = puVar13;
                puVar16 = puVar28;
                do {
                  puVar17 = puVar16 + 1;
                  uVar21 = *puVar16;
                  if (uVar21 < uVar23) {
                    do {
                      puVar16 = puVar17;
                      puVar17 = puVar16 + 1;
                      uVar21 = *puVar16;
                    } while (uVar21 < uVar23);
                  }
                  puVar18 = puVar29 + -1;
                  uVar19 = *puVar29;
                  if (uVar23 < uVar19) {
                    do {
                      puVar29 = puVar18;
                      puVar18 = puVar29 + -1;
                      uVar19 = *puVar29;
                    } while (uVar23 < uVar19);
                  }
                  if (puVar16 <= puVar29) {
                    if (puVar29 != puVar16) {
                      *puVar29 = uVar21;
                      *puVar16 = uVar19;
                    }
                    puVar29 = puVar18;
                    puVar16 = puVar17;
                  }
                } while (puVar16 <= puVar29);
                if (puVar29 <= puVar28) {
                  puVar28 = puVar16;
                  if (puVar16 < puVar13) goto LAB_0304d1bc;
                  if ((int)lVar15 < 1) goto LAB_0304d1e4;
                  lVar15 = (long)(int)lVar15 + -1;
                  puVar28 = local_268[lVar15];
                  puVar13 = local_468[lVar15];
                  goto LAB_0304d0f0;
                }
              } while (puVar13 <= puVar16);
              puVar17 = puVar29;
              puVar18 = puVar28;
              if ((long)puVar13 - (long)puVar16 <= (long)puVar29 - (long)puVar28) {
                puVar17 = puVar13;
                puVar18 = puVar16;
                puVar13 = puVar29;
                puVar16 = puVar28;
              }
              local_268[lVar15] = puVar16;
              local_468[lVar15] = puVar13;
              puVar28 = puVar18;
              puVar13 = puVar17;
              lVar15 = lVar15 + 1;
            } while( true );
          }
LAB_0304d1e4:
          FUN_0304ecc0(plVar7[2] + lVar9 * 8,(int)plVar7[3] - iVar24);
          if (iVar24 < (int)plVar7[3]) {
            *(int *)(*(long *)(plVar7[2] + lVar9 * 8) + 4) = iVar24;
            lVar15 = lVar9 + 1;
            if (lVar15 < (int)plVar7[3]) {
              *(int *)(*(long *)(plVar7[2] + lVar15 * 8) + 4) = (int)lVar15;
              lVar15 = lVar9 + 2;
              if (lVar15 < (int)plVar7[3]) {
                *(int *)(*(long *)(plVar7[2] + lVar15 * 8) + 4) = (int)lVar15;
                for (lVar9 = lVar9 + 3; lVar9 < (int)plVar7[3]; lVar9 = lVar9 + 1) {
                  *(int *)(*(long *)(plVar7[2] + lVar9 * 8) + 4) = (int)lVar9;
                }
              }
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)local_498);
      }
    }
  }
  local_498 = local_498 & 0xffffffff00000000;
  if ((((0 < (int)local_488) && (*(undefined4 *)local_490 = 0xffffffff, (int)local_488 != 1)) &&
      (*(undefined4 *)((long)local_490 + 4) = 0xffffffff, (int)local_488 != 2)) &&
     ((*(undefined4 *)(local_490 + 1) = 0xffffffff, (int)local_488 != 3 &&
      (*(undefined4 *)((long)local_490 + 0xc) = 0xffffffff, (int)local_488 != 4)))) {
    uVar27 = 4;
    do {
      *(undefined4 *)((long)local_490 + uVar27 * 4) = 0xffffffff;
      uVar27 = uVar27 + 1;
    } while (((ulong)local_488 & 0xffffffff) != uVar27);
  }
  iVar24 = (uint)local_4a8;
  lVar22 = (long)(int)(uint)local_4a8;
  local_480 = (uint *)((ulong)local_480 & 0xffffffff00000000);
  if ((int)(uint)local_4a8 < 1) {
    local_4a8 = local_4a8 & 0xffffffff00000000;
    goto LAB_0304d5e4;
  }
  lVar9 = *local_4b0;
  iVar8 = *(int *)(param_1[0x71] +
                   (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                  ((ulong)*(uint *)(lVar9 + 0x14) & 0xffffff) * 0xc0 + 0x80) * 0x20
                  + 0x10);
  iVar3 = *(int *)(param_1[0x71] +
                   (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                  ((ulong)*(uint *)(lVar9 + 0x10) & 0xffffff) * 0xc0 + 0x80) * 0x20
                  + 0x10);
  puVar14 = *(undefined8 **)(param_1[0x73] + (long)iVar8 * 8);
  if (iVar8 == iVar3) {
LAB_0304d364:
    puVar20 = puVar14;
  }
  else {
    puVar20 = *(undefined8 **)(param_1[0x73] + (long)iVar3 * 8);
    if ((*(uint *)*puVar14 & 0xffffff) < (*(uint *)*puVar20 & 0xffffff)) {
      FUN_0304ee3c(param_1,iVar8);
      goto LAB_0304d364;
    }
    FUN_0304ee3c(param_1,iVar3,iVar8);
  }
  FUN_0304e930(puVar20,lVar9,&local_490,&local_4a0);
  if (iVar24 != 1) {
    lVar22 = lVar22 + -1;
    plVar7 = local_4b0;
    do {
      plVar7 = plVar7 + 1;
      lVar9 = *plVar7;
      iVar24 = *(int *)(param_1[0x71] +
                        (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                       ((ulong)*(uint *)(lVar9 + 0x14) & 0xffffff) * 0xc0 + 0x80) *
                        0x20 + 0x10);
      iVar8 = *(int *)(param_1[0x71] +
                       (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                      ((ulong)*(uint *)(lVar9 + 0x10) & 0xffffff) * 0xc0 + 0x80) *
                       0x20 + 0x10);
      puVar14 = *(undefined8 **)(param_1[0x73] + (long)iVar24 * 8);
      if (iVar24 == iVar8) {
LAB_0304d408:
        puVar20 = puVar14;
      }
      else {
        puVar20 = *(undefined8 **)(param_1[0x73] + (long)iVar8 * 8);
        if ((*(uint *)*puVar14 & 0xffffff) < (*(uint *)*puVar20 & 0xffffff)) {
          FUN_0304ee3c(param_1,iVar24);
          goto LAB_0304d408;
        }
        FUN_0304ee3c(param_1,iVar8,iVar24);
      }
      FUN_0304e930(puVar20,lVar9,&local_490,&local_4a0);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  local_4a8 = local_4a8 & 0xffffffff00000000;
  if (0 < (int)local_498) {
    lVar22 = 0;
    do {
      puVar14 = *(undefined8 **)(param_1[0x73] + (long)*(int *)(local_4a0 + lVar22 * 0xc) * 8);
      if (puVar14 != (undefined8 *)0x0) {
        iVar24 = *(int *)(puVar14 + 1) + -1;
        if (iVar24 != 0 && 0 < *(int *)(puVar14 + 1)) {
          puVar28 = (uint *)*puVar14;
          puVar13 = puVar28 + iVar24;
          lVar9 = 0;
          local_268[0] = puVar28;
          local_468[0] = puVar13;
LAB_0304d4a0:
          lVar9 = (long)(int)lVar9;
LAB_0304d56c:
          do {
            puVar29 = puVar13;
            do {
              puVar13 = puVar29;
              uVar23 = puVar28[(long)puVar13 - (long)puVar28 >> 3];
              puVar29 = puVar13;
              puVar16 = puVar28;
              do {
                puVar17 = puVar16 + 1;
                uVar21 = *puVar16;
                if (uVar21 < uVar23) {
                  do {
                    puVar16 = puVar17;
                    puVar17 = puVar16 + 1;
                    uVar21 = *puVar16;
                  } while (uVar21 < uVar23);
                }
                puVar18 = puVar29 + -1;
                uVar19 = *puVar29;
                if (uVar23 < uVar19) {
                  do {
                    puVar29 = puVar18;
                    puVar18 = puVar29 + -1;
                    uVar19 = *puVar29;
                  } while (uVar23 < uVar19);
                }
                if (puVar16 <= puVar29) {
                  if (puVar29 != puVar16) {
                    *puVar29 = uVar21;
                    *puVar16 = uVar19;
                  }
                  puVar29 = puVar18;
                  puVar16 = puVar17;
                }
              } while (puVar16 <= puVar29);
              if (puVar29 <= puVar28) {
                puVar28 = puVar16;
                if (puVar16 < puVar13) goto LAB_0304d56c;
                if ((int)lVar9 < 1) goto LAB_0304d594;
                lVar9 = (long)(int)lVar9 + -1;
                puVar28 = local_268[lVar9];
                puVar13 = local_468[lVar9];
                goto LAB_0304d4a0;
              }
            } while (puVar13 <= puVar16);
            puVar17 = puVar29;
            puVar18 = puVar28;
            if ((long)puVar13 - (long)puVar16 <= (long)puVar29 - (long)puVar28) {
              puVar17 = puVar13;
              puVar18 = puVar16;
              puVar13 = puVar29;
              puVar16 = puVar28;
            }
            local_268[lVar9] = puVar16;
            local_468[lVar9] = puVar13;
            puVar28 = puVar18;
            puVar13 = puVar17;
            lVar9 = lVar9 + 1;
          } while( true );
        }
LAB_0304d594:
        FUN_0304ecc0(puVar14[2],*(undefined4 *)(puVar14 + 3));
        if (0 < *(int *)(puVar14 + 3)) {
          lVar9 = 0;
          do {
            *(int *)(*(long *)(puVar14[2] + lVar9 * 8) + 4) = (int)lVar9;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(puVar14 + 3));
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)local_498);
  }
LAB_0304d5e4:
  uVar27 = local_4a8;
  puVar6 = PTR_PTR_0434a090;
  uVar11 = (ulong)local_4a8._4_4_;
  local_4a8 = (ulong)local_4a8._4_4_ << 0x20;
  if ((-1 < (long)uVar27) && (local_4b0 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_4b0,(uVar11 & 0x3fffffff) << 3);
  }
  uVar27 = local_498;
  uVar11 = (ulong)local_498._4_4_;
  local_498 = (ulong)local_498._4_4_ << 0x20;
  if ((-1 < (long)uVar27) && (local_4a0 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_4a0,(uVar11 & 0x3fffffff) * 0xc);
  }
  uVar27 = (ulong)local_488;
  uVar23 = local_488._4_4_;
  local_488 = (undefined8 *)((ulong)local_488._4_4_ << 0x20);
  if ((-1 < (long)uVar27) && (local_490 != (long *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_490,uVar23 << 2);
  }
  return;
}


