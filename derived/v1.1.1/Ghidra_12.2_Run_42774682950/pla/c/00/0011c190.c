/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011c190; name: FUN_0011c190
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_0011c190(long *param_1,long param_2,uint param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint3 uVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 local_8;
  
  if (3 < param_3) {
    return -1;
  }
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_4 + 2);
    lVar11 = (ulong)uVar5 + (int)param_3 * param_2;
    puVar4 = (uint *)*param_4;
    lVar12 = lVar11 + 7 >> 3;
    if (lVar12 <= param_4[1] - (long)puVar4) {
      lVar2 = lVar12;
      if (3 < lVar12) {
        lVar2 = 4;
      }
      puVar13 = (uint *)((long)puVar4 + (lVar12 - lVar2));
      plVar1 = (long *)((long)param_1 + param_2);
      lVar12 = *plVar1;
      local_8 = 0;
      if (7 < lVar11 + 7) {
        local_8 = (ulong)(byte)*puVar13;
        if (1 < lVar2) {
          local_8._0_2_ = CONCAT11(*(undefined1 *)((long)puVar13 + 1),(byte)*puVar13);
          uVar7 = (ushort)local_8;
          local_8 = (ulong)(ushort)local_8;
          if (lVar2 != 2) {
            local_8._0_3_ = CONCAT12(*(undefined1 *)((long)puVar13 + 2),uVar7);
            uVar8 = (uint3)local_8;
            local_8 = (ulong)(uint3)local_8;
            if (3 < lVar2) {
              local_8._0_4_ = CONCAT13(*(undefined1 *)((long)puVar13 + 3),uVar8);
              local_8 = (ulong)(uint)local_8;
            }
          }
        }
      }
      if (param_3 == 1) {
        puVar14 = puVar4;
        do {
          bVar9 = puVar13 <= puVar14;
          puVar3 = puVar14;
          if (bVar9) {
            puVar3 = (uint *)((long)&local_8 + ((long)puVar14 - (long)puVar13));
          }
          puVar14 = (uint *)((long)puVar3 + 1);
          uVar6 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
          uVar15 = (ulong)((uVar6 >> 0x10 | uVar6 << 0x10) >> (ulong)(0x18 - uVar5 & 0x1f) & 0xff);
          uVar15 = (uVar15 | uVar15 << 0x1c) & 0xf0000000f;
          uVar15 = uVar15 | uVar15 << 0xe;
          uVar15 = (uVar15 & 0x2000200020002) >> 1 | (uVar15 & 0x1000100010001) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          if (bVar9) {
            puVar13 = (uint *)((ulong)&local_8 | 4);
          }
          plVar10 = param_1 + 1;
          *param_1 = (uVar15 >> 0x20 | uVar15 << 0x20) + *param_1 * 2;
          param_1 = plVar10;
        } while (plVar10 < plVar1);
      }
      else if (param_3 == 2) {
        puVar14 = puVar4;
        do {
          bVar9 = puVar13 <= puVar14;
          puVar3 = puVar14;
          if (bVar9) {
            puVar3 = (uint *)((long)&local_8 + ((long)puVar14 - (long)puVar13));
          }
          puVar14 = (uint *)((long)puVar3 + 2);
          uVar6 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
          uVar15 = (ulong)((uVar6 >> 0x10 | uVar6 << 0x10) >> (ulong)(0x10 - uVar5 & 0x1f) & 0xffff)
          ;
          uVar15 = (uVar15 | uVar15 << 0x18) & 0xff000000ff;
          uVar15 = uVar15 | uVar15 << 0xc;
          uVar15 = (uVar15 & 0xc000c000c000c) >> 2 | (uVar15 & 0x3000300030003) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          if (bVar9) {
            puVar13 = (uint *)((ulong)&local_8 | 4);
          }
          plVar10 = param_1 + 1;
          *param_1 = (uVar15 >> 0x20 | uVar15 << 0x20) + *param_1 * 4;
          param_1 = plVar10;
        } while (plVar10 < plVar1);
      }
      else {
        if (param_3 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar14 = puVar4;
        do {
          bVar9 = puVar13 <= puVar14;
          puVar3 = puVar14;
          if (bVar9) {
            puVar3 = (uint *)((long)&local_8 + ((long)puVar14 - (long)puVar13));
          }
          puVar14 = (uint *)((long)puVar3 + 3);
          uVar6 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
          uVar15 = (ulong)((uVar6 >> 0x10 | uVar6 << 0x10) >> (ulong)(8 - uVar5 & 0x1f) & 0xffffff);
          uVar15 = (uVar15 | uVar15 << 0x14) & 0xfff00000fff;
          uVar15 = uVar15 | uVar15 << 10;
          uVar15 = (uVar15 & 0x38003800380038) >> 3 | (uVar15 & 0x7000700070007) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          if (bVar9) {
            puVar13 = (uint *)((ulong)&local_8 | 4);
          }
          plVar10 = param_1 + 1;
          *param_1 = (uVar15 >> 0x20 | uVar15 << 0x20) + *param_1 * 8;
          param_1 = plVar10;
        } while (plVar10 < plVar1);
      }
      *plVar1 = lVar12;
      *param_4 = (long)puVar4 + (lVar11 >> 3);
      *(uint *)(param_4 + 2) = (uint)lVar11 & 7;
      return param_2;
    }
    param_2 = -1;
  }
  return param_2;
}


