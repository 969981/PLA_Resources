/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03027b40; name: FUN_03027b40
 */


void FUN_03027b40(long param_1,byte param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  
  puVar13 = *(undefined4 **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
  uVar4 = *puVar13;
  uVar5 = *puVar13;
  *(undefined4 **)(param_1 + 0x730) = puVar13;
  *(short *)(param_1 + 0x738) = (short)((uint)uVar4 >> 0x10);
  *(short *)(param_1 + 0x73a) = (short)uVar5;
  *(int *)(param_1 + 0x73c) = -*(int *)(param_1 + 0x528);
  piVar1 = (int *)(*(long *)(param_3 + 0x40) + (ulong)param_2 * 8);
  FUN_030265bc(param_1,param_3,*piVar1 + 1,piVar1[1] + -1,*(undefined8 *)(param_1 + 0x30),param_4);
  iVar15 = *(int *)(param_1 + 0x73c) + *(int *)(param_1 + 0x528);
  if (iVar15 == 0) {
    *(undefined4 *)(param_1 + 0x73c) = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x730);
    if ((puVar14 !=
         *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8)) &&
       ((uint)*(ushort *)(param_1 + 0x73a) == (*puVar14 & 0xffff))) {
      puVar14 = *(uint **)(puVar14 + 2);
      *(undefined4 *)(param_1 + 0x738) = 0;
    }
    uVar9 = *puVar14;
    *(int *)(param_1 + 0x73c) = iVar15;
    lVar17 = *(long *)(param_1 + 0x720);
    *(uint **)(param_1 + 0x730) = puVar14;
    *(short *)(param_1 + 0x73a) = (short)uVar9 - *(short *)(param_1 + 0x73a);
    uVar20 = (ulong)((uint)param_2 +
                    (((uint)param_2 * 0x10000 + 0x10000 >> 0x10) * (uint)param_2 >> 1));
    puVar19 = *(undefined8 **)(*(long *)(lVar17 + 0x10) + uVar20 * 8);
    if (*(int *)((long)puVar19 + 0xc) == 0) {
      puVar19[1] = *(undefined8 *)(param_1 + 0x738);
      uVar11 = *(undefined8 *)(param_1 + 0x730);
      puVar19[2] = *(undefined8 *)(param_1 + 0x740);
      *puVar19 = uVar11;
    }
    else {
      puVar14 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
      puVar16 = *(undefined8 **)(param_1 + 0x4e0);
      uVar9 = *puVar14;
      if (0x3a < uVar9 >> 0x16) {
        puVar18 = puVar14;
        do {
          iVar15 = *(int *)(puVar16 + 0xb) + -1;
          if (*(int *)(puVar16 + 0xb) < 1) {
            lVar8 = puVar16[1];
            (**(code **)(*(long *)*puVar16 + 0x20))((long *)*puVar16,lVar8,6);
            *(undefined4 *)(puVar16 + 0xb) = 5;
            puVar12 = (undefined8 *)(lVar8 + 0x28);
          }
          else {
            *(int *)(puVar16 + 0xb) = iVar15;
            puVar12 = (undefined8 *)(puVar16[1] + (long)iVar15 * 8);
          }
          puVar14 = (uint *)*puVar12;
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[0] = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[1] = *(uint *)(param_1 + 0x538);
          uVar10 = *(uint *)(param_1 + 0x53c);
          iVar15 = *(int *)(param_1 + 0x538);
          uVar9 = iVar15 + 1;
          if (iVar15 < (int)(uVar10 & 0x3fffffff)) {
            lVar8 = *(long *)(param_1 + 0x530);
          }
          else {
            uVar11 = *(undefined8 *)(param_1 + 0x530);
            if (0x3ffffffe < iVar15) {
              FUN_032bd0a8(uVar9);
              uVar10 = *(uint *)(param_1 + 0x53c);
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar2 = uVar9;
            if ((int)uVar9 <= (int)uVar10) {
              uVar2 = uVar10;
            }
            lVar8 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar11,iVar15,(uint *)(param_1 + 0x53c));
            iVar15 = *(int *)(param_1 + 0x538);
            *(long *)(param_1 + 0x530) = lVar8;
          }
          *(uint **)(lVar8 + (long)iVar15 * 8) = puVar14;
          *(uint *)(param_1 + 0x538) = uVar9;
          *(uint **)(puVar18 + 2) = puVar14;
          uVar9 = *puVar14;
          puVar18 = puVar14;
        } while (0x3a < uVar9 >> 0x16);
      }
      uVar9 = uVar9 >> 0x10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar7) {
          *puVar14 = *puVar14 + 0x200001;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
      uVar11 = *(undefined8 *)(param_1 + 0x738);
      uVar3 = *(undefined8 *)(param_1 + 0x740);
      puVar16 = (undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x20);
      *puVar16 = *(undefined8 *)(param_1 + 0x730);
      *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x28) = uVar11;
      *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x30) = uVar3;
      if (*(int *)((long)puVar19 + 0xc) == 0) {
        puVar19[1] = *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x28);
        uVar11 = *puVar16;
        puVar19[2] = *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x30);
        *puVar19 = uVar11;
      }
      else {
        *(undefined8 *)((long)puVar14 + (ulong)uVar9 + 0x30) = puVar19[2];
        puVar19[2] = puVar16;
      }
      *(undefined8 **)(*(long *)(lVar17 + 0x10) + uVar20 * 8) = puVar16;
    }
  }
  puVar13 = *(undefined4 **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
  uVar4 = *puVar13;
  uVar5 = *puVar13;
  *(undefined4 **)(param_1 + 0x730) = puVar13;
  *(short *)(param_1 + 0x738) = (short)((uint)uVar4 >> 0x10);
  *(short *)(param_1 + 0x73a) = (short)uVar5;
  *(int *)(param_1 + 0x73c) = -*(int *)(param_1 + 0x528);
  return;
}


