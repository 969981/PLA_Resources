/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070b27c; name: FUN_0070b27c
 */


void FUN_0070b27c(long *param_1,byte *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  addrinfo *paVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  addrinfo *paVar16;
  uint *puVar17;
  ulong uVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long local_1428;
  undefined8 uStack_1420;
  long local_1418;
  undefined8 uStack_1410;
  uint local_1408;
  uint local_1404 [623];
  undefined8 local_a48;
  undefined8 uStack_a40;
  addrinfo *local_a38;
  void *local_a30;
  void *local_a28;
  void *pvStack_a20;
  long *local_a18;
  
  local_a38 = (addrinfo *)0x0;
  local_1428 = *(long *)PTR_DAT_04376258;
  uStack_1420 = *(undefined8 *)PTR_DAT_04376260;
  local_1418 = local_1428 * 1000000;
  uStack_1410 = 0x4000000000000000;
  FUN_00617a0c(&local_a30);
  local_1408 = FUN_00617a90(&local_a30);
  lVar10 = -0x26e;
  iVar14 = 1;
  puVar17 = local_1404 + 1;
  uVar15 = local_1408;
  while( true ) {
    iVar7 = (int)lVar10;
    uVar15 = iVar7 + (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 0x26f;
    puVar17[-1] = uVar15;
    if (lVar10 == 0) break;
    iVar1 = iVar14 + 1;
    iVar14 = iVar14 + 2;
    iVar5 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965;
    lVar10 = lVar10 + 2;
    uVar15 = iVar5 + iVar1;
    *puVar17 = iVar7 + iVar5 + 0x270;
    puVar17 = puVar17 + 2;
  }
  uStack_a40 = 0;
  local_a48 = 0;
  iVar14 = 2;
  while( true ) {
    pbVar3 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar3 = *(byte **)(param_2 + 0x10);
    }
    pbVar4 = param_2 + 0x21;
    if ((param_2[0x20] & 1) != 0) {
      pbVar4 = *(byte **)(param_2 + 0x30);
    }
    iVar7 = nn::socket::GetAddrInfo
                      ((char *)pbVar3,(char *)pbVar4,(addrinfo *)(param_2 + 0x40),&local_a38);
    *param_3 = iVar7;
    if (iVar7 != 2 && iVar7 != 0xb) break;
    if (iVar14 == 0) goto LAB_0070b56c;
    lVar10 = FUN_006190c8(&local_1428);
    if (0 < lVar10) {
      local_a30 = (void *)(lVar10 * 1000000);
      if (0x10c6f7a0b327 < lVar10) {
        local_a30 = (void *)0x7fffffffffffffff;
      }
                    /* try { // try from 0070b3dc to 0070b3e3 has its CatchHandler @ 0070b60c */
      std::this_thread::sleep_for((duration *)&local_a30);
    }
    iVar14 = iVar14 + -1;
  }
  if (iVar7 == 0) {
    pvStack_a20 = (void *)0x0;
    local_a28 = (void *)0x0;
    local_a30 = (void *)0x0;
    local_a18 = (long *)FUN_00612290();
    if (local_a38 == (addrinfo *)0x0) {
      paVar9 = (addrinfo *)0x0;
LAB_0070b58c:
      nn::socket::FreeAddrInfo(paVar9);
      param_1[3] = (long)local_a18;
      *param_1 = (long)local_a30;
      param_1[2] = (long)pvStack_a20;
      param_1[1] = (long)local_a28;
      return;
    }
    pvVar11 = (void *)0x0;
    pvVar8 = (void *)0x0;
    paVar16 = local_a38;
    goto LAB_0070b470;
  }
LAB_0070b56c:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar10 = FUN_00612290();
  param_1[3] = lVar10;
  return;
LAB_0070b470:
  lVar10 = (long)pvVar8 - (long)local_a30 >> 2;
  uVar2 = lVar10 * 0x6db6db6db6db6db7 + 1;
  if (0x924924924924924 < uVar2) {
                    /* try { // try from 0070b5d0 to 0070b5d7 has its CatchHandler @ 0070b5d8 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = (long)pvVar11 - (long)local_a30 >> 2;
  uVar18 = 0x924924924924924;
  if ((ulong)(lVar12 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar13 = lVar12 * -0x2492492492492492;
    uVar18 = uVar2;
    if (uVar2 <= uVar13) {
      uVar18 = uVar13;
    }
    if (uVar18 != 0) goto LAB_0070b4b4;
    lVar12 = 0;
  }
  else {
LAB_0070b4b4:
    lVar12 = (**(code **)(*local_a18 + 0x10))(local_a18,uVar18 * 0x1c,4);
  }
  pvVar11 = (void *)(lVar12 + lVar10 * 4);
  pvVar19 = (void *)(lVar12 + uVar18 * 0x1c);
  memcpy(pvVar11,*(void **)(paVar16 + 0x20),(ulong)*(uint *)(paVar16 + 0x10));
  pvVar6 = local_a30;
  pvVar8 = (void *)((long)pvVar11 + 0x1c);
  for (; local_a28 != local_a30; local_a28 = (void *)((long)local_a28 + -0x1c)) {
    uVar21 = *(undefined8 *)((long)local_a28 + -0x14);
    uVar20 = *(undefined8 *)((long)local_a28 + -0x1c);
    uVar22 = *(undefined8 *)((long)local_a28 + -0x10);
    *(undefined8 *)((long)pvVar11 + -8) = *(undefined8 *)((long)local_a28 + -8);
    *(undefined8 *)((long)pvVar11 + -0x10) = uVar22;
    *(undefined8 *)((long)pvVar11 + -0x14) = uVar21;
    *(undefined8 *)((long)pvVar11 + -0x1c) = uVar20;
    pvVar11 = (void *)((long)pvVar11 + -0x1c);
  }
  local_a28 = pvVar8;
  if (local_a30 != (void *)0x0) {
    lVar10 = (long)pvStack_a20 - (long)local_a30;
    local_a30 = pvVar11;
    pvStack_a20 = pvVar19;
    (**(code **)(*local_a18 + 0x18))(local_a18,pvVar6,lVar10,4);
    pvVar11 = local_a30;
    pvVar19 = pvStack_a20;
  }
  pvStack_a20 = pvVar19;
  local_a30 = pvVar11;
  paVar16 = *(addrinfo **)(paVar16 + 0x28);
  paVar9 = local_a38;
  pvVar8 = local_a28;
  pvVar11 = pvStack_a20;
  while( true ) {
    local_a38 = paVar9;
    local_a28 = pvVar8;
    pvStack_a20 = pvVar11;
    if (paVar16 == (addrinfo *)0x0) goto LAB_0070b58c;
    if (pvVar11 <= pvVar8) break;
    memcpy(pvVar8,*(void **)(paVar16 + 0x20),(ulong)*(uint *)(paVar16 + 0x10));
    pvVar8 = (void *)((long)local_a28 + 0x1c);
    paVar16 = *(addrinfo **)(paVar16 + 0x28);
    paVar9 = local_a38;
    pvVar11 = pvStack_a20;
  }
  goto LAB_0070b470;
}


