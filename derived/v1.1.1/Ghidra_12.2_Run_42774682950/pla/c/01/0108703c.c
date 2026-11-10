/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108703c; name: FUN_0108703c
 */


undefined1 * FUN_0108703c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  undefined1 *puVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  
  piVar5 = (int *)*param_1;
  if ((((piVar5 != (int *)0x0) && (*(uint *)(param_1 + 1) != 0xffffffff)) &&
      (puVar6 = (ushort *)((long)piVar5 - (long)*piVar5), 4 < *puVar6)) && ((ulong)puVar6[2] != 0))
  {
    puVar8 = (uint *)((long)piVar5 + (ulong)puVar6[2]);
    puVar8 = (uint *)((long)puVar8 + (ulong)*(uint *)(param_1 + 1) * 4 + (ulong)*puVar8 + 4);
    piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar9 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((long)piVar1 + uVar9);
      if (uVar7 == 0xffffffff) goto LAB_01087250;
    }
    puVar8 = (uint *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                     (ulong)uVar7 * 4 + (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]) + 4);
    piVar5 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar6 = (ushort *)((long)piVar5 - (long)*piVar5);
    if ((4 < *puVar6) && ((ulong)puVar6[2] != 0)) {
      cVar3 = *(char *)((long)piVar5 + (ulong)puVar6[2]);
      if (cVar3 == '\x04') {
        piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                        (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
           (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar9 == 0)) {
          return (undefined1 *)0x0;
        }
        puVar4 = *(undefined1 **)((long)piVar5 + uVar9);
      }
      else {
        if (cVar3 != '\x03') {
          if (cVar3 == '\x02') {
            piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                            (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
            if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
              return (undefined1 *)0x0;
            }
            uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
            if (uVar9 == 0) {
              return (undefined1 *)0x0;
            }
            return (undefined1 *)(long)*(float *)((long)piVar5 + uVar9);
          }
          if (cVar3 == '\x01') {
            piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                            (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
            if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
              return (undefined1 *)0x0;
            }
            uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
            if (uVar9 == 0) {
              return (undefined1 *)0x0;
            }
            return (undefined1 *)(long)*(int *)((long)piVar5 + uVar9);
          }
          goto LAB_01087250;
        }
        piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                        (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
        puVar8 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
        puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
        uVar7 = *puVar8;
        puVar4 = &DAT_cbf29ce484222645;
        if (uVar7 != 0) {
          puVar8 = puVar8 + 1;
          if (uVar7 != 1) {
            lVar10 = 0;
            do {
              pbVar2 = (byte *)((long)puVar8 + lVar10);
              lVar10 = lVar10 + 2;
              puVar4 = (undefined1 *)
                       ((((ulong)puVar4 ^ (ulong)*pbVar2) * 0x100000001b3 ^ (ulong)pbVar2[1]) *
                       0x100000001b3);
            } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar10);
            puVar8 = (uint *)((long)puVar8 + lVar10);
          }
          if ((uVar7 & 1) != 0) {
            return (undefined1 *)(((ulong)puVar4 ^ (ulong)(byte)*puVar8) * 0x100000001b3);
          }
        }
      }
      return puVar4;
    }
  }
LAB_01087250:
  return (undefined1 *)*param_2;
}


