/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851c58; name: FUN_00851c58
 */


void FUN_00851c58(long param_1)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 auStack_bf0 [8];
  undefined1 auStack_be8 [8];
  int local_be0 [4];
  uint local_bd0 [2];
  undefined *local_bc8;
  undefined2 local_bc0;
  undefined1 local_bbe;
  undefined8 local_bbc;
  undefined1 auStack_bb4 [1436];
  uint local_618 [360];
  uint local_78 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (((*(long *)(param_1 + 0x70) == 0) || (lVar5 = FUN_00847388(param_1), lVar5 == 0)) ||
     (uVar6 = FUN_0084bbb0(*(undefined8 *)(param_1 + 0x70)), (uVar6 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb0) = 0xffff;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xca) = 0;
    memset((void *)(param_1 + 0x94),0xff,0x18);
    return;
  }
  memset(local_618,0,4);
  if (*(char *)(param_1 + 0xcb) != '\0') {
    local_618[0] = local_618[0] | 1;
  }
  if (*(char *)(param_1 + 0xcc) != '\0') {
    local_618[0] = local_618[0] | 2;
  }
  if (*(char *)(param_1 + 0xcd) != '\0') {
    local_618[0] = local_618[0] | 4;
  }
  if (*(char *)(param_1 + 0xce) != '\0') {
    local_618[0] = local_618[0] | 8;
  }
  if (*(char *)(param_1 + 0xcf) != '\0') {
    local_618[0] = local_618[0] | 0x10;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    local_618[0] = local_618[0] | 0x20;
  }
  if (*(char *)(param_1 + 0xd1) != '\0') {
    local_618[0] = local_618[0] | 0x40;
  }
  if (*(char *)(param_1 + 0xd2) != '\0') {
    local_618[0] = local_618[0] | 0x80;
  }
  if (*(char *)(param_1 + 0xd3) != '\0') {
    local_618[0] = local_618[0] | 0x100;
  }
  if (*(char *)(param_1 + 0xd4) != '\0') {
    local_618[0] = local_618[0] | 0x200;
  }
  if (*(char *)(param_1 + 0xd5) != '\0') {
    local_618[0] = local_618[0] | 0x400;
  }
  if (*(char *)(param_1 + 0xd6) != '\0') {
    local_618[0] = local_618[0] | 0x800;
  }
  if (*(char *)(param_1 + 0xd7) != '\0') {
    local_618[0] = local_618[0] | 0x1000;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    local_618[0] = local_618[0] | 0x2000;
  }
  if (*(char *)(param_1 + 0xd9) != '\0') {
    local_618[0] = local_618[0] | 0x4000;
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    local_618[0] = local_618[0] | 0x8000;
  }
  if (*(char *)(param_1 + 0xdb) != '\0') {
    local_618[0] = local_618[0] | 0x10000;
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    local_618[0] = local_618[0] | 0x20000;
  }
  if (*(char *)(param_1 + 0xdd) != '\0') {
    local_618[0] = local_618[0] | 0x40000;
  }
  if (*(char *)(param_1 + 0xde) != '\0') {
    local_618[0] = local_618[0] | 0x80000;
  }
  if (*(char *)(param_1 + 0xdf) != '\0') {
    local_618[0] = local_618[0] | 0x100000;
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    local_618[0] = local_618[0] | 0x200000;
  }
  if (*(char *)(param_1 + 0xe1) != '\0') {
    local_618[0] = local_618[0] | 0x400000;
  }
  if (*(char *)(param_1 + 0xe2) != '\0') {
    local_618[0] = local_618[0] | 0x800000;
  }
  memcpy(auStack_68,local_618,4);
  FUN_00853b38(&local_bc8,param_1,auStack_68,3);
  if ((int)local_bc8 == 0) {
    *(undefined8 *)(param_1 + 0xcb) = 0;
    *(undefined8 *)(param_1 + 0xd3) = 0;
    *(undefined8 *)(param_1 + 0xdb) = 0;
  }
  memset(local_618,0,4);
  if (*(char *)(param_1 + 0xe3) != '\0') {
    local_618[0] = local_618[0] | 1;
  }
  if (*(char *)(param_1 + 0xe4) != '\0') {
    local_618[0] = local_618[0] | 2;
  }
  if (*(char *)(param_1 + 0xe5) != '\0') {
    local_618[0] = local_618[0] | 4;
  }
  if (*(char *)(param_1 + 0xe6) != '\0') {
    local_618[0] = local_618[0] | 8;
  }
  if (*(char *)(param_1 + 0xe7) != '\0') {
    local_618[0] = local_618[0] | 0x10;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    local_618[0] = local_618[0] | 0x20;
  }
  if (*(char *)(param_1 + 0xe9) != '\0') {
    local_618[0] = local_618[0] | 0x40;
  }
  if (*(char *)(param_1 + 0xea) != '\0') {
    local_618[0] = local_618[0] | 0x80;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    local_618[0] = local_618[0] | 0x100;
  }
  if (*(char *)(param_1 + 0xec) != '\0') {
    local_618[0] = local_618[0] | 0x200;
  }
  if (*(char *)(param_1 + 0xed) != '\0') {
    local_618[0] = local_618[0] | 0x400;
  }
  if (*(char *)(param_1 + 0xee) != '\0') {
    local_618[0] = local_618[0] | 0x800;
  }
  if (*(char *)(param_1 + 0xef) != '\0') {
    local_618[0] = local_618[0] | 0x1000;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    local_618[0] = local_618[0] | 0x2000;
  }
  if (*(char *)(param_1 + 0xf1) != '\0') {
    local_618[0] = local_618[0] | 0x4000;
  }
  if (*(char *)(param_1 + 0xf2) != '\0') {
    local_618[0] = local_618[0] | 0x8000;
  }
  if (*(char *)(param_1 + 0xf3) != '\0') {
    local_618[0] = local_618[0] | 0x10000;
  }
  if (*(char *)(param_1 + 0xf4) != '\0') {
    local_618[0] = local_618[0] | 0x20000;
  }
  if (*(char *)(param_1 + 0xf5) != '\0') {
    local_618[0] = local_618[0] | 0x40000;
  }
  if (*(char *)(param_1 + 0xf6) != '\0') {
    local_618[0] = local_618[0] | 0x80000;
  }
  if (*(char *)(param_1 + 0xf7) != '\0') {
    local_618[0] = local_618[0] | 0x100000;
  }
  if (*(char *)(param_1 + 0xf8) != '\0') {
    local_618[0] = local_618[0] | 0x200000;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    local_618[0] = local_618[0] | 0x400000;
  }
  if (*(char *)(param_1 + 0xfa) != '\0') {
    local_618[0] = local_618[0] | 0x800000;
  }
  memcpy(auStack_70,local_618,4);
  FUN_00853b38(&local_bc8,param_1,auStack_70,6);
  if ((int)local_bc8 == 0) {
    *(undefined8 *)(param_1 + 0xe3) = 0;
    *(undefined8 *)(param_1 + 0xeb) = 0;
    *(undefined8 *)(param_1 + 0xf3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 9) {
    local_bc0 = 0;
    local_bbe = 0;
    local_bc8 = PTR_DAT_04378080 + 0x10;
    local_bbc = 0;
    memset(auStack_bb4,0,0x595);
    local_bc0 = 0xff05;
    local_bbc = local_bbc & 0xffffffff;
    FUN_008533e8(local_be0,&local_bc8,local_618,local_78,0x5a0);
    FUN_0084e230(local_be0,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xc0),local_618
                 ,local_78[0],0);
    if (local_be0[0] != 0) {
      return;
    }
    uVar8 = 10;
    goto LAB_00852b44;
  }
  if (iVar2 == 8) {
    local_bc0 = 0;
    local_bbe = 0;
    local_bc8 = PTR_DAT_04378080 + 0x10;
    local_bbc = 0;
    memset(auStack_bb4,0,0x595);
    local_bc0 = 0xff04;
    local_bbc = local_bbc & 0xffffffff;
    FUN_008533e8(local_be0,&local_bc8,local_618,local_78,0x5a0);
    memset(local_bd0,0,4);
    cVar3 = *(char *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x94) == cVar3) {
      local_bd0[0] = local_bd0[0] | 1;
      if (*(char *)(param_1 + 0x95) == cVar3) goto LAB_008524f8;
LAB_008523c8:
      if (*(char *)(param_1 + 0x96) != cVar3) goto LAB_008523d4;
LAB_00852510:
      local_bd0[0] = local_bd0[0] | 4;
      if (*(char *)(param_1 + 0x97) == cVar3) goto LAB_00852528;
LAB_008523e0:
      if (*(char *)(param_1 + 0x98) != cVar3) goto LAB_008523ec;
LAB_00852540:
      local_bd0[0] = local_bd0[0] | 0x10;
      if (*(char *)(param_1 + 0x99) == cVar3) goto LAB_00852558;
LAB_008523f8:
      if (*(char *)(param_1 + 0x9a) != cVar3) goto LAB_00852404;
LAB_00852570:
      local_bd0[0] = local_bd0[0] | 0x40;
      if (*(char *)(param_1 + 0x9b) == cVar3) goto LAB_00852588;
LAB_00852410:
      if (*(char *)(param_1 + 0x9c) != cVar3) goto LAB_0085241c;
LAB_008525a0:
      local_bd0[0] = local_bd0[0] | 0x100;
      if (*(char *)(param_1 + 0x9d) == cVar3) goto LAB_008525b8;
LAB_00852428:
      if (*(char *)(param_1 + 0x9e) != cVar3) goto LAB_00852434;
LAB_008525d0:
      local_bd0[0] = local_bd0[0] | 0x400;
      if (*(char *)(param_1 + 0x9f) == cVar3) goto LAB_008525e8;
LAB_00852440:
      if (*(char *)(param_1 + 0xa0) != cVar3) goto LAB_0085244c;
LAB_00852600:
      local_bd0[0] = local_bd0[0] | 0x1000;
      if (*(char *)(param_1 + 0xa1) == cVar3) goto LAB_00852618;
LAB_00852458:
      if (*(char *)(param_1 + 0xa2) != cVar3) goto LAB_00852464;
LAB_00852630:
      local_bd0[0] = local_bd0[0] | 0x4000;
      if (*(char *)(param_1 + 0xa3) == cVar3) goto LAB_00852648;
LAB_00852470:
      if (*(char *)(param_1 + 0xa4) != cVar3) goto LAB_0085247c;
LAB_00852660:
      local_bd0[0] = local_bd0[0] | 0x10000;
      if (*(char *)(param_1 + 0xa5) == cVar3) goto LAB_00852678;
LAB_00852488:
      if (*(char *)(param_1 + 0xa6) != cVar3) goto LAB_00852494;
LAB_00852690:
      local_bd0[0] = local_bd0[0] | 0x40000;
      if (*(char *)(param_1 + 0xa7) == cVar3) goto LAB_008526a8;
LAB_008524a0:
      if (*(char *)(param_1 + 0xa8) != cVar3) goto LAB_008524ac;
LAB_008526c0:
      local_bd0[0] = local_bd0[0] | 0x100000;
      if (*(char *)(param_1 + 0xa9) == cVar3) goto LAB_008526d8;
LAB_008524b8:
      if (*(char *)(param_1 + 0xaa) != cVar3) goto LAB_008524c4;
LAB_008526f0:
      local_bd0[0] = local_bd0[0] | 0x400000;
      if (*(char *)(param_1 + 0xab) != cVar3) goto LAB_0085270c;
LAB_008524d4:
      local_bd0[0] = local_bd0[0] | 0x800000;
LAB_00852710:
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      memcpy(auStack_bf0,local_bd0,4);
      FUN_0084de14(local_be0,uVar10,auStack_bf0,local_618,local_78[0],0);
      if (local_be0[0] != 0) {
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0x95) != cVar3) goto LAB_008523c8;
LAB_008524f8:
      local_bd0[0] = local_bd0[0] | 2;
      if (*(char *)(param_1 + 0x96) == cVar3) goto LAB_00852510;
LAB_008523d4:
      if (*(char *)(param_1 + 0x97) != cVar3) goto LAB_008523e0;
LAB_00852528:
      local_bd0[0] = local_bd0[0] | 8;
      if (*(char *)(param_1 + 0x98) == cVar3) goto LAB_00852540;
LAB_008523ec:
      if (*(char *)(param_1 + 0x99) != cVar3) goto LAB_008523f8;
LAB_00852558:
      local_bd0[0] = local_bd0[0] | 0x20;
      if (*(char *)(param_1 + 0x9a) == cVar3) goto LAB_00852570;
LAB_00852404:
      if (*(char *)(param_1 + 0x9b) != cVar3) goto LAB_00852410;
LAB_00852588:
      local_bd0[0] = local_bd0[0] | 0x80;
      if (*(char *)(param_1 + 0x9c) == cVar3) goto LAB_008525a0;
LAB_0085241c:
      if (*(char *)(param_1 + 0x9d) != cVar3) goto LAB_00852428;
LAB_008525b8:
      local_bd0[0] = local_bd0[0] | 0x200;
      if (*(char *)(param_1 + 0x9e) == cVar3) goto LAB_008525d0;
LAB_00852434:
      if (*(char *)(param_1 + 0x9f) != cVar3) goto LAB_00852440;
LAB_008525e8:
      local_bd0[0] = local_bd0[0] | 0x800;
      if (*(char *)(param_1 + 0xa0) == cVar3) goto LAB_00852600;
LAB_0085244c:
      if (*(char *)(param_1 + 0xa1) != cVar3) goto LAB_00852458;
LAB_00852618:
      local_bd0[0] = local_bd0[0] | 0x2000;
      if (*(char *)(param_1 + 0xa2) == cVar3) goto LAB_00852630;
LAB_00852464:
      if (*(char *)(param_1 + 0xa3) != cVar3) goto LAB_00852470;
LAB_00852648:
      local_bd0[0] = local_bd0[0] | 0x8000;
      if (*(char *)(param_1 + 0xa4) == cVar3) goto LAB_00852660;
LAB_0085247c:
      if (*(char *)(param_1 + 0xa5) != cVar3) goto LAB_00852488;
LAB_00852678:
      local_bd0[0] = local_bd0[0] | 0x20000;
      if (*(char *)(param_1 + 0xa6) == cVar3) goto LAB_00852690;
LAB_00852494:
      if (*(char *)(param_1 + 0xa7) != cVar3) goto LAB_008524a0;
LAB_008526a8:
      local_bd0[0] = local_bd0[0] | 0x80000;
      if (*(char *)(param_1 + 0xa8) == cVar3) goto LAB_008526c0;
LAB_008524ac:
      if (*(char *)(param_1 + 0xa9) != cVar3) goto LAB_008524b8;
LAB_008526d8:
      local_bd0[0] = local_bd0[0] | 0x200000;
      if (*(char *)(param_1 + 0xaa) == cVar3) goto LAB_008526f0;
LAB_008524c4:
      if (*(char *)(param_1 + 0xab) == cVar3) goto LAB_008524d4;
LAB_0085270c:
      if (local_bd0[0] != 0) goto LAB_00852710;
    }
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb0) = 0xffff;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xca) = 0;
    memset((char *)(param_1 + 0x94),0xff,0x18);
    uVar8 = 0xb;
    goto LAB_00852b44;
  }
  if (iVar2 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  memset(local_78,0,4);
  cVar3 = *(char *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0x94) == cVar3) {
    local_78[0] = local_78[0] | 1;
    if (*(char *)(param_1 + 0x95) == cVar3) goto LAB_008527a4;
LAB_00852144:
    if (*(char *)(param_1 + 0x96) != cVar3) goto LAB_00852150;
LAB_008527bc:
    local_78[0] = local_78[0] | 4;
    if (*(char *)(param_1 + 0x97) == cVar3) goto LAB_008527d4;
LAB_0085215c:
    if (*(char *)(param_1 + 0x98) != cVar3) goto LAB_00852168;
LAB_008527ec:
    local_78[0] = local_78[0] | 0x10;
    if (*(char *)(param_1 + 0x99) == cVar3) goto LAB_00852804;
LAB_00852174:
    if (*(char *)(param_1 + 0x9a) != cVar3) goto LAB_00852180;
LAB_0085281c:
    local_78[0] = local_78[0] | 0x40;
    if (*(char *)(param_1 + 0x9b) == cVar3) goto LAB_00852834;
LAB_0085218c:
    if (*(char *)(param_1 + 0x9c) != cVar3) goto LAB_00852198;
LAB_0085284c:
    local_78[0] = local_78[0] | 0x100;
    if (*(char *)(param_1 + 0x9d) == cVar3) goto LAB_00852864;
LAB_008521a4:
    if (*(char *)(param_1 + 0x9e) != cVar3) goto LAB_008521b0;
LAB_0085287c:
    local_78[0] = local_78[0] | 0x400;
    if (*(char *)(param_1 + 0x9f) == cVar3) goto LAB_00852894;
LAB_008521bc:
    if (*(char *)(param_1 + 0xa0) != cVar3) goto LAB_008521c8;
LAB_008528ac:
    local_78[0] = local_78[0] | 0x1000;
    if (*(char *)(param_1 + 0xa1) == cVar3) goto LAB_008528c4;
LAB_008521d4:
    if (*(char *)(param_1 + 0xa2) != cVar3) goto LAB_008521e0;
LAB_008528dc:
    local_78[0] = local_78[0] | 0x4000;
    if (*(char *)(param_1 + 0xa3) == cVar3) goto LAB_008528f4;
LAB_008521ec:
    if (*(char *)(param_1 + 0xa4) != cVar3) goto LAB_008521f8;
LAB_0085290c:
    local_78[0] = local_78[0] | 0x10000;
    if (*(char *)(param_1 + 0xa5) == cVar3) goto LAB_00852924;
LAB_00852204:
    if (*(char *)(param_1 + 0xa6) != cVar3) goto LAB_00852210;
LAB_0085293c:
    local_78[0] = local_78[0] | 0x40000;
    if (*(char *)(param_1 + 0xa7) == cVar3) goto LAB_00852954;
LAB_0085221c:
    if (*(char *)(param_1 + 0xa8) != cVar3) goto LAB_00852228;
LAB_0085296c:
    local_78[0] = local_78[0] | 0x100000;
    if (*(char *)(param_1 + 0xa9) == cVar3) goto LAB_00852984;
LAB_00852234:
    if (*(char *)(param_1 + 0xaa) != cVar3) goto LAB_00852240;
LAB_0085299c:
    local_78[0] = local_78[0] | 0x400000;
    if (*(char *)(param_1 + 0xab) != cVar3) goto LAB_008529b8;
LAB_00852250:
    local_78[0] = local_78[0] | 0x800000;
    uVar7 = *(uint *)(param_1 + 0xb4);
    uVar9 = *(uint *)(param_1 + 0x90);
    if (uVar7 < uVar9) {
LAB_008529cc:
      puVar1 = PTR_DAT_04378080 + 0x10;
      do {
        uVar4 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x4e0) - 0xb;
        if (uVar9 - uVar7 <= uVar4) {
          uVar4 = uVar9 - uVar7;
        }
        uVar6 = FUN_0084e640(*(long *)(param_1 + 0x70),uVar4);
        if ((uVar6 & 1) == 0) {
          return;
        }
        uVar11 = 0;
        if (*(uint *)(param_1 + 0x90) != 0) {
          uVar11 = (undefined1)
                   (((*(int *)(param_1 + 0xb4) + uVar4) * 100) / *(uint *)(param_1 + 0x90));
        }
        *(undefined1 *)(param_1 + 0xca) = uVar11;
        local_bc0 = 0;
        local_bbe = 0;
        local_bbc = 0;
        local_bc8 = puVar1;
        memset(auStack_bb4,0,0x595);
        uVar11 = 1;
        if ((ulong)*(uint *)(param_1 + 0xb4) != 0) {
          uVar11 = 2;
        }
        local_bc0 = CONCAT11(*(undefined1 *)(param_1 + 0xb0),uVar11);
        local_bbc = CONCAT44(uVar4,(undefined4)local_bbc);
        local_bbe = *(undefined1 *)(param_1 + 0xca);
        memcpy(auStack_bb4,(void *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0xb4)),
               (ulong)uVar4);
        FUN_008533e8(local_be0,&local_bc8,local_618,local_bd0,0x5a0);
        uVar10 = *(undefined8 *)(param_1 + 0x70);
        memcpy(auStack_be8,local_78,4);
        FUN_0084de14(local_be0,uVar10,auStack_be8,local_618,local_bd0[0],param_1 + 200);
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + uVar4;
        FUN_007f1af0(param_1 + 8,*(undefined2 *)(*(long *)(param_1 + 0x70) + 0x32));
        uVar7 = *(uint *)(param_1 + 0xb4);
        uVar9 = *(uint *)(param_1 + 0x90);
      } while (uVar7 < uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x95) != cVar3) goto LAB_00852144;
LAB_008527a4:
    local_78[0] = local_78[0] | 2;
    if (*(char *)(param_1 + 0x96) == cVar3) goto LAB_008527bc;
LAB_00852150:
    if (*(char *)(param_1 + 0x97) != cVar3) goto LAB_0085215c;
LAB_008527d4:
    local_78[0] = local_78[0] | 8;
    if (*(char *)(param_1 + 0x98) == cVar3) goto LAB_008527ec;
LAB_00852168:
    if (*(char *)(param_1 + 0x99) != cVar3) goto LAB_00852174;
LAB_00852804:
    local_78[0] = local_78[0] | 0x20;
    if (*(char *)(param_1 + 0x9a) == cVar3) goto LAB_0085281c;
LAB_00852180:
    if (*(char *)(param_1 + 0x9b) != cVar3) goto LAB_0085218c;
LAB_00852834:
    local_78[0] = local_78[0] | 0x80;
    if (*(char *)(param_1 + 0x9c) == cVar3) goto LAB_0085284c;
LAB_00852198:
    if (*(char *)(param_1 + 0x9d) != cVar3) goto LAB_008521a4;
LAB_00852864:
    local_78[0] = local_78[0] | 0x200;
    if (*(char *)(param_1 + 0x9e) == cVar3) goto LAB_0085287c;
LAB_008521b0:
    if (*(char *)(param_1 + 0x9f) != cVar3) goto LAB_008521bc;
LAB_00852894:
    local_78[0] = local_78[0] | 0x800;
    if (*(char *)(param_1 + 0xa0) == cVar3) goto LAB_008528ac;
LAB_008521c8:
    if (*(char *)(param_1 + 0xa1) != cVar3) goto LAB_008521d4;
LAB_008528c4:
    local_78[0] = local_78[0] | 0x2000;
    if (*(char *)(param_1 + 0xa2) == cVar3) goto LAB_008528dc;
LAB_008521e0:
    if (*(char *)(param_1 + 0xa3) != cVar3) goto LAB_008521ec;
LAB_008528f4:
    local_78[0] = local_78[0] | 0x8000;
    if (*(char *)(param_1 + 0xa4) == cVar3) goto LAB_0085290c;
LAB_008521f8:
    if (*(char *)(param_1 + 0xa5) != cVar3) goto LAB_00852204;
LAB_00852924:
    local_78[0] = local_78[0] | 0x20000;
    if (*(char *)(param_1 + 0xa6) == cVar3) goto LAB_0085293c;
LAB_00852210:
    if (*(char *)(param_1 + 0xa7) != cVar3) goto LAB_0085221c;
LAB_00852954:
    local_78[0] = local_78[0] | 0x80000;
    if (*(char *)(param_1 + 0xa8) == cVar3) goto LAB_0085296c;
LAB_00852228:
    if (*(char *)(param_1 + 0xa9) != cVar3) goto LAB_00852234;
LAB_00852984:
    local_78[0] = local_78[0] | 0x200000;
    if (*(char *)(param_1 + 0xaa) == cVar3) goto LAB_0085299c;
LAB_00852240:
    if (*(char *)(param_1 + 0xab) == cVar3) goto LAB_00852250;
LAB_008529b8:
    if (local_78[0] == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb0) = 0xffff;
      *(undefined8 *)(param_1 + 0xb4) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xca) = 0;
      memset((char *)(param_1 + 0x94),0xff,0x18);
      uVar8 = 0xc;
      goto LAB_00852b44;
    }
    uVar7 = *(uint *)(param_1 + 0xb4);
    uVar9 = *(uint *)(param_1 + 0x90);
    if (uVar7 < uVar9) goto LAB_008529cc;
  }
  uVar8 = 2;
LAB_00852b44:
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  return;
}


