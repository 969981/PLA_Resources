/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a11b58; name: FUN_02a11b58
 */


/* WARNING: Removing unreachable block (ram,0x02a11d54) */
/* WARNING: Removing unreachable block (ram,0x02a11c24) */
/* WARNING: Removing unreachable block (ram,0x02a11b8c) */
/* WARNING: Removing unreachable block (ram,0x02a11cbc) */
/* WARNING: Removing unreachable block (ram,0x02a11dec) */

void FUN_02a11b58(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  if (lVar3 != 0) {
    bVar2 = *(byte *)(lVar3 + 0x2738);
    uVar5 = (ulong)bVar2;
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x2740);
      if (bVar2 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar1 = param_1 + lVar3 * 8;
          lVar3 = lVar3 + 2;
          *(undefined8 *)(lVar1 + 0x4c8) = *puVar4;
          *(char *)(param_1 + 0x5b8) = *(char *)(param_1 + 0x5b8) + '\x01';
          *(undefined8 *)(lVar1 + 0x4d0) = puVar4[1];
          puVar4 = puVar4 + 2;
          *(char *)(param_1 + 0x5b8) = *(char *)(param_1 + 0x5b8) + '\x01';
        } while (uVar5 - (uVar5 & 1) != lVar3);
        if ((bVar2 & 1) == 0) goto LAB_02a11bf0;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x4c8) = *puVar4;
      *(char *)(param_1 + 0x5b8) = *(char *)(param_1 + 0x5b8) + '\x01';
    }
  }
LAB_02a11bf0:
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x5b9) = 0;
  if (lVar3 != 0) {
    bVar2 = *(byte *)(lVar3 + 0x2738);
    uVar5 = (ulong)bVar2;
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x2740);
      if (bVar2 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar1 = param_1 + lVar3 * 8;
          lVar3 = lVar3 + 2;
          *(undefined8 *)(lVar1 + 0x4f8) = *puVar4;
          *(char *)(param_1 + 0x5b9) = *(char *)(param_1 + 0x5b9) + '\x01';
          *(undefined8 *)(lVar1 + 0x500) = puVar4[1];
          puVar4 = puVar4 + 2;
          *(char *)(param_1 + 0x5b9) = *(char *)(param_1 + 0x5b9) + '\x01';
        } while (uVar5 - (uVar5 & 1) != lVar3);
        if ((bVar2 & 1) == 0) goto LAB_02a11c88;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x4f8) = *puVar4;
      *(char *)(param_1 + 0x5b9) = *(char *)(param_1 + 0x5b9) + '\x01';
    }
  }
LAB_02a11c88:
  lVar3 = *(long *)(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0x5ba) = 0;
  if (lVar3 != 0) {
    bVar2 = *(byte *)(lVar3 + 0x2738);
    uVar5 = (ulong)bVar2;
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x2740);
      if (bVar2 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar1 = param_1 + lVar3 * 8;
          lVar3 = lVar3 + 2;
          *(undefined8 *)(lVar1 + 0x528) = *puVar4;
          *(char *)(param_1 + 0x5ba) = *(char *)(param_1 + 0x5ba) + '\x01';
          *(undefined8 *)(lVar1 + 0x530) = puVar4[1];
          puVar4 = puVar4 + 2;
          *(char *)(param_1 + 0x5ba) = *(char *)(param_1 + 0x5ba) + '\x01';
        } while (uVar5 - (uVar5 & 1) != lVar3);
        if ((bVar2 & 1) == 0) goto LAB_02a11d20;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x528) = *puVar4;
      *(char *)(param_1 + 0x5ba) = *(char *)(param_1 + 0x5ba) + '\x01';
    }
  }
LAB_02a11d20:
  lVar3 = *(long *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x5bb) = 0;
  if (lVar3 != 0) {
    bVar2 = *(byte *)(lVar3 + 0x2738);
    uVar5 = (ulong)bVar2;
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x2740);
      if (bVar2 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar1 = param_1 + lVar3 * 8;
          lVar3 = lVar3 + 2;
          *(undefined8 *)(lVar1 + 0x558) = *puVar4;
          *(char *)(param_1 + 0x5bb) = *(char *)(param_1 + 0x5bb) + '\x01';
          *(undefined8 *)(lVar1 + 0x560) = puVar4[1];
          puVar4 = puVar4 + 2;
          *(char *)(param_1 + 0x5bb) = *(char *)(param_1 + 0x5bb) + '\x01';
        } while (uVar5 - (uVar5 & 1) != lVar3);
        if ((bVar2 & 1) == 0) goto LAB_02a11db8;
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x558) = *puVar4;
      *(char *)(param_1 + 0x5bb) = *(char *)(param_1 + 0x5bb) + '\x01';
    }
  }
LAB_02a11db8:
  lVar3 = *(long *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0x5bc) = 0;
  if (lVar3 != 0) {
    bVar2 = *(byte *)(lVar3 + 0x2738);
    uVar5 = (ulong)bVar2;
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x2740);
      if (bVar2 == 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar1 = param_1 + lVar3 * 8;
          lVar3 = lVar3 + 2;
          *(undefined8 *)(lVar1 + 0x588) = *puVar4;
          *(char *)(param_1 + 0x5bc) = *(char *)(param_1 + 0x5bc) + '\x01';
          *(undefined8 *)(lVar1 + 0x590) = puVar4[1];
          puVar4 = puVar4 + 2;
          *(char *)(param_1 + 0x5bc) = *(char *)(param_1 + 0x5bc) + '\x01';
        } while (uVar5 - (uVar5 & 1) != lVar3);
        if ((bVar2 & 1) == 0) {
          return;
        }
      }
      *(undefined8 *)(param_1 + lVar3 * 8 + 0x588) = *puVar4;
      *(char *)(param_1 + 0x5bc) = *(char *)(param_1 + 0x5bc) + '\x01';
    }
  }
  return;
}


