/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309ced0; name: FUN_0309ced0
 */


void FUN_0309ced0(ushort *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  uint *puVar12;
  ushort *puVar13;
  ushort *local_410 [64];
  ushort *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (long)(param_2 + -1) * 6;
  lVar10 = 0;
  local_210[0] = param_1;
LAB_0309cf08:
  lVar10 = (long)(int)lVar10;
LAB_0309cf1c:
  puVar11 = local_410[0];
LAB_0309cf20:
  local_410[0] = puVar11;
  puVar12 = (uint *)(param_1 +
                    (((long)local_410[0] - (long)param_1 >> 2) * -0x5555555555555555 >> 1) * 6);
  uVar4 = puVar12[2];
  uVar2 = *puVar12;
  uVar3 = puVar12[1];
  puVar11 = local_410[0];
  puVar13 = param_1;
LAB_0309cf58:
  while( true ) {
    bVar7 = uVar2 >> 0x10 <= (uint)puVar13[1];
    if ((((uint)puVar13[1] == uVar2 >> 0x10) &&
        (bVar7 = (uVar2 & 0xffff) <= (uint)*puVar13, (uint)*puVar13 == (uVar2 & 0xffff))) &&
       (bVar7 = uVar4 <= *(uint *)(puVar13 + 4), *(uint *)(puVar13 + 4) == uVar4)) {
      bVar7 = uVar3 <= *(uint *)(puVar13 + 2);
    }
    if (bVar7) break;
    puVar13 = puVar13 + 6;
  }
  do {
    bVar8 = uVar2 >> 0x10 <= (uint)puVar11[1];
    bVar7 = (uint)puVar11[1] == uVar2 >> 0x10;
    if (bVar7) {
      bVar8 = (uVar2 & 0xffff) <= (uint)*puVar11;
      bVar7 = (uint)*puVar11 == (uVar2 & 0xffff);
      if (!bVar7) goto LAB_0309cf90;
      bVar7 = *(uint *)(puVar11 + 4) <= uVar4;
      if (uVar4 == *(uint *)(puVar11 + 4)) {
        bVar7 = *(uint *)(puVar11 + 2) <= uVar3;
      }
      if (bVar7) break;
    }
    else {
LAB_0309cf90:
      if (!bVar8 || bVar7) break;
    }
    puVar11 = puVar11 + -6;
  } while( true );
  if (puVar13 <= puVar11) {
    if (puVar13 != puVar11) {
      uVar9 = *(undefined8 *)puVar11;
      *(undefined4 *)puVar11 = *(undefined4 *)puVar13;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar13 + 2);
      uVar5 = *(undefined4 *)(puVar11 + 4);
      *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar13 + 4);
      *(undefined8 *)puVar13 = uVar9;
      *(undefined4 *)(puVar13 + 4) = uVar5;
    }
    puVar11 = puVar11 + -6;
    puVar13 = puVar13 + 6;
  }
  if (puVar11 < puVar13) goto LAB_0309d004;
  goto LAB_0309cf58;
LAB_0309d004:
  if (puVar11 <= param_1) {
    param_1 = puVar13;
    if (puVar13 < local_410[0]) goto LAB_0309cf1c;
    if ((int)lVar10 < 1) {
      return;
    }
    lVar10 = (long)(int)lVar10 + -1;
    param_1 = local_210[lVar10];
    local_410[0] = local_410[lVar10];
    goto LAB_0309cf08;
  }
  if (puVar13 < local_410[0]) goto code_r0x0309d014;
  goto LAB_0309cf20;
code_r0x0309d014:
  puVar1 = puVar11;
  puVar6 = param_1;
  if (((long)local_410[0] - (long)puVar13 >> 2) * -0x5555555555555555 <=
      ((long)puVar11 - (long)param_1 >> 2) * -0x5555555555555555) {
    puVar1 = local_410[0];
    puVar6 = puVar13;
    local_410[0] = puVar11;
    puVar13 = param_1;
  }
  local_210[lVar10] = puVar13;
  local_410[lVar10] = local_410[0];
  param_1 = puVar6;
  local_410[0] = puVar1;
  lVar10 = lVar10 + 1;
  goto LAB_0309cf1c;
}


