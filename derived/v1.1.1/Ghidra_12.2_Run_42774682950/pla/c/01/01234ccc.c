/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234ccc; name: FUN_01234ccc
 */


void FUN_01234ccc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *local_70 [2];
  
  if (*(long *)(param_1 + 8) != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_0114907c(local_70);
    if (local_70[0] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar18 = 0;
    do {
      uVar5 = (&DAT_03a7a268)[lVar18];
      iVar8 = FUN_01234ca4(param_1);
      lVar27 = param_1 + (long)iVar8 * 0x58;
      *(undefined4 *)(lVar27 + 0x430) = *(undefined4 *)(param_1 + 0x850);
      plVar26 = *(long **)(param_1 + 0x858);
      plVar16 = (long *)(lVar27 + 0x438);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
      plVar9 = (long *)*plVar16;
      lVar24 = (long)iVar8;
      *plVar16 = (long)plVar26;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      lVar28 = param_1 + lVar24 * 0x58;
      *(undefined1 *)(lVar28 + 0x440) = *(undefined1 *)(param_1 + 0x860);
      plVar9 = *(long **)(param_1 + 0x868);
      plVar26 = (long *)(lVar28 + 0x448);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      plVar10 = (long *)*plVar26;
      *plVar26 = (long)plVar9;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      plVar10 = *(long **)(param_1 + 0x870);
      plVar9 = (long *)(param_1 + lVar24 * 0x58 + 0x450);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar11 = (long *)*plVar9;
      *plVar9 = (long)plVar10;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      lVar23 = param_1 + lVar24 * 0x58;
      *(undefined8 *)(lVar23 + 0x458) = *(undefined8 *)(param_1 + 0x878);
      plVar11 = *(long **)(param_1 + 0x880);
      plVar10 = (long *)(lVar23 + 0x460);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      plVar12 = (long *)*plVar10;
      *plVar10 = (long)plVar11;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      lVar24 = param_1 + lVar24 * 0x58;
      uVar1 = *(undefined8 *)(param_1 + 0x888);
      uVar20 = *(undefined8 *)(param_1 + 0x898);
      *(undefined8 *)(lVar24 + 0x470) = *(undefined8 *)(param_1 + 0x890);
      *(undefined8 *)(lVar24 + 0x478) = uVar20;
      *(undefined8 *)(lVar24 + 0x468) = uVar1;
      uVar4 = *(undefined4 *)(param_1 + 0x8a0);
      *(undefined1 *)(lVar24 + 0x484) = *(undefined1 *)(param_1 + 0x8a4);
      *(undefined4 *)(lVar24 + 0x480) = uVar4;
      puVar13 = (undefined1 *)FUN_0111b784(local_70[0],iVar8);
      if ((puVar13 != &DAT_cbf29ce484222645) &&
         (iVar8 = FUN_01236ca4(*(undefined8 *)(param_1 + 8),uVar5), iVar8 != 0)) {
        iVar25 = 0;
        do {
          puVar14 = (undefined4 *)FUN_01236d4c(*(undefined8 *)(param_1 + 8),uVar5,iVar25);
          uVar4 = *puVar14;
          plVar11 = *(long **)(puVar14 + 2);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          uVar6 = *(undefined1 *)(puVar14 + 4);
          plVar12 = *(long **)(puVar14 + 6);
          if (plVar12 == (long *)0x0) {
            plVar29 = *(long **)(puVar14 + 8);
            if (plVar29 != (long *)0x0) goto LAB_012351a0;
LAB_01234f7c:
            uVar1 = *(undefined8 *)(puVar14 + 10);
            plVar2 = *(long **)(puVar14 + 0xc);
          }
          else {
            (**(code **)(*plVar12 + 0x18))(plVar12);
            plVar29 = *(long **)(puVar14 + 8);
            if (plVar29 == (long *)0x0) goto LAB_01234f7c;
LAB_012351a0:
            (**(code **)(*plVar29 + 0x18))(plVar29);
            uVar1 = *(undefined8 *)(puVar14 + 10);
            plVar2 = *(long **)(puVar14 + 0xc);
          }
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
          uVar20 = *(undefined8 *)(puVar14 + 0xe);
          uVar3 = *(undefined8 *)(puVar14 + 0x10);
          uVar21 = *(undefined8 *)(puVar14 + 0x12);
          plVar15 = (long *)PTR_PTR_04379d00;
          if (plVar11 != (long *)0x0) {
            plVar15 = plVar11 + 0xc;
          }
          pbVar19 = (byte *)*plVar15;
          bVar7 = *pbVar19;
          puVar22 = &DAT_cbf29ce484222645;
          if (bVar7 != 0) {
            do {
              pbVar19 = pbVar19 + 1;
              puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar19;
            } while (bVar7 != 0);
          }
          if (puVar22 == puVar13) {
            *(undefined4 *)(lVar27 + 0x430) = uVar4;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
            plVar15 = (long *)*plVar16;
            *plVar16 = (long)plVar11;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            *(undefined1 *)(lVar28 + 0x440) = uVar6;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
            plVar16 = (long *)*plVar26;
            *plVar26 = (long)plVar12;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))();
            }
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x18))(plVar29);
            }
            plVar16 = (long *)*plVar9;
            *plVar9 = (long)plVar29;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))();
            }
            *(undefined8 *)(lVar23 + 0x458) = uVar1;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x18))(plVar2);
            }
            plVar16 = (long *)*plVar10;
            *plVar10 = (long)plVar2;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))();
            }
            *(undefined8 *)(lVar24 + 0x470) = uVar3;
            *(undefined8 *)(lVar24 + 0x478) = uVar21;
            *(undefined8 *)(lVar24 + 0x468) = uVar20;
            *(int *)(lVar24 + 0x480) = iVar25;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x20))(plVar2);
            }
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x20))(plVar29);
            }
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x20))(plVar11);
            }
            break;
          }
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2);
          }
          if (plVar29 != (long *)0x0) {
            (**(code **)(*plVar29 + 0x20))(plVar29);
          }
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          iVar25 = iVar25 + 1;
        } while (iVar25 != iVar8);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 7);
    FUN_012340c8(param_1 + 0x10,param_1 + 0x430);
    if ((local_70[0] != (long *)0x0) && (uVar17 = FUN_02a43a5c(local_70[0][0xb]), (uVar17 & 1) != 0)
       ) {
      (**(code **)(*local_70[0] + 0x20))(local_70[0]);
    }
  }
  return;
}


