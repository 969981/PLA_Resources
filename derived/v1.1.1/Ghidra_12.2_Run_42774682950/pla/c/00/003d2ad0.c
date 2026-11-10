/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d2ad0; name: FUN_003d2ad0
 */


void FUN_003d2ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong local_88;
  size_t local_80;
  undefined4 *local_78;
  long local_70;
  undefined *puStack_68;
  
  puVar2 = PTR_LAB_04373088;
  puVar1 = PTR_FUN_04373078;
  puVar6 = *(ulong **)(param_1 + 0x10);
  if (puVar6 != (ulong *)0x0) {
    puVar9 = (undefined4 *)((ulong)&local_88 | 1);
LAB_003d2b60:
    uVar7 = *puVar6;
    local_80 = 0;
    local_78 = (undefined4 *)0x0;
    local_88 = 0x3d79656b08;
                    /* try { // try from 003d2b80 to 003d2b8b has its CatchHandler @ 003d2e24 */
    FUN_003d2904(param_2,&local_88);
    if ((local_88 & 1) != 0) {
      FUN_002e2ea0(puVar2,local_78);
    }
    pcVar3 = (char *)FUN_00304ac0(uVar7 & 0xfffffffffffffffc,3);
    local_80 = 0;
    local_78 = (undefined4 *)0x0;
    local_88 = 0;
    sVar4 = strlen(pcVar3);
    if (0xffffffffffffffef < sVar4) goto LAB_003d2dcc;
    if (sVar4 < 0x17) {
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar4 << 1));
      puVar5 = puVar9;
      if (sVar4 != 0) goto LAB_003d2c10;
    }
    else {
      uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined4 *)FUN_002e2e80(puVar1,uVar8);
      local_88 = uVar8 | 1;
      local_80 = sVar4;
      local_78 = puVar5;
LAB_003d2c10:
      memcpy(puVar5,pcVar3,sVar4);
    }
    *(undefined1 *)((long)puVar5 + sVar4) = 0;
                    /* try { // try from 003d2c24 to 003d2c2f has its CatchHandler @ 003d2e14 */
    FUN_003d2904(param_2,&local_88);
    if ((local_88 & 1) != 0) {
      FUN_002e2ea0(puVar2,local_78);
    }
    free(pcVar3);
    local_88 = 0xe;
    local_78 = (undefined4 *)0x0;
    *(undefined4 *)((long)puVar9 + 3) = 0x3d65756c;
    *puVar9 = 0x6c617620;
    local_80 = 0;
                    /* try { // try from 003d2c74 to 003d2c7f has its CatchHandler @ 003d2e04 */
    FUN_003d2904(param_2,&local_88);
    if ((local_88 & 1) != 0) {
      FUN_002e2ea0(puVar2,local_78);
    }
    pcVar3 = (char *)FUN_00304ac0((uVar7 & 0xfffffffffffffffc) + 0x20,3);
    local_80 = 0;
    local_78 = (undefined4 *)0x0;
    local_88 = 0;
    sVar4 = strlen(pcVar3);
    if (0xffffffffffffffef < sVar4) {
LAB_003d2dcc:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar4 < 0x17) {
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar4 << 1));
      puVar5 = puVar9;
      if (sVar4 != 0) goto LAB_003d2cfc;
    }
    else {
      uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined4 *)FUN_002e2e80(puVar1,uVar7);
      local_88 = uVar7 | 1;
      local_80 = sVar4;
      local_78 = puVar5;
LAB_003d2cfc:
      memcpy(puVar5,pcVar3,sVar4);
    }
    *(undefined1 *)((long)puVar5 + sVar4) = 0;
                    /* try { // try from 003d2d10 to 003d2d1b has its CatchHandler @ 003d2df4 */
    FUN_003d2904(param_2,&local_88);
    if ((local_88 & 1) != 0) {
      FUN_002e2ea0(puVar2,local_78);
    }
    free(pcVar3);
    puVar6 = (ulong *)puVar6[1];
    if (puVar6 != (ulong *)0x0) {
      if (puVar6 != *(ulong **)(param_1 + 0x10)) {
        local_80 = 0;
        local_78 = (undefined4 *)0x0;
        local_88 = 0x202c04;
                    /* try { // try from 003d2b40 to 003d2b4b has its CatchHandler @ 003d2de4 */
        FUN_003d2904(param_2,&local_88);
        if ((local_88 & 1) != 0) {
          FUN_002e2ea0(puVar2,local_78);
        }
      }
      goto LAB_003d2b60;
    }
  }
  local_70 = *(long *)(param_1 + 0xe0);
  if (local_70 != 0x7fffffffffffffff) {
    puStack_68 = PTR_FUN_04373818;
    FUN_002e6390(&local_88," deadline=%ld",0xd,&local_70,1);
                    /* try { // try from 003d2d88 to 003d2d93 has its CatchHandler @ 003d2dd4 */
    FUN_003d2904(param_2,&local_88);
    if ((local_88 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_78);
    }
  }
  return;
}


