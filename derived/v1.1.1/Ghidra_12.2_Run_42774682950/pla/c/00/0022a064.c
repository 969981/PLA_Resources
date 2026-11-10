/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022a064; name: FUN_0022a064
 */


void FUN_0022a064(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ushort uVar15;
  long local_a8 [9];
  
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar13 = param_3[1];
  if ((ulong)*(ushort *)(lVar13 + 0xe) != 0) {
    uVar9 = 0;
    puVar1 = (uint *)(lVar13 + (ulong)*(uint *)(lVar13 + 0x10));
    lVar14 = lVar13 + (ulong)*puVar1;
    cVar6 = *(char *)(lVar14 + 0x1d);
    while( true ) {
      if (cVar6 == '\0') {
        uVar10 = 0;
        while (*(char *)(lVar14 + uVar10) == *(char *)((long)param_2 + uVar10 + 0xb0)) {
          if ((*(char *)(lVar14 + uVar10) == '\0') || (uVar10 = uVar10 + 1, 0x1b < uVar10))
          goto LAB_0022a128;
        }
      }
      uVar9 = uVar9 + 1;
      if (uVar9 == *(ushort *)(lVar13 + 0xe)) break;
      lVar14 = lVar13 + (ulong)puVar1[uVar9];
      cVar6 = *(char *)(lVar14 + 0x1d);
    }
  }
  lVar14 = 0;
LAB_0022a128:
  uVar15 = (ushort)(lVar14 != 0);
  bVar7 = (**(code **)(*param_2 + 0x50))(param_2);
  if (bVar7 != 0) {
    uVar9 = 0;
    do {
      lVar8 = (**(code **)(*param_2 + 0x58))(param_2,uVar9 & 0xffffffff);
      if ((ulong)*(ushort *)(lVar13 + 0xe) != 0) {
        uVar10 = 0;
        do {
          lVar11 = lVar13 + (ulong)*(uint *)(lVar13 + (ulong)*(uint *)(lVar13 + 0x10) + uVar10 * 4);
          if (*(char *)(lVar11 + 0x1d) == '\x01') {
            uVar12 = 0;
            while (*(char *)(lVar11 + uVar12) == *(char *)(*(long *)(lVar8 + 0x28) + uVar12)) {
              if ((*(char *)(lVar11 + uVar12) == '\0') || (uVar12 = uVar12 + 1, 0x1b < uVar12))
              goto LAB_0022a160;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != *(ushort *)(lVar13 + 0xe));
      }
      lVar11 = 0;
LAB_0022a160:
      local_a8[uVar9] = lVar11;
      uVar9 = uVar9 + 1;
      if (lVar11 != 0) {
        uVar15 = uVar15 + 1;
      }
    } while (uVar9 != bVar7);
  }
  if (uVar15 != 0) {
    uVar2 = *param_3;
    uVar4 = param_3[1];
    uVar3 = param_3[2];
    uVar5 = param_3[3];
    param_1[4] = lVar14;
    param_1[2] = uVar3;
    param_1[3] = uVar5;
    *(byte *)((long)param_1 + 0x72) = bVar7;
    *param_1 = uVar2;
    param_1[1] = uVar4;
    if (bVar7 != 0) {
      memcpy(param_1 + 5,local_a8,(ulong)bVar7 << 3);
    }
    *(ushort *)(param_1 + 0xe) = uVar15;
  }
  return;
}


