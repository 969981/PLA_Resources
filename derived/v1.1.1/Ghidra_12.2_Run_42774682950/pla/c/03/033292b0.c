/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033292b0; name: FUN_033292b0
 */


/* WARNING: Removing unreachable block (ram,0x033294ec) */

undefined8 FUN_033292b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (DAT_0444b3c8 == '\0') {
    if (param_1 != 0) {
      FUN_0333d4e0();
    }
    nn::os::GetSystemTickFrequency();
    puVar2 = (undefined8 *)FUN_033272a0();
    if (DAT_0444b3c0 != puVar2) {
      puVar4 = DAT_0444b3c0;
      do {
        puVar5 = puVar4;
        if (puVar5 == (undefined8 *)0x0) {
          puVar2 = DAT_0444b3c0;
          goto LAB_03329310;
        }
        puVar4 = (undefined8 *)puVar5[4];
      } while ((undefined8 *)puVar5[4] != puVar2);
      puVar5[4] = puVar2[4];
      puVar2[4] = DAT_0444b3c0;
      DAT_0444b3c0 = puVar2;
    }
LAB_03329310:
    puVar4 = &DAT_0444b0d8;
    puVar5 = puVar2;
    if (puVar2 != &DAT_0444b108) {
      puVar1 = puVar2;
      do {
        puVar6 = puVar1;
        if (puVar6 == (undefined8 *)0x0) {
          if (puVar2 == &DAT_0444b0d8) {
            puVar2 = &DAT_0444b0d8;
            goto LAB_03329390;
          }
          goto LAB_03329360;
        }
        puVar1 = (undefined8 *)puVar6[4];
      } while ((undefined8 *)puVar6[4] != &DAT_0444b108);
      puVar6[4] = DAT_0444b128;
      DAT_0444b3c0 = &DAT_0444b108;
      puVar5 = &DAT_0444b108;
      DAT_0444b128 = puVar2;
    }
    puVar2 = &DAT_0444b108;
LAB_03329360:
    puVar1 = puVar2;
    do {
      puVar6 = puVar1;
      if (puVar6 == (undefined8 *)0x0) {
        if ((puVar2 != &DAT_0444b2a0) && (puVar4 = puVar2, puVar2 != (undefined8 *)0x0))
        goto LAB_03329390;
        goto LAB_033293b0;
      }
      puVar1 = (undefined8 *)puVar6[4];
    } while ((undefined8 *)puVar6[4] != &DAT_0444b0d8);
    puVar6[4] = DAT_0444b0f8;
    DAT_0444b3c0 = &DAT_0444b0d8;
    puVar1 = &DAT_0444b0d8;
    DAT_0444b0f8 = puVar5;
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined8 *)0x0) goto LAB_033293b0;
LAB_03329390:
      puVar1 = (undefined8 *)puVar2[4];
    } while ((undefined8 *)puVar2[4] != &DAT_0444b2a0);
    puVar2[4] = DAT_0444b2c0;
    DAT_0444b3c0 = &DAT_0444b2a0;
    DAT_0444b2c0 = puVar4;
LAB_033293b0:
    puVar2 = (undefined8 *)FUN_032c8e80();
    if (DAT_0444b3c0 != puVar2) {
      puVar4 = DAT_0444b3c0;
      do {
        puVar5 = puVar4;
        if (puVar5 == (undefined8 *)0x0) goto LAB_033293e8;
        puVar4 = (undefined8 *)puVar5[4];
      } while ((undefined8 *)puVar5[4] != puVar2);
      puVar5[4] = puVar2[4];
      puVar2[4] = DAT_0444b3c0;
      DAT_0444b3c0 = puVar2;
    }
LAB_033293e8:
    puVar2 = (undefined8 *)FUN_032f75c8();
    if (DAT_0444b3c0 != puVar2) {
      puVar4 = DAT_0444b3c0;
      do {
        puVar5 = puVar4;
        if (puVar5 == (undefined8 *)0x0) {
          puVar2 = DAT_0444b3c0;
          goto LAB_03329420;
        }
        puVar4 = (undefined8 *)puVar5[4];
      } while ((undefined8 *)puVar5[4] != puVar2);
      puVar5[4] = puVar2[4];
      puVar2[4] = DAT_0444b3c0;
      DAT_0444b3c0 = puVar2;
    }
LAB_03329420:
    if (puVar2 != &DAT_0444ab18) {
      puVar4 = puVar2;
      do {
        puVar5 = puVar4;
        if (puVar5 == (undefined8 *)0x0) goto LAB_03329458;
        puVar4 = (undefined8 *)puVar5[4];
      } while ((undefined8 *)puVar5[4] != &DAT_0444ab18);
      puVar5[4] = DAT_0444ab38;
      DAT_0444b3c0 = &DAT_0444ab18;
      DAT_0444ab38 = puVar2;
    }
LAB_03329458:
    lVar3 = FUN_03329780();
    if (lVar3 != 0) {
      FUN_033297d0();
    }
    lVar3 = DAT_0444b460;
    if (DAT_0444b448 != (code *)0x0) {
      (*DAT_0444b448)(DAT_0444b458);
      lVar3 = DAT_0444b460;
    }
    for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(code **)(lVar3 + 8) != (code *)0x0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar3 + 0x18));
      }
    }
    DAT_0444b3c8 = '\x01';
  }
  return 0;
}


