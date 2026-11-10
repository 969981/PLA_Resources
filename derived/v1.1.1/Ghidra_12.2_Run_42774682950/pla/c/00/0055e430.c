/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055e430; name: FUN_0055e430
 */


byte * FUN_0055e430(uint param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  bVar1 = *param_2;
  pbVar2 = param_2;
  if ((bVar1 != param_1) || (*(ushort *)(param_2 + 2) != param_3)) {
    if ((2 < bVar1 - 7) || (*(ushort *)(param_2 + 2) != param_3)) {
      pbVar2 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x28);
      if (pbVar2 != (byte *)0x0) {
        *pbVar2 = (byte)param_1;
        pbVar2[1] = 0;
        *(short *)(pbVar2 + 2) = (short)param_3;
        pbVar2[4] = 1;
        pbVar2[5] = 0;
        pbVar2[0x26] = 0;
        pbVar2[0x27] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0x1e] = 0;
        pbVar2[0x1f] = 0;
        pbVar2[0x20] = 0;
        pbVar2[0x21] = 0;
        pbVar2[0x22] = 0;
        pbVar2[0x23] = 0;
        pbVar2[0x24] = 0;
        pbVar2[0x25] = 0;
        pbVar2[0x16] = 0;
        pbVar2[0x17] = 0;
        pbVar2[0x18] = 0;
        pbVar2[0x19] = 0;
        pbVar2[0x1a] = 0;
        pbVar2[0x1b] = 0;
        pbVar2[0x1c] = 0;
        pbVar2[0x1d] = 0;
      }
      *(byte **)(pbVar2 + 8) = param_2;
      pbVar2[6] = 1;
      pbVar2[7] = 0;
      return pbVar2;
    }
    if (bVar1 != 7) {
      pbVar2 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x28);
      if (pbVar2 != (byte *)0x0) {
        *(short *)(pbVar2 + 2) = (short)param_3;
        pbVar2[0] = 7;
        pbVar2[1] = 0;
        pbVar2[4] = 1;
        pbVar2[5] = 0;
        pbVar2[0x26] = 0;
        pbVar2[0x27] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0x1e] = 0;
        pbVar2[0x1f] = 0;
        pbVar2[0x20] = 0;
        pbVar2[0x21] = 0;
        pbVar2[0x22] = 0;
        pbVar2[0x23] = 0;
        pbVar2[0x24] = 0;
        pbVar2[0x25] = 0;
        pbVar2[0x16] = 0;
        pbVar2[0x17] = 0;
        pbVar2[0x18] = 0;
        pbVar2[0x19] = 0;
        pbVar2[0x1a] = 0;
        pbVar2[0x1b] = 0;
        pbVar2[0x1c] = 0;
        pbVar2[0x1d] = 0;
      }
      pbVar2[6] = 1;
      pbVar2[7] = 0;
      pbVar4 = param_2 + 8;
      if (1 < *(ushort *)(param_2 + 6)) {
        pbVar4 = *(byte **)pbVar4;
      }
      uVar3 = FUN_0055dbac(*(undefined8 *)pbVar4);
      pbVar4 = pbVar2 + 8;
      if (1 < *(ushort *)(pbVar2 + 6)) {
        pbVar4 = *(byte **)pbVar4;
      }
      *(undefined8 *)pbVar4 = uVar3;
      FUN_0055de34(param_2);
    }
  }
  return pbVar2;
}


