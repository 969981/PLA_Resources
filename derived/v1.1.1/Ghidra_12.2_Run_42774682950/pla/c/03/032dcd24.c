/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dcd24; name: FUN_032dcd24
 */


void FUN_032dcd24(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  short *psVar6;
  long *plVar7;
  uint uVar8;
  undefined1 *puVar9;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = -0x8000000000000000;
  FUN_032dcf40(param_1,&local_30);
  if ((((param_2 & 1) != 0) && (uVar3 = (uint)*param_1, (uVar3 >> 8 & 1) != 0)) &&
     (uVar8 = (uVar3 & 0xff) - (uVar3 >> 1 & 0x55),
     uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
     (undefined1 *)param_1[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] ==
     &LAB_032eac60)) {
    puVar4 = (ulong *)param_1[1];
    if (puVar4 != (ulong *)0x0) {
      while( true ) {
        uVar8 = (uint)*puVar4;
        if ((uVar8 >> 8 & 1) != 0) break;
        if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
        goto LAB_032dce50;
      }
      uVar8 = (uVar8 & 0xff) - (uVar8 >> 1 & 0x55);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      if (puVar4[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0) {
        puVar9 = &LAB_032eb978;
        goto LAB_032dcf28;
      }
    }
LAB_032dce50:
    puVar5 = param_1;
    if ((uVar3 >> 0x17 & 1) == 0) {
      do {
        puVar5 = (undefined8 *)puVar5[1];
        if (puVar5 == (undefined8 *)0x0) goto LAB_032dcf24;
        uVar3 = (uint)*puVar5;
      } while ((uVar3 >> 0x17 & 1) == 0);
    }
    uVar3 = (uVar3 & 0x7fffff) - (uVar3 >> 1 & 0x155555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    psVar6 = (short *)puVar5[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    if ((psVar6 != (short *)0x0) && ((long)*psVar6 != 0)) {
      plVar7 = (long *)(psVar6 + 4);
      puVar9 = &LAB_032eb978;
      do {
        puVar4 = (ulong *)*plVar7;
        while( true ) {
          uVar3 = (uint)*puVar4;
          if ((uVar3 >> 8 & 1) != 0) break;
          if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
          goto LAB_032dcf18;
        }
        if ((puVar4 != (ulong *)0x0) &&
           (uVar3 = (uVar3 & 0xff) - (uVar3 >> 1 & 0x55),
           uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
           puVar4[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0))
        goto LAB_032dcf28;
LAB_032dcf18:
        plVar7 = plVar7 + 1;
      } while (plVar7 != (long *)(psVar6 + (long)*psVar6 * 4 + 4));
    }
LAB_032dcf24:
    puVar9 = (undefined1 *)0x0;
LAB_032dcf28:
    puVar5 = (undefined8 *)FUN_032e1fa4(param_1,0x100);
    *puVar5 = puVar9;
  }
  lVar1 = local_28;
  uVar2 = (ulong)local_28._4_4_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_30 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_30,(uVar2 & 0x3fffffff) << 3);
  }
  return;
}


