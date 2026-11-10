/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecd090; name: FUN_02ecd090
 */


void FUN_02ecd090(undefined4 param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_2 + 0x29c) = param_1;
  uVar1 = *(uint *)(param_2 + 0x2a3);
  *(uint *)(param_2 + 0x2a3) =
       uVar1 & 0xfe000000 | uVar1 & 0x3fffff | (param_3 & 1) << 0x18 | 0xc00000;
  if (DAT_0440a480 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(*DAT_0442d138)(5,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    *puVar3 = DAT_0440a480;
    DAT_0440a480 = puVar3;
  }
  if (DAT_0440a478 == (undefined8 *)0x0) {
    DAT_0440a470 = DAT_0440a480;
  }
  else {
    *DAT_0440a478 = DAT_0440a480;
  }
  DAT_0440a478 = DAT_0440a480;
  uVar2 = *DAT_0440a480;
  *DAT_0440a480 = 0;
  DAT_0440a480 = (undefined8 *)uVar2;
  puVar3 = DAT_0440a478;
  DAT_0440a494 = DAT_0440a494 + 1;
  DAT_0440a478[1] = param_2;
  *(undefined4 *)(puVar3 + 2) = DAT_0440a468;
  *(ushort *)((long)puVar3 + 0x14) = *(ushort *)((long)puVar3 + 0x14) & 0xfe00 | 5;
  return;
}


