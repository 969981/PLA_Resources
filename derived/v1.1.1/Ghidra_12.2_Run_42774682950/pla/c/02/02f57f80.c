/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f57f80; name: FUN_02f57f80
 */


void FUN_02f57f80(int param_1,long param_2)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = param_2 * 8 + (long)param_1 * 0x820;
  uVar6 = (ulong)*(uint *)(&DAT_0442c0e0 + lVar4 + 0x88);
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = (uint)((*(long *)(&DAT_0442c138 + (long)param_1 * 0x820) - 0x60U) / uVar6);
  }
  psVar3 = (short *)(&DAT_0442c0e0 + lVar4 + 0x8c);
  *psVar3 = (short)uVar2;
  *(short *)(&DAT_0442c0e0 + lVar4 + 0x8e) = (short)param_2;
  if (param_2 != 0) {
    lVar7 = (long)param_1;
    lVar4 = param_2 + -1;
    if ((uint)*(ushort *)(&DAT_0442c168 + lVar4 * 8 + lVar7 * 0x820 + 4) == (uVar2 & 0xffff)) {
      puVar5 = (undefined8 *)(&DAT_0442c160 + lVar7 * 0x820 + param_2 * 8);
      do {
        *puVar5 = *(undefined8 *)(&DAT_0442c168 + param_2 * 8 + lVar7 * 0x820);
        if (lVar4 == 0) {
          return;
        }
        lVar4 = lVar4 + -1;
        psVar1 = (short *)((long)puVar5 + -4);
        puVar5 = puVar5 + -1;
      } while (*psVar1 == *psVar3);
    }
  }
  return;
}


