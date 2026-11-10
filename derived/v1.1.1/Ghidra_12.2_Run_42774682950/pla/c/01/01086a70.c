/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01086a70; name: FUN_01086a70
 */


int FUN_01086a70(undefined8 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  
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
      if (uVar7 == 0xffffffff) {
        return param_2;
      }
    }
    puVar8 = (uint *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                     (ulong)uVar7 * 4 + (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]) + 4);
    piVar5 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar6 = (ushort *)((long)piVar5 - (long)*piVar5);
    if (*puVar6 < 5) {
      return param_2;
    }
    if ((ulong)puVar6[2] == 0) {
      return param_2;
    }
    cVar2 = *(char *)((long)piVar5 + (ulong)puVar6[2]);
    if (cVar2 == '\x01') {
      piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                      (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
      if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
        return 0;
      }
      uVar3 = ((ushort *)((long)piVar5 - (long)*piVar5))[2];
    }
    else {
      if (cVar2 == '\x02') {
        piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                        (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
        if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
          return 0;
        }
        uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
        if (uVar9 == 0) {
          return 0;
        }
        return (int)*(float *)((long)piVar5 + uVar9);
      }
      if (cVar2 == '\x03') {
        piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                        (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
           (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar9 == 0)) {
          iVar4 = atoi(&DAT_00000004);
          return iVar4;
        }
        puVar8 = (uint *)((long)piVar5 + uVar9);
        iVar4 = atoi((char *)((long)puVar8 + (ulong)*puVar8 + 4));
        return iVar4;
      }
      if (cVar2 != '\x04') {
        return param_2;
      }
      piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar6[3]) +
                      (ulong)*(uint *)((long)piVar5 + (ulong)puVar6[3]));
      if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
        return 0;
      }
      uVar3 = ((ushort *)((long)piVar5 - (long)*piVar5))[2];
    }
    if ((ulong)uVar3 == 0) {
      return 0;
    }
    param_2 = *(int *)((long)piVar5 + (ulong)uVar3);
  }
  return param_2;
}


