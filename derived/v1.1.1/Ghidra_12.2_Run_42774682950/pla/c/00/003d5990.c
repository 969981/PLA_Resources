/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d5990; name: FUN_003d5990
 */


void FUN_003d5990(long param_1,long param_2,undefined8 param_3)

{
  void *__src;
  undefined *puVar1;
  char *__s;
  size_t __n;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong local_78;
  ulong local_70;
  undefined4 *local_68;
  
  puVar1 = PTR_LAB_04373088;
  if (param_1 == 0) {
    local_70 = 0;
    local_68 = (undefined4 *)0x0;
    local_78 = 0x296c696e280a;
                    /* try { // try from 003d5be4 to 003d5bef has its CatchHandler @ 003d5c50 */
    FUN_003d57cc(param_3,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_68);
    }
  }
  else if (param_2 != 0) {
    puVar5 = (undefined4 *)((ulong)&local_78 | 1);
    param_1 = param_1 + 0x20;
    do {
      local_70 = 0;
      local_68 = (undefined4 *)0x0;
      *(undefined1 *)(puVar5 + 1) = 0x3d;
      *puVar5 = 0x79656b0a;
      local_78 = 10;
                    /* try { // try from 003d5a1c to 003d5a27 has its CatchHandler @ 003d5c90 */
      FUN_003d57cc(param_3,&local_78);
      if ((local_78 & 1) != 0) {
        FUN_002e2ea0(puVar1,local_68);
      }
      uVar4 = *(ulong *)(param_1 + -0x18) & 0xff;
      if (*(long *)(param_1 + -0x20) != 0) {
        uVar4 = *(ulong *)(param_1 + -0x18);
      }
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      local_70 = 0;
      local_68 = (undefined4 *)0x0;
      __src = (void *)(param_1 + -0x17);
      if (*(long *)(param_1 + -0x20) != 0) {
        __src = *(void **)(param_1 + -0x10);
      }
      local_78 = 0;
      if (__src != (void *)0x0) {
        if (uVar4 < 0x17) {
          local_78 = (ulong)(byte)((int)uVar4 << 1);
          puVar2 = puVar5;
          if (uVar4 != 0) goto LAB_003d5ab0;
        }
        else {
          uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
          puVar2 = (undefined4 *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
          local_78 = uVar3 | 1;
          local_70 = uVar4;
          local_68 = puVar2;
LAB_003d5ab0:
          memcpy(puVar2,__src,uVar4);
        }
        *(undefined1 *)((long)puVar2 + uVar4) = 0;
      }
                    /* try { // try from 003d5ac4 to 003d5acf has its CatchHandler @ 003d5c80 */
      FUN_003d57cc(param_3,&local_78);
      if ((local_78 & 1) != 0) {
        FUN_002e2ea0(puVar1,local_68);
      }
      local_68 = (undefined4 *)0x0;
      local_78 = 0xe;
      *(undefined4 *)((long)puVar5 + 3) = 0x3d65756c;
      *puVar5 = 0x6c617620;
      local_70 = 0;
                    /* try { // try from 003d5afc to 003d5b07 has its CatchHandler @ 003d5c70 */
      FUN_003d57cc(param_3,&local_78);
      if ((local_78 & 1) != 0) {
        FUN_002e2ea0(puVar1,local_68);
      }
      __s = (char *)FUN_00304ac0(param_1,3);
      local_70 = 0;
      local_68 = (undefined4 *)0x0;
      local_78 = 0;
      __n = strlen(__s);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
        puVar2 = puVar5;
        if (__n != 0) goto LAB_003d5b88;
      }
      else {
        uVar4 = __n + 0x10 & 0xfffffffffffffff0;
        puVar2 = (undefined4 *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
        local_78 = uVar4 | 1;
        local_70 = __n;
        local_68 = puVar2;
LAB_003d5b88:
        memcpy(puVar2,__s,__n);
      }
      *(undefined1 *)((long)puVar2 + __n) = 0;
                    /* try { // try from 003d5b9c to 003d5ba7 has its CatchHandler @ 003d5c60 */
      FUN_003d57cc(param_3,&local_78);
      if ((local_78 & 1) != 0) {
        FUN_002e2ea0(puVar1,local_68);
      }
      free(__s);
      param_2 = param_2 + -1;
      param_1 = param_1 + 0x68;
    } while (param_2 != 0);
  }
  return;
}


