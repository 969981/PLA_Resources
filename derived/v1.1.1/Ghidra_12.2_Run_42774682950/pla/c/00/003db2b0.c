/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003db2b0; name: FUN_003db2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003db2b0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 extraout_w1;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  
  puVar6 = PTR_DAT_043740a8;
  if ((DAT_0439bca0 & 1) == 0) {
    FUN_002eec80(1);
    *(undefined4 *)puVar6 = extraout_w1;
  }
  uVar3 = _UNK_038897e8;
  uVar2 = _DAT_038897e0;
  lVar10 = 0;
  do {
    FUN_002ef6d0(&DAT_0439bca8 + lVar10);
    *(undefined8 *)((long)&DAT_0439bcd8 + lVar10) = uVar3;
    *(undefined8 *)((long)&DAT_0439bcd0 + lVar10) = uVar2;
    uVar9 = FUN_002ebd80(0x40);
    lVar20 = lVar10 + 0x38;
    *(undefined8 *)((long)&DAT_0439bcc8 + lVar10) = uVar9;
    uVar4 = _UNK_03889ff8;
    uVar9 = _DAT_03889ff0;
    lVar10 = lVar20;
  } while (lVar20 != 0x700);
  lVar10 = 0;
  do {
    lVar20 = lVar10 + 0x80;
    *(undefined8 *)(lVar10 + 0x439af24) = uVar4;
    *(undefined8 *)(&DAT_0439af1c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af34) = uVar4;
    *(undefined8 *)(&DAT_0439af2c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af44) = uVar4;
    *(undefined8 *)(&DAT_0439af3c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af54) = uVar4;
    *(undefined8 *)(&DAT_0439af4c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af64) = uVar4;
    *(undefined8 *)(&DAT_0439af5c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af74) = uVar4;
    *(undefined8 *)(&DAT_0439af6c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af84) = uVar4;
    *(undefined8 *)(&DAT_0439af7c + lVar10) = uVar9;
    *(undefined8 *)(lVar10 + 0x439af94) = uVar4;
    *(undefined8 *)(&DAT_0439af8c + lVar10) = uVar9;
    lVar10 = lVar20;
  } while (lVar20 != 0xd80);
  DAT_0439bca4 = 0;
  lVar10 = FUN_003db7f0();
  puVar5 = PTR_DAT_043740a0;
  if (lVar10 != -0x35010ff23f0011ef) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = *(long *)PTR_DAT_04373fe0;
  if (lVar10 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar20 = 0;
  do {
    plVar1 = (long *)(lVar10 + lVar20 * 0x20);
    lVar11 = (long)plVar1 + 9;
    if (*plVar1 != 0) {
      lVar11 = plVar1[2];
    }
    uVar15 = plVar1[1] & 0xff;
    if (*plVar1 != 0) {
      uVar15 = plVar1[1];
    }
    uVar8 = FUN_003da780(lVar11,uVar15,*(undefined4 *)puVar6);
    uVar14 = (ulong)uVar8;
    uVar12 = 0;
    uVar15 = uVar14 + 2;
    uVar17 = 2;
    lVar11 = (ulong)uVar8 * 8 + 0x439af30;
    uVar16 = uVar14 + 1;
    *(uint *)(puVar5 + lVar20 * 4) = uVar8;
    uVar18 = uVar14;
    do {
      if (*(int *)(lVar11 + (uVar18 / 0x1b0) * -0xd80 + -0x10) == 0x6c) {
        puVar13 = (undefined4 *)(lVar11 + (uVar18 / 0x1b0) * -0xd80 + -0x10);
        uVar15 = (uVar12 + uVar14) % 0x1b0;
LAB_003db4d8:
        *(uint *)(&DAT_0439af1c + uVar15 * 8) = uVar8;
        *puVar13 = (int)lVar20;
        if (DAT_0439bca4 < uVar12) {
          DAT_0439bca4 = (uint)uVar12;
        }
        break;
      }
      if (*(int *)(lVar11 + (uVar16 / 0x1b0) * -0xd80 + -8) == 0x6c) {
        uVar12 = uVar12 + 1;
        puVar13 = (undefined4 *)(lVar11 + (uVar16 / 0x1b0) * -0xd80 + -8);
        uVar15 = (uVar12 + uVar14) % 0x1b0;
        goto LAB_003db4d8;
      }
      uVar19 = uVar15 / 0x1b0;
      if (*(int *)(lVar11 + uVar19 * -0xd80) == 0x6c) {
        uVar15 = uVar14 + uVar19 * -0x1b0 + uVar17;
        puVar13 = (undefined4 *)(lVar11 + uVar19 * -0xd80);
        uVar12 = uVar17;
        goto LAB_003db4d8;
      }
      uVar17 = uVar17 + 3;
      uVar12 = uVar12 + 3;
      uVar15 = uVar15 + 3;
      lVar11 = lVar11 + 0x18;
      uVar16 = uVar16 + 3;
      uVar18 = uVar18 + 3;
    } while (uVar17 != 0x1b2);
    puVar7 = PTR_DAT_043740b0;
    lVar20 = lVar20 + 1;
    if (lVar20 == 0x6c) {
      lVar10 = 0;
      lVar20 = 0x55;
      while( true ) {
        lVar11 = FUN_003db7f0();
        if (lVar11 != -0x35010ff23f0011ef) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",
                       0x137,2,"assertion failed: %s",
                       "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                      );
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(long *)puVar7 == 0) break;
        FUN_003d8264(*(long *)puVar7 + lVar10);
        lVar20 = lVar20 + -1;
        lVar10 = lVar10 + 0x50;
        if (lVar20 == 0) {
          return;
        }
      }
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x138,2
                   ,"assertion failed: %s","grpc_core::g_static_mdelem_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  } while( true );
}


