/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00380d98; name: FUN_00380d98
 */


long FUN_00380d98(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined **local_a8;
  long *local_a0;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  uVar14 = *(uint *)(param_1 + 6);
  uVar9 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
  if ((uVar9 & 1) == 0) {
    lVar3 = FUN_0030ca24();
  }
  else {
    lVar3 = (uVar9 & 0xfffffffffffffffe) + 8;
  }
  lVar3 = FUN_0030d400(lVar3);
  lVar3 = lVar3 + (ulong)uVar14;
  if (*(uint *)(param_1 + 5) != 0xffffffff) {
    lVar4 = FUN_0039eab8(param_2 + (ulong)*(uint *)(param_1 + 5));
    lVar3 = lVar4 + lVar3;
  }
  if (-1 < (int)param_1[9]) {
    lVar4 = 0;
    puVar18 = PTR_DAT_04373ab0;
    do {
      while( true ) {
        lVar15 = *(long *)(*param_1 + 0x28);
        lVar17 = lVar15 + lVar4 * 0x98;
        if (*(int *)(lVar17 + 0x3c) != 3) break;
        puVar12 = (undefined8 *)(lVar15 + lVar4 * 0x98 + 0x30);
        puVar5 = (ulong *)*puVar12;
        if (puVar5 != (ulong *)0x0) {
          puStack_70 = PTR_LAB_04373a98;
          local_78 = lVar17;
          if (*puVar5 != 0xffffffffffffffff) {
            local_a0 = &local_78;
            local_a8 = &puStack_70;
            local_68 = &local_a8;
            std::__call_once(puVar5,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
        }
        puVar16 = (uint *)(lVar15 + lVar4 * 0x98 + 0x38);
        uVar14 = *puVar16;
        switch(*(undefined4 *)(puVar18 + (ulong)uVar14 * 4)) {
        case 1:
        case 8:
          lVar15 = FUN_003813a4(param_1,param_2,lVar17);
          break;
        case 2:
          lVar15 = FUN_00381550(param_1,param_2,lVar17);
          goto LAB_003810a8;
        case 3:
          lVar15 = FUN_003816fc(param_1,param_2,lVar17);
          break;
        case 4:
          lVar15 = FUN_003818a8(param_1,param_2,lVar17);
          goto LAB_003810a8;
        case 5:
          lVar15 = FUN_00381a54(param_1,param_2,lVar17);
LAB_003810a8:
          iVar8 = *(int *)(lVar15 + 4);
          lVar15 = (long)iVar8 << 3;
          goto LAB_003810d0;
        case 6:
          lVar15 = FUN_00381c00(param_1,param_2,lVar17);
          break;
        case 7:
          lVar15 = FUN_00381dac(param_1,param_2,lVar17);
          iVar8 = *(int *)(lVar15 + 4);
          lVar15 = (long)iVar8;
          goto LAB_003810d0;
        case 9:
          lVar17 = FUN_00381f58(param_1,param_2,lVar17);
          lVar15 = (long)*(int *)(lVar17 + 0xc) << 3;
          piVar10 = *(int **)(lVar17 + 0x10);
          if (piVar10 != (int *)0x0) {
            if (0 < *piVar10) {
              lVar13 = 0;
              do {
                lVar11 = FUN_0032d050(*(undefined8 *)(piVar10 + lVar13 * 2 + 2));
                lVar15 = lVar15 + lVar11 + 0x18;
                piVar10 = *(int **)(lVar17 + 0x10);
                lVar13 = lVar13 + 1;
              } while (lVar13 < *piVar10);
            }
            lVar15 = lVar15 + 8;
          }
          iVar8 = (int)param_1[9];
          goto joined_r0x0038117c;
        case 10:
          puVar5 = (ulong *)*puVar12;
          if (puVar5 != (ulong *)0x0) {
            puStack_70 = PTR_LAB_04373a98;
            local_78 = lVar17;
            if (*puVar5 != 0xffffffffffffffff) {
              local_a0 = &local_78;
              local_a8 = &puStack_70;
              local_68 = &local_a8;
              std::__call_once(puVar5,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
            }
            uVar14 = *puVar16;
          }
          if ((uVar14 == 0xb) && (uVar9 = FUN_00344344(lVar17), (uVar9 & 1) != 0)) {
            FUN_00382104(param_1,param_2,lVar17);
            lVar15 = FUN_00395be0();
            goto LAB_00380e24;
          }
          lVar17 = FUN_003822b0(param_1,param_2,lVar17);
          lVar15 = (long)*(int *)(lVar17 + 0xc) << 3;
          piVar10 = *(int **)(lVar17 + 0x10);
          if (piVar10 != (int *)0x0) {
            if (0 < *piVar10) {
              lVar13 = 0;
              do {
                lVar11 = (**(code **)(**(long **)(piVar10 + lVar13 * 2 + 2) + 0x88))();
                piVar10 = *(int **)(lVar17 + 0x10);
                lVar13 = lVar13 + 1;
                lVar15 = lVar11 + lVar15;
              } while (lVar13 < *piVar10);
            }
            lVar15 = lVar15 + 8;
          }
          lVar3 = lVar15 + lVar3;
          iVar8 = (int)param_1[9];
          goto joined_r0x00381270;
        default:
          goto switchD_00380ec8_default;
        }
        iVar8 = *(int *)(lVar15 + 4);
        lVar15 = (long)iVar8 << 2;
LAB_003810d0:
        lVar15 = lVar15 + 8;
        if (iVar8 < 1) {
          lVar15 = 0;
        }
        iVar8 = (int)param_1[9];
joined_r0x0038117c:
        lVar3 = lVar15 + lVar3;
joined_r0x00381270:
        bVar1 = iVar8 <= lVar4;
        lVar4 = lVar4 + 1;
        if (bVar1) {
          return lVar3;
        }
      }
      lVar13 = *(long *)(lVar15 + lVar4 * 0x98 + 0x58);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) == 1) {
          if (*(char *)(**(long **)(lVar13 + 0x20) + 0x41) != '\0') goto LAB_00380f88;
          if (*(char *)(**(long **)(lVar13 + 0x20) + 0x41) != '\0') {
            FUN_0030f640(&local_a8,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                         ,0x761);
                    /* try { // try from 00380f30 to 00380f43 has its CatchHandler @ 00381390 */
            uVar6 = FUN_0030f3ac(&local_a8,"CHECK failed: !oneof_descriptor->is_synthetic(): ");
                    /* try { // try from 00380f44 to 00380f4b has its CatchHandler @ 0038138c */
            FUN_0030f41c(&local_68,uVar6);
            FUN_0030f658(&local_a8);
          }
        }
        if (*(int *)(param_2 +
                    (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                                 (int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x10) + 0x30))
                                      >> 4) * -0x55555554)) !=
            *(int *)(lVar15 + lVar4 * 0x98 + 0x44)) goto switchD_00380ec8_default;
      }
LAB_00380f88:
      puVar12 = (undefined8 *)(lVar15 + lVar4 * 0x98 + 0x30);
      puVar5 = (ulong *)*puVar12;
      if (puVar5 != (ulong *)0x0) {
        puStack_70 = PTR_LAB_04373a98;
        local_78 = lVar17;
        if (*puVar5 != 0xffffffffffffffff) {
          local_a0 = &local_78;
          local_a8 = &puStack_70;
          local_68 = &local_a8;
          std::__call_once(puVar5,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      puVar16 = (uint *)(lVar15 + lVar4 * 0x98 + 0x38);
      if (*(int *)(puVar18 + (ulong)*puVar16 * 4) == 10) {
        if (param_1[1] != param_2) {
          plVar7 = (long *)FUN_003826d4(param_1,param_2,lVar17);
          if ((long *)*plVar7 != (long *)0x0) {
            lVar15 = (**(code **)(*(long *)*plVar7 + 0x88))();
            goto LAB_00380e24;
          }
        }
switchD_00380ec8_default:
        iVar8 = (int)param_1[9];
        goto joined_r0x00381270;
      }
      if (*(int *)(puVar18 + (ulong)*puVar16 * 4) != 9) goto switchD_00380ec8_default;
      uVar9 = FUN_0038f118(param_1 + 1,lVar17);
      if ((uVar9 & 1) != 0) {
        FUN_0038245c(param_1,param_2,lVar17);
        lVar15 = FUN_0032d050();
LAB_00380e24:
        lVar3 = lVar15 + lVar3;
        goto switchD_00380ec8_default;
      }
      lVar13 = param_1[1];
      if (*(char *)(lVar15 + lVar4 * 0x98 + 0x43) == '\0') {
        plVar7 = (long *)(*(long *)(lVar15 + lVar4 * 0x98 + 0x50) + 0x28);
      }
      else {
        lVar11 = *(long *)(lVar15 + lVar4 * 0x98 + 0x60);
        if (lVar11 == 0) {
          plVar7 = (long *)(*(long *)(lVar15 + lVar4 * 0x98 + 0x28) + 0x80);
        }
        else {
          plVar7 = (long *)(lVar11 + 0x50);
        }
      }
      uVar14 = (int)((ulong)(lVar17 - *plVar7) >> 3) * 0x286bca1b;
      uVar14 = *(uint *)(param_1[2] +
                        (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2));
      puVar5 = (ulong *)*puVar12;
      if (puVar5 != (ulong *)0x0) {
        puStack_70 = PTR_LAB_04373a98;
        local_78 = lVar17;
        if (*puVar5 != 0xffffffffffffffff) {
          local_a0 = &local_78;
          local_a8 = &puStack_70;
          local_68 = &local_a8;
          std::__call_once(puVar5,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      uVar2 = *puVar16;
      if ((uVar2 == 0xc) || (uVar2 == 9)) {
        uVar14 = uVar14 & 0xfffffffe;
      }
      lVar15 = *(long *)(lVar13 + (ulong)uVar14);
      plVar7 = (long *)FUN_00382598(param_1,param_2,lVar17);
      if (*plVar7 != lVar15) {
        lVar15 = FUN_0032d050();
        lVar3 = lVar3 + lVar15 + 0x18;
      }
      bVar1 = lVar4 < (int)param_1[9];
      lVar4 = lVar4 + 1;
      puVar18 = PTR_DAT_04373ab0;
    } while (bVar1);
  }
  return lVar3;
}


