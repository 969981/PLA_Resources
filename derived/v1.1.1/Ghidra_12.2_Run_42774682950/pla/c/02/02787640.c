/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02787640; name: FUN_02787640
 */


void FUN_02787640(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_80;
  
  FUN_02787aa8();
  uVar19 = param_1[1];
  *param_1 = &PTR_FUN_0426bdf0;
  param_1[9] = &PTR_LAB_0426be20;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = uVar19;
  param_1[0x10] = 0xaaaaaaaaaaaaaaa;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = uVar19;
  param_1[0x17] = 0xaaaaaaaaaaaaaaa;
  param_1[0x18] = 0;
  puVar1 = PTR_DAT_0437a508 + 0x10;
  *(undefined4 *)(param_1 + 0x19) = 0;
  plVar22 = param_1 + 0x1a;
  *plVar22 = (long)puVar1;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = uVar19;
  param_1[0x24] = 0xfffffffffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_027938ac(param_1 + 0x2a);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_027938ac(param_1 + 0x31);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_027938ac(param_1 + 0x38);
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_027938ac(param_1 + 0x3f);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0xaaaaaaaaaaaaaaa;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x46] = param_1[1];
  *(undefined1 *)(param_1 + 0x4a) = 0;
  FUN_02787bdc(param_1);
  local_a0 = (long *)CONCAT44(local_a0._4_4_,0xd);
  lVar13 = FUN_008af3e4(&local_b0,param_1[1],&local_a0);
  if (lVar13 != 0) {
    piVar2 = (int *)(lVar13 + 0x50);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar14 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar14 != (long *)0x0) {
    plVar3 = plVar14 + 10;
    do {
      iVar10 = (int)*plVar3 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *(int *)plVar3 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  param_1[0xb] = lVar13;
  FUN_00da1888(&local_a0,&DAT_0426be38);
  FUN_00938764(plVar22,0,&local_a0,0,0,0);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  puVar15 = *(uint **)(param_1[0x1b] + 0x250);
  uVar5 = *puVar15;
  piVar2 = (int *)((long)puVar15 + (ulong)uVar5);
  if (((piVar2 != (int *)0x0) && (4 < *(ushort *)((long)piVar2 - (long)*piVar2))) &&
     (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar20 != 0)) {
    uVar21 = (ulong)*(uint *)((long)piVar2 + uVar20);
    puVar4 = (uint *)((long)((long)piVar2 + uVar20) + uVar21);
    uVar6 = *puVar4;
    if ((ulong)uVar6 != 0) {
      lVar13 = 0;
      do {
        uVar23 = (ulong)*(uint *)((long)puVar4 + lVar13 + 4);
        if ((long)puVar15 + lVar13 + uVar23 + uVar20 + uVar5 + uVar21 + 4 != 0) {
          lVar11 = lVar13 + (uVar23 - (long)*(int *)((long)puVar4 + lVar13 + uVar23 + 4));
          uVar7 = *(ushort *)((long)puVar4 + lVar11 + 4);
          if (4 < uVar7) {
            uVar16 = (ulong)*(ushort *)((long)puVar4 + lVar11 + 8);
            uVar17 = 0;
            if (uVar16 != 0) {
              uVar17 = (ulong)*(byte *)((long)puVar4 + lVar13 + uVar23 + uVar16 + 4);
            }
            if (uVar7 < 0xd) {
              uVar25 = 0;
              uVar24 = 0;
              uVar18 = 0;
              uVar26 = 0;
              uVar12 = 0;
              if (6 < uVar7) goto LAB_0278792c;
            }
            else {
              uVar16 = (ulong)*(ushort *)((long)puVar4 + lVar11 + 0x10);
              uVar12 = 0;
              if (uVar16 != 0) {
                uVar12 = (char)*(undefined4 *)((long)puVar4 + lVar13 + uVar23 + uVar16 + 4);
              }
LAB_0278792c:
              uVar18 = uVar12;
              uVar16 = (ulong)*(ushort *)((long)puVar4 + lVar11 + 10);
              uVar24 = 0;
              if (uVar16 != 0) {
                uVar24 = *(undefined4 *)((long)puVar4 + lVar13 + uVar23 + uVar16 + 4);
              }
              if (uVar7 < 9) {
                uVar25 = 0;
              }
              else {
                uVar16 = (ulong)*(ushort *)((long)puVar4 + lVar11 + 0xc);
                uVar25 = 0;
                if (uVar16 != 0) {
                  uVar25 = *(undefined4 *)((long)puVar4 + lVar13 + uVar23 + uVar16 + 4);
                }
                if ((10 < uVar7) &&
                   (uVar16 = (ulong)*(ushort *)((long)puVar4 + lVar11 + 0xe), uVar16 != 0)) {
                  uVar26 = *(undefined4 *)((long)puVar4 + lVar13 + uVar23 + uVar16 + 4);
                  goto LAB_0278798c;
                }
              }
              uVar26 = 0;
            }
LAB_0278798c:
            if ((uint)(uVar17 - 1) < 5) {
              uStack_af = (undefined1)uVar17;
              local_b0 = uVar18;
              uStack_ac = uVar24;
              uStack_a8 = uVar25;
              local_a4 = uVar26;
              FUN_02787cd0(param_1 + (uVar17 - 1) * 7 + 0x20,&local_b0);
              lVar11 = lVar13 + (uVar23 - (long)*(int *)((long)puVar4 + lVar13 + uVar23 + 4));
              if (*(ushort *)((long)puVar4 + lVar11 + 4) < 0xf) {
                plVar14 = (long *)0x0;
              }
              else {
                uVar17 = (ulong)*(ushort *)((long)puVar4 + lVar11 + 0x12);
                plVar14 = (long *)0x0;
                if ((uVar17 != 0) &&
                   (plVar14 = *(long **)((long)puVar4 + lVar13 + uVar23 + uVar17 + 4),
                   plVar14 == (long *)&DAT_cbf29ce484222645)) goto LAB_027878b0;
              }
              local_98 = CONCAT44(uStack_ac,CONCAT22(uStack_ae,CONCAT11(uStack_af,local_b0)));
              uStack_90 = CONCAT44(local_a4,uStack_a8);
              local_a0 = plVar14;
              if ((ulong)param_1[0x44] < (ulong)param_1[0x45]) {
                FUN_027942b4(param_1 + 0x46,param_1[0x44],&local_a0);
                param_1[0x44] = param_1[0x44] + 0x18;
              }
              else {
                FUN_02794210(param_1 + 0x43,&local_a0);
              }
            }
          }
        }
LAB_027878b0:
        lVar13 = lVar13 + 4;
      } while ((ulong)uVar6 * 4 != lVar13);
    }
  }
  FUN_00937d80(plVar22);
  return;
}


