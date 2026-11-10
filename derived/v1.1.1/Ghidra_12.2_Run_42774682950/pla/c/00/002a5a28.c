/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a5a28; name: FUN_002a5a28
 */


void FUN_002a5a28(undefined4 *param_1,uint *param_2)

{
  long *plVar1;
  undefined *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  ostream *poVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 uVar10;
  long lVar11;
  void *__dest;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  size_t *local_1e0;
  size_t local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined *puStack_1b0;
  undefined *local_1a8 [8];
  ulong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long *local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined *local_138 [17];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  ulong uStack_90;
  long *local_88;
  size_t *local_80;
  size_t local_78;
  void *pvStack_70;
  long *plStack_68;
  
  puVar5 = PTR_DAT_043732f0;
  uVar4 = *param_2;
  if (0x10 < uVar4) {
LAB_002a5c3c:
    local_138[0] = PTR_DAT_043732f8 + 0x40;
    local_1c0 = (undefined8 *)(PTR_DAT_043732f8 + 0x18);
    puVar2 = PTR_DAT_043732f0 + 0x40;
    local_1b8 = 0;
    puStack_1b0 = puVar2;
                    /* try { // try from 002a5c70 to 002a5c7b has its CatchHandler @ 002a5ee8 */
    std::ios_base::init((ios *)local_138);
    local_a8 = 0xffffffff;
    local_1c0 = (undefined8 *)(puVar5 + 0x18);
    local_138[0] = puVar5 + 0x68;
    local_b0 = 0;
    puStack_1b0 = puVar2;
                    /* try { // try from 002a5c9c to 002a5ca3 has its CatchHandler @ 002a5ee0 */
    std::streambuf::streambuf((streambuf *)local_1a8);
    puVar2 = PTR_DAT_04373300;
    local_158 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_1a8[0] = PTR_DAT_04373300 + 0x10;
    local_150 = (long *)FUN_00612290();
    uStack_148 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    local_140 = 0x18;
    uVar12 = (ulong)(byte)((byte)param_2[2] >> 1);
    pcVar8 = (char *)((long)param_2 + 9);
    if (((byte)param_2[2] & 1) != 0) {
      uVar12 = *(ulong *)(param_2 + 4);
      pcVar8 = *(char **)(param_2 + 6);
    }
                    /* try { // try from 002a5cf8 to 002a5d3f has its CatchHandler @ 002a5f0c */
    poVar7 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)&puStack_1b0,pcVar8,uVar12);
    poVar7 = std::__put_character_sequence<char,std::char_traits<char>>
                       (poVar7," (Auth RPC result, original status code: ",0x29);
    pcVar8 = (char *)FUN_00615da0(*param_2);
    sVar9 = strlen(pcVar8);
    poVar7 = std::__put_character_sequence<char,std::char_traits<char>>(poVar7,pcVar8,sVar9);
    std::__put_character_sequence<char,std::char_traits<char>>(poVar7,")",1);
                    /* try { // try from 002a5d40 to 002a5d4f has its CatchHandler @ 002a5edc */
    FUN_002a82f0(&local_a0,(streambuf *)local_1a8);
    uVar12 = (ulong)&local_a0 | 1;
    if (((ulong)local_a0 & 1) != 0) {
      uVar12 = uStack_90;
    }
    local_78 = 0;
    pvStack_70 = (void *)FUN_00612290();
    plStack_68 = (long *)0x0;
    local_80 = &local_78;
    if ((char)param_2[10] == '\0') {
      sVar9 = 0;
      local_1e0 = &local_1d8;
      local_1c8 = 0;
      local_1d8 = local_78;
      uStack_1d0 = pvStack_70;
    }
    else {
                    /* try { // try from 002a5d88 to 002a5d8f has its CatchHandler @ 002a5ea4 */
      FUN_002a751c(&local_1e0,param_2 + 0xc);
      sVar9 = local_78;
    }
    FUN_02767254(&local_80,sVar9);
    FUN_002a3b60(param_1,0x10,uVar12,&local_1e0);
    FUN_02767254(&local_1e0,local_1d8);
    if (((ulong)local_a0 & 1) != 0) {
      (**(code **)(*local_88 + 0x18))(local_88,uStack_90,(ulong)local_a0 & 0xfffffffffffffffe,1);
    }
    local_1c0 = (undefined8 *)(puVar5 + 0x18);
    puStack_1b0 = puVar5 + 0x40;
    local_138[0] = puVar5 + 0x68;
    local_1a8[0] = puVar2 + 0x10;
    if ((local_168 & 1) != 0) {
      (**(code **)(*local_150 + 0x18))(local_150,local_158,local_168 & 0xfffffffffffffffe,1);
    }
    std::streambuf::~streambuf((streambuf *)local_1a8);
    std::iostream::~iostream((iostream *)&local_1c0);
    std::ios::~ios((ios *)local_138);
    return;
  }
  if ((1 << (ulong)(uVar4 & 0x1f) & 0x16014U) == 0) {
    if (uVar4 == 0) {
      *param_1 = 0;
      uVar13 = *(undefined8 *)(param_2 + 4);
      uVar10 = *(undefined8 *)(param_2 + 2);
      uVar14 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 6) = uVar14;
      *(undefined8 *)(param_1 + 4) = uVar13;
      *(undefined8 *)(param_1 + 2) = uVar10;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      if ((char)param_2[10] == '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar10 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar10;
      lVar11 = *(long *)(param_2 + 0x12);
      plVar1 = (long *)(param_1 + 0xe);
      *(long *)(param_1 + 0x12) = lVar11;
      if (lVar11 == 0) {
        *(long **)(param_1 + 0xc) = plVar1;
      }
      else {
        *(long **)(*plVar1 + 0x10) = plVar1;
        *(uint **)(param_2 + 0xc) = param_2 + 0xe;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
      }
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    goto LAB_002a5c3c;
  }
  plStack_68 = *(long **)(param_2 + 8);
  local_80 = (size_t *)0x0;
  local_78 = 0;
  pvStack_70 = (void *)0x0;
  bVar6 = ((byte)param_2[2] & 1) != 0;
  sVar9 = (ulong)(byte)((byte)param_2[2] >> 1);
  if (bVar6) {
    sVar9 = *(size_t *)(param_2 + 4);
  }
  pvVar3 = (void *)((long)param_2 + 9);
  if (bVar6) {
    pvVar3 = *(void **)(param_2 + 6);
  }
  if (0xffffffffffffffef < sVar9 + 0x12) {
                    /* try { // try from 002a5e9c to 002a5ea3 has its CatchHandler @ 002a5f80 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 + 0x12 < 0x17) {
    local_80 = (size_t *)(ulong)(byte)((int)sVar9 << 1);
    __dest = (void *)((ulong)&local_80 | 1);
    if (sVar9 == 0) goto LAB_002a5b04;
  }
  else {
    uVar12 = sVar9 + 0x22 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plStack_68 + 0x10))(plStack_68,uVar12,1);
    local_80 = (size_t *)(uVar12 | 1);
    local_78 = sVar9;
    pvStack_70 = __dest;
  }
  memcpy(__dest,pvVar3,sVar9);
LAB_002a5b04:
  *(undefined1 *)((long)__dest + sVar9) = 0;
                    /* try { // try from 002a5b08 to 002a5b1f has its CatchHandler @ 002a5f80 */
  FUN_002a45d4(&local_80," (Auth RPC result)",0x12);
  pvVar3 = (void *)((ulong)&local_80 | 1);
  if (((ulong)local_80 & 1) != 0) {
    pvVar3 = pvStack_70;
  }
  local_1b8 = 0;
  puStack_1b0 = (undefined *)FUN_00612290();
  local_1a8[0] = (undefined *)0x0;
  local_1c0 = &local_1b8;
  if ((char)param_2[10] == '\0') {
    uVar10 = 0;
    local_a0 = &local_98;
    local_98 = local_1b8;
    local_88 = (long *)0x0;
    uStack_90 = (ulong)puStack_1b0;
  }
  else {
                    /* try { // try from 002a5b58 to 002a5b5f has its CatchHandler @ 002a5ef0 */
    FUN_002a751c(&local_a0,param_2 + 0xc);
    uVar10 = local_1b8;
  }
  FUN_02767254(&local_1c0,uVar10);
  FUN_002a3b60(param_1,uVar4,pvVar3,&local_a0);
  FUN_02767254(&local_a0,local_98);
  if (((ulong)local_80 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_68 + 0x18))(plStack_68,pvStack_70,(ulong)local_80 & 0xfffffffffffffffe,1);
  return;
}


