/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01086c38; name: FUN_01086c38
 */


undefined1  [16] FUN_01086c38(undefined1 param_1 [16],undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  double dVar10;
  undefined8 uVar12;
  undefined1 auVar11 [16];
  
  uVar12 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  piVar3 = (int *)*param_2;
  if ((((piVar3 != (int *)0x0) && (*(uint *)(param_2 + 1) != 0xffffffff)) &&
      (puVar5 = (ushort *)((long)piVar3 - (long)*piVar3), 4 < *puVar5)) && ((ulong)puVar5[2] != 0))
  {
    puVar8 = (uint *)((long)piVar3 + (ulong)puVar5[2]);
    puVar8 = (uint *)((long)puVar8 + (ulong)*(uint *)(param_2 + 1) * 4 + (ulong)*puVar8 + 4);
    piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar9 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((long)piVar1 + uVar9);
      if (uVar7 == 0xffffffff) goto LAB_01086dcc;
    }
    puVar8 = (uint *)((long)((long)piVar3 + (ulong)puVar5[3]) +
                     (ulong)uVar7 * 4 + (ulong)*(uint *)((long)piVar3 + (ulong)puVar5[3]) + 4);
    piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
    if ((4 < *puVar5) && ((ulong)puVar5[2] != 0)) {
      cVar2 = *(char *)((long)piVar3 + (ulong)puVar5[2]);
      if (cVar2 == '\x02') {
        piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar5[3]) +
                        (ulong)*(uint *)((long)piVar3 + (ulong)puVar5[3]));
        uVar6 = 0;
        uVar12 = 0;
        if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 != 0)) {
          return ZEXT416(*(uint *)((long)piVar3 + uVar9));
        }
      }
      else if (cVar2 == '\x04') {
        piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar5[3]) +
                        (ulong)*(uint *)((long)piVar3 + (ulong)puVar5[3]));
        uVar6 = 0;
        uVar12 = 0;
        if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 != 0)) {
          uVar6 = (ulong)(uint)(float)*(ulong *)((long)piVar3 + uVar9);
          uVar12 = 0;
        }
      }
      else {
        if (cVar2 == '\x03') {
          piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar5[3]) +
                          (ulong)*(uint *)((long)piVar3 + (ulong)puVar5[3]));
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
             (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 == 0)) {
            lVar4 = 0;
          }
          else {
            puVar8 = (uint *)((long)piVar3 + uVar6);
            lVar4 = (long)puVar8 + (ulong)*puVar8;
          }
          dVar10 = atof((char *)(lVar4 + 4));
          return ZEXT416((uint)(float)dVar10);
        }
        if (cVar2 == '\x01') {
          piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar5[3]) +
                          (ulong)*(uint *)((long)piVar3 + (ulong)puVar5[3]));
          uVar6 = 0;
          uVar12 = 0;
          if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
             (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar9 != 0)) {
            return ZEXT416((uint)(float)*(int *)((long)piVar3 + uVar9));
          }
        }
      }
    }
  }
LAB_01086dcc:
  auVar11._8_8_ = uVar12;
  auVar11._0_8_ = uVar6;
  return auVar11;
}


