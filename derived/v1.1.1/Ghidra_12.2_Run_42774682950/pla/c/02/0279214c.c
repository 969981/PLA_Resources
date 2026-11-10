/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279214c; name: FUN_0279214c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0279214c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  char local_350 [25];
  char local_337;
  undefined1 auStack_336 [24];
  char local_31e;
  undefined1 auStack_31d [24];
  char local_305;
  undefined1 auStack_304 [24];
  char local_2ec;
  undefined1 auStack_2eb [24];
  char local_2d3;
  undefined1 auStack_2d2 [24];
  char local_2ba;
  undefined1 auStack_2b9 [24];
  char local_2a1;
  undefined1 auStack_2a0 [24];
  char local_288;
  undefined1 auStack_287 [24];
  char local_26f;
  undefined1 auStack_26e [24];
  char local_256;
  undefined1 auStack_255 [24];
  char local_23d;
  undefined1 auStack_23c [24];
  char local_224;
  undefined1 auStack_223 [24];
  char local_20b;
  undefined1 auStack_20a [24];
  char local_1f2;
  undefined1 auStack_1f1 [24];
  char local_1d9;
  undefined1 auStack_1d8 [24];
  char local_1c0;
  undefined1 auStack_1bf [24];
  char local_1a7;
  undefined1 auStack_1a6 [24];
  char local_18e;
  undefined1 auStack_18d [24];
  char local_175;
  undefined1 auStack_174 [24];
  char local_15c;
  undefined1 auStack_15b [24];
  char local_143;
  undefined1 auStack_142 [24];
  char local_12a;
  undefined1 auStack_129 [24];
  char local_111;
  undefined1 auStack_110 [24];
  char local_f8;
  undefined1 auStack_f7 [24];
  char local_df;
  undefined1 auStack_de [24];
  char local_c6;
  undefined1 auStack_c5 [24];
  char local_ad;
  undefined1 auStack_ac [24];
  char local_94;
  undefined1 auStack_93 [24];
  char local_7b;
  undefined1 auStack_7a [24];
  char local_62;
  undefined1 auStack_61 [24];
  char local_49;
  undefined1 auStack_48 [24];
  
  puVar7 = (undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *puVar7;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar8 = *(long **)(lVar6 + 0x2a8);
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0110c138(local_350,plVar8);
    if (local_350[0] != '\0') {
      FUN_027920f8(puVar7,(ulong)local_350 | 1);
    }
    if (local_337 != '\0') {
      FUN_027920f8(puVar7,auStack_336);
    }
    if (local_31e != '\0') {
      FUN_027920f8(puVar7,auStack_31d);
    }
    if (local_305 != '\0') {
      FUN_027920f8(puVar7,auStack_304);
    }
    if (local_2ec != '\0') {
      FUN_027920f8(puVar7,auStack_2eb);
    }
    if (local_2d3 != '\0') {
      FUN_027920f8(puVar7,auStack_2d2);
    }
    if (local_2ba != '\0') {
      FUN_027920f8(puVar7,auStack_2b9);
    }
    if (local_2a1 != '\0') {
      FUN_027920f8(puVar7,auStack_2a0);
    }
    if (local_288 != '\0') {
      FUN_027920f8(puVar7,auStack_287);
    }
    if (local_26f != '\0') {
      FUN_027920f8(puVar7,auStack_26e);
    }
    if (local_256 != '\0') {
      FUN_027920f8(puVar7,auStack_255);
    }
    if (local_23d != '\0') {
      FUN_027920f8(puVar7,auStack_23c);
    }
    if (local_224 != '\0') {
      FUN_027920f8(puVar7,auStack_223);
    }
    if (local_20b != '\0') {
      FUN_027920f8(puVar7,auStack_20a);
    }
    if (local_1f2 != '\0') {
      FUN_027920f8(puVar7,auStack_1f1);
    }
    if (local_1d9 != '\0') {
      FUN_027920f8(puVar7,auStack_1d8);
    }
    if (local_1c0 != '\0') {
      FUN_027920f8(puVar7,auStack_1bf);
    }
    if (local_1a7 != '\0') {
      FUN_027920f8(puVar7,auStack_1a6);
    }
    if (local_18e != '\0') {
      FUN_027920f8(puVar7,auStack_18d);
    }
    if (local_175 != '\0') {
      FUN_027920f8(puVar7,auStack_174);
    }
    if (local_15c != '\0') {
      FUN_027920f8(puVar7,auStack_15b);
    }
    if (local_143 != '\0') {
      FUN_027920f8(puVar7,auStack_142);
    }
    if (local_12a != '\0') {
      FUN_027920f8(puVar7,auStack_129);
    }
    if (local_111 != '\0') {
      FUN_027920f8(puVar7,auStack_110);
    }
    if (local_f8 != '\0') {
      FUN_027920f8(puVar7,auStack_f7);
    }
    if (local_df != '\0') {
      FUN_027920f8(puVar7,auStack_de);
    }
    if (local_c6 != '\0') {
      FUN_027920f8(puVar7,auStack_c5);
    }
    if (local_ad != '\0') {
      FUN_027920f8(puVar7,auStack_ac);
    }
    if (local_94 != '\0') {
      FUN_027920f8(puVar7,auStack_93);
    }
    if (local_7b != '\0') {
      FUN_027920f8(puVar7,auStack_7a);
    }
    if (local_62 != '\0') {
      FUN_027920f8(puVar7,auStack_61);
    }
    if (local_49 != '\0') {
      FUN_027920f8(puVar7,auStack_48);
    }
    local_49 = '\0';
    local_62 = '\0';
    local_7b = '\0';
    local_94 = '\0';
    local_ad = '\0';
    local_c6 = '\0';
    local_df = '\0';
    local_f8 = '\0';
    local_111 = '\0';
    local_12a = '\0';
    local_143 = '\0';
    local_15c = '\0';
    local_175 = '\0';
    local_18e = '\0';
    local_1a7 = '\0';
    local_1c0 = '\0';
    local_1d9 = '\0';
    local_1f2 = '\0';
    local_20b = '\0';
    local_224 = '\0';
    local_23d = '\0';
    local_256 = '\0';
    local_26f = '\0';
    local_288 = '\0';
    local_2a1 = '\0';
    local_2ba = '\0';
    local_2d3 = '\0';
    local_2ec = '\0';
    local_305 = '\0';
    local_31e = 0;
    local_337 = 0;
    if (local_350[0] != '\0') {
      local_350[0] = '\0';
    }
    lVar6 = plVar8[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return puVar7;
}


