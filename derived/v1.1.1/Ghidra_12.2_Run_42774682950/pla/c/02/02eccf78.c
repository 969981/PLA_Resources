/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eccf78; name: FUN_02eccf78
 */


void FUN_02eccf78(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  
  auVar2 = SEXT816((long)((ulong)DAT_042ab258 * (long)param_2)) * SEXT816(0x20c49ba5e353f7cf);
  *(int *)(param_1 + 0x29c) = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
  uVar1 = *(uint *)(param_1 + 0x2a3);
  *(uint *)(param_1 + 0x2a3) =
       uVar1 & 0xfe000000 | uVar1 & 0x3fffff | (param_3 & 1) << 0x18 | 0x400000;
  if (DAT_0440a480 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(*DAT_0442d138)(5,0x18);
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    *puVar4 = DAT_0440a480;
    DAT_0440a480 = puVar4;
  }
  if (DAT_0440a478 == (undefined8 *)0x0) {
    DAT_0440a470 = DAT_0440a480;
  }
  else {
    *DAT_0440a478 = DAT_0440a480;
  }
  DAT_0440a478 = DAT_0440a480;
  uVar3 = *DAT_0440a480;
  *DAT_0440a480 = 0;
  DAT_0440a480 = (undefined8 *)uVar3;
  puVar4 = DAT_0440a478;
  DAT_0440a494 = DAT_0440a494 + 1;
  DAT_0440a478[1] = param_1;
  *(undefined4 *)(puVar4 + 2) = DAT_0440a468;
  *(ushort *)((long)puVar4 + 0x14) = *(ushort *)((long)puVar4 + 0x14) & 0xfe00 | 5;
  return;
}


