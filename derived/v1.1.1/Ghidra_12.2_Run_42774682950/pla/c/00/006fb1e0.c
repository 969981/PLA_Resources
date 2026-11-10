/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fb1e0; name: FUN_006fb1e0
 */


void FUN_006fb1e0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  size_t __n;
  void *__dest;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  long local_100;
  undefined1 auStack_f8 [32];
  ulong local_d8;
  size_t local_d0;
  void *local_c8;
  byte local_c0 [16];
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  byte *local_88;
  undefined8 *local_80 [3];
  char local_68;
  
                    /* try { // try from 006fb204 to 006fb207 has its CatchHandler @ 006fb408 */
  FUN_0071ebb4();
  puVar1 = PTR_LAB_04373088;
  plVar5 = (long *)*param_2;
  if (plVar5 == param_2 + 1) {
    return;
  }
  pbVar7 = (byte *)(plVar5 + 4);
  if ((*pbVar7 & 1) == 0) goto LAB_006fb264;
LAB_006fb26c:
  pbVar7 = (byte *)plVar5[6];
  plVar6 = plVar5;
  do {
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_d8 = 0;
    __n = strlen((char *)pbVar7);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 006fb3fc to 006fb403 has its CatchHandler @ 006fb404 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_d8 = CONCAT71(local_d8._1_7_,(char)((int)__n << 1));
      __dest = (void *)((ulong)&local_d8 | 1);
      if (__n != 0) goto LAB_006fb2d4;
    }
    else {
      uVar8 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
      local_d8 = uVar8 | 1;
      local_d0 = __n;
      local_c8 = __dest;
LAB_006fb2d4:
      memcpy(__dest,pbVar7,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    local_100 = plVar6[8] * 1000000;
    FUN_006ddfa0(auStack_f8,&local_100);
                    /* try { // try from 006fb300 to 006fb30f has its CatchHandler @ 006fb40c */
    FUN_006fb488(local_c0,&local_d8,auStack_f8);
                    /* try { // try from 006fb318 to 006fb337 has its CatchHandler @ 006fb424 */
    local_88 = local_c0;
    FUN_006fc030(local_80,*(undefined8 *)(param_1 + 0x20),&local_88);
    if (local_68 != '\0') {
      uVar2 = FUN_006fc1bc(param_1 + 0x10,local_c0);
      *local_80[0] = uVar2;
      local_80[0][1] = uVar2;
    }
    FUN_0030be58(auStack_a8);
    if ((local_c0[0] & 1) == 0) {
      FUN_0030be58(auStack_f8);
      if ((local_d8 & 1) != 0) goto LAB_006fb388;
LAB_006fb360:
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] != (long *)0x0) goto LAB_006fb39c;
LAB_006fb3ac:
      plVar3 = plVar6 + 2;
      plVar5 = (long *)*plVar3;
      if ((long *)*plVar5 != plVar6) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      FUN_002e2ea0(puVar1,local_b0);
      FUN_0030be58(auStack_f8);
      if ((local_d8 & 1) == 0) goto LAB_006fb360;
LAB_006fb388:
      FUN_002e2ea0(puVar1,local_c8);
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) goto LAB_006fb3ac;
LAB_006fb39c:
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    if (plVar5 == param_2 + 1) {
      return;
    }
    pbVar7 = (byte *)(plVar5 + 4);
    if ((*pbVar7 & 1) != 0) goto LAB_006fb26c;
LAB_006fb264:
    pbVar7 = pbVar7 + 1;
    plVar6 = plVar5;
  } while( true );
}


