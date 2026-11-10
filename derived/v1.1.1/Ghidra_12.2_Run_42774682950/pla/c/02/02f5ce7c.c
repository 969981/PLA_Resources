/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5ce7c; name: FUN_02f5ce7c
 */


void FUN_02f5ce7c(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *puStack_70;
  uint *local_68;
  
  lVar10 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar4) {
    uVar18 = 0;
    while( true ) {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + uVar18 * 8);
      iVar5 = *(int *)(lVar10 + 0x50);
      if ((iVar5 != 0) && (((uint)param_2 & (uint)*(byte *)(lVar10 + 0x1ae0)) != 0)) {
        lVar11 = lVar10;
        uVar2 = uVar18;
        while( true ) {
          if (((iVar5 != 0) &&
              (((*(uint *)(lVar10 + 0x1ae4) & 1 << (ulong)((uint)uVar2 & 0x1f)) != 0 ||
               ((*(uint *)(lVar11 + 0x1ae4) & 1 << (ulong)((uint)uVar18 & 0x1f)) != 0)))) &&
             (((*(char *)(lVar10 + 0x1ae8) != '\0' ||
               ((*(char *)(lVar11 + 0x1ae8) != '\0' ||
                ((*(char *)(lVar10 + 0x1ae9) != '\0' && (*(char *)(lVar10 + 0x1aec) != '\0')))))) ||
              ((*(char *)(lVar11 + 0x1ae9) != '\0' && (*(char *)(lVar11 + 0x1aec) != '\0')))))) {
            uVar15 = *(uint *)(param_3 + 1);
            uVar16 = (ulong)uVar15;
            uVar14 = *(uint *)((long)param_3 + 0xc);
            puVar17 = (undefined8 *)*param_3;
            uVar3 = uVar14 & 0x3fffffff;
            uVar1 = uVar15 + 1;
            puVar7 = puVar17;
            if ((int)uVar3 <= (int)uVar15) {
              if (0x3ffffffe < (int)uVar15) {
                FUN_032bd0a8(uVar1,param_2,0x5a,"Invalid requestedCapacity {}");
                uVar14 = *(uint *)((long)param_3 + 0xc);
                uVar3 = uVar14 & 0x3fffffff;
              }
              puVar6 = PTR_PTR_0434a090;
              uVar8 = (uVar14 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar8) {
                uVar8 = 0x3fffffff;
              }
              local_7c = uVar1;
              if ((int)uVar1 <= (int)uVar8) {
                local_7c = uVar8;
              }
              local_88 = (ulong)local_7c << 3;
              if (((int)local_7c < (int)uVar3) || (0x3fffffff < (int)local_7c)) {
                local_78 = 1;
                puStack_70 = &DAT_0411b3b8;
                local_68 = &local_7c;
                FUN_03320b50(0x65816502,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                             ,0x5a,"Invalid requestedCapacity {}",&local_78);
                uVar14 = *(uint *)((long)param_3 + 0xc);
                uVar3 = uVar14 & 0x3fffffff;
              }
              puVar7 = (undefined8 *)
                       (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_88,&local_88);
              if (0 < (int)uVar15) {
                puVar12 = puVar7;
                puVar13 = puVar17;
                do {
                  uVar16 = uVar16 - 1;
                  *puVar12 = *puVar13;
                  puVar12 = puVar12 + 1;
                  puVar13 = puVar13 + 1;
                } while (uVar16 != 0);
              }
              if (-1 < (int)uVar14) {
                (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar17,(ulong)uVar3 << 3);
              }
              if (local_88 < 0x1fffffff8) {
                uVar9 = (undefined4)(local_88 >> 3);
              }
              else {
                uVar9 = 0x3fffffff;
              }
              *(undefined4 *)((long)param_3 + 0xc) = uVar9;
              uVar15 = *(uint *)(param_3 + 1);
              *param_3 = (long)puVar7;
            }
            puVar7[(int)uVar15] = uVar18 | uVar2 << 0x20;
            *(uint *)(param_3 + 1) = uVar1;
          }
          uVar2 = uVar2 + 1;
          if (uVar2 == uVar4) break;
          lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar2 * 8);
          iVar5 = *(int *)(lVar11 + 0x50);
        }
      }
      uVar18 = uVar18 + 1;
      if (uVar18 == uVar4) break;
      lVar10 = *(long *)(param_1 + 8);
    }
  }
  return;
}


