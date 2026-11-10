/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e73f0; name: FUN_007e73f0
 */


uint FUN_007e73f0(undefined4 *param_1,byte *param_2,undefined8 param_3,byte *param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1[0x1e] == 0) {
LAB_007e74e8:
    *param_1 = 4;
    *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + (ulong)param_5;
    if (param_5 != 0) {
      uVar6 = param_1[0x1f];
      puVar1 = (undefined8 *)(param_1 + 6);
      uVar5 = param_5;
      do {
        if (uVar6 == 0) {
          uVar6 = param_1[0x20] + 1;
          param_1[0x20] = uVar6;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          param_1[0xd] = uVar6 >> 0x10 | uVar6 << 0x10;
          (**(code **)(param_1 + 4))(param_1 + 0xe,param_1 + 10,*(undefined8 *)(param_1 + 2));
          uVar6 = param_1[0x1f];
        }
        bVar4 = *param_4;
        uVar5 = uVar5 - 1;
        *param_2 = *(byte *)((long)(param_1 + 0xe) + (long)(int)uVar6) ^ bVar4;
        *(byte *)((long)puVar1 + (long)(int)param_1[0x1f]) =
             *(byte *)((long)puVar1 + (long)(int)param_1[0x1f]) ^ bVar4;
        uVar6 = param_1[0x1f] + 1 & 0xf;
        param_1[0x1f] = uVar6;
        if (uVar6 == 0) {
          lVar7 = 0;
          bVar4 = *(byte *)((long)param_1 + 0x27);
          uVar9 = (ulong)(bVar4 >> 4);
          uVar10 = (ulong)bVar4 & 0xf;
          do {
            uVar3 = *(undefined8 *)(param_1 + uVar10 * 4 + 0x24);
            *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + uVar10 * 4 + 0x22);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            uVar11 = *(ulong *)(param_1 + 0x16);
            uVar10 = *(ulong *)(param_1 + 0x18);
            lVar8 = lVar7;
            while( true ) {
              uVar2 = *(ulong *)(param_1 + uVar9 * 4 + 0x24);
              lVar7 = lVar8 + -1;
              *(ulong *)(param_1 + 0x16) =
                   *(ulong *)(param_1 + uVar9 * 4 + 0x22) ^ uVar11 >> 4 ^
                   (ulong)*(uint *)(&DAT_03a7180c + (uVar10 & 0xf) * 4) << 0x20;
              *(ulong *)(param_1 + 0x18) = uVar2 ^ (uVar10 >> 4 | uVar11 << 0x3c);
              if (lVar8 == -0xf) {
                *puVar1 = *(undefined8 *)(param_1 + 0x16);
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
                uVar9 = (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff00) >> 8 |
                        (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                *(ulong *)(param_1 + 6) = uVar9 >> 0x20 | uVar9 << 0x20;
                uVar9 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                        (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                *(ulong *)(param_1 + 8) = uVar9 >> 0x20 | uVar9 << 0x20;
                goto LAB_007e7540;
              }
              bVar4 = ((byte *)((long)param_1 + 0x27))[lVar7];
              uVar9 = (ulong)(bVar4 >> 4);
              uVar10 = (ulong)bVar4 & 0xf;
              if (lVar7 == 0) break;
              uVar11 = *(ulong *)(param_1 + uVar10 * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4 ^
                       (ulong)*(uint *)(&DAT_03a7180c + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) <<
                       0x20;
              uVar10 = *(ulong *)(param_1 + uVar10 * 4 + 0x24) ^
                       (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
              *(ulong *)(param_1 + 0x16) = uVar11;
              *(ulong *)(param_1 + 0x18) = uVar10;
              lVar8 = lVar7;
            }
          } while( true );
        }
LAB_007e7540:
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
    return param_5;
  }
  lVar7 = 0;
  bVar4 = *(byte *)((long)param_1 + 0x27);
  uVar9 = (ulong)(bVar4 >> 4);
  uVar10 = (ulong)bVar4 & 0xf;
  do {
    uVar3 = *(undefined8 *)(param_1 + uVar10 * 4 + 0x24);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + uVar10 * 4 + 0x22);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar11 = *(ulong *)(param_1 + 0x16);
    uVar10 = *(ulong *)(param_1 + 0x18);
    lVar8 = lVar7;
    while( true ) {
      uVar2 = *(ulong *)(param_1 + uVar9 * 4 + 0x24);
      lVar7 = lVar8 + -1;
      *(ulong *)(param_1 + 0x16) =
           *(ulong *)(param_1 + uVar9 * 4 + 0x22) ^ uVar11 >> 4 ^
           (ulong)*(uint *)(&DAT_03a7180c + (uVar10 & 0xf) * 4) << 0x20;
      *(ulong *)(param_1 + 0x18) = uVar2 ^ (uVar10 >> 4 | uVar11 << 0x3c);
      if (lVar8 == -0xf) {
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
        param_1[0x1e] = 0;
        uVar9 = (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        *(ulong *)(param_1 + 6) = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        *(ulong *)(param_1 + 8) = uVar9 >> 0x20 | uVar9 << 0x20;
        goto LAB_007e74e8;
      }
      bVar4 = ((byte *)((long)param_1 + 0x27))[lVar7];
      uVar9 = (ulong)(bVar4 >> 4);
      uVar10 = (ulong)bVar4 & 0xf;
      if (lVar7 == 0) break;
      uVar11 = *(ulong *)(param_1 + uVar10 * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4 ^
               (ulong)*(uint *)(&DAT_03a7180c + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) << 0x20;
      uVar10 = *(ulong *)(param_1 + uVar10 * 4 + 0x24) ^
               (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
      *(ulong *)(param_1 + 0x16) = uVar11;
      *(ulong *)(param_1 + 0x18) = uVar10;
      lVar8 = lVar7;
    }
  } while( true );
}


