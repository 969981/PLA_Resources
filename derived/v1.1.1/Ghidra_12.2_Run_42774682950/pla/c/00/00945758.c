/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00945758; name: FUN_00945758
 */


void FUN_00945758(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  byte bVar20;
  long lVar21;
  long *plVar22;
  undefined1 local_214 [4];
  undefined8 *local_210;
  undefined8 uStack_208;
  long local_200;
  ulong local_1f8;
  undefined2 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 local_1be;
  int local_1bc;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_17c;
  long *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_78;
  
  FUN_02947534(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98));
  uVar10 = FUN_0295e400();
  lVar11 = FUN_0294d654(uVar10,1);
  bVar12 = *(byte *)(lVar11 + 0x30);
  if (bVar12 != 0) {
    uVar19 = 0;
    bVar20 = 0;
    do {
      if (bVar20 < bVar12) {
        lVar21 = *(long *)(lVar11 + uVar19 * 8);
        iVar8 = *(int *)(lVar21 + 0x2c0);
      }
      else {
        lVar21 = 0;
        iVar8 = iRam00000000000002c0;
      }
      if (-1 < iVar8) {
        local_1f0 = 0;
        local_1ac = 0;
        local_1a8 = 0;
        local_1bc = 0;
        local_190 = 0;
        local_1a0 = &DAT_cbf29ce484222645;
        local_198 = &DAT_cbf29ce484222645;
        local_188 = 0;
        local_180 = 1;
        local_17c = 0x3f800000;
        lVar13 = *(long *)(param_1 + 0x38);
        lVar14 = lVar13 + (long)iVar8 * 0x60;
        local_1f8 = (ulong)*(uint *)(lVar14 + 0xa8);
        uVar16 = *(undefined4 *)(lVar14 + 0xac);
        *(undefined2 *)((undefined4 *)((ulong)&local_200 | 0xc) + 1) =
             *(undefined2 *)(lVar14 + 0xb0);
        *(undefined4 *)((ulong)&local_200 | 0xc) = uVar16;
        local_1d8 = *(undefined8 *)(lVar14 + 200);
        local_1e0 = *(undefined8 *)(lVar14 + 0xc0);
        local_1c8 = *(undefined8 *)(lVar14 + 0xd8);
        local_1d0 = *(undefined8 *)(lVar14 + 0xd0);
        local_1c0 = *(undefined1 *)(lVar14 + 0xe4);
        local_1be = *(undefined1 *)(lVar14 + 0xe5);
        local_1bf = *(undefined1 *)(lVar13 + 0x3d0);
        local_210 = (undefined8 *)0x501000000;
        local_200 = lVar21;
        FUN_009346d8(&local_170,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0),&local_210);
        uVar6 = local_78;
        uVar10 = local_168;
        uVar17 = (ulong)local_78;
        iVar9 = 0;
        if (local_78 != 0) {
          uVar4 = FUN_02950698(lVar21);
          uVar5 = FUN_00931f18(uVar10);
          if ((uVar5 == (uVar4 & 0xffff)) && (iVar9 = FUN_00932230(uVar10), -1 < iVar9)) {
            iVar9 = FUN_00932230(uVar10);
            iVar9 = iVar9 + 1;
          }
          else {
            iVar9 = 0;
          }
          if (uVar6 != 1) {
            lVar13 = uVar17 * 8 + -8;
            puVar15 = &local_160;
            do {
              uVar10 = *puVar15;
              uVar6 = FUN_02950698(lVar21);
              uVar4 = FUN_00931f18(uVar10);
              if ((uVar4 == (uVar6 & 0xffff)) && (iVar7 = FUN_00932230(uVar10), iVar9 <= iVar7)) {
                iVar9 = FUN_00932230(uVar10);
                iVar9 = iVar9 + 1;
              }
              puVar15 = puVar15 + 1;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
        }
        local_210 = (undefined8 *)0x0;
        uStack_208 = 0;
        local_1bc = iVar9;
        FUN_008c4b3c(&local_210,*(long *)(param_1 + 0x38) + (long)iVar8 * 0x60 + 0x98);
        puVar15 = local_210;
        if ((local_210 != (undefined8 *)0x0) && (*(int *)((long)local_210 + 0xc) != 0)) {
          if ((local_210 == (undefined8 *)0x0) || (*(int *)((long)local_210 + 0xc) == 0)) {
LAB_00945938:
            plVar22 = (long *)0x0;
          }
          else {
            piVar1 = (int *)((long)local_210 + 0xc);
            iVar8 = *(int *)((long)local_210 + 0xc);
            do {
              puVar18 = (undefined8 *)puVar15[2];
              if (((*PTR_DAT_043794b0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar9 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                    uVar10 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                __cxa_guard_release(PTR_DAT_043794b0);
              }
              if (puVar18 == (undefined8 *)0x0) goto LAB_00945938;
              while (puVar18 != (undefined8 *)PTR_DAT_043794b8) {
                puVar18 = (undefined8 *)*puVar18;
                plVar22 = (long *)0x0;
                if (puVar18 == (undefined8 *)0x0) goto LAB_0094593c;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar8) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar21 = puVar15[3];
                  plVar22 = (long *)0x0;
                  if (lVar21 != 0) {
                    plVar22 = (long *)(lVar21 + -0x50);
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              plVar22 = (long *)0x0;
              iVar8 = iVar9;
            } while (iVar9 != 0);
          }
LAB_0094593c:
          lVar21 = FUN_008a7e50(plVar22 + 0x1e,&local_170);
          if (plVar22 != (long *)0x0) {
            lVar13 = plVar22[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar22 + 0x20))(plVar22);
            }
          }
          if (lVar21 != 0) {
            FUN_0094625c(&local_170,lVar21);
            local_1a8 = (undefined1)local_160;
            local_1a0 = puStack_158;
            local_1ac = (undefined4)((ulong)local_168 >> 0x20);
            local_188 = local_140;
            local_180 = (undefined1)uStack_138;
            local_17c = (undefined4)((ulong)uStack_138 >> 0x20);
            local_198 = local_150;
            local_190 = (undefined4)uStack_148;
          }
        }
        FUN_009332a0(&local_170,*(undefined8 *)(*(long *)(param_1 + 0x28) + 200),&local_200);
        plVar22 = local_170;
        local_214[0] = *(undefined1 *)(local_170[0xe] + 0x7d);
        lVar21 = *(long *)(*(long *)(param_1 + 0x28) + 0x98);
        uVar6 = *(uint *)(lVar21 + 0x110);
        uVar16 = 1;
        if (2 < uVar6) {
          uVar16 = 2;
        }
        uVar17 = FUN_0294e9bc(uVar6,*(undefined1 *)(*(long *)(lVar21 + 0x58) + 0x55),uVar16);
        if ((uVar19 < (uVar17 & 0xffffffff)) && (*(long *)(param_1 + 0x40) != 0)) {
          FUN_00945fa8(*(long *)(param_1 + 0x40) + 0x58,local_214,&local_210);
        }
        puVar15 = local_210;
        if (plVar22 != (long *)0x0) {
          lVar21 = plVar22[0xb];
          piVar1 = (int *)(lVar21 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22);
            puVar15 = local_210;
          }
        }
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar15[2] = 0;
            local_210 = puVar15;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar21 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar21;
            local_170 = (long *)*puVar15;
            FUN_02a44274(lVar21 + 0xd8,&local_170);
          }
        }
        bVar12 = *(byte *)(lVar11 + 0x30);
      }
      uVar19 = uVar19 + 1;
      bVar20 = bVar20 + 1;
    } while (uVar19 < bVar12);
  }
  return;
}


