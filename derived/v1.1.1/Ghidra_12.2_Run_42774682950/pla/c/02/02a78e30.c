/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a78e30; name: FUN_02a78e30
 */


ulong FUN_02a78e30(long param_1,ulong param_2,void *param_3,undefined8 param_4)

{
  uint *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 local_1c58;
  ulong local_1c50 [4];
  undefined8 local_1c30;
  undefined8 local_38;
  
  piVar11 = *(int **)(param_1 + 8);
  if (piVar11 != (int *)0x0) {
    puVar13 = (ushort *)((long)piVar11 - (long)*piVar11);
    puVar10 = (uint *)0x0;
    if ((ulong)puVar13[2] != 0) {
      puVar10 = (uint *)((long)piVar11 + (ulong)puVar13[2]);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
    if ((*puVar13 < 7) || ((ulong)puVar13[3] == 0)) {
      lVar12 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar11 + (ulong)puVar13[3]);
      lVar12 = (long)puVar1 + (ulong)*puVar1;
    }
    puVar9 = (ulong *)(puVar10 + 1);
    uVar14 = (ulong)*puVar10;
    puVar2 = puVar9 + uVar14;
    puVar3 = puVar9;
    if (uVar14 != 0) {
      puVar15 = puVar9;
      do {
        uVar16 = uVar14 >> 1;
        puVar3 = puVar15 + uVar16 + 1;
        uVar14 = uVar14 + ~uVar16;
        if (param_2 <= puVar15[uVar16]) {
          puVar3 = puVar15;
          uVar14 = uVar16;
        }
        puVar15 = puVar3;
      } while (uVar14 != 0);
    }
    if ((puVar3 != puVar2) && (*puVar3 == param_2)) {
      puVar10 = (uint *)(lVar12 + ((ulong)((long)puVar3 - (long)puVar9) >> 3 & 0xffffffff) * 4 + 4);
      piVar11 = (int *)((long)puVar10 + (ulong)*puVar10);
      puVar13 = (ushort *)((long)piVar11 - (long)*piVar11);
      uVar5 = *puVar13;
      if (uVar5 < 0xd) {
        if (uVar5 < 7) {
                    /* WARNING: Could not recover jumptable at 0x02a790f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (**(code **)(*DAT_043eef70 + 0x10))(DAT_043eef70,param_1,8);
          return uVar14;
        }
LAB_02a78f7c:
        puVar10 = (uint *)0x0;
        uVar6 = puVar13[3];
      }
      else {
        if ((ulong)puVar13[6] == 0) goto LAB_02a78f7c;
        puVar10 = (uint *)((long)piVar11 + (ulong)puVar13[6]);
        puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
        uVar6 = puVar13[3];
      }
      if ((ulong)uVar6 != 0) {
        bVar4 = *(byte *)((long)piVar11 + (ulong)uVar6);
        if (bVar4 - 1 < 2) {
          lVar12 = tpidr_el0;
          if (*(long *)(lVar12 + 0x20) == 0) {
            *(undefined8 *)(lVar12 + 0x20) = DAT_043f1798;
          }
          local_1c50[3] = *(undefined8 *)(lVar12 + 0x20);
          local_1c30 = *(undefined8 *)(lVar12 + 0x28);
          *(undefined8 *)(lVar12 + 0x20) = param_4;
          *(undefined2 *)(lVar12 + 0x28) = 0x101;
          FUN_00102160(&local_38,100);
          local_1c50[1] = 0;
          local_1c50[2] = 0;
          local_1c50[0] = (ulong)*puVar10;
          if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0xb) {
            local_1c58 = 0;
          }
          else {
            uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5];
            local_1c58 = 0;
            if (uVar14 != 0) {
              local_1c58 = *(undefined8 *)((long)piVar11 + uVar14);
            }
          }
          lVar8 = FUN_00102230(local_38,param_3,&local_1c58,puVar10 + 1,local_1c50,local_1c50 + 1);
          uVar7 = (uint)(lVar8 == 0);
          FUN_001021e0(local_38);
          *(ulong *)(lVar12 + 0x20) = local_1c50[3];
          *(undefined2 *)(lVar12 + 0x28) = (undefined2)local_1c30;
          goto LAB_02a78fc0;
        }
        if (bVar4 != 0) {
          if (bVar4 == 0xff) {
            memcpy(param_3,puVar10 + 1,(ulong)*puVar10);
            uVar7 = 1;
            goto LAB_02a78fc0;
          }
          goto LAB_02a78fbc;
        }
      }
      if ((uVar5 < 0xb) || ((ulong)puVar13[5] == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(ulong *)((long)piVar11 + (ulong)puVar13[5]);
      }
      uVar7 = nn::util::DecompressZlib
                        (param_3,uVar14,puVar10 + 1,(ulong)*puVar10,local_1c50 + 3,0x1bf8);
      goto LAB_02a78fc0;
    }
  }
LAB_02a78fbc:
  uVar7 = 0;
LAB_02a78fc0:
  return (ulong)(uVar7 & 1);
}


