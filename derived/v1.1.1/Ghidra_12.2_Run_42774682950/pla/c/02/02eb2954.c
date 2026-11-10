/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2954; name: FUN_02eb2954
 */


void FUN_02eb2954(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (DAT_0440a470 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    puVar4 = DAT_0440a470;
    do {
      while( true ) {
        lVar3 = puVar4[1];
        if ((*(long *)(lVar3 + 0x238) == 0) && ((*(byte *)((long)puVar4 + 0x14) & 0xfe) == 0))
        break;
        puVar5 = (undefined8 *)*puVar4;
joined_r0x02eb2a78:
        puVar6 = puVar4;
        puVar4 = puVar5;
        if (puVar5 == (undefined8 *)0x0) {
          DAT_0440a498 = 0;
          return;
        }
      }
      if (((*(byte *)(lVar3 + 0x2a4) >> 4 & 1) != 0) && (*(int *)(lVar3 + 0x2f8) == -1)) {
        puVar5 = (undefined8 *)*puVar4;
        puVar1 = &DAT_0440a470;
        if (DAT_0440a470 != puVar4) {
          puVar1 = puVar6;
        }
        *puVar1 = puVar5;
        if (DAT_0440a478 == puVar4) {
          DAT_0440a478 = puVar6;
        }
        if ((puVar4 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar4)) {
          FUN_02f59e60(5,puVar4);
        }
        else {
          *puVar4 = DAT_0440a480;
          DAT_0440a480 = puVar4;
        }
        DAT_0440a494 = DAT_0440a494 + -1;
        *(undefined8 *)(lVar3 + 0x238) = 0;
        FUN_02f111b8(0,lVar3,4,1);
        puVar4 = puVar6;
        goto joined_r0x02eb2a78;
      }
      iVar2 = FUN_02f14afc(puVar4 + 1);
      puVar5 = (undefined8 *)*puVar4;
      if (iVar2 == 1) goto joined_r0x02eb2a78;
      puVar1 = &DAT_0440a470;
      if (DAT_0440a470 != puVar4) {
        puVar1 = puVar6;
      }
      *puVar1 = puVar5;
      if (DAT_0440a478 == puVar4) {
        DAT_0440a478 = puVar6;
      }
      if ((puVar4 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar4)) {
        FUN_02f59e60(5,puVar4);
      }
      else {
        *puVar4 = DAT_0440a480;
        DAT_0440a480 = puVar4;
      }
      DAT_0440a494 = DAT_0440a494 + -1;
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  DAT_0440a498 = 0;
  return;
}


