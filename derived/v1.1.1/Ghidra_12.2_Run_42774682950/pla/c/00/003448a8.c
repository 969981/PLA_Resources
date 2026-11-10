/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003448a8; name: FUN_003448a8
 */


void FUN_003448a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 *local_98;
  undefined *local_90;
  undefined8 **ppuStack_88;
  undefined **local_58;
  
  pbVar11 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar7 = PTR_DAT_043730c0;
  puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  pbVar12 = *(byte **)(param_2 + 0xb0);
  if (pbVar12 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0xb0),puVar10);
    pbVar11 = (byte *)param_1[1];
    bVar6 = *pbVar11;
    if ((bVar6 & 1) != 0) goto LAB_00344950;
LAB_00344934:
    if (bVar6 >> 1 != 0) {
LAB_00344958:
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
      puVar1 = (undefined8 *)(param_2 + 0xb8);
      puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) == 0) {
        pbVar12 = (byte *)*puVar1;
      }
      else {
        puVar10 = (ulong *)*puVar10;
        pbVar12 = (byte *)*puVar1;
      }
      if (pbVar12 == puVar7) {
        FUN_0029175c(puVar1,puVar10);
        iVar15 = *(int *)((long)param_1 + 0x3c);
        goto joined_r0x00344f98;
      }
      if (pbVar12 != pbVar11) {
        uVar2 = *(ulong *)(pbVar11 + 8);
        pbVar3 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar3 = pbVar11 + 1;
          uVar2 = (ulong)(*pbVar11 >> 1);
        }
        FUN_00291910(pbVar12,pbVar3,uVar2);
      }
    }
  }
  else {
    if (pbVar12 != pbVar11) {
      uVar2 = *(ulong *)(pbVar11 + 8);
      pbVar3 = *(byte **)(pbVar11 + 0x10);
      if ((*pbVar11 & 1) == 0) {
        pbVar3 = pbVar11 + 1;
        uVar2 = (ulong)(*pbVar11 >> 1);
      }
      FUN_00291910(pbVar12,pbVar3,uVar2);
    }
    pbVar11 = (byte *)param_1[1];
    bVar6 = *pbVar11;
    if ((bVar6 & 1) == 0) goto LAB_00344934;
LAB_00344950:
    if (*(long *)(pbVar11 + 8) != 0) goto LAB_00344958;
  }
  iVar15 = *(int *)((long)param_1 + 0x3c);
joined_r0x00344f98:
  if (iVar15 == 3) {
    uVar9 = FUN_0033bc30(3);
    FUN_00344fc8(param_2,uVar9);
  }
  puVar8 = PTR_LAB_04373ba8;
  puVar7 = PTR_LAB_04373ba0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar16 = 0;
    puVar10 = (ulong *)param_1[3];
    while( true ) {
      if ((puVar10 != (ulong *)0x0) && (local_98 = param_1, *puVar10 != 0xffffffffffffffff)) {
        local_90 = puVar7;
        ppuStack_88 = &local_98;
        local_58 = &local_90;
        std::__call_once(puVar10,&local_58,(_func_void_void_ptr *)puVar8);
      }
      FUN_00345178(param_2,**(undefined8 **)(param_1[9] + lVar16 * 8));
      lVar16 = lVar16 + 1;
      if (*(int *)(param_1 + 4) <= lVar16) break;
      puVar10 = (ulong *)param_1[3];
    }
  }
  if (0 < *(int *)((long)param_1 + 0x24)) {
    uVar4 = *(uint *)(param_2 + 0x90);
    lVar16 = 0;
    do {
      uVar5 = *(undefined4 *)(param_1[0xb] + lVar16 * 4);
      iVar15 = *(int *)(param_2 + 0x94);
      iVar18 = (int)lVar16;
      if ((int)((ulong)uVar4 + lVar16) == iVar15) {
        FUN_003265e4((uint *)(param_2 + 0x90),uVar4 + iVar18 + 1);
        iVar15 = *(int *)(param_2 + 0x94);
      }
      if (iVar15 < 1) {
        FUN_0030f640(&local_90,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x161);
                    /* try { // try from 00344aec to 00344afb has its CatchHandler @ 00344fb4 */
        uVar9 = FUN_0030f3ac(&local_90,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00344afc to 00344b03 has its CatchHandler @ 00344fb0 */
        FUN_0030f41c(&local_58,uVar9);
        FUN_0030f658(&local_90);
      }
      *(undefined4 *)(*(long *)(param_2 + 0x98) + ((ulong)uVar4 + lVar16 & 0xffffffff) * 4) = uVar5;
      lVar16 = lVar16 + 1;
      *(uint *)(param_2 + 0x90) = uVar4 + iVar18 + 1;
    } while (lVar16 < *(int *)((long)param_1 + 0x24));
  }
  if (0 < *(int *)(param_1 + 5)) {
    uVar4 = *(uint *)(param_2 + 0xa0);
    lVar16 = 0;
    do {
      uVar5 = *(undefined4 *)(param_1[0xc] + lVar16 * 4);
      iVar15 = *(int *)(param_2 + 0xa4);
      iVar18 = (int)lVar16;
      if ((int)((ulong)uVar4 + lVar16) == iVar15) {
        FUN_003265e4((uint *)(param_2 + 0xa0),uVar4 + iVar18 + 1);
        iVar15 = *(int *)(param_2 + 0xa4);
      }
      if (iVar15 < 1) {
        FUN_0030f640(&local_90,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x161);
                    /* try { // try from 00344bb0 to 00344bbf has its CatchHandler @ 00344fa8 */
        uVar9 = FUN_0030f3ac(&local_90,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00344bc0 to 00344bc7 has its CatchHandler @ 00344fac */
        FUN_0030f41c(&local_58,uVar9);
        FUN_0030f658(&local_90);
      }
      *(undefined4 *)(*(long *)(param_2 + 0xa8) + ((ulong)uVar4 + lVar16 & 0xffffffff) * 4) = uVar5;
      lVar16 = lVar16 + 1;
      *(uint *)(param_2 + 0xa0) = uVar4 + iVar18 + 1;
    } while (lVar16 < *(int *)(param_1 + 5));
  }
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar17 = 0;
    lVar16 = 0;
    lVar13 = param_1[0xd];
    piVar14 = *(int **)(param_2 + 0x40);
    if (piVar14 != (int *)0x0) goto LAB_00344c3c;
LAB_00344c5c:
    iVar15 = *(int *)(param_2 + 0x3c);
    do {
      FUN_0032bcac(param_2 + 0x30,iVar15 + 1);
      piVar14 = *(int **)(param_2 + 0x40);
      iVar15 = *piVar14;
      do {
        *piVar14 = iVar15 + 1;
        uVar9 = FUN_003bfe68(*(undefined8 *)(param_2 + 0x30));
        iVar15 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar15 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x40) + (long)iVar15 * 8 + 8) = uVar9;
        while( true ) {
          FUN_00345298(lVar13,uVar9);
          lVar16 = lVar16 + 1;
          lVar17 = lVar17 + 0x90;
          if (*(int *)((long)param_1 + 0x2c) <= lVar16) goto LAB_00344ca4;
          lVar13 = param_1[0xd] + lVar17;
          piVar14 = *(int **)(param_2 + 0x40);
          if (piVar14 == (int *)0x0) goto LAB_00344c5c;
LAB_00344c3c:
          iVar18 = *(int *)(param_2 + 0x38);
          iVar15 = *piVar14;
          if (iVar15 <= iVar18) break;
          *(int *)(param_2 + 0x38) = iVar18 + 1;
          uVar9 = *(undefined8 *)(piVar14 + (long)iVar18 * 2 + 2);
        }
      } while (iVar15 != *(int *)(param_2 + 0x3c));
    } while( true );
  }
LAB_00344ca4:
  if (0 < *(int *)(param_1 + 6)) {
    lVar17 = 0;
    lVar16 = 0;
    lVar13 = param_1[0xe];
    piVar14 = *(int **)(param_2 + 0x58);
    if (piVar14 != (int *)0x0) goto LAB_00344d0c;
LAB_00344d2c:
    iVar15 = *(int *)(param_2 + 0x54);
    do {
      FUN_0032bcac(param_2 + 0x48,iVar15 + 1);
      piVar14 = *(int **)(param_2 + 0x58);
      iVar15 = *piVar14;
      do {
        *piVar14 = iVar15 + 1;
        uVar9 = FUN_003c0248(*(undefined8 *)(param_2 + 0x48));
        iVar15 = *(int *)(param_2 + 0x50);
        *(int *)(param_2 + 0x50) = iVar15 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x58) + (long)iVar15 * 8 + 8) = uVar9;
        while( true ) {
          FUN_003459f4(lVar13,uVar9);
          lVar16 = lVar16 + 1;
          lVar17 = lVar17 + 0x50;
          if (*(int *)(param_1 + 6) <= lVar16) goto LAB_00344d74;
          lVar13 = param_1[0xe] + lVar17;
          piVar14 = *(int **)(param_2 + 0x58);
          if (piVar14 == (int *)0x0) goto LAB_00344d2c;
LAB_00344d0c:
          iVar18 = *(int *)(param_2 + 0x50);
          iVar15 = *piVar14;
          if (iVar15 <= iVar18) break;
          *(int *)(param_2 + 0x50) = iVar18 + 1;
          uVar9 = *(undefined8 *)(piVar14 + (long)iVar18 * 2 + 2);
        }
      } while (iVar15 != *(int *)(param_2 + 0x54));
    } while( true );
  }
LAB_00344d74:
  if (0 < *(int *)((long)param_1 + 0x34)) {
    lVar17 = 0;
    lVar16 = 0;
    lVar13 = param_1[0xf];
    piVar14 = *(int **)(param_2 + 0x70);
    if (piVar14 != (int *)0x0) goto LAB_00344ddc;
LAB_00344dfc:
    iVar15 = *(int *)(param_2 + 0x6c);
    do {
      FUN_0032bcac(param_2 + 0x60,iVar15 + 1);
      piVar14 = *(int **)(param_2 + 0x70);
      iVar15 = *piVar14;
      do {
        *piVar14 = iVar15 + 1;
        uVar9 = FUN_003c039c(*(undefined8 *)(param_2 + 0x60));
        iVar15 = *(int *)(param_2 + 0x68);
        *(int *)(param_2 + 0x68) = iVar15 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x70) + (long)iVar15 * 8 + 8) = uVar9;
        while( true ) {
          FUN_00345cd0(lVar13,uVar9);
          lVar16 = lVar16 + 1;
          lVar17 = lVar17 + 0x30;
          if (*(int *)((long)param_1 + 0x34) <= lVar16) goto LAB_00344e44;
          lVar13 = param_1[0xf] + lVar17;
          piVar14 = *(int **)(param_2 + 0x70);
          if (piVar14 == (int *)0x0) goto LAB_00344dfc;
LAB_00344ddc:
          iVar18 = *(int *)(param_2 + 0x68);
          iVar15 = *piVar14;
          if (iVar15 <= iVar18) break;
          *(int *)(param_2 + 0x68) = iVar18 + 1;
          uVar9 = *(undefined8 *)(piVar14 + (long)iVar18 * 2 + 2);
        }
      } while (iVar15 != *(int *)(param_2 + 0x6c));
    } while( true );
  }
LAB_00344e44:
  if (*(int *)(param_1 + 7) < 1) {
LAB_00344f14:
    lVar17 = param_1[0x11];
    lVar16 = FUN_003b3f30();
    if (lVar17 != lVar16) {
      lVar16 = *(long *)(param_2 + 200);
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
      if (lVar16 == 0) {
        puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
        lVar16 = FUN_003c04f8(puVar10);
        *(long *)(param_2 + 200) = lVar16;
      }
      FUN_003b5f7c(lVar16,param_1[0x11]);
    }
    return;
  }
  lVar17 = 0;
  lVar16 = 0;
  lVar13 = param_1[0x10];
  piVar14 = *(int **)(param_2 + 0x88);
  if (piVar14 != (int *)0x0) goto LAB_00344eac;
LAB_00344ecc:
  iVar15 = *(int *)(param_2 + 0x84);
  do {
    FUN_0032bcac(param_2 + 0x78,iVar15 + 1);
    piVar14 = *(int **)(param_2 + 0x88);
    iVar15 = *piVar14;
    do {
      *piVar14 = iVar15 + 1;
      uVar9 = FUN_003c002c(*(undefined8 *)(param_2 + 0x78));
      iVar15 = *(int *)(param_2 + 0x80);
      *(int *)(param_2 + 0x80) = iVar15 + 1;
      *(undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar15 * 8 + 8) = uVar9;
      while( true ) {
        FUN_00345e9c(lVar13,uVar9);
        lVar16 = lVar16 + 1;
        lVar17 = lVar17 + 0x98;
        if (*(int *)(param_1 + 7) <= lVar16) goto LAB_00344f14;
        lVar13 = param_1[0x10] + lVar17;
        piVar14 = *(int **)(param_2 + 0x88);
        if (piVar14 == (int *)0x0) goto LAB_00344ecc;
LAB_00344eac:
        iVar18 = *(int *)(param_2 + 0x80);
        iVar15 = *piVar14;
        if (iVar15 <= iVar18) break;
        *(int *)(param_2 + 0x80) = iVar18 + 1;
        uVar9 = *(undefined8 *)(piVar14 + (long)iVar18 * 2 + 2);
      }
    } while (iVar15 != *(int *)(param_2 + 0x84));
  } while( true );
}


