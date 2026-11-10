/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01669230; name: FUN_01669230
 */


bool FUN_01669230(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ushort *puVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  
  piVar5 = (int *)*param_1;
  puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  if (*puVar7 < 5) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)0x0;
    if ((ulong)puVar7[2] != 0) {
      puVar1 = (uint *)((long)piVar5 + (ulong)puVar7[2]);
      piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 9) ||
     (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[4], uVar10 == 0)) {
    lVar6 = 0;
    cVar2 = DAT_00000004;
  }
  else {
    puVar1 = (uint *)((long)piVar9 + uVar10);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
    cVar2 = *(char *)(lVar6 + 4);
  }
  if (cVar2 != '\0') {
    pcVar8 = (char *)(lVar6 + 5);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar7[2]) +
                  (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[2]));
  puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  uVar3 = *puVar7;
  if (uVar3 < 9) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if ((ulong)puVar7[4] != 0) {
      puVar1 = (uint *)((long)piVar5 + (ulong)puVar7[4]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  iVar4 = atoi((char *)(lVar6 + 4));
  if (iVar4 == param_2) {
    if (uVar3 < 0xb) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if ((ulong)puVar7[5] != 0) {
        puVar1 = (uint *)((long)piVar5 + (ulong)puVar7[5]);
        lVar6 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    iVar4 = atoi((char *)(lVar6 + 4));
    if ((iVar4 < 0) || (iVar4 == param_3)) {
      if (uVar3 < 0xd) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if ((ulong)puVar7[6] != 0) {
          puVar1 = (uint *)((long)piVar5 + (ulong)puVar7[6]);
          lVar6 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      iVar4 = atoi((char *)(lVar6 + 4));
      return iVar4 == param_4;
    }
  }
  return false;
}


