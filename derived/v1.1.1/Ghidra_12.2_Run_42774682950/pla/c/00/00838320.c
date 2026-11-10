/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838320; name: FUN_00838320
 */


int FUN_00838320(long param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  uint local_1a4;
  undefined1 auStack_1a0 [16];
  undefined4 local_190 [34];
  undefined1 auStack_108 [16];
  undefined4 local_f8 [8];
  long local_d8 [4];
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [16];
  uint local_68 [2];
  
  *param_2 = 5;
  puVar4 = PTR_DAT_04377550;
  *(ushort *)(param_2 + 1) = *(ushort *)(param_1 + 0xdc) >> 8 | *(ushort *)(param_1 + 0xdc) << 8;
  lVar12 = *(long *)puVar4;
  uVar8 = FUN_0083fd98(lVar12 + 0x178);
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_2 + 3) = uVar8 >> 0x20 | uVar8 << 0x20;
  uVar7 = FUN_0083fda0(lVar12 + 0x178);
  *(undefined2 *)(param_2 + 0xb) = 0;
  param_2[0xe] = (char)uVar7;
  param_2[0xd] = (char)((ushort)uVar7 >> 8);
  lVar9 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar13 = *(long *)(lVar9 + 0x20);
  lVar12 = lVar9 + 0x18;
  if (lVar13 == lVar12) {
    bVar20 = 0;
  }
  else {
    bVar20 = 0;
    lVar15 = *(long *)(lVar13 + 0x10);
    cVar2 = *(char *)(lVar15 + 0x90);
    while( true ) {
      if ((cVar2 == -3) || (*(char *)(lVar15 + 0x91) == -3)) {
        lVar13 = *(long *)(lVar13 + 8);
      }
      else {
        if (*(int *)(lVar15 + 0x3c) == 2) {
          bVar20 = bVar20 + 1;
        }
        lVar13 = *(long *)(lVar13 + 8);
      }
      if (lVar13 == lVar12) break;
      lVar15 = *(long *)(lVar13 + 0x10);
      cVar2 = *(char *)(lVar15 + 0x90);
    }
  }
  param_2[0xf] = bVar20;
  memset(local_68,0,4);
  lVar13 = *(long *)(lVar9 + 0x20);
  uVar8 = (ulong)(bVar20 + 0x1f >> 3) & 0x3c;
  puVar17 = (ulong *)(param_2 + 0x10 + uVar8);
  if (lVar13 != lVar12) {
    uVar18 = 0;
    lVar9 = *(long *)(lVar13 + 0x10);
    cVar2 = *(char *)(lVar9 + 0x90);
    while( true ) {
      if (((cVar2 != -3) && (*(char *)(lVar9 + 0x91) != -3)) && (*(int *)(lVar9 + 0x3c) == 2)) {
        FUN_0083fbc0(local_a8);
        FUN_00825dcc(auStack_b8,*(undefined8 *)(lVar13 + 0x10),local_a8);
        uVar14 = *(ulong *)(*(long *)(lVar13 + 0x10) + 0x30);
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        *puVar17 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar7 = FUN_0083fda0(local_a8);
        *(undefined2 *)(puVar17 + 1) = 0;
        puVar10 = (ulong *)((long)puVar17 + 0xc);
        *(char *)((long)puVar17 + 10) = (char)((ushort)uVar7 >> 8);
        *(char *)((long)puVar17 + 0xb) = (char)uVar7;
        FUN_007f0fc8(local_d8,*(long *)(lVar13 + 0x10) + 8);
        uVar14 = FUN_007e362c(local_d8);
        if ((uVar14 & 1) == 0) {
          uVar14 = FUN_007e4430(local_d8);
          if ((uVar14 & 1) == 0) {
            *(undefined4 *)((long)puVar17 + 0xc) = 0;
            pcVar16 = *(code **)(local_d8[0] + 0x10);
            puVar10 = puVar17 + 2;
            uVar11 = 2;
          }
          else {
            pcVar16 = *(code **)(local_d8[0] + 0x10);
            uVar11 = 6;
          }
          local_f8[0] = 0;
          (*pcVar16)(local_190,local_d8,puVar10,local_f8,uVar11);
          lVar9 = 0x12;
        }
        else {
          local_68[0] = local_68[0] | 1 << (ulong)(uVar18 & 0x1f);
          local_f8[0] = 0;
          (**(code **)(local_d8[0] + 0x10))(local_190,local_d8,puVar10,local_f8,0x12);
          lVar9 = 0x1e;
        }
        FUN_007ee660(auStack_b8,local_190);
        puVar1 = (undefined1 *)((long)puVar17 + lVar9);
        *puVar1 = *(undefined1 *)(*(long *)(lVar13 + 0x10) + 0x90);
        puVar1[1] = *(undefined1 *)(*(long *)(lVar13 + 0x10) + 0x91);
        puVar1[2] = *(undefined1 *)(*(long *)(lVar13 + 0x10) + 0x28);
        uVar3 = *(ushort *)(*(long *)(lVar13 + 0x10) + 0xf8);
        *(ushort *)(puVar1 + 3) = uVar3 >> 8 | uVar3 << 8;
        uVar5 = FUN_0083fd80(local_a8);
        puVar1[5] = uVar5;
        bVar6 = FUN_0083fd8c(local_a8);
        puVar1[6] = bVar6 & 1;
        FUN_00825bdc(local_190,*(undefined8 *)(lVar13 + 0x10),local_f8);
        memcpy(puVar1 + 7,local_f8,0x20);
        puVar17 = (ulong *)(puVar1 + 0x29);
        bVar6 = *(byte *)(*(long *)(lVar13 + 0x10) + 0x360);
        uVar5 = *(undefined1 *)(*(long *)(lVar13 + 0x10) + 0x361);
        puVar1[0x27] = bVar6;
        puVar1[0x28] = uVar5;
        if (bVar6 != 0) {
          uVar19 = 0;
          do {
            FUN_007e8190(local_190);
            FUN_007e8434(local_190);
            memset(auStack_108,0,0x10);
            FUN_00825cc0(auStack_1a0,*(undefined8 *)(lVar13 + 0x10),uVar19,local_190);
            FUN_008363ec(auStack_1a0,local_190,puVar17,&local_1a4,
                         ((int)param_2 + param_3) - (int)puVar17);
            puVar17 = (ulong *)((long)puVar17 + (ulong)local_1a4);
            FUN_007e81d4(local_190);
            uVar19 = uVar19 + 1;
          } while (bVar6 != uVar19);
        }
        uVar18 = uVar18 + 1;
        FUN_007e34a4(local_d8);
        FUN_0083fc40(local_a8);
      }
      lVar13 = *(long *)(lVar13 + 8);
      if (lVar13 == lVar12) break;
      lVar9 = *(long *)(lVar13 + 0x10);
      cVar2 = *(char *)(lVar9 + 0x90);
    }
  }
  if (bVar20 != 0) {
    memcpy(param_2 + 0x10,local_68,uVar8);
    local_190[0] = 0;
    local_a8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_190 | 4),(Result *)local_a8);
    FUN_007ee578(local_a8,local_190);
  }
  return (int)puVar17 - (int)param_2;
}


